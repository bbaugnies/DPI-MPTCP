// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/netflow/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr netflow_v5_header; 
void BifEvent::generate_netflow_v5_header(analyzer::Analyzer* analyzer, Val* h)
	{
	// Note that it is intentional that here we do not
	// check if ::netflow_v5_header is NULL, which should happen *before*
	// BifEvent::generate_netflow_v5_header is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(h);

	mgr.QueueEvent(::netflow_v5_header, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
EventHandlerPtr netflow_v5_record; 
void BifEvent::generate_netflow_v5_record(analyzer::Analyzer* analyzer, Val* r)
	{
	// Note that it is intentional that here we do not
	// check if ::netflow_v5_record is NULL, which should happen *before*
	// BifEvent::generate_netflow_v5_record is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(r);

	mgr.QueueEvent(::netflow_v5_record, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
