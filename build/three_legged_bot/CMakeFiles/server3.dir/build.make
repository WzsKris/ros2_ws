# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/ros2_ws/src/three_legged_bot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/ros2_ws/build/three_legged_bot

# Include any dependencies generated for this target.
include CMakeFiles/server3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/server3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/server3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server3.dir/flags.make

CMakeFiles/server3.dir/src/leg3.cpp.o: CMakeFiles/server3.dir/flags.make
CMakeFiles/server3.dir/src/leg3.cpp.o: /home/user/ros2_ws/src/three_legged_bot/src/leg3.cpp
CMakeFiles/server3.dir/src/leg3.cpp.o: CMakeFiles/server3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/ros2_ws/build/three_legged_bot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server3.dir/src/leg3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server3.dir/src/leg3.cpp.o -MF CMakeFiles/server3.dir/src/leg3.cpp.o.d -o CMakeFiles/server3.dir/src/leg3.cpp.o -c /home/user/ros2_ws/src/three_legged_bot/src/leg3.cpp

CMakeFiles/server3.dir/src/leg3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server3.dir/src/leg3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/ros2_ws/src/three_legged_bot/src/leg3.cpp > CMakeFiles/server3.dir/src/leg3.cpp.i

CMakeFiles/server3.dir/src/leg3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server3.dir/src/leg3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/ros2_ws/src/three_legged_bot/src/leg3.cpp -o CMakeFiles/server3.dir/src/leg3.cpp.s

CMakeFiles/server3.dir/src/semaphore.cpp.o: CMakeFiles/server3.dir/flags.make
CMakeFiles/server3.dir/src/semaphore.cpp.o: /home/user/ros2_ws/src/three_legged_bot/src/semaphore.cpp
CMakeFiles/server3.dir/src/semaphore.cpp.o: CMakeFiles/server3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/ros2_ws/build/three_legged_bot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server3.dir/src/semaphore.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/server3.dir/src/semaphore.cpp.o -MF CMakeFiles/server3.dir/src/semaphore.cpp.o.d -o CMakeFiles/server3.dir/src/semaphore.cpp.o -c /home/user/ros2_ws/src/three_legged_bot/src/semaphore.cpp

CMakeFiles/server3.dir/src/semaphore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server3.dir/src/semaphore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/ros2_ws/src/three_legged_bot/src/semaphore.cpp > CMakeFiles/server3.dir/src/semaphore.cpp.i

CMakeFiles/server3.dir/src/semaphore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server3.dir/src/semaphore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/ros2_ws/src/three_legged_bot/src/semaphore.cpp -o CMakeFiles/server3.dir/src/semaphore.cpp.s

# Object files for target server3
server3_OBJECTS = \
"CMakeFiles/server3.dir/src/leg3.cpp.o" \
"CMakeFiles/server3.dir/src/semaphore.cpp.o"

# External object files for target server3
server3_EXTERNAL_OBJECTS =

server3: CMakeFiles/server3.dir/src/leg3.cpp.o
server3: CMakeFiles/server3.dir/src/semaphore.cpp.o
server3: CMakeFiles/server3.dir/build.make
server3: /opt/ros/humble/lib/librclcpp.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_fastrtps_c.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_introspection_c.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_fastrtps_cpp.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_introspection_cpp.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_cpp.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_generator_py.so
server3: /opt/ros/humble/lib/liblibstatistics_collector.so
server3: /opt/ros/humble/lib/librcl.so
server3: /opt/ros/humble/lib/librmw_implementation.so
server3: /opt/ros/humble/lib/libament_index_cpp.so
server3: /opt/ros/humble/lib/librcl_logging_spdlog.so
server3: /opt/ros/humble/lib/librcl_logging_interface.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
server3: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
server3: /opt/ros/humble/lib/librcl_yaml_param_parser.so
server3: /opt/ros/humble/lib/libyaml.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
server3: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
server3: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
server3: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
server3: /opt/ros/humble/lib/libtracetools.so
server3: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
server3: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
server3: /opt/ros/humble/lib/libfastcdr.so.1.0.24
server3: /opt/ros/humble/lib/librmw.so
server3: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
server3: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
server3: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_typesupport_c.so
server3: /home/user/ros2_ws/install/core_interfaces/lib/libcore_interfaces__rosidl_generator_c.so
server3: /opt/ros/humble/lib/librosidl_typesupport_c.so
server3: /opt/ros/humble/lib/librcpputils.so
server3: /opt/ros/humble/lib/librosidl_runtime_c.so
server3: /opt/ros/humble/lib/librcutils.so
server3: /usr/lib/x86_64-linux-gnu/libpython3.10.so
server3: CMakeFiles/server3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/ros2_ws/build/three_legged_bot/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable server3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server3.dir/build: server3
.PHONY : CMakeFiles/server3.dir/build

CMakeFiles/server3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server3.dir/clean

CMakeFiles/server3.dir/depend:
	cd /home/user/ros2_ws/build/three_legged_bot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/ros2_ws/src/three_legged_bot /home/user/ros2_ws/src/three_legged_bot /home/user/ros2_ws/build/three_legged_bot /home/user/ros2_ws/build/three_legged_bot /home/user/ros2_ws/build/three_legged_bot/CMakeFiles/server3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server3.dir/depend

