FILE(REMOVE_RECURSE
  "CMakeFiles/cpplint"
  "CMakeFiles/cpplint-complete"
  "third_party/cpplint/src/cpplint-stamp/cpplint-install"
  "third_party/cpplint/src/cpplint-stamp/cpplint-mkdir"
  "third_party/cpplint/src/cpplint-stamp/cpplint-download"
  "third_party/cpplint/src/cpplint-stamp/cpplint-update"
  "third_party/cpplint/src/cpplint-stamp/cpplint-patch"
  "third_party/cpplint/src/cpplint-stamp/cpplint-configure"
  "third_party/cpplint/src/cpplint-stamp/cpplint-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/cpplint.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
