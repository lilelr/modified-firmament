FILE(REMOVE_RECURSE
  "CMakeFiles/cs2"
  "CMakeFiles/cs2-complete"
  "third_party/cs2/src/cs2-stamp/cs2-install"
  "third_party/cs2/src/cs2-stamp/cs2-mkdir"
  "third_party/cs2/src/cs2-stamp/cs2-download"
  "third_party/cs2/src/cs2-stamp/cs2-update"
  "third_party/cs2/src/cs2-stamp/cs2-patch"
  "third_party/cs2/src/cs2-stamp/cs2-configure"
  "third_party/cs2/src/cs2-stamp/cs2-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/cs2.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
