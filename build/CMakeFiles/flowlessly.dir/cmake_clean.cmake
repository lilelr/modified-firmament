FILE(REMOVE_RECURSE
  "CMakeFiles/flowlessly"
  "CMakeFiles/flowlessly-complete"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-install"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-mkdir"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-download"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-update"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-patch"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-configure"
  "third_party/flowlessly/src/flowlessly-stamp/flowlessly-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/flowlessly.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
