FILE(REMOVE_RECURSE
  "CMakeFiles/pion"
  "CMakeFiles/pion-complete"
  "third_party/pion/src/pion-stamp/pion-install"
  "third_party/pion/src/pion-stamp/pion-mkdir"
  "third_party/pion/src/pion-stamp/pion-download"
  "third_party/pion/src/pion-stamp/pion-update"
  "third_party/pion/src/pion-stamp/pion-patch"
  "third_party/pion/src/pion-stamp/pion-configure"
  "third_party/pion/src/pion-stamp/pion-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/pion.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
