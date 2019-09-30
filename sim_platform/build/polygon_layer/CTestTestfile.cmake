# CMake generated Testfile for 
# Source directory: /home/yons/develop/AI/V_Slam/sim_platform/src/frontier_exploration/polygon_layer
# Build directory: /home/yons/develop/AI/V_Slam/sim_platform/build/polygon_layer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_polygon_layer_roslint_package "/home/yons/develop/AI/V_Slam/sim_platform/build/polygon_layer/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/yons/develop/AI/V_Slam/sim_platform/build/polygon_layer/test_results/polygon_layer/roslint-polygon_layer.xml" "--working-dir" "/home/yons/develop/AI/V_Slam/sim_platform/build/polygon_layer" "--return-code" "/opt/ros/melodic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/yons/develop/AI/V_Slam/sim_platform/build/polygon_layer/test_results/polygon_layer/roslint-polygon_layer.xml make roslint_polygon_layer")
subdirs("gtest")
