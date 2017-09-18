FILE(REMOVE_RECURSE
  "scheduling/scheduling_delta.pb.cc"
  "scheduling/scheduling_delta.pb.h"
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
  "CMakeFiles/scheduling.dir/scheduling/common.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/event_driven_scheduler.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/knowledge_base.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/label_utils.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/coco_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/cost_model_utils.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_add_node.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_change_arc.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_change_stats.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_exporter.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_new_arc.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/dimacs_remove_node.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_graph.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_graph_arc.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_graph_change_manager.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_graph_manager.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_graph_node.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/flow_scheduler.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/json_exporter.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/net_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/octopus_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/quincy_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/quincy_interference_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/random_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/sjf_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/solver_dispatcher.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/trivial_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/void_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/flow/wharemap_cost_model.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/simple/simple_scheduler.cc.o"
  "CMakeFiles/scheduling.dir/scheduling/scheduling_delta.pb.cc.o"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/scheduling.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)