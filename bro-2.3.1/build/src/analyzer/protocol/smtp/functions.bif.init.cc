// This file was automatically generated by bifcl from /home/benjamin/Bro/bro-2.3.1/src/analyzer/protocol/smtp/functions.bif (plugin mode).


#include <list>
#include <string>
#include "functions.bif.h"

namespace plugin { namespace  Bro_SMTP {

std::list<std::pair<const char*, int> > __bif_functions_init()
	{
	std::list<std::pair<const char*, int> > bifs;

	(void) new BuiltinFunc(BifFunc::bro_skip_smtp_data, "skip_smtp_data", 0);
	bifs.push_back(std::make_pair("skip_smtp_data", 1));

	return bifs;
	}
} }

