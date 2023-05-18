#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/PoseStamped.h>

#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <geometry_msgs/Pose.h>
#include <tf/transform_broadcaster.h>

#include <vector>

#include "io/io.h"
#include "unit_control.h"
#include "proto/group_formation.pb.h"


namespace group_formation{  
geometry_msgs::Pose UnitControl::getpose(const group_formation::Pose &pose)
{
  geometry_msgs::Pose res;
  res.position.x = pose.x();
  res.position.y = pose.y();
  res.position.z = pose.z();
  
  tf::Quaternion q;
  q.setRPY(0, 0, pose.yaw());
  res.orientation.x = q.getX();
  res.orientation.y = q.getY();
  res.orientation.z = q.getZ();
  res.orientation.w = q.getW();

  return res;
}

UnitControl::UnitControl(ros::NodeHandle nh, const group_formation::Robot &robotConfig): robotConfig_(robotConfig)
{
  goalPublisher_ = nh.advertise<geometry_msgs::PoseStamped>(robotConfig_.goal_pose_topic(), 1);
  initPublisher_ = nh.advertise<geometry_msgs::PoseWithCovarianceStamped>(robotConfig_.initial_pose_topic(), 1);

  std::cout << robotConfig_.robot_name() << " join !" << std::endl;
}

UnitControl::~UnitControl()
{

}

void UnitControl::init()
{
  geometry_msgs::PoseWithCovarianceStamped initpose_msg;
  initpose_msg.header.frame_id = robotConfig_.goal_frame_id();
  initpose_msg.header.stamp = ros::Time::now();
  initpose_msg.pose.pose = getpose(robotConfig_.initial_pose());

  initPublisher_.publish(initpose_msg); //set init_pose
}

void UnitControl::PublishPosition(const group_formation::Pose &goal)
{
  finalGoalMsg_.header.frame_id = robotConfig_.goal_frame_id();
  finalGoalMsg_.pose = getpose(goal);
  finalGoalMsg_.header.stamp = ros::Time::now();

  goalPublisher_.publish<geometry_msgs::PoseStamped>(finalGoalMsg_);
}

void UnitControl::PublishPosition(const group_formation::Pose &goal, const std::string frame_id)
{
  finalGoalMsg_.header.frame_id = frame_id;
  finalGoalMsg_.pose = getpose(goal);
  finalGoalMsg_.header.stamp = ros::Time::now();

  goalPublisher_.publish<geometry_msgs::PoseStamped>(finalGoalMsg_);
}


const std::string UnitControl::getFrameId()
{
  return robotConfig_.goal_frame_id();
}

};//!namespace




int test(int argc, char **argv)
{
  //用于解析ROS参数，第三个参数为本节点名
  ros::init(argc, argv, "unit_control_test");
  ros::NodeHandle nh;

  group_formation::GroupConfig gc;
  std::string full_path = ros::package::getPath("group_formation") + "/config/group_formation.prototxt";
  roborts_common::ReadProtoFromTextFile(full_path, &gc);

  std::vector<group_formation::UnitControl> robots;

  for(size_t i = 0; i < gc.robot_size(); ++i)
  {
    robots.push_back(group_formation::UnitControl(nh, gc.robot(i)));
  }

  ros::Duration(1).sleep();

  for(std::vector<group_formation::UnitControl>::iterator i = robots.begin(); i != robots.end(); ++i)
  {
    i->init();
  }

  ros::Rate loop_rate(1);  //定义发布的频率 
  while (ros::ok())
  {
    for(std::vector<group_formation::UnitControl>::iterator i = robots.begin(); i != robots.end(); ++i)
    {
      // i->PublishPosition(gc.tv_pose());
      // i->PublishPosition(gc.tv_pose(), "/qqqqq");
    }

    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}