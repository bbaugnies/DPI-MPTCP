// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/file_analysis/analyzer/unified2/types.bif (plugin mode).


#include <list>
#include <string>
#include "types.bif.h"

namespace plugin { namespace  Bro_Unified2 {

std::list<std::pair<const char*, int> > __bif_types_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	BifType::Record::Unified2::IDSEvent = internal_type("Unified2::IDSEvent")->AsRecordType();
	bifs.push_back(std::make_pair("Unified2::IDSEvent", 5));
	BifType::Record::Unified2::Packet = internal_type("Unified2::Packet")->AsRecordType();
	bifs.push_back(std::make_pair("Unified2::Packet", 5));

	return bifs;
	}
} }

