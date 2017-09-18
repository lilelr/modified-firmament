set(ENV{PATH} "/home/lilelr/open-source/firmament/build/third_party/cpplint/src/cpplint/:$ENV{PATH}")
execute_process(COMMAND python /home/lilelr/open-source/firmament/tests/all_lint.py /home/lilelr/open-source/firmament/src ${LINT_VERBOSE})
