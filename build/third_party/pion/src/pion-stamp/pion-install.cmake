

set(command "${make};install")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-install-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-install-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-install-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "pion install command succeeded.  See also /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-install-*.log\n")
  message(STATUS "${msg}")
endif()
