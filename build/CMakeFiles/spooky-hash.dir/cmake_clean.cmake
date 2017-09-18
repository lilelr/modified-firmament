FILE(REMOVE_RECURSE
  "CMakeFiles/spooky-hash"
  "CMakeFiles/spooky-hash-complete"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-install"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-mkdir"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-download"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-update"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-patch"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-configure"
  "third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-build"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/spooky-hash.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
