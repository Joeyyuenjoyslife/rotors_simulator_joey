execute_process(COMMAND "/home/joeyyu/catkin_ws_eth_sim/build/rotors_evaluation/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/joeyyu/catkin_ws_eth_sim/build/rotors_evaluation/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
