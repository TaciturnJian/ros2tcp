cmake_minimum_required(VERSION 3.12)

project(better_ros2tcp_bridge)

set(sc_executable_name "ros2tcp_bridge")

find_package(rclcpp REQUIRED)

aux_source_directory(src sc_executable_source)
add_executable(${sc_executable_name} ${sc_executable_source})
target_include_directories(${sc_executable_name} BEFORE PUBLIC include)
set_target_properties(${sc_executable_name} PROPERTIES CXX_STANDARD 20)
ament_target_dependencies(${sc_executable_name} rclcpp)

ament_package()
