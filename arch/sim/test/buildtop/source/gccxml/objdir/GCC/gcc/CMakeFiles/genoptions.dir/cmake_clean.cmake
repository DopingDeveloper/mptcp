FILE(REMOVE_RECURSE
  "CMakeFiles/genoptions"
  "options.h"
  "options.c"
  "optionlist"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/genoptions.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
