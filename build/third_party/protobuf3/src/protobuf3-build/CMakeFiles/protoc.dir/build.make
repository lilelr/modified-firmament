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
CMAKE_SOURCE_DIR = /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build

# Include any dependencies generated for this target.
include CMakeFiles/protoc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/protoc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/protoc.dir/flags.make

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o: CMakeFiles/protoc.dir/flags.make
CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o: /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o -c /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_PREPROCESSED_SOURCE

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_ASSEMBLY_SOURCE

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.requires:
.PHONY : CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.requires

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.provides: CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.requires
	$(MAKE) -f CMakeFiles/protoc.dir/build.make CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.provides.build
.PHONY : CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.provides

CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.provides.build: CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o

# Object files for target protoc
protoc_OBJECTS = \
"CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o"

# External object files for target protoc
protoc_EXTERNAL_OBJECTS =

protoc: CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o
protoc: CMakeFiles/protoc.dir/build.make
protoc: libprotobuf.a
protoc: libprotoc.a
protoc: libprotobuf.a
protoc: /usr/lib/x86_64-linux-gnu/libz.so
protoc: CMakeFiles/protoc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable protoc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protoc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/protoc.dir/build: protoc
.PHONY : CMakeFiles/protoc.dir/build

CMakeFiles/protoc.dir/requires: CMakeFiles/protoc.dir/home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/src/google/protobuf/compiler/main.cc.o.requires
.PHONY : CMakeFiles/protoc.dir/requires

CMakeFiles/protoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/protoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/protoc.dir/clean

CMakeFiles/protoc.dir/depend:
	cd /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/cmake /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3/cmake /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build /home/lilelr/firmament/build/third_party/protobuf3/src/protobuf3-build/CMakeFiles/protoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/protoc.dir/depend

