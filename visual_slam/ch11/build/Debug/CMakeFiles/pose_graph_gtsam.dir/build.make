# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/yons/develop/AI/projects/visual_slam/ch11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yons/develop/AI/projects/visual_slam/ch11/build/Debug

# Include any dependencies generated for this target.
include CMakeFiles/pose_graph_gtsam.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pose_graph_gtsam.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pose_graph_gtsam.dir/flags.make

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o: CMakeFiles/pose_graph_gtsam.dir/flags.make
CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o: ../../pose_graph_gtsam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yons/develop/AI/projects/visual_slam/ch11/build/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o -c /home/yons/develop/AI/projects/visual_slam/ch11/pose_graph_gtsam.cpp

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yons/develop/AI/projects/visual_slam/ch11/pose_graph_gtsam.cpp > CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.i

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yons/develop/AI/projects/visual_slam/ch11/pose_graph_gtsam.cpp -o CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.s

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.requires:

.PHONY : CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.requires

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.provides: CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.requires
	$(MAKE) -f CMakeFiles/pose_graph_gtsam.dir/build.make CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.provides.build
.PHONY : CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.provides

CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.provides.build: CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o


# Object files for target pose_graph_gtsam
pose_graph_gtsam_OBJECTS = \
"CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o"

# External object files for target pose_graph_gtsam
pose_graph_gtsam_EXTERNAL_OBJECTS =

pose_graph_gtsam: CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o
pose_graph_gtsam: CMakeFiles/pose_graph_gtsam.dir/build.make
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libcholmod.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libamd.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libcolamd.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libcamd.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libccolamd.so
pose_graph_gtsam: /usr/local/lib/libmetis.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libsuitesparseconfig.so
pose_graph_gtsam: /usr/local/lib/libgtsam.so.4.0.0
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_system.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_thread.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_regex.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_system.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_thread.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_regex.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_timer.so
pose_graph_gtsam: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
pose_graph_gtsam: /usr/local/lib/libmetis.so
pose_graph_gtsam: CMakeFiles/pose_graph_gtsam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yons/develop/AI/projects/visual_slam/ch11/build/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pose_graph_gtsam"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pose_graph_gtsam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pose_graph_gtsam.dir/build: pose_graph_gtsam

.PHONY : CMakeFiles/pose_graph_gtsam.dir/build

CMakeFiles/pose_graph_gtsam.dir/requires: CMakeFiles/pose_graph_gtsam.dir/pose_graph_gtsam.cpp.o.requires

.PHONY : CMakeFiles/pose_graph_gtsam.dir/requires

CMakeFiles/pose_graph_gtsam.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pose_graph_gtsam.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pose_graph_gtsam.dir/clean

CMakeFiles/pose_graph_gtsam.dir/depend:
	cd /home/yons/develop/AI/projects/visual_slam/ch11/build/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yons/develop/AI/projects/visual_slam/ch11 /home/yons/develop/AI/projects/visual_slam/ch11 /home/yons/develop/AI/projects/visual_slam/ch11/build/Debug /home/yons/develop/AI/projects/visual_slam/ch11/build/Debug /home/yons/develop/AI/projects/visual_slam/ch11/build/Debug/CMakeFiles/pose_graph_gtsam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pose_graph_gtsam.dir/depend

