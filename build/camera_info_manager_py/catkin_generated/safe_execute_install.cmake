execute_process(COMMAND "/home/automation/laser_ws/build/camera_info_manager_py/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/automation/laser_ws/build/camera_info_manager_py/catkin_generated/python_distutils_install.sh) returned error code ")
endif()