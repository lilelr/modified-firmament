

set(command "/usr/bin/c++;-O3;-fPIC;-c;SpookyV2.cpp")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-build-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-build-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-build-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "spooky-hash build command succeeded.  See also /home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-build-*.log\n")
  message(STATUS "${msg}")
endif()
