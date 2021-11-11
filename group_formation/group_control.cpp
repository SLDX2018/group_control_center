#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/PoseStamped.h>

#include "io/io.h"
#include "unit_control.h"
#include "proto/group_formation.pb.h"
#include "group_control.h"
#include "std_msgs/String.h"


ros::Publisher pub_leader;

void leader_go_to(double x, double y, double orien_z, double orien_w)
{
  geometry_msgs::PoseStamped msg_goal;
  msg_goal.header.frame_id = "/sldx5/map";

  msg_goal.pose.position.x = x;
  msg_goal.pose.position.y = y;
  msg_goal.pose.position.z = 0;
  msg_goal.pose.orientation.x = 0;
  msg_goal.pose.orientation.y = 0;
  msg_goal.pose.orientation.z = orien_z;
  msg_goal.pose.orientation.w = orien_w;

  pub_leader.publish(msg_goal);

}

void Group_Goal_Callback(std_msgs::String msg)
{
  if(msg.data == "1")
  {
    leader_go_to(3.195, 0.147, 0, 1);
  }
  else if(msg.data == "2")
  {
    leader_go_to(3.054, 1.541, 0.433, 0.901);
  }
  else if(msg.data == "3")
  {
    leader_go_to(2.502, 1.675, 0.955, 0.295);
  }
  else if(msg.data == "4")
  {
    leader_go_to(2.324, 0.265, 0.914, -0.405);
  }
}


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


//5号接收处理语音指令
  // group_formation::GroupControl leader("/gfc/au");
  ros::Subscriber subGoal_;
  subGoal_ = nh.subscribe<std_msgs::String>("/gfc/au", 0, Group_Goal_Callback);
  pub_leader = nh.advertise<geometry_msgs::PoseStamped>("/sldx5/move_base_simple/goal", 1);


//4号跟随 5号
  ros::Publisher pub4;
  geometry_msgs::PoseStamped msg4;
  pub4 = nh.advertise<geometry_msgs::PoseStamped>("/sldx/move_base_simple/goal", 1);
  msg4.header.frame_id = "/sldx5/base_link";
  // msg.header.stamp = ros::Time::now();

  msg4.pose.position.x = -1;
  msg4.pose.position.y = -0.6;
  msg4.pose.position.z = 0;
  msg4.pose.orientation.x = 0;
  msg4.pose.orientation.y = 0;
  msg4.pose.orientation.z = 0;
  msg4.pose.orientation.w = 1;



//3号跟随 5号
  ros::Publisher pub3;
  geometry_msgs::PoseStamped msg3;
  pub3 = nh.advertise<geometry_msgs::PoseStamped>("/sldx3/move_base_simple/goal", 1);
  msg3.header.frame_id = "/sldx5/base_link";
  // msg.header.stamp = ros::Time::now();

  msg3.pose.position.x = -1;
  msg3.pose.position.y = 0.6;
  msg3.pose.position.z = 0;
  msg3.pose.orientation.x = 0;
  msg3.pose.orientation.y = 0;
  msg3.pose.orientation.z = 0;
  msg3.pose.orientation.w = 1;



  ROS_INFO("before while");
  ros::Duration(1.0).sleep(); //延时1s，保证话题成功注册

  ros::Rate loop_rate(2.0);  //定义发布的频率 
  while (ros::ok())
  {
    // ROS_INFO("Talker: GPS: x = 123321");
  // hy.PublishFinalPosition(gc.door_pose());
  // dx.PublishFinalPosition(gc.tv_pose());

    ros::spin();
    // msg.header.stamp = ros::Time::now();
    pub3.publish(msg3);
    pub4.publish(msg4);

  // ros::Duration(3.0).sleep(); //延时1s，保证话题成功注册

    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}