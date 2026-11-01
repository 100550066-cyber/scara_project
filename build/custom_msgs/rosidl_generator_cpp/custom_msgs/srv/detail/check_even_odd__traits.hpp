// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/CheckEvenOdd.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/check_even_odd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckEvenOdd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckEvenOdd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckEvenOdd_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::CheckEvenOdd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::CheckEvenOdd_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::CheckEvenOdd_Request>()
{
  return "custom_msgs::srv::CheckEvenOdd_Request";
}

template<>
inline const char * name<custom_msgs::srv::CheckEvenOdd_Request>()
{
  return "custom_msgs/srv/CheckEvenOdd_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::CheckEvenOdd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::CheckEvenOdd_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::CheckEvenOdd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckEvenOdd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckEvenOdd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckEvenOdd_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::CheckEvenOdd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::CheckEvenOdd_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::CheckEvenOdd_Response>()
{
  return "custom_msgs::srv::CheckEvenOdd_Response";
}

template<>
inline const char * name<custom_msgs::srv::CheckEvenOdd_Response>()
{
  return "custom_msgs/srv/CheckEvenOdd_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::CheckEvenOdd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::srv::CheckEvenOdd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::srv::CheckEvenOdd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::CheckEvenOdd>()
{
  return "custom_msgs::srv::CheckEvenOdd";
}

template<>
inline const char * name<custom_msgs::srv::CheckEvenOdd>()
{
  return "custom_msgs/srv/CheckEvenOdd";
}

template<>
struct has_fixed_size<custom_msgs::srv::CheckEvenOdd>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::CheckEvenOdd_Request>::value &&
    has_fixed_size<custom_msgs::srv::CheckEvenOdd_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::CheckEvenOdd>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::CheckEvenOdd_Request>::value &&
    has_bounded_size<custom_msgs::srv::CheckEvenOdd_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::CheckEvenOdd>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::CheckEvenOdd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::CheckEvenOdd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__CHECK_EVEN_ODD__TRAITS_HPP_
