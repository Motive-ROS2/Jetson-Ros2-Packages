# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jetmax_msgs:action/PathPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPlanning_Goal(type):
    """Metaclass of message 'PathPlanning_Goal'."""

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
                'jetmax_msgs.action.PathPlanning_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__goal

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


class PathPlanning_Goal(metaclass=Metaclass_PathPlanning_Goal):
    """Message class 'PathPlanning_Goal'."""

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


class Metaclass_PathPlanning_Result(type):
    """Metaclass of message 'PathPlanning_Result'."""

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
                'jetmax_msgs.action.PathPlanning_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_Result(metaclass=Metaclass_PathPlanning_Result):
    """Message class 'PathPlanning_Result'."""

    __slots__ = [
        '_return_code',
    ]

    _fields_and_field_types = {
        'return_code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.return_code = kwargs.get('return_code', int())

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
        if self.return_code != other.return_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def return_code(self):
        """Message field 'return_code'."""
        return self._return_code

    @return_code.setter
    def return_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'return_code' field must be an integer in [-2147483648, 2147483647]"
        self._return_code = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_Feedback(type):
    """Metaclass of message 'PathPlanning_Feedback'."""

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
                'jetmax_msgs.action.PathPlanning_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_Feedback(metaclass=Metaclass_PathPlanning_Feedback):
    """Message class 'PathPlanning_Feedback'."""

    __slots__ = [
        '_update_status',
    ]

    _fields_and_field_types = {
        'update_status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.update_status = kwargs.get('update_status', int())

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
        if self.update_status != other.update_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def update_status(self):
        """Message field 'update_status'."""
        return self._update_status

    @update_status.setter
    def update_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'update_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'update_status' field must be an integer in [-2147483648, 2147483647]"
        self._update_status = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_SendGoal_Request(type):
    """Metaclass of message 'PathPlanning_SendGoal_Request'."""

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
                'jetmax_msgs.action.PathPlanning_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__send_goal__request

            from jetmax_msgs.action import PathPlanning
            if PathPlanning.Goal.__class__._TYPE_SUPPORT is None:
                PathPlanning.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_SendGoal_Request(metaclass=Metaclass_PathPlanning_SendGoal_Request):
    """Message class 'PathPlanning_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'jetmax_msgs/PathPlanning_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jetmax_msgs', 'action'], 'PathPlanning_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from jetmax_msgs.action._path_planning import PathPlanning_Goal
        self.goal = kwargs.get('goal', PathPlanning_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from jetmax_msgs.action._path_planning import PathPlanning_Goal
            assert \
                isinstance(value, PathPlanning_Goal), \
                "The 'goal' field must be a sub message of type 'PathPlanning_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_SendGoal_Response(type):
    """Metaclass of message 'PathPlanning_SendGoal_Response'."""

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
                'jetmax_msgs.action.PathPlanning_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_SendGoal_Response(metaclass=Metaclass_PathPlanning_SendGoal_Response):
    """Message class 'PathPlanning_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PathPlanning_SendGoal(type):
    """Metaclass of service 'PathPlanning_SendGoal'."""

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
                'jetmax_msgs.action.PathPlanning_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_planning__send_goal

            from jetmax_msgs.action import _path_planning
            if _path_planning.Metaclass_PathPlanning_SendGoal_Request._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_SendGoal_Request.__import_type_support__()
            if _path_planning.Metaclass_PathPlanning_SendGoal_Response._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_SendGoal_Response.__import_type_support__()


class PathPlanning_SendGoal(metaclass=Metaclass_PathPlanning_SendGoal):
    from jetmax_msgs.action._path_planning import PathPlanning_SendGoal_Request as Request
    from jetmax_msgs.action._path_planning import PathPlanning_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_GetResult_Request(type):
    """Metaclass of message 'PathPlanning_GetResult_Request'."""

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
                'jetmax_msgs.action.PathPlanning_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_GetResult_Request(metaclass=Metaclass_PathPlanning_GetResult_Request):
    """Message class 'PathPlanning_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_GetResult_Response(type):
    """Metaclass of message 'PathPlanning_GetResult_Response'."""

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
                'jetmax_msgs.action.PathPlanning_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__get_result__response

            from jetmax_msgs.action import PathPlanning
            if PathPlanning.Result.__class__._TYPE_SUPPORT is None:
                PathPlanning.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_GetResult_Response(metaclass=Metaclass_PathPlanning_GetResult_Response):
    """Message class 'PathPlanning_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'jetmax_msgs/PathPlanning_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jetmax_msgs', 'action'], 'PathPlanning_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from jetmax_msgs.action._path_planning import PathPlanning_Result
        self.result = kwargs.get('result', PathPlanning_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from jetmax_msgs.action._path_planning import PathPlanning_Result
            assert \
                isinstance(value, PathPlanning_Result), \
                "The 'result' field must be a sub message of type 'PathPlanning_Result'"
        self._result = value


class Metaclass_PathPlanning_GetResult(type):
    """Metaclass of service 'PathPlanning_GetResult'."""

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
                'jetmax_msgs.action.PathPlanning_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__path_planning__get_result

            from jetmax_msgs.action import _path_planning
            if _path_planning.Metaclass_PathPlanning_GetResult_Request._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_GetResult_Request.__import_type_support__()
            if _path_planning.Metaclass_PathPlanning_GetResult_Response._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_GetResult_Response.__import_type_support__()


class PathPlanning_GetResult(metaclass=Metaclass_PathPlanning_GetResult):
    from jetmax_msgs.action._path_planning import PathPlanning_GetResult_Request as Request
    from jetmax_msgs.action._path_planning import PathPlanning_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanning_FeedbackMessage(type):
    """Metaclass of message 'PathPlanning_FeedbackMessage'."""

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
                'jetmax_msgs.action.PathPlanning_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__path_planning__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__path_planning__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__path_planning__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__path_planning__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__path_planning__feedback_message

            from jetmax_msgs.action import PathPlanning
            if PathPlanning.Feedback.__class__._TYPE_SUPPORT is None:
                PathPlanning.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanning_FeedbackMessage(metaclass=Metaclass_PathPlanning_FeedbackMessage):
    """Message class 'PathPlanning_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'jetmax_msgs/PathPlanning_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jetmax_msgs', 'action'], 'PathPlanning_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from jetmax_msgs.action._path_planning import PathPlanning_Feedback
        self.feedback = kwargs.get('feedback', PathPlanning_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from jetmax_msgs.action._path_planning import PathPlanning_Feedback
            assert \
                isinstance(value, PathPlanning_Feedback), \
                "The 'feedback' field must be a sub message of type 'PathPlanning_Feedback'"
        self._feedback = value


class Metaclass_PathPlanning(type):
    """Metaclass of action 'PathPlanning'."""

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
                'jetmax_msgs.action.PathPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__path_planning

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from jetmax_msgs.action import _path_planning
            if _path_planning.Metaclass_PathPlanning_SendGoal._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_SendGoal.__import_type_support__()
            if _path_planning.Metaclass_PathPlanning_GetResult._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_GetResult.__import_type_support__()
            if _path_planning.Metaclass_PathPlanning_FeedbackMessage._TYPE_SUPPORT is None:
                _path_planning.Metaclass_PathPlanning_FeedbackMessage.__import_type_support__()


class PathPlanning(metaclass=Metaclass_PathPlanning):

    # The goal message defined in the action definition.
    from jetmax_msgs.action._path_planning import PathPlanning_Goal as Goal
    # The result message defined in the action definition.
    from jetmax_msgs.action._path_planning import PathPlanning_Result as Result
    # The feedback message defined in the action definition.
    from jetmax_msgs.action._path_planning import PathPlanning_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from jetmax_msgs.action._path_planning import PathPlanning_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from jetmax_msgs.action._path_planning import PathPlanning_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from jetmax_msgs.action._path_planning import PathPlanning_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
