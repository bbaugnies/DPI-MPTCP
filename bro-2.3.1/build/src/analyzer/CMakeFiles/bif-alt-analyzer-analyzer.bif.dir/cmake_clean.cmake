FILE(REMOVE_RECURSE
  "CMakeFiles/bif-alt-analyzer-analyzer.bif"
  "../../scripts/base/bif/analyzer.bif.bro"
  "analyzer.bif.h"
  "analyzer.bif.cc"
  "analyzer.bif.init.cc"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-alt-analyzer-analyzer.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
