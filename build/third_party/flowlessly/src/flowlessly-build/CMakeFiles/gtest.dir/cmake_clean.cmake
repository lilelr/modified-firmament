FILE(REMOVE_RECURSE
  "CMakeFiles/gtest"
  "CMakeFiles/gtest-complete"
  "third_party/gtest/src/gtest-stamp/gtest-install"
  "third_party/gtest/src/gtest-stamp/gtest-mkdir"
  "third_party/gtest/src/gtest-stamp/gtest-download"
  "third_party/gtest/src/gtest-stamp/gtest-update"
  "third_party/gtest/src/gtest-stamp/gtest-patch"
  "third_party/gtest/src/gtest-stamp/gtest-configure"
  "third_party/gtest/src/gtest-stamp/gtest-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/gtest.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
