

set(command "/bin/chmod;+x;/home/lilelr/firmament/build/third_party/cpplint/src/cpplint/cpplint.py")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-configure-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-configure-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "cpplint configure command succeeded.  See also /home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-configure-*.log\n")
  message(STATUS "${msg}")
endif()
