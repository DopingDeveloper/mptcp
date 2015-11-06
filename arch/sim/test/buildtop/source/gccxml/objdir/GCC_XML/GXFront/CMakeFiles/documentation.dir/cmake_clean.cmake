FILE(REMOVE_RECURSE
  "CMakeFiles/documentation"
  "../doc/gccxml.1"
  "../doc/gccxml.txt"
  "../doc/gccxml.html"
  "../doc/Copyright.txt"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/documentation.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
