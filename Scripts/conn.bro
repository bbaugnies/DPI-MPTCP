module MP_Connection;

export {

	redef enum Log::ID += { LOG };

        redef enum Notice::Type += { Duplicate_add_addr, };
	
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



	global conn_id: count;		## used to uniquely identify mptcp connections seen
	global host_id: count;		## used to uniquely identify the participants of mptcp connections

	global hosts: table[count] of MP_host;          ##get host based on ID
	global addresses: table[MP_addr] of count;      ##get host ID based on addr
        global connections: table[count] of MP_conn;    ##get connection based on ID
        global subflows: table[connID] of count;        ##get connection ID based on connection 4-tuple
		
}

event bro_init() {
	conn_id = 0;
	host_id = 0;
	Log::create_stream(LOG, [$columns=Info]);
	
}


event mp_capable(c: connection, len: count, version: count, flags: count, sender_key: count, receiver_key: count, is_orig: bool) {
	
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
                        $msg=fmt("ADDR_ID %d already used for %s", addr_id, hosts[id]$addresses[addr_id]$address),
                        $conn = c]);
            }
            ## advertising same address with same port on used ID
            else if (a==hosts[id]$addresses[addr_id]$address && p_tmp==hosts[id]$addresses[addr_id]$portn) {
                NOTICE([$note=Duplicate_add_addr,
                        $msg=fmt("ADDR_ID %d already used for this addr/portn combination", addr_id),
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

## TODO: have to empty address table.
event connection_state_remove(c: connection) {
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
        print(n$msg);
    }
}