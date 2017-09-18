

set(command "bash;-c;wget -O cpplint/cpplint.py 'http://raw.githubusercontent.com/google/styleguide/gh-pages/cpplint/cpplint.py'")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-download-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-download-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "cpplint download command succeeded.  See also /home/lilelr/firmament/build/third_party/cpplint/src/cpplint-stamp/cpplint-download-*.log\n")
  message(STATUS "${msg}")
endif()
