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

# Utility rule file for doxy-doc.

# Include the progress variables for this target.
include CMakeFiles/doxy-doc.dir/progress.make

CMakeFiles/doxy-doc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating Doxy documentation..."
	/contrib/generate-documentation.sh

doxy-doc: CMakeFiles/doxy-doc
doxy-doc: CMakeFiles/doxy-doc.dir/build.make
.PHONY : doxy-doc

# Rule to build all files generated by this target.
CMakeFiles/doxy-doc.dir/build: doxy-doc
.PHONY : CMakeFiles/doxy-doc.dir/build

CMakeFiles/doxy-doc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/doxy-doc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/doxy-doc.dir/clean

CMakeFiles/doxy-doc.dir/depend:
	cd /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build /home/lilelr/firmament/build/third_party/flowlessly/src/flowlessly-build/CMakeFiles/doxy-doc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/doxy-doc.dir/depend

