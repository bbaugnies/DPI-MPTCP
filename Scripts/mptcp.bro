

## print fmt(": %d", );

event mptcp(c: connection, len: count, subtype:count, is_orig: bool){
		print fmt("---------mptcp-----------");
		print fmt("len: %d", len);
		print fmt("subtype: %d", subtype);
		print fmt("--------------------");
	}

event mp_capable(c: connection, len: count, version: count, flags: count, sender_key: count, receiver_key: count, is_orig: bool)
	{
		print fmt("--------mp_cap------------");
		print fmt("len: %d", len);
		print fmt("version: %d", version);
		print fmt("flags: %d", flags);
		print fmt("sender_key: %d", sender_key);
		print fmt("receiver_key: %d", receiver_key);
		print fmt("--------------------");
		
	}

event mp_join(c: connection, len: count, flags: count, addr_id:count, rand: count, token: count, hmac: string, is_orig: bool)
	{
		print fmt("-------mp_join-------------");
		print(c);
		print fmt("len: %d", len);
		print fmt("ID: %d", addr_id);
		print fmt("flags: %d", flags);
		print fmt("rand: %d", rand);
		print fmt("token: %d", token);
		print(hmac);
		print fmt("--------------------");		
	}

event connection_SYN_packet(c: connection, pkt: SYN_packet)
	{
		print fmt("-------syn-------------");
		print(c);
		print(pkt);
		print fmt("--------------------");	
		
	}
