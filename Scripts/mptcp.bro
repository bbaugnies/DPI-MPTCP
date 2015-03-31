global i: bool = T;

event mptcp(c:connection, len: count, subtype: count, version: count, flags: count, sender_key: count, receiver_key: count, token: count, rand: count, hmac1: count, hmac2: count, hmac3: count, is_orig: bool)
    {
		print fmt("--------------------");
		print fmt("len: %d", len);
		print fmt("subtype: %d", subtype);
		print fmt("version: %d", version);
		print fmt("flags: %d", flags);
		print fmt("sender_key: %d", sender_key);
		print fmt("receiver_key: %d", receiver_key);
		print fmt("token: %d", token);
		print fmt("rand: %d", rand);
		print fmt("h1: %d", hmac1);
		print fmt("h2: %d", hmac2);
		print fmt("h3: %d", hmac3);
		if(is_orig){
			print fmt("orig");
		}
		print fmt("--------------------");
	}
    

## print fmt(": %d", );
