// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/file_analysis/analyzer/unified2/events.bif (plugin mode).


#include <list>
#include <string>
#include "events.bif.h"

namespace plugin { namespace  Bro_Unified2 {

std::list<std::pair<const char*, int> > __bif_events_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	::unified2_event = internal_handler("unified2_event");
	bifs.push_back(std::make_pair("unified2_event", 2));
	::unified2_packet = internal_handler("unified2_packet");
	bifs.push_back(std::make_pair("unified2_packet", 2));

	return bifs;
	}
} }

