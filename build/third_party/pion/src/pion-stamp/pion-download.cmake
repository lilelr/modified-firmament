

set(command "/usr/bin/cmake;-P;/home/lilelr/firmament/build/third_party/pion/tmp/pion-gitclone.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-download-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-download-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "pion download command succeeded.  See also /home/lilelr/firmament/build/third_party/pion/src/pion-stamp/pion-download-*.log\n")
  message(STATUS "${msg}")
endif()
