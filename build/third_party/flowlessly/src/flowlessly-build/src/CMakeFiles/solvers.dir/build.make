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
CMAKE_SOURCE_DIR = /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build

# Include any dependencies generated for this target.
include src/CMakeFiles/solvers.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/solvers.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/solvers.dir/flags.make

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o: src/CMakeFiles/solvers.dir/flags.make
src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o: /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/cycle_cancelling.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o -c /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/cycle_cancelling.cc

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.i"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/cycle_cancelling.cc > CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.i

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.s"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/cycle_cancelling.cc -o CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.s

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.requires:
.PHONY : src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.requires

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.provides: src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.requires
	$(MAKE) -f src/CMakeFiles/solvers.dir/build.make src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.provides.build
.PHONY : src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.provides

src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.provides.build: src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o: src/CMakeFiles/solvers.dir/flags.make
src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o: /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/successive_shortest.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o -c /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/successive_shortest.cc

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solvers.dir/solvers/successive_shortest.cc.i"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/successive_shortest.cc > CMakeFiles/solvers.dir/solvers/successive_shortest.cc.i

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solvers.dir/solvers/successive_shortest.cc.s"
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src/solvers/successive_shortest.cc -o CMakeFiles/solvers.dir/solvers/successive_shortest.cc.s

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.requires:
.PHONY : src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.requires

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.provides: src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.requires
	$(MAKE) -f src/CMakeFiles/solvers.dir/build.make src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.provides.build
.PHONY : src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.provides

src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.provides.build: src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o

solvers: src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o
solvers: src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o
solvers: src/CMakeFiles/solvers.dir/build.make
.PHONY : solvers

# Rule to build all files generated by this target.
src/CMakeFiles/solvers.dir/build: solvers
.PHONY : src/CMakeFiles/solvers.dir/build

src/CMakeFiles/solvers.dir/requires: src/CMakeFiles/solvers.dir/solvers/cycle_cancelling.cc.o.requires
src/CMakeFiles/solvers.dir/requires: src/CMakeFiles/solvers.dir/solvers/successive_shortest.cc.o.requires
.PHONY : src/CMakeFiles/solvers.dir/requires

src/CMakeFiles/solvers.dir/clean:
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src && $(CMAKE_COMMAND) -P CMakeFiles/solvers.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/solvers.dir/clean

src/CMakeFiles/solvers.dir/depend:
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly/src /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/src/CMakeFiles/solvers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/solvers.dir/depend
