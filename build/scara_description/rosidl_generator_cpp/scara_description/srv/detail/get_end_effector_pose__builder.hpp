// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scara_description:srv/GetEndEffectorPose.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__BUILDER_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scara_description/srv/detail/get_end_effector_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scara_description
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_description::srv::GetEndEffectorPose_Request>()
{
  return ::scara_description::srv::GetEndEffectorPose_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace scara_description


namespace scara_description
{

namespace srv
{

namespace builder
{

class Init_GetEndEffectorPose_Response_pose
{
public:
  explicit Init_GetEndEffectorPose_Response_pose(::scara_description::srv::GetEndEffectorPose_Response & msg)
  : msg_(msg)
  {}
  ::scara_description::srv::GetEndEffectorPose_Response pose(::scara_description::srv::GetEndEffectorPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_description::srv::GetEndEffectorPose_Response msg_;
};

class Init_GetEndEffectorPose_Response_message
{
public:
  explicit Init_GetEndEffectorPose_Response_message(::scara_description::srv::GetEndEffectorPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetEndEffectorPose_Response_pose message(::scara_description::srv::GetEndEffectorPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetEndEffectorPose_Response_pose(msg_);
  }

private:
  ::scara_description::srv::GetEndEffectorPose_Response msg_;
};

class Init_GetEndEffectorPose_Response_success
{
public:
  Init_GetEndEffectorPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEndEffectorPose_Response_message success(::scara_description::srv::GetEndEffectorPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEndEffectorPose_Response_message(msg_);
  }

private:
  ::scara_description::srv::GetEndEffectorPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_description::srv::GetEndEffectorPose_Response>()
{
  return scara_description::srv::builder::Init_GetEndEffectorPose_Response_success();
}

}  // namespace scara_description

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__GET_END_EFFECTOR_POSE__BUILDER_HPP_
