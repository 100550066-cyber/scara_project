#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to scara_description__srv__SetJointConfig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_1: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_2: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_3: f64,

}



impl Default for SetJointConfig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointConfig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointConfig_Request {
  type RmwMsg = super::srv::rmw::SetJointConfig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_1: msg.joint_1,
        joint_2: msg.joint_2,
        joint_3: msg.joint_3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      joint_1: msg.joint_1,
      joint_2: msg.joint_2,
      joint_3: msg.joint_3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_1: msg.joint_1,
      joint_2: msg.joint_2,
      joint_3: msg.joint_3,
    }
  }
}


// Corresponds to scara_description__srv__SetJointConfig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetJointConfig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetJointConfig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetJointConfig_Response {
  type RmwMsg = super::srv::rmw::SetJointConfig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to scara_description__srv__GetEndEffectorPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEndEffectorPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetEndEffectorPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEndEffectorPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetEndEffectorPose_Request {
  type RmwMsg = super::srv::rmw::GetEndEffectorPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to scara_description__srv__GetEndEffectorPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetEndEffectorPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::PoseStamped,

}



impl Default for GetEndEffectorPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetEndEffectorPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetEndEffectorPose_Response {
  type RmwMsg = super::srv::rmw::GetEndEffectorPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        pose: geometry_msgs::msg::PoseStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      pose: geometry_msgs::msg::PoseStamped::from_rmw_message(msg.pose),
    }
  }
}






#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__SetJointConfig() -> *const std::ffi::c_void;
}

// Corresponds to scara_description__srv__SetJointConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointConfig;

impl rosidl_runtime_rs::Service for SetJointConfig {
    type Request = SetJointConfig_Request;
    type Response = SetJointConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__SetJointConfig() }
    }
}




#[link(name = "scara_description__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__GetEndEffectorPose() -> *const std::ffi::c_void;
}

// Corresponds to scara_description__srv__GetEndEffectorPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetEndEffectorPose;

impl rosidl_runtime_rs::Service for GetEndEffectorPose {
    type Request = GetEndEffectorPose_Request;
    type Response = GetEndEffectorPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__scara_description__srv__GetEndEffectorPose() }
    }
}


