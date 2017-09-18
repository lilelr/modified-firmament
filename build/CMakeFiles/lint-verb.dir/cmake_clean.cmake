FILE(REMOVE_RECURSE
  "CMakeFiles/lint-verb"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/lint-verb.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
