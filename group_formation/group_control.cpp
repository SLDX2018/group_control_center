#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/PoseStamped.h>

#include "io/io.h"
#include "unit_control.h"
#include "proto/group_formation.pb.h"

int main(int argc, char **argv)
{
  //用于解析ROS参数，第三个参数为本节点名
  ros::init(argc, argv, "group_control");
  ros::NodeHandle nh;

  //定义发布的频率 
  ros::Rate loop_rate(1.0);

  group_formation::GroupConfig gc;
  std::string full_path = ros::package::getPath("group_formation") + "/config/group_formation.prototxt";
  roborts_common::ReadProtoFromTextFile(full_path, &gc);
  
  
  group_formation::UnitControl hy(gc.robot(0));
  ros::ok();
  hy.PublishFinalPosition(gc.door_pose());
  hy.PublishFinalPosition(gc.door_pose());
  hy.PublishFinalPosition(gc.door_pose());
  hy.PublishFinalPosition(gc.door_pose());

  ROS_INFO("before creat obj");
  group_formation::UnitControl dx(gc.robot(1));
  ROS_INFO("before publish1");
  dx.PublishFinalPosition(gc.tv_pose());
  ROS_INFO("before publish2");
  dx.PublishFinalPosition(gc.tv_pose());
  dx.PublishFinalPosition(gc.tv_pose());
  dx.PublishFinalPosition(gc.tv_pose());


  ROS_INFO("before while");
int x = 0;
  while (ros::ok())
  {
    // ROS_INFO("Talker: GPS: x = 123321");
    ROS_INFO("x = %d", x++);

  hy.PublishFinalPosition(gc.door_pose());
  dx.PublishFinalPosition(gc.tv_pose());

    //根据前面定义的频率, sleep 1s
    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}