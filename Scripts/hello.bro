global i: bool = T;

event tcp_option(c:connection, is_orig:bool, opt:count, optlen:count)
    {
		print fmt("opt: %d", opt);
		print fmt("optlen: %d", optlen);
		print fmt("--------------------");
	}
    
