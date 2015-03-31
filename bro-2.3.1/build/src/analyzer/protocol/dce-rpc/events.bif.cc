// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/dce-rpc/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr dce_rpc_message; 
void BifEvent::generate_dce_rpc_message(analyzer::Analyzer* analyzer, Connection* c, int is_orig, Val* ptype, StringVal* msg)
	{
	// Note that it is intentional that here we do not
	// check if ::dce_rpc_message is NULL, which should happen *before*
	// BifEvent::generate_dce_rpc_message is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(is_orig, TYPE_BOOL));
	vl->append(ptype);
	vl->append(msg);

	mgr.QueueEvent(::dce_rpc_message, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
EventHandlerPtr dce_rpc_bind; 
void BifEvent::generate_dce_rpc_bind(analyzer::Analyzer* analyzer, Connection* c, StringVal* uuid)
	{
	// Note that it is intentional that here we do not
	// check if ::dce_rpc_bind is NULL, which should happen *before*
	// BifEvent::generate_dce_rpc_bind is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(uuid);

	mgr.QueueEvent(::dce_rpc_bind, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
EventHandlerPtr dce_rpc_request; 
void BifEvent::generate_dce_rpc_request(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t opnum, StringVal* stub)
	{
	// Note that it is intentional that here we do not
	// check if ::dce_rpc_request is NULL, which should happen *before*
	// BifEvent::generate_dce_rpc_request is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(opnum, TYPE_COUNT));
	vl->append(stub);

	mgr.QueueEvent(::dce_rpc_request, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
EventHandlerPtr dce_rpc_response; 
void BifEvent::generate_dce_rpc_response(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t opnum, StringVal* stub)
	{
	// Note that it is intentional that here we do not
	// check if ::dce_rpc_response is NULL, which should happen *before*
	// BifEvent::generate_dce_rpc_response is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(opnum, TYPE_COUNT));
	vl->append(stub);

	mgr.QueueEvent(::dce_rpc_response, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
EventHandlerPtr epm_map_response; 
void BifEvent::generate_epm_map_response(analyzer::Analyzer* analyzer, Connection* c, StringVal* uuid, PortVal* p, AddrVal* h)
	{
	// Note that it is intentional that here we do not
	// check if ::epm_map_response is NULL, which should happen *before*
	// BifEvent::generate_epm_map_response is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(uuid);
	vl->append(p);
	vl->append(h);

	mgr.QueueEvent(::epm_map_response, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
