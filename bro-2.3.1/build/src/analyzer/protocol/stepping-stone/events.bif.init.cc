// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/stepping-stone/events.bif (plugin mode).


#include <list>
#include <string>
#include "events.bif.h"

namespace plugin { namespace  Bro_SteppingStone {

std::list<std::pair<const char*, int> > __bif_events_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	::stp_create_endp = internal_handler("stp_create_endp");
	bifs.push_back(std::make_pair("stp_create_endp", 2));
	::stp_resume_endp = internal_handler("stp_resume_endp");
	bifs.push_back(std::make_pair("stp_resume_endp", 2));
	::stp_correlate_pair = internal_handler("stp_correlate_pair");
	bifs.push_back(std::make_pair("stp_correlate_pair", 2));
	::stp_remove_pair = internal_handler("stp_remove_pair");
	bifs.push_back(std::make_pair("stp_remove_pair", 2));
	::stp_remove_endp = internal_handler("stp_remove_endp");
	bifs.push_back(std::make_pair("stp_remove_endp", 2));

	return bifs;
	}
} }

