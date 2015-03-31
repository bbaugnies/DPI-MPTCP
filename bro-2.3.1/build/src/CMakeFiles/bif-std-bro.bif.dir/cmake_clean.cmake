FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/bif-std-bro.bif"
  "../scripts/base/bif/bro.bif.bro"
  "bro.bif.func_def"
  "bro.bif.func_h"
  "bro.bif.func_init"
  "bro.bif.netvar_def"
  "bro.bif.netvar_h"
  "bro.bif.netvar_init"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-std-bro.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
