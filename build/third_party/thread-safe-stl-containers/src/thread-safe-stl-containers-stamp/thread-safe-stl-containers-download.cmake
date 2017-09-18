

set(command "/usr/bin/cmake;-P;/home/lilelr/firmament/build/third_party/thread-safe-stl-containers/tmp/thread-safe-stl-containers-gitclone.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/thread-safe-stl-containers/src/thread-safe-stl-containers-stamp/thread-safe-stl-containers-download-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/thread-safe-stl-containers/src/thread-safe-stl-containers-stamp/thread-safe-stl-containers-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/thread-safe-stl-containers/src/thread-safe-stl-containers-stamp/thread-safe-stl-containers-download-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "thread-safe-stl-containers download command succeeded.  See also /home/lilelr/firmament/build/third_party/thread-safe-stl-containers/src/thread-safe-stl-containers-stamp/thread-safe-stl-containers-download-*.log\n")
  message(STATUS "${msg}")
endif()
