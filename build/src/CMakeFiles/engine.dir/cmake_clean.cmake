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
  "scheduling/scheduling_delta.pb.cc"
  "scheduling/scheduling_delta.pb.h"
  "CMakeFiles/engine.dir/engine/health_monitor.cc.o"
  "CMakeFiles/engine.dir/engine/node.cc.o"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/engine.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
