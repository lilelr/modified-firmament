FILE(REMOVE_RECURSE
  "CMakeFiles/protobuf3"
  "CMakeFiles/protobuf3-complete"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-install"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-mkdir"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-download"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-update"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-patch"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-configure"
  "third_party/protobuf3/src/protobuf3-stamp/protobuf3-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/protobuf3.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
