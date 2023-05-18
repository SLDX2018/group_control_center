#ifndef _UNIT_CONTROL_
#define _UNIT_CONTROL_

#include <ros/ros.h>

#include "../proto/group_formation.pb.h"


namespace group_formation{
class UnitControl
{
  public:
    explicit UnitControl(ros::NodeHandle nh, const group_formation::Robot &robotConfig);
    ~UnitControl();
    
    void PublishPosition(const group_formation::Pose &goal);
    void PublishPosition(const group_formation::Pose &goal, const std::string frame_id);
    void init();

    const std::string getFrameId();

  private:
    group_formation::Robot robotConfig_;
    ros::Publisher goalPublisher_;
    ros::Publisher initPublisher_;
    
    geometry_msgs::PoseStamped finalGoalMsg_;

    geometry_msgs::Pose getpose(const group_formation::Pose &pose);

};
};//!namespace

#endif // !unit_control
