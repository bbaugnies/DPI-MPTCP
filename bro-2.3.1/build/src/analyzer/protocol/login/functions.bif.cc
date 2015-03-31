// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/login/functions.bif (plugin mode).


#include "functions.bif.h"


#line 2 "functions.bif"

#include "Login.h"

#line 25 "functions.bif"
Val* BifFunc::bro_get_login_state(Frame* frame, val_list* BiF_ARGS)
	
#line 26 "functions.bif"
{
	if ( BiF_ARGS->length() != 1 )
		{
		reporter->Error("get_login_state() takes exactly 1 argument(s)");
		return 0;
		}
	Val* cid = (Val*) ((*BiF_ARGS)[0]);

#line 26 "functions.bif"

	Connection* c = sessions->FindConnection(cid);
	if ( ! c )
		return new Val(0, TYPE_BOOL);

	analyzer::Analyzer* la = c->FindAnalyzer("Login");
	if ( ! la )
		return new Val(0, TYPE_BOOL);

	return new Val(int(static_cast<analyzer::login::Login_Analyzer*>(la)->LoginState()),
			TYPE_COUNT);
	} // end of BifFunc::bro_get_login_state

#line 37 "functions.bif"

#line 50 "functions.bif"
Val* BifFunc::bro_set_login_state(Frame* frame, val_list* BiF_ARGS)
	
#line 51 "functions.bif"
{
	if ( BiF_ARGS->length() != 2 )
		{
		reporter->Error("set_login_state() takes exactly 2 argument(s)");
		return 0;
		}
	Val* cid = (Val*) ((*BiF_ARGS)[0]);
	bro_uint_t new_state = (bro_uint_t) ((*BiF_ARGS)[1]->AsCount());

#line 51 "functions.bif"

	Connection* c = sessions->FindConnection(cid);
	if ( ! c )
		return new Val(0, TYPE_BOOL);

	analyzer::Analyzer* la = c->FindAnalyzer("Login");
	if ( ! la )
		return new Val(0, TYPE_BOOL);

	static_cast<analyzer::login::Login_Analyzer*>(la)->SetLoginState(analyzer::login::login_state(new_state));
	return new Val(1, TYPE_BOOL);
	} // end of BifFunc::bro_set_login_state

#line 62 "functions.bif"
