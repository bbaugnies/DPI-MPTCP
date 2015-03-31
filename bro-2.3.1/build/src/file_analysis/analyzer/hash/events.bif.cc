// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/file_analysis/analyzer/hash/events.bif (plugin mode).


#include "events.bif.h"

EventHandlerPtr file_hash; 
void BifEvent::generate_file_hash(analyzer::Analyzer* analyzer, Val* f, StringVal* kind, StringVal* hash)
	{
	// Note that it is intentional that here we do not
	// check if ::file_hash is NULL, which should happen *before*
	// BifEvent::generate_file_hash is called to avoid unnecessary Val
	// allocation.

	val_list* vl = new val_list;

	vl->append(f);
	vl->append(kind);
	vl->append(hash);

	mgr.QueueEvent(::file_hash, vl, SOURCE_LOCAL, analyzer->GetID(), timer_mgr);
	} // event generation
