#include <ros/ros.h>
#include <ros/package.h>
#include <geometry_msgs/PoseStamped.h>

#include "io/io.h"
#include "unit_control.h"
#include "proto/group_formation.pb.h"
#include "group_control.h"
#include "std_msgs/String.h"


group_formation::UnitControl *leader = nullptr;
group_formation::GroupConfig gc;

void Group_Goal_Callback(std_msgs::String msg)
{
  if(msg.data == "1")
  {
    leader->PublishPosition(gc.goal(0));
  }
  else if(msg.data == "2")
  {
    leader->PublishPosition(gc.goal(1));
  }
  else if(msg.data == "3")
  {
    leader->PublishPosition(gc.goal(2));
  }
  else if(msg.data == "4")
  {
    leader->PublishPosition(gc.goal(3));
  }
  else if(msg.data == "5")
  {
    leader->PublishPosition(gc.goal(4));
  }
}


int main(int argc, char **argv)
{
  //用于解析ROS参数，第三个参数为本节点名
  ros::init(argc, argv, "group_control");
  ros::NodeHandle nh;

  std::string full_path = ros::package::getPath("group_formation") + "/config/group_formation.prototxt";
  roborts_common::ReadProtoFromTextFile(full_path, &gc);
  
  std::vector<group_formation::UnitControl> robots;
  for(size_t i = 0; i < gc.robot_size(); ++i)
  {
    robots.push_back(group_formation::UnitControl(nh, gc.robot(i)));
  }

  ros::Duration(1.0).sleep(); //延时1s，保证话题成功注册
  for(std::vector<group_formation::UnitControl>::iterator i = robots.begin(); i != robots.end(); ++i)
  {
    i->init();
  }

  leader = &robots[2];


//5号接收处理语音指令
  ros::Subscriber subGoal_;
  subGoal_ = nh.subscribe<std_msgs::String>("/gfc/au", 0, Group_Goal_Callback);


//   ROS_INFO("before while");
//   ros::Duration(1.0).sleep(); //延时1s，保证话题成功注册

  ros::Rate loop_rate(3.0);  //定义发布的频率 
  while (ros::ok())
  {
    robots[0].PublishPosition(gc.formation(2).pose(0), "/sldx5/base_link");   //三号车
    robots[1].PublishPosition(gc.formation(2).pose(1), "/sldx5/base_link");   //四号车

    ros::spinOnce();;
    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
}


//0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06853892326654787
