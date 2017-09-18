FILE(REMOVE_RECURSE
  "CMakeFiles/grpc"
  "CMakeFiles/grpc-complete"
  "third_party/grpc/src/grpc-stamp/grpc-install"
  "third_party/grpc/src/grpc-stamp/grpc-mkdir"
  "third_party/grpc/src/grpc-stamp/grpc-download"
  "third_party/grpc/src/grpc-stamp/grpc-update"
  "third_party/grpc/src/grpc-stamp/grpc-patch"
  "third_party/grpc/src/grpc-stamp/grpc-configure"
  "third_party/grpc/src/grpc-stamp/grpc-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/grpc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
