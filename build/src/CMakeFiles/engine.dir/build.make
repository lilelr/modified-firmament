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
include src/CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/engine.dir/flags.make

src/base/coco_interference_scores.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/coco_interference_scores.pb.cc, base/coco_interference_scores.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/coco_interference_scores.proto

src/base/coco_interference_scores.pb.h: src/base/coco_interference_scores.pb.cc

src/base/job_desc.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/job_desc.pb.cc, base/job_desc.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/job_desc.proto

src/base/job_desc.pb.h: src/base/job_desc.pb.cc

src/base/label.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/label.pb.cc, base/label.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/label.proto

src/base/label.pb.h: src/base/label.pb.cc

src/base/label_selector.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/label_selector.pb.cc, base/label_selector.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/label_selector.proto

src/base/label_selector.pb.h: src/base/label_selector.pb.cc

src/base/reference_desc.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/reference_desc.pb.cc, base/reference_desc.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/reference_desc.proto

src/base/reference_desc.pb.h: src/base/reference_desc.pb.cc

src/base/resource_desc.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/resource_desc.pb.cc, base/resource_desc.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/resource_desc.proto

src/base/resource_desc.pb.h: src/base/resource_desc.pb.cc

src/base/resource_stats.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/resource_stats.pb.cc, base/resource_stats.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/resource_stats.proto

src/base/resource_stats.pb.h: src/base/resource_stats.pb.cc

src/base/resource_topology_node_desc.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/resource_topology_node_desc.pb.cc, base/resource_topology_node_desc.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/resource_topology_node_desc.proto

src/base/resource_topology_node_desc.pb.h: src/base/resource_topology_node_desc.pb.cc

src/base/resource_vector.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/resource_vector.pb.cc, base/resource_vector.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/resource_vector.proto

src/base/resource_vector.pb.h: src/base/resource_vector.pb.cc

src/base/task_desc.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/task_desc.pb.cc, base/task_desc.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/task_desc.proto

src/base/task_desc.pb.h: src/base/task_desc.pb.cc

src/base/task_final_report.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/task_final_report.pb.cc, base/task_final_report.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/task_final_report.proto

src/base/task_final_report.pb.h: src/base/task_final_report.pb.cc

src/base/task_stats.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/task_stats.pb.cc, base/task_stats.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/task_stats.proto

src/base/task_stats.pb.h: src/base/task_stats.pb.cc

src/base/whare_map_stats.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating base/whare_map_stats.pb.cc, base/whare_map_stats.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/base/whare_map_stats.proto

src/base/whare_map_stats.pb.h: src/base/whare_map_stats.pb.cc

src/messages/base_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/base_message.pb.cc, messages/base_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/base_message.proto

src/messages/base_message.pb.h: src/messages/base_message.pb.cc

src/messages/heartbeat_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/heartbeat_message.pb.cc, messages/heartbeat_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/heartbeat_message.proto

src/messages/heartbeat_message.pb.h: src/messages/heartbeat_message.pb.cc

src/messages/registration_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/registration_message.pb.cc, messages/registration_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/registration_message.proto

src/messages/registration_message.pb.h: src/messages/registration_message.pb.cc

src/messages/task_delegation_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_17)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_delegation_message.pb.cc, messages/task_delegation_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_delegation_message.proto

src/messages/task_delegation_message.pb.h: src/messages/task_delegation_message.pb.cc

src/messages/task_heartbeat_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_18)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_heartbeat_message.pb.cc, messages/task_heartbeat_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_heartbeat_message.proto

src/messages/task_heartbeat_message.pb.h: src/messages/task_heartbeat_message.pb.cc

src/messages/task_info_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_19)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_info_message.pb.cc, messages/task_info_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_info_message.proto

src/messages/task_info_message.pb.h: src/messages/task_info_message.pb.cc

src/messages/task_kill_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_20)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_kill_message.pb.cc, messages/task_kill_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_kill_message.proto

src/messages/task_kill_message.pb.h: src/messages/task_kill_message.pb.cc

src/messages/task_spawn_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_21)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_spawn_message.pb.cc, messages/task_spawn_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_spawn_message.proto

src/messages/task_spawn_message.pb.h: src/messages/task_spawn_message.pb.cc

src/messages/task_state_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_22)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/task_state_message.pb.cc, messages/task_state_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/task_state_message.proto

src/messages/task_state_message.pb.h: src/messages/task_state_message.pb.cc

src/messages/test_message.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_23)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating messages/test_message.pb.cc, messages/test_message.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/messages/test_message.proto

src/messages/test_message.pb.h: src/messages/test_message.pb.cc

src/scheduling/scheduling_delta.pb.cc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_24)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating scheduling/scheduling_delta.pb.cc, scheduling/scheduling_delta.pb.h"
	/home/lilelr/open-source/firmament/build/third_party/protobuf3/src/protobuf3-build/protoc -I/home/lilelr/open-source/firmament/src --cpp_out=/home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/src/scheduling/scheduling_delta.proto

src/scheduling/scheduling_delta.pb.h: src/scheduling/scheduling_delta.pb.cc

src/CMakeFiles/engine.dir/engine/health_monitor.cc.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/health_monitor.cc.o: ../src/engine/health_monitor.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_25)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/engine.dir/engine/health_monitor.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/health_monitor.cc.o -c /home/lilelr/open-source/firmament/src/engine/health_monitor.cc

