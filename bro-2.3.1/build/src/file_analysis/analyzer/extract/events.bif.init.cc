// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/file_analysis/analyzer/extract/events.bif (plugin mode).


#include <list>
#include <string>
#include "events.bif.h"

namespace plugin { namespace  Bro_FileExtract {

std::list<std::pair<const char*, int> > __bif_events_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	::file_extraction_limit = internal_handler("file_extraction_limit");
	bifs.push_back(std::make_pair("file_extraction_limit", 2));

	return bifs;
	}
} }

