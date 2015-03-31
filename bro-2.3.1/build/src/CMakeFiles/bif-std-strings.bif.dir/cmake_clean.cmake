FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/bif-std-strings.bif"
  "../scripts/base/bif/strings.bif.bro"
  "strings.bif.func_def"
  "strings.bif.func_h"
  "strings.bif.func_init"
  "strings.bif.netvar_def"
  "strings.bif.netvar_h"
  "strings.bif.netvar_init"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/bif-std-strings.bif.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
