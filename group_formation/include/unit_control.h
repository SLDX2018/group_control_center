#ifndef _UNIT_CONTROL_
#define _UNIT_CONTROL_

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

#include "../proto/group_formation.pb.h"

namespace group_formation{
class UnitControl
{
  public:
    UnitControl(std::string moveGoalTopic, tf::Transform relativePosition): moveGoalTopic_(moveGoalTopic),
                                                                            relativePosition_(relativePosition)
    {
      ros::NodeHandle nh;
      pub_ = nh.advertise<geometry_msgs::PoseStamped>(moveGoalTopic_, 1);
      
      finalGoal_.header.frame_id = "huanyu/map";
    }
    
    UnitControl(group_formation::Robot robotConfig)
    {
      ros::NodeHandle nh;
      pub_ = nh.advertise<geometry_msgs::PoseStamped>(robotConfig.goal_pose_topic(), 1);
      
      finalGoal_.header.frame_id = robotConfig.goal_frame_id();
    }


    geometry_msgs::PoseStamped SetFinalPosition(geometry_msgs::Pose groupGoal)
    {
      finalGoal_.header.stamp = ros::Time::now();
      
      //计算实际目标姿态
      //...

      finalGoal_.pose = groupGoal;
      return finalGoal_;
    }


    void PublishFinalPosition(geometry_msgs::Pose groupGoal)
    {
      pub_.publish<geometry_msgs::PoseStamped>(SetFinalPosition(groupGoal));
    }
    
    void PublishFinalPosition(group_formation::Pose goal)
    {
      geometry_msgs::Pose groupGoal;

      tf::Quaternion q;
      q.setRPY(0, 0, goal.yaw());

      groupGoal.position.x = goal.x();
      groupGoal.position.y = goal.y();
      groupGoal.position.z = goal.z();
      groupGoal.orientation.x = q.x();
      groupGoal.orientation.y = q.y();
      groupGoal.orientation.z = q.z();
      groupGoal.orientation.w = q.w();

      pub_.publish<geometry_msgs::PoseStamped>(SetFinalPosition(groupGoal));
    }

  private:
    ros::Publisher pub_;

    std::string moveGoalTopic_;
    tf::Transform relativePosition_;
    
    geometry_msgs::PoseStamped finalGoal_;

};
};//!namespace

#endif // !unit_control
