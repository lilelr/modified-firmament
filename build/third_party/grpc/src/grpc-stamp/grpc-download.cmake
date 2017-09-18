

set(command "/usr/bin/cmake;-P;/home/lilelr/firmament/build/third_party/grpc/tmp/grpc-gitclone.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/lilelr/firmament/build/third_party/grpc/src/grpc-stamp/grpc-download-out.log"
  ERROR_FILE "/home/lilelr/firmament/build/third_party/grpc/src/grpc-stamp/grpc-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/lilelr/firmament/build/third_party/grpc/src/grpc-stamp/grpc-download-*.log\n")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "grpc download command succeeded.  See also /home/lilelr/firmament/build/third_party/grpc/src/grpc-stamp/grpc-download-*.log\n")
  message(STATUS "${msg}")
endif()
