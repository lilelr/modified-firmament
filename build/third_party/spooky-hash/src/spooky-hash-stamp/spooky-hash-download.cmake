

set(command "bash;-c;wget -O spooky-hash/SpookyV2.cpp 'http://burtleburtle.net/bob/c/SpookyV2.cpp' && wget -O spooky-hash/SpookyV2.h 'http://burtleburtle.net/bob/c/SpookyV2.h'")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-download-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-download-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "spooky-hash download command succeeded.  See also /home/lilelr/firmament/build/third_party/spooky-hash/src/spooky-hash-stamp/spooky-hash-download-*.log\n")
  message(STATUS "${msg}")
endif()
