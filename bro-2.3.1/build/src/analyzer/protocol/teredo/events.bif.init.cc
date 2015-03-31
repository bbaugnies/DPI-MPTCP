// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/teredo/events.bif (plugin mode).


#include <list>
#include <string>
#include "events.bif.h"

namespace plugin { namespace  Bro_Teredo {

std::list<std::pair<const char*, int> > __bif_events_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	::teredo_packet = internal_handler("teredo_packet");
	bifs.push_back(std::make_pair("teredo_packet", 2));
	::teredo_authentication = internal_handler("teredo_authentication");
	bifs.push_back(std::make_pair("teredo_authentication", 2));
	::teredo_origin_indication = internal_handler("teredo_origin_indication");
	bifs.push_back(std::make_pair("teredo_origin_indication", 2));
	::teredo_bubble = internal_handler("teredo_bubble");
	bifs.push_back(std::make_pair("teredo_bubble", 2));

	return bifs;
	}
} }

