// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/smtp/events.bif (plugin mode).


#include <list>
#include <string>
#include "events.bif.h"

namespace plugin { namespace  Bro_SMTP {

std::list<std::pair<const char*, int> > __bif_events_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	::smtp_request = internal_handler("smtp_request");
	bifs.push_back(std::make_pair("smtp_request", 2));
	::smtp_reply = internal_handler("smtp_reply");
	bifs.push_back(std::make_pair("smtp_reply", 2));
	::smtp_data = internal_handler("smtp_data");
	bifs.push_back(std::make_pair("smtp_data", 2));
	::smtp_unexpected = internal_handler("smtp_unexpected");
	bifs.push_back(std::make_pair("smtp_unexpected", 2));
	::smtp_starttls = internal_handler("smtp_starttls");
	bifs.push_back(std::make_pair("smtp_starttls", 2));

	return bifs;
	}
} }

