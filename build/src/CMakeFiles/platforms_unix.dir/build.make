# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lilelr/open-source/firmament

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lilelr/open-source/firmament/build

# Include any dependencies generated for this target.
include src/CMakeFiles/platforms_unix.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/platforms_unix.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/platforms_unix.dir/flags.make

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o: ../src/platforms/unix/async_tcp_server.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/async_tcp_server.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/async_tcp_server.cc > CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/async_tcp_server.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o: ../src/platforms/unix/common.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/common.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/common.cc > CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/common.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o: ../src/platforms/unix/procfs_machine.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/procfs_machine.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/procfs_machine.cc > CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/procfs_machine.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o: ../src/platforms/unix/procfs_monitor.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/procfs_monitor.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/procfs_monitor.cc > CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/procfs_monitor.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o: ../src/platforms/unix/signal_handler.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/signal_handler.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/signal_handler.cc > CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/signal_handler.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o: ../src/platforms/unix/stream_sockets_adapter.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/stream_sockets_adapter.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/stream_sockets_adapter.cc > CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/stream_sockets_adapter.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o: src/CMakeFiles/platforms_unix.dir/flags.make
src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o: ../src/platforms/unix/tcp_connection.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o -c /home/lilelr/open-source/firmament/src/platforms/unix/tcp_connection.cc

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/platforms/unix/tcp_connection.cc > CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.i

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/platforms/unix/tcp_connection.cc -o CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.s

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.requires:
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.requires

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.provides: src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.requires
	$(MAKE) -f src/CMakeFiles/platforms_unix.dir/build.make src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.provides.build
.PHONY : src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.provides

src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.provides.build: src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o

platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o
platforms_unix: src/CMakeFiles/platforms_unix.dir/build.make
.PHONY : platforms_unix

# Rule to build all files generated by this target.
src/CMakeFiles/platforms_unix.dir/build: platforms_unix
.PHONY : src/CMakeFiles/platforms_unix.dir/build

src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/async_tcp_server.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/common.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_machine.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/procfs_monitor.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/signal_handler.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/stream_sockets_adapter.cc.o.requires
src/CMakeFiles/platforms_unix.dir/requires: src/CMakeFiles/platforms_unix.dir/platforms/unix/tcp_connection.cc.o.requires
.PHONY : src/CMakeFiles/platforms_unix.dir/requires

src/CMakeFiles/platforms_unix.dir/clean:
	cd /home/lilelr/open-source/firmament/build/src && $(CMAKE_COMMAND) -P CMakeFiles/platforms_unix.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/platforms_unix.dir/clean

src/CMakeFiles/platforms_unix.dir/depend:
	cd /home/lilelr/open-source/firmament/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/open-source/firmament /home/lilelr/open-source/firmament/src /home/lilelr/open-source/firmament/build /home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/build/src/CMakeFiles/platforms_unix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/platforms_unix.dir/depend

