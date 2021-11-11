#ifndef _GROUP_CONTROL_
#define _GROUP_CONTROL_

#include <ros/ros.h>
#include "unit_control.h"
#include <tf/transform_broadcaster.h>
#include "std_msgs/String.h"


namespace group_formation{
  void Group_Goal_Callback(std_msgs::String msg)
  {
    if(msg.data == "1")
      std::cout << "11111111111" << std::endl;
    // std::cout << msg.data << std::endl;
  }

class GroupControl
{
  public:
    GroupControl(std::string group_goalTopic): group_goalTopic_(group_goalTopic){
      ros::NodeHandle nh;

      subGoal_ = nh.subscribe<std_msgs::String>(group_goalTopic_, 0, Group_Goal_Callback);

    }//formation

  private:
    std::vector<group_formation::UnitControl> units;

    std::string group_goalTopic_;
    ros::Subscriber subGoal_;
    ros::Subscriber subFormation_;
    
  
  


};
};//!namespace

#endif // !_GROUP_CONTROL_
