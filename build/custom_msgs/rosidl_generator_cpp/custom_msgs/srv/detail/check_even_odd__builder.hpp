// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/CheckEvenOdd.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/check_even_odd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckEvenOdd_Request_number
{
public:
  Init_CheckEvenOdd_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::CheckEvenOdd_Request number(::custom_msgs::srv::CheckEvenOdd_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::CheckEvenOdd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::CheckEvenOdd_Request>()
{
  return custom_msgs::srv::builder::Init_CheckEvenOdd_Request_number();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_CheckEvenOdd_Response_result
{
public:
  Init_CheckEvenOdd_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::CheckEvenOdd_Response result(::custom_msgs::srv::CheckEvenOdd_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::CheckEvenOdd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::CheckEvenOdd_Response>()
{
  return custom_msgs::srv::builder::Init_CheckEvenOdd_Response_result();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__BUILDER_HPP_
