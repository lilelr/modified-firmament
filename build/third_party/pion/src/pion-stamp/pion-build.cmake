

set(command "${make}")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-build-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-build-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-build-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "pion build command succeeded.  See also /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-build-*.log\n")
  message(STATUS "${msg}")
endif()