#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to custom_msgs__srv__CheckEvenOdd_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckEvenOdd_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub number: i64,

}



impl Default for CheckEvenOdd_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckEvenOdd_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckEvenOdd_Request {
  type RmwMsg = super::srv::rmw::CheckEvenOdd_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        number: msg.number,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      number: msg.number,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      number: msg.number,
    }
  }
}


// Corresponds to custom_msgs__srv__CheckEvenOdd_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckEvenOdd_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: std::string::String,

}



impl Default for CheckEvenOdd_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CheckEvenOdd_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckEvenOdd_Response {
  type RmwMsg = super::srv::rmw::CheckEvenOdd_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result.to_string(),
    }
  }
}






#[link(name = "custom_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__CheckEvenOdd() -> *const std::ffi::c_void;
}

// Corresponds to custom_msgs__srv__CheckEvenOdd
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckEvenOdd;

impl rosidl_runtime_rs::Service for CheckEvenOdd {
    type Request = CheckEvenOdd_Request;
    type Response = CheckEvenOdd_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_msgs__srv__CheckEvenOdd() }
    }
}


