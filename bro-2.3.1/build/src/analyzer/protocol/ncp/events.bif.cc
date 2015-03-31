// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/ncp/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr ncp_request; 
void BifEvent::generate_ncp_request(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t frame_type, bro_uint_t length, bro_uint_t func)
	{
	// Note that it is intentional that here we do not
	// check if ::ncp_request is NULL, which should happen *before*
	// BifEvent::generate_ncp_request is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(frame_type, TYPE_COUNT));
	vl->append(new Val(length, TYPE_COUNT));
	vl->append(new Val(func, TYPE_COUNT));

	mgr.QueueEvent(::ncp_request, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
EventHandlerPtr ncp_reply; 
void BifEvent::generate_ncp_reply(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t frame_type, bro_uint_t length, bro_uint_t req_frame, bro_uint_t req_func, bro_uint_t completion_code)
	{
	// Note that it is intentional that here we do not
	// check if ::ncp_reply is NULL, which should happen *before*
	// BifEvent::generate_ncp_reply is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(frame_type, TYPE_COUNT));
	vl->append(new Val(length, TYPE_COUNT));
	vl->append(new Val(req_frame, TYPE_COUNT));
	vl->append(new Val(req_func, TYPE_COUNT));
	vl->append(new Val(completion_code, TYPE_COUNT));

	mgr.QueueEvent(::ncp_reply, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
