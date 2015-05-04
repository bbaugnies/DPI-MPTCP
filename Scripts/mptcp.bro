

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

event mp_dss(c: connection, len: count, flags: count, data_ack: count, dsn: count, ssn: count, dll: count, checksum: count, is_orig: bool)
	{
		print fmt("-------mp_DSS-------------");
		print fmt("len: %d", len);
		print fmt("flags: %d", flags);
		print fmt("ack: %d", data_ack);
		print fmt("dsn: %d", dsn);
		print fmt("ssn: %d", ssn);
		print fmt("dll: %d", dll);
		print fmt("check: %d", checksum);
		print fmt("--------------------");		
		
	}

event mp_add_addr(c: connection, len: count, ipver: count, addr_id: count, address: addr, portn: port, is_orig: bool)
	{
		print fmt("-------mp_add_addr-------------");
		print fmt("len: %d", len);
		print fmt("ipver: %d", ipver);
		print fmt("addr_ID: %d", addr_id);
		print(address);
		print(portn);
		print fmt("--------------------");	
	}


event mp_remove_addr(c: connection, len: count, resvd: count, addr_id: count, is_orig: bool)
	{
		print fmt("-------mp_remove_addr-------------");
		print fmt("len: %d", len);
		print fmt("reserved: %d", resvd);
		print fmt("addr_ID: %d", addr_id);
		print fmt("--------------------");	
	}


event mp_prio(c: connection, len: count, flags: count, addr_id: count, is_orig: bool)
	{
		print fmt("-------mp_prio-------------");
		print fmt("len: %d", len);
		print fmt("flags: %d", flags);
		print fmt("addr_ID: %d", addr_id);
		print fmt("--------------------");	
	}


event mp_fastclose(c: connection, len: count, resvd: count, receiver_key: count, is_orig: bool)
	{
		print fmt("-------mp_fastclose-------------");
		print fmt("len: %d", len);
		print fmt("reserved: %d", resvd);
		print fmt("rec_key: %d", receiver_key);
		print fmt("--------------------");	
	}


event mp_fail(c: connection, len: count, resvd: count, dsn: count, is_orig: bool)
	{
		print fmt("-------mp_fail-------------");
		print fmt("len: %d", len);
		print fmt("reserved: %d", resvd);
		print fmt("dsn: %d", dsn);
		print fmt("--------------------");	
	}


event mp_error(c: connection, len: count, subtype: count, is_orig: bool)
	{
		print fmt("-------mp_fail-------------");
		print fmt("len: %d", len);
		print fmt("subtype: %d", subtype);
		print fmt("--------------------");	
	}

