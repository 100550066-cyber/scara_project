// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scara_description:srv/SetJointConfig.idl
// generated code does not contain a copyright notice

#ifndef SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__BUILDER_HPP_
#define SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scara_description/srv/detail/set_joint_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scara_description
{

namespace srv
{

namespace builder
{

class Init_SetJointConfig_Request_joint_3
{
public:
  explicit Init_SetJointConfig_Request_joint_3(::scara_description::srv::SetJointConfig_Request & msg)
  : msg_(msg)
  {}
  ::scara_description::srv::SetJointConfig_Request joint_3(::scara_description::srv::SetJointConfig_Request::_joint_3_type arg)
  {
    msg_.joint_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_description::srv::SetJointConfig_Request msg_;
};

class Init_SetJointConfig_Request_joint_2
{
public:
  explicit Init_SetJointConfig_Request_joint_2(::scara_description::srv::SetJointConfig_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointConfig_Request_joint_3 joint_2(::scara_description::srv::SetJointConfig_Request::_joint_2_type arg)
  {
    msg_.joint_2 = std::move(arg);
    return Init_SetJointConfig_Request_joint_3(msg_);
  }

private:
  ::scara_description::srv::SetJointConfig_Request msg_;
};

class Init_SetJointConfig_Request_joint_1
{
public:
  Init_SetJointConfig_Request_joint_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointConfig_Request_joint_2 joint_1(::scara_description::srv::SetJointConfig_Request::_joint_1_type arg)
  {
    msg_.joint_1 = std::move(arg);
    return Init_SetJointConfig_Request_joint_2(msg_);
  }

private:
  ::scara_description::srv::SetJointConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_description::srv::SetJointConfig_Request>()
{
  return scara_description::srv::builder::Init_SetJointConfig_Request_joint_1();
}

}  // namespace scara_description


namespace scara_description
{

namespace srv
{

namespace builder
{

class Init_SetJointConfig_Response_message
{
public:
  explicit Init_SetJointConfig_Response_message(::scara_description::srv::SetJointConfig_Response & msg)
  : msg_(msg)
  {}
  ::scara_description::srv::SetJointConfig_Response message(::scara_description::srv::SetJointConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scara_description::srv::SetJointConfig_Response msg_;
};

class Init_SetJointConfig_Response_success
{
public:
  Init_SetJointConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointConfig_Response_message success(::scara_description::srv::SetJointConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointConfig_Response_message(msg_);
  }

private:
  ::scara_description::srv::SetJointConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scara_description::srv::SetJointConfig_Response>()
{
  return scara_description::srv::builder::Init_SetJointConfig_Response_success();
}

}  // namespace scara_description

#endif  // SCARA_DESCRIPTION__SRV__DETAIL__SET_JOINT_CONFIG__BUILDER_HPP_
