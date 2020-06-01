/*
 * Copyright 2015 Fadri Furrer, ASL, ETH Zurich, Switzerland
 * Copyright 2015 Michael Burri, ASL, ETH Zurich, Switzerland
 * Copyright 2015 Mina Kamel, ASL, ETH Zurich, Switzerland
 * Copyright 2015 Janosch Nikolic, ASL, ETH Zurich, Switzerland
 * Copyright 2015 Markus Achtelik, ASL, ETH Zurich, Switzerland
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <fstream>
#include <iostream>

#include <Eigen/Core>
#include <mav_msgs/conversions.h>
#include <mav_msgs/default_topics.h>
#include <std_msgs/Int8.h>
#include <geometry_msgs/PointStamped.h>
#include <ros/ros.h>
#include <trajectory_msgs/MultiDOFJointTrajectory.h>
#include <rotors_gazebo/serial.h>
#include <rotors_gazebo/PositionCommand.h>

//global variable----------------------------
int serial_cmd = 0;  //  receive the serial port cmd;
int last_seq  = 0;
float current_x=0;
float current_y=0;
float current_z=0;
float latest_x = 0;
float latest_y = 0;
float latest_z =  0;
int initial_num  = 0;
bool has_cmd = false;
trajectory_msgs::MultiDOFJointTrajectory trajectory_msg;
rotors_gazebo::PositionCommand cmd_msg;
void position_cmdCallback(const rotors_gazebo::PositionCommand &msg)
{

      cmd_msg = msg;
      has_cmd = true;

}

int main(int argc, char** argv) {
  ros::init(argc, argv, "waypoint_publisher");
  ros::NodeHandle nh;
  ros::Publisher trajectory_pub =
      nh.advertise<trajectory_msgs::MultiDOFJointTrajectory>(
     "/firefly/command/trajectory", 10);
  

  ros::Subscriber cmd_sub = nh.subscribe("/position_cmd",1,position_cmdCallback);




  ROS_INFO("Started waypoint_publisher.");

  //ros::V_string args;
  //ros::removeROSArgs(argc, argv, args);

 // double delay;

  /*if (args.size() == 5) {
    delay = 1.0;
  } else if (args.size() == 6) {
    delay = std::stof(args.at(5));
  } else {
    ROS_ERROR("Usage: waypoint_publisher <x> <y> <z> <yaw_deg> [<delay>]\n");
    return -1;
  }*/

  const float DEG_2_RAD = M_PI / 180.0;



  // Wait for some time to create the ros publisher.
  //ros::Duration(delay).sleep();

  /*while (trajectory_pub.getNumSubscribers() == 0 && ros::ok()) {
    ROS_INFO("There is no subscriber available, trying again in 1 second.");
    ros::Duration(1.0).sleep();
  }*/
ros::Rate loop_rate(50);
while (ros::ok())
{
    if(has_cmd == true)
    {
        trajectory_msg.header.stamp = ros::Time::now();
        Eigen::Vector3d desired_position(cmd_msg.position.x, cmd_msg.position.y,
                                         cmd_msg.position.z);
        double desired_yaw = cmd_msg.yaw;
        mav_msgs::msgMultiDofJointTrajectoryFromPositionYaw(desired_position,
                                                            desired_yaw, &trajectory_msg);

        ROS_INFO("Publishing waypoint on namespace %s: [%f, %f, %f].",
                 nh.getNamespace().c_str(),
                 desired_position.x(),
                 desired_position.y(),
                 desired_position.z());
        ROS_INFO("0000");
        trajectory_pub.publish(trajectory_msg);
        ROS_INFO("Pub~~~~~~~~~~~~~~~~~~~~~~");

    }

   ros::spinOnce();
    loop_rate.sleep();

}

    





  return 0;
}
