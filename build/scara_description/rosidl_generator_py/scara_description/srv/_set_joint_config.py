# generated from rosidl_generator_py/resource/_idl.py.em
# with input from scara_description:srv/SetJointConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJointConfig_Request(type):
    """Metaclass of message 'SetJointConfig_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_description')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_description.srv.SetJointConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointConfig_Request(metaclass=Metaclass_SetJointConfig_Request):
    """Message class 'SetJointConfig_Request'."""

    __slots__ = [
        '_joint_1',
        '_joint_2',
        '_joint_3',
    ]

    _fields_and_field_types = {
        'joint_1': 'double',
        'joint_2': 'double',
        'joint_3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_1 = kwargs.get('joint_1', float())
        self.joint_2 = kwargs.get('joint_2', float())
        self.joint_3 = kwargs.get('joint_3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint_1 != other.joint_1:
            return False
        if self.joint_2 != other.joint_2:
            return False
        if self.joint_3 != other.joint_3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_1(self):
        """Message field 'joint_1'."""
        return self._joint_1

    @joint_1.setter
    def joint_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint_1 = value

    @builtins.property
    def joint_2(self):
        """Message field 'joint_2'."""
        return self._joint_2

    @joint_2.setter
    def joint_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint_2 = value

    @builtins.property
    def joint_3(self):
        """Message field 'joint_3'."""
        return self._joint_3

    @joint_3.setter
    def joint_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'joint_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._joint_3 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJointConfig_Response(type):
    """Metaclass of message 'SetJointConfig_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_description')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_description.srv.SetJointConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointConfig_Response(metaclass=Metaclass_SetJointConfig_Response):
    """Message class 'SetJointConfig_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetJointConfig(type):
    """Metaclass of service 'SetJointConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('scara_description')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'scara_description.srv.SetJointConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joint_config

            from scara_description.srv import _set_joint_config
            if _set_joint_config.Metaclass_SetJointConfig_Request._TYPE_SUPPORT is None:
                _set_joint_config.Metaclass_SetJointConfig_Request.__import_type_support__()
            if _set_joint_config.Metaclass_SetJointConfig_Response._TYPE_SUPPORT is None:
                _set_joint_config.Metaclass_SetJointConfig_Response.__import_type_support__()


class SetJointConfig(metaclass=Metaclass_SetJointConfig):
    from scara_description.srv._set_joint_config import SetJointConfig_Request as Request
    from scara_description.srv._set_joint_config import SetJointConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
