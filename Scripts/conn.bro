module MP_Connection;

export {

	redef enum Log::ID += { LOG };

        redef enum Notice::Type += {    Duplicate_add_addr,
                                        MP_key_change,
                                        MP_rejected,
                                        MP_unknown_join,
                                        MP_join_flood };
	
	type Info: record {
		orig_h:			addr &log;
		orig_p:			port &log;
		resp_h:			addr &log;
		resp_p:			port &log;
		isOrig:			bool &log;
		MP_ID:			count &log;		
	};

	type MP_addr: record{
		address: addr;
		portn: port;
	};

	type MP_host: record {
		connection: count;
		naddresses: count;
                other_host: count;
                addresses: table[count] of MP_addr;
		
	};

        type connID: record {
            orig_h: addr;
            orig_p: port;
            resp_h: addr;
            resp_p: port;
        };

        type MP_conn: record {
            nflows: count;
            host1: count;
            host2: count;
            ##flows: set[connID];
        };

        type Pending_conn: record {
            orig_seen: bool;
            resp_seen: bool;
            orig_key: count;
            resp_key: count;
        };



	global conn_id: count;		## used to uniquely identify mptcp connections seen
	global host_id: count;		## used to uniquely identify the participants of mptcp connections

	global hosts: table[count] of MP_host;          ##get host based on ID
	global addresses: table[MP_addr] of count;      ##get host ID based on addr
        global connections: table[count] of MP_conn;    ##get connection based on ID
        global subflows: table[connID] of count;        ##get connection ID based on connection 4-tuple
        global pending: table[connID] of Pending_conn;  ##memorize keys of SYN and SYN+ACK to check in final ACK
        global partial: set[connID];                    ##connections where we received only MP SYN

        global join_threshold: count = 1000;
        global join_reset: interval = 10sec;
        global victims: table[addr] of count;
		
}

event bro_init() {
	conn_id = 0;
	host_id = 0;
	Log::create_stream(LOG, [$columns=Info]);
        
        schedule join_reset { join_timeout() };
	
}

event join_timeout() {
    victims=table();
    schedule join_reset {join_timeout() };

}


event mp_capable(c: connection, len: count, version: count, flags: count, sender_key: count, receiver_key: count, is_orig: bool) {
        if (len == 12 && is_orig) {
            pending[c$id] = [$orig_seen = T, $resp_seen = F, $orig_key=sender_key, $resp_key=0];
            add partial[c$id];
        }

        if (len == 20) {
            if (c$id in pending) {
                ## originator's key was changed
                if (pending[c$id]$orig_seen && pending[c$id]$orig_key != sender_key) {
                    NOTICE([$note=MP_key_change,
                            $msg = fmt("Initiator %s changed his key from %s to %s", c$id$orig_h, pending[c$id]$orig_key, sender_key),
                            $conn = c]);
                }
                ## responder's key was changed
                if (pending[c$id]$resp_seen && pending[c$id]$resp_key != receiver_key) {
                    NOTICE([$note=MP_key_change,
                            $msg = fmt("Initiator %s changed responder %s 's key from %s to %s", c$id$orig_h, c$id$resp_h, pending[c$id]$resp_key, receiver_key),
                            $conn = c]);
                }

                delete(pending[c$id]);
            }
        }

        if (len == 12 && !is_orig){
		hosts[host_id]=[$connection=conn_id, $naddresses=1, $other_host=host_id+1, $addresses=table([0]=[$address=c$id$orig_h, $portn=c$id$orig_p])];
		addresses[[$address=c$id$orig_h, $portn=c$id$orig_p]] = host_id;

		hosts[host_id+1]=[$connection=conn_id, $naddresses=1, $other_host=host_id, $addresses=table([0]=[$address=c$id$resp_h, $portn=c$id$resp_p])];
		addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]] = host_id+1;

                connections[conn_id]=[$nflows=1, $host1=host_id, $host2=host_id+1];##, $flows=set(c$id)];
                subflows[c$id] = conn_id;

		Log::write(MP_Connection::LOG, [$orig_h=c$id$orig_h,
										$orig_p=c$id$orig_p,
										$resp_h=c$id$resp_h,
										$resp_p=c$id$resp_p,
										$isOrig=T,
										$MP_ID=conn_id]);


		host_id += 2;
		conn_id += 1;	

                delete partial[c$id];

                if (c$id in pending) {
                    pending[c$id]$resp_seen = T;
                    pending[c$id]$resp_key = sender_key;
                }
                else {
                    pending[c$id] = [$orig_seen = F, $resp_seen = T, $orig_key=0, $resp_key=sender_key];
                }
	}
}


