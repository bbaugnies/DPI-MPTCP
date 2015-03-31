FILE(REMOVE_RECURSE
  "../scripts/base/bif"
  "CMakeFiles/generate_outputs_stage2"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/generate_outputs_stage2.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
