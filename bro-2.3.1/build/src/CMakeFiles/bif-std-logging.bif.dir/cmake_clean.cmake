FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/bif-std-logging.bif"
  "../scripts/base/bif/logging.bif.bro"
  "logging.bif.func_def"
  "logging.bif.func_h"
  "logging.bif.func_init"
  "logging.bif.netvar_def"
  "logging.bif.netvar_h"
  "logging.bif.netvar_init"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-std-logging.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
