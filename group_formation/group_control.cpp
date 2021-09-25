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


  group_formation::GroupConfig gc;
  std::string full_path = ros::package::getPath("group_formation") + "/config/group_formation.prototxt";
  roborts_common::ReadProtoFromTextFile(full_path, &gc);
  
  // group_formation::UnitControl hy(gc.robot(0));
  // group_formation::UnitControl dx(gc.robot(1));


  ros::Publisher pub;
  geometry_msgs::PoseStamped msg;
  pub = nh.advertise<geometry_msgs::PoseStamped>("/huanyu/move_base_simple/goal", 1);
  msg.header.frame_id = "sldx/base_link";
  // msg.header.stamp = ros::Time::now();

  msg.pose.position.x = -1;
  msg.pose.position.y = 0;
  msg.pose.position.z = 0;
  msg.pose.orientation.x = 0;
  msg.pose.orientation.y = 0;
  msg.pose.orientation.z = 0;
  msg.pose.orientation.w = 1;


  ROS_INFO("before while");
  ros::Duration(1.0).sleep(); //延时1s，保证话题成功注册

  ros::Rate loop_rate(1.0);  //定义发布的频率 
  pub.publish(msg);
  while (ros::ok())
  {
    // ROS_INFO("Talker: GPS: x = 123321");
  // hy.PublishFinalPosition(gc.door_pose());
  // dx.PublishFinalPosition(gc.tv_pose());

  
    // msg.header.stamp = ros::Time::now();
    pub.publish(msg);

  // ros::Duration(3.0).sleep(); //延时1s，保证话题成功注册

    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}