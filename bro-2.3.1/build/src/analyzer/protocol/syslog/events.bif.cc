// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/syslog/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr syslog_message; 
void BifEvent::generate_syslog_message(analyzer::Analyzer* analyzer, Connection* c, bro_uint_t facility, bro_uint_t severity, StringVal* msg)
	{
	// Note that it is intentional that here we do not
	// check if ::syslog_message is NULL, which should happen *before*
	// BifEvent::generate_syslog_message is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(c->BuildConnVal());
	vl->append(new Val(facility, TYPE_COUNT));
	vl->append(new Val(severity, TYPE_COUNT));
	vl->append(msg);

	mgr.QueueEvent(::syslog_message, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr, c);
	} // event generation