src/CMakeFiles/engine.dir/engine/health_monitor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/health_monitor.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/engine/health_monitor.cc > CMakeFiles/engine.dir/engine/health_monitor.cc.i

src/CMakeFiles/engine.dir/engine/health_monitor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/health_monitor.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/engine/health_monitor.cc -o CMakeFiles/engine.dir/engine/health_monitor.cc.s

src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.requires:
.PHONY : src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.requires

src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.provides: src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.requires
	$(MAKE) -f src/CMakeFiles/engine.dir/build.make src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.provides.build
.PHONY : src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.provides

src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.provides.build: src/CMakeFiles/engine.dir/engine/health_monitor.cc.o

src/CMakeFiles/engine.dir/engine/node.cc.o: src/CMakeFiles/engine.dir/flags.make
src/CMakeFiles/engine.dir/engine/node.cc.o: ../src/engine/node.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lilelr/open-source/firmament/build/CMakeFiles $(CMAKE_PROGRESS_26)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/engine.dir/engine/node.cc.o"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/engine/node.cc.o -c /home/lilelr/open-source/firmament/src/engine/node.cc

src/CMakeFiles/engine.dir/engine/node.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/engine/node.cc.i"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lilelr/open-source/firmament/src/engine/node.cc > CMakeFiles/engine.dir/engine/node.cc.i

src/CMakeFiles/engine.dir/engine/node.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/engine/node.cc.s"
	cd /home/lilelr/open-source/firmament/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lilelr/open-source/firmament/src/engine/node.cc -o CMakeFiles/engine.dir/engine/node.cc.s

src/CMakeFiles/engine.dir/engine/node.cc.o.requires:
.PHONY : src/CMakeFiles/engine.dir/engine/node.cc.o.requires

src/CMakeFiles/engine.dir/engine/node.cc.o.provides: src/CMakeFiles/engine.dir/engine/node.cc.o.requires
	$(MAKE) -f src/CMakeFiles/engine.dir/build.make src/CMakeFiles/engine.dir/engine/node.cc.o.provides.build
.PHONY : src/CMakeFiles/engine.dir/engine/node.cc.o.provides

src/CMakeFiles/engine.dir/engine/node.cc.o.provides.build: src/CMakeFiles/engine.dir/engine/node.cc.o

engine: src/CMakeFiles/engine.dir/engine/health_monitor.cc.o
engine: src/CMakeFiles/engine.dir/engine/node.cc.o
engine: src/CMakeFiles/engine.dir/build.make
.PHONY : engine

# Rule to build all files generated by this target.
src/CMakeFiles/engine.dir/build: engine
.PHONY : src/CMakeFiles/engine.dir/build

src/CMakeFiles/engine.dir/requires: src/CMakeFiles/engine.dir/engine/health_monitor.cc.o.requires
src/CMakeFiles/engine.dir/requires: src/CMakeFiles/engine.dir/engine/node.cc.o.requires
.PHONY : src/CMakeFiles/engine.dir/requires

src/CMakeFiles/engine.dir/clean:
	cd /home/lilelr/open-source/firmament/build/src && $(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/engine.dir/clean

src/CMakeFiles/engine.dir/depend: src/base/coco_interference_scores.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/coco_interference_scores.pb.h
src/CMakeFiles/engine.dir/depend: src/base/job_desc.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/job_desc.pb.h
src/CMakeFiles/engine.dir/depend: src/base/label.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/label.pb.h
src/CMakeFiles/engine.dir/depend: src/base/label_selector.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/label_selector.pb.h
src/CMakeFiles/engine.dir/depend: src/base/reference_desc.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/reference_desc.pb.h
src/CMakeFiles/engine.dir/depend: src/base/resource_desc.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/resource_desc.pb.h
src/CMakeFiles/engine.dir/depend: src/base/resource_stats.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/resource_stats.pb.h
src/CMakeFiles/engine.dir/depend: src/base/resource_topology_node_desc.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/resource_topology_node_desc.pb.h
src/CMakeFiles/engine.dir/depend: src/base/resource_vector.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/resource_vector.pb.h
src/CMakeFiles/engine.dir/depend: src/base/task_desc.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/task_desc.pb.h
src/CMakeFiles/engine.dir/depend: src/base/task_final_report.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/task_final_report.pb.h
src/CMakeFiles/engine.dir/depend: src/base/task_stats.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/task_stats.pb.h
src/CMakeFiles/engine.dir/depend: src/base/whare_map_stats.pb.cc
src/CMakeFiles/engine.dir/depend: src/base/whare_map_stats.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/base_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/base_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/heartbeat_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/heartbeat_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/registration_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/registration_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_delegation_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_delegation_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_heartbeat_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_heartbeat_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_info_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_info_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_kill_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_kill_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_spawn_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_spawn_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/task_state_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/task_state_message.pb.h
src/CMakeFiles/engine.dir/depend: src/messages/test_message.pb.cc
src/CMakeFiles/engine.dir/depend: src/messages/test_message.pb.h
src/CMakeFiles/engine.dir/depend: src/scheduling/scheduling_delta.pb.cc
src/CMakeFiles/engine.dir/depend: src/scheduling/scheduling_delta.pb.h
	cd /home/lilelr/open-source/firmament/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lilelr/open-source/firmament /home/lilelr/open-source/firmament/src /home/lilelr/open-source/firmament/build /home/lilelr/open-source/firmament/build/src /home/lilelr/open-source/firmament/build/src/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/engine.dir/depend

