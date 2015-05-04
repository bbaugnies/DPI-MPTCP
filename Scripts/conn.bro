module Connection;

export {

	redef enum Log::ID += { LOG };
	
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
		key: count;
		connection: count;
		naddresses: count;
		
	};

	global conn_id: count;		## used to uniquely identify mptcp connections seen
	global host_id: count;		## used to uniquely identify the participants of mptcp connections
	global hosts: table[count] of MP_host;
	global addresses: table[MP_addr] of count;
		
}

event bro_init() {
	conn_id = 0;
	host_id = 0;
	Log::create_stream(LOG, [$columns=Info]);
	
}


event mp_capable(c: connection, len: count, version: count, flags: count, sender_key: count, receiver_key: count, is_orig: bool) {
	if (len == 20){
		print(c$id);
		hosts[host_id]=[$key=sender_key, $connection=conn_id, $naddresses=1];
		addresses[[$address=c$id$orig_h, $portn=c$id$orig_p]] = host_id;

		hosts[host_id+1]=[$key=receiver_key, $connection=conn_id, $naddresses=1];
		addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]] = host_id+1;

		Log::write(Connection::LOG, [$orig_h=c$id$orig_h,
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

	## the address belongs to the initiator of the connection
	if(is_orig){
		id = addresses[[$address=c$id$orig_h, $portn=c$id$orig_p]];
		if (p==0/unknown){
			addresses[[$address=a, $portn=c$id$orig_p]]=id;
		}
		else
			addresses[[$address=a, $portn=p]]=id;
	}
	## it belongs to the responder
	else {
		id = addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]];
		if (p==0/unknown){
			addresses[[$address=a, $portn=c$id$resp_p]]=id;
		}
		else
			addresses[[$address=a, $portn=p]]=id;
	}

	
	hosts[id]$naddresses += 1;
	print(a);
	
}


event mp_join(c: connection, len: count, flags: count, addr_id:count, rand: count, token: count, hmac: string, is_orig: bool) {
	if(len==24){
		local id: count;
		id = addresses[[$address=c$id$resp_h, $portn=c$id$resp_p]];
		print(c$id);
		
		Log::write(Connection::LOG, [$orig_h=c$id$orig_h,
										$orig_p=c$id$orig_p,
										$resp_h=c$id$resp_h,
										$resp_p=c$id$resp_p,
										$isOrig=F,
										$MP_ID=hosts[id]$connection]);
	}
}