event mp_add_addr(c: connection, len: count, ipver: count, addr_id: count, a: addr, p: port, is_orig: bool) {

	local id: count;
	local p_tmp: port;

	## the address belongs to the initiator of the connection
	if(is_orig){
		id = addresses[[$address=c$id$orig_h, $portn=c$id$orig_p]];
		if (p==0/unknown){
			p_tmp = c$id$orig_p;
		}
		else
			p_tmp= p;
	}
	## it belongs to the responder
	else {
		id = addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]];
		if (p==0/unknown){
			p_tmp = c$id$resp_p;
		}
		else
			p_tmp= p;
	}

        if (addr_id in hosts[id]$addresses){
            ##advertising new address with used ID
            if (a!= hosts[id]$addresses[addr_id]$address){
                NOTICE([$note=Duplicate_add_addr,
                        $msg=fmt("ADDR_ID %d already used for %s (bad)", addr_id, hosts[id]$addresses[addr_id]$address),
                        $conn = c]);
            }
            ## advertising same address with same port on used ID
            else if (a==hosts[id]$addresses[addr_id]$address && p_tmp==hosts[id]$addresses[addr_id]$portn) {
                NOTICE([$note=Duplicate_add_addr,
                        $msg=fmt("ADDR_ID %d already used for this addr/portn combination (ok but ignored)", addr_id),
                        $conn = c]);
            }
        }
        else {
            addresses[[$address=a, $portn=p_tmp]]=id;	
            hosts[id]$naddresses += 1;
            hosts[id]$addresses[addr_id]=[$address=a, $portn=p_tmp];
        }
	
}


event mp_join(c: connection, len: count, flags: count, addr_id:count, rand: count, token: count, hmac: string, is_orig: bool) {
   

    if(len==16){
            if ([$address=c$id$resp_h, $portn=c$id$resp_p] !in addresses) {
                NOTICE([$note=MP_unknown_join,
                        $msg= fmt("MP_Join to unknown address %s. (might have missed advertisement)", c$id$resp_h),
                        $conn = c
                        ]);

            }
            else {
		local id: count;
		id = addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]];
		if([$address=c$id$orig_h, $portn=c$id$orig_p] !in addresses){
                    local id2: count = hosts[id]$other_host;
                    addresses[[$address=c$id$orig_h, $portn=c$id$orig_p]]=id2;
                    hosts[id2]$naddresses += 1;
		}
                local conn: count = hosts[id]$connection;
                connections[conn]$nflows += 1;
                subflows[c$id]=conn;
		
		Log::write(MP_Connection::LOG, [$orig_h=c$id$orig_h,
										$orig_p=c$id$orig_p,
										$resp_h=c$id$resp_h,
										$resp_p=c$id$resp_p,
										$isOrig=F,
										$MP_ID=hosts[id]$connection]);
            }
	}
    
    #should only if token is known
    if (len == 12) {
        if (c$id$resp_h !in victims) {
            victims[c$id$resp_h] = 1;
        }
        else {
            victims[c$id$resp_h] += 1;
            if(victims[c$id$resp_h] > join_threshold) {
                NOTICE([$note=MP_join_flood,
                        $msg=fmt("possible join flood to %s", c$id$resp_h),
                        $conn = c,
                        $suppress_for = join_reset,
                        $identifier = cat(c$id$resp_h)
                        ]);
            }
        }
    }
        
}


#event connection_first_ACK(c: connection) {
#    print("from first ack");
#    if (c$id in partial) {
#        NOTICE([$note=MP_rejected,
#                $msg= fmt("MPTCP usage rejected on connection from %s to %s (or missed SYN+ACK)", c$id$orig_h, c$id$resp_h),
#                $conn = c]);
#        delete partial[c$id];
#    }
#}

event connection_state_remove(c: connection) {
    #if (c$id in partial) {
    #    NOTICE([$note=MP_rejected,
    #            $msg= fmt("MPTCP usage rejected on connection from %s to %s (or missed SYN+ACK)", c$id$orig_h, c$id$resp_h),
    #            $conn = c]);
    #    delete partial[c$id];
    #}
    if (c$id in subflows) {
        local id: count = subflows[c$id];
        delete subflows[c$id];
        connections[id]$nflows -= 1;
        if (connections[id]$nflows < 1) {
            delete hosts[connections[id]$host1];
            delete hosts[connections[id]$host2];
            delete connections[id];
        }
        
    }
}


hook Notice::policy(n: Notice::Info) {
    if (n$note == MP_Connection::Duplicate_add_addr) {
        add n$actions[Notice::ACTION_NONE];
        print("dup");
        print(n$msg);
    }
    if (n$note == MP_Connection::MP_key_change) {
        add n$actions[Notice::ACTION_NONE];
        print("key");
        print(n$msg);
    }
    if (n$note == MP_Connection::MP_join_flood) {
        add n$actions[Notice::ACTION_NONE];
        print("bru");
        print(n$msg);
    }
    if (n$note == MP_Connection::MP_unknown_join) {
        add n$actions[Notice::ACTION_NONE];
        print("unk");
        print(n$msg);
    }
    if (n$note == MP_Connection::MP_rejected) {
        add n$actions[Notice::ACTION_NONE];
        print("rej");
        print(n$msg);
    }
    
}
