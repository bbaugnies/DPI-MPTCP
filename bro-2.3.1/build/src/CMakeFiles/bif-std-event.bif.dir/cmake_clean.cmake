FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/bif-std-event.bif"
  "../scripts/base/bif/event.bif.bro"
  "event.bif.func_def"
  "event.bif.func_h"
  "event.bif.func_init"
  "event.bif.netvar_def"
  "event.bif.netvar_h"
  "event.bif.netvar_init"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-std-event.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
