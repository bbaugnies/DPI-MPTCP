FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/bif-std-input.bif"
  "../scripts/base/bif/input.bif.bro"
  "input.bif.func_def"
  "input.bif.func_h"
  "input.bif.func_init"
  "input.bif.netvar_def"
  "input.bif.netvar_h"
  "input.bif.netvar_init"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-std-input.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
