FILE(REMOVE_RECURSE
  "base/coco_interference_scores.pb.cc"
  "base/coco_interference_scores.pb.h"
  "base/job_desc.pb.cc"
  "base/job_desc.pb.h"
  "base/label.pb.cc"
  "base/label.pb.h"
  "base/label_selector.pb.cc"
  "base/label_selector.pb.h"
  "base/reference_desc.pb.cc"
  "base/reference_desc.pb.h"
  "base/resource_desc.pb.cc"
  "base/resource_desc.pb.h"
  "base/resource_stats.pb.cc"
  "base/resource_stats.pb.h"
  "base/resource_topology_node_desc.pb.cc"
  "base/resource_topology_node_desc.pb.h"
  "base/resource_vector.pb.cc"
  "base/resource_vector.pb.h"
  "base/task_desc.pb.cc"
  "base/task_desc.pb.h"
  "base/task_final_report.pb.cc"
  "base/task_final_report.pb.h"
  "base/task_stats.pb.cc"
  "base/task_stats.pb.h"
  "base/whare_map_stats.pb.cc"
  "base/whare_map_stats.pb.h"
  "messages/base_message.pb.cc"
  "messages/base_message.pb.h"
  "messages/heartbeat_message.pb.cc"
  "messages/heartbeat_message.pb.h"
  "messages/registration_message.pb.cc"
  "messages/registration_message.pb.h"
  "messages/task_delegation_message.pb.cc"
  "messages/task_delegation_message.pb.h"
  "messages/task_heartbeat_message.pb.cc"
  "messages/task_heartbeat_message.pb.h"
  "messages/task_info_message.pb.cc"
  "messages/task_info_message.pb.h"
  "messages/task_kill_message.pb.cc"
  "messages/task_kill_message.pb.h"
  "messages/task_spawn_message.pb.cc"
  "messages/task_spawn_message.pb.h"
  "messages/task_state_message.pb.cc"
  "messages/task_state_message.pb.h"
  "messages/test_message.pb.cc"
  "messages/test_message.pb.h"
  "CMakeFiles/task_lib_inject.dir/engine/task_lib_main.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/data_object.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/resource_status.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/coco_interference_scores.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/job_desc.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/label.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/label_selector.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/reference_desc.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/resource_desc.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/resource_stats.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/resource_topology_node_desc.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/resource_vector.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/task_desc.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/task_final_report.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/task_stats.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/base/whare_map_stats.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/base_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/heartbeat_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/registration_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_delegation_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_heartbeat_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_info_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_kill_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_spawn_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/task_state_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/messages/test_message.pb.cc.o"
  "CMakeFiles/task_lib_inject.dir/misc/pb_utils.cc.o"
  "CMakeFiles/task_lib_inject.dir/misc/wall_time.cc.o"
  "CMakeFiles/task_lib_inject.dir/misc/string_utils.cc.o"
  "CMakeFiles/task_lib_inject.dir/misc/utils.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/async_tcp_server.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/common.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/procfs_machine.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/procfs_monitor.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/signal_handler.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/stream_sockets_adapter.cc.o"
  "CMakeFiles/task_lib_inject.dir/platforms/unix/tcp_connection.cc.o"
  "CMakeFiles/task_lib_inject.dir/engine/task_lib.cc.o"
  "libtask_lib_inject.pdb"
  "libtask_lib_inject.so"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/task_lib_inject.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
