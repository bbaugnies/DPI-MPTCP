

## print fmt(": %d", );

event mp_capable(c: connection, len: count, version: count, flags: count, sender_key: count, receiver_key: count, is_orig: bool)
	{
		print fmt("--------------------");
		print fmt("len: %d", len);
		print fmt("version: %d", version);
		print fmt("flags: %d", flags);
		print fmt("sender_key: %d", sender_key);
		print fmt("receiver_key: %d", receiver_key);
		print fmt("--------------------");
		
	}
