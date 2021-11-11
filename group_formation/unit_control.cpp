#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/PoseStamped.h>

#include "io/io.h"
#include "unit_control.h"
#include "proto/group_formation.pb.h"

int main(int argc, char **argv)
{
  //用于解析ROS参数，第三个参数为本节点名
  ros::init(argc, argv, "unit_control_test");
  
  group_formation::GroupConfig gc;
  std::string full_path = ros::package::getPath("group_formation") + "/config/group_formation.prototxt";
  roborts_common::ReadProtoFromTextFile(full_path, &gc);

  tf::Transform relativePosition;
  group_formation::UnitControl unitTest("/sldx/move_base_simple/goal2", relativePosition);


  group_formation::Pose st;
  st = gc.door_pose();
  
  geometry_msgs::Pose  doortest;

  tf::Quaternion q;
  q.setRPY(0, 0, st.yaw());

  doortest.position.x = st.x();
  doortest.position.y = st.y();
  doortest.position.z = st.z();
  doortest.orientation.x = q.getX();
  doortest.orientation.y = q.getY();
  doortest.orientation.z = q.getZ();
  doortest.orientation.w = q.getW();

  unitTest.PublishFinalPosition(doortest);



  group_formation::UnitControl dx(gc.robot(1));
  dx.PublishFinalPosition(gc.tv_pose());

  //定义发布的频率 
  ros::Rate loop_rate(1.0);
  //循环发布msg
  while (ros::ok())
  {
    // ROS_INFO("Talker: GPS: x = 123321");

    unitTest.PublishFinalPosition(doortest);
    dx.PublishFinalPosition(gc.tv_pose());

    //根据前面定义的频率, sleep 1s
    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}