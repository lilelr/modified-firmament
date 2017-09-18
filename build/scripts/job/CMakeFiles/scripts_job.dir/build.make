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

# Utility rule file for scripts_job.

# Include the progress variables for this target.
include scripts/job/CMakeFiles/scripts_job.dir/progress.make

scripts/job/CMakeFiles/scripts_job:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating job submission script protobufs..."
	cd /home/lilelr/open-source/firmament/build/scripts/job && ../../third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --python_out=/home/lilelr/open-source/firmament/scripts/job /home/lilelr/open-source/firmament/src/base/job_desc.proto /home/lilelr/open-source/firmament/src/base/task_desc.proto /home/lilelr/open-source/firmament/src/base/reference_desc.proto /home/lilelr/open-source/firmament/src/base/resource_vector.proto /home/lilelr/open-source/firmament/src/base/task_final_report.proto && touch /home/lilelr/open-source/firmament/scripts/job/base/__init__.py

scripts_job: scripts/job/CMakeFiles/scripts_job
scripts_job: scripts/job/CMakeFiles/scripts_job.dir/build.make
.PHONY : scripts_job

# Rule to build all files generated by this target.
scripts/job/CMakeFiles/scripts_job.dir/build: scripts_job
.PHONY : scripts/job/CMakeFiles/scripts_job.dir/build

scripts/job/CMakeFiles/scripts_job.dir/clean:
	cd /home/lilelr/open-source/firmament/build/scripts/job && $(CMAKE_COMMAND) -P CMakeFiles/scripts_job.dir/cmake_clean.cmake
.PHONY : scripts/job/CMakeFiles/scripts_job.dir/clean

scripts/job/CMakeFiles/scripts_job.dir/depend:
	cd /home/lilelr/open-source/firmament/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/open-source/firmament /home/lilelr/open-source/firmament/scripts/job /home/lilelr/open-source/firmament/build /home/lilelr/open-source/firmament/build/scripts/job /home/lilelr/open-source/firmament/build/scripts/job/CMakeFiles/scripts_job.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : scripts/job/CMakeFiles/scripts_job.dir/depend

