# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jetmax_msgs:srv/Demo1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Demo1_Request(type):
    """Metaclass of message 'Demo1_Request'."""

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
            module = import_type_support('jetmax_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetmax_msgs.srv.Demo1_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__demo1__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__demo1__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__demo1__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__demo1__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__demo1__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Demo1_Request(metaclass=Metaclass_Demo1_Request):
    """Message class 'Demo1_Request'."""

    __slots__ = [
        '_object_pos',
        '_robot_markers',
    ]

    _fields_and_field_types = {
        'object_pos': 'geometry_msgs/Point',
        'robot_markers': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.object_pos = kwargs.get('object_pos', Point())
        self.robot_markers = kwargs.get('robot_markers', [])

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
        if self.object_pos != other.object_pos:
            return False
        if self.robot_markers != other.robot_markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_pos(self):
        """Message field 'object_pos'."""
        return self._object_pos

    @object_pos.setter
    def object_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'object_pos' field must be a sub message of type 'Point'"
        self._object_pos = value

    @property
    def robot_markers(self):
        """Message field 'robot_markers'."""
        return self._robot_markers

    @robot_markers.setter
    def robot_markers(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'robot_markers' field must be a set or sequence and each value of type 'Point'"
        self._robot_markers = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Demo1_Response(type):
    """Metaclass of message 'Demo1_Response'."""

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
            module = import_type_support('jetmax_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetmax_msgs.srv.Demo1_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__demo1__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__demo1__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__demo1__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__demo1__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__demo1__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Demo1_Response(metaclass=Metaclass_Demo1_Response):
    """Message class 'Demo1_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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


class Metaclass_Demo1(type):
    """Metaclass of service 'Demo1'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('jetmax_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetmax_msgs.srv.Demo1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__demo1

            from jetmax_msgs.srv import _demo1
            if _demo1.Metaclass_Demo1_Request._TYPE_SUPPORT is None:
                _demo1.Metaclass_Demo1_Request.__import_type_support__()
            if _demo1.Metaclass_Demo1_Response._TYPE_SUPPORT is None:
                _demo1.Metaclass_Demo1_Response.__import_type_support__()


class Demo1(metaclass=Metaclass_Demo1):
    from jetmax_msgs.srv._demo1 import Demo1_Request as Request
    from jetmax_msgs.srv._demo1 import Demo1_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
