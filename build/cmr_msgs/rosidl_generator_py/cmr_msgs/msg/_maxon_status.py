# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cmr_msgs:msg/MaxonStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'device_state'
# Member 'velocity_dem'
# Member 'velocity_act'
# Member 'torque_act_avg'
# Member 'voltage'
# Member 'i2t_level_cont'
# Member 'i2t_level_motor'
# Member 'current_dem'
# Member 'current_act'
# Member 'current_act_avg'
# Member 'sense_vel_act'
# Member 'sense_vel_avg'
# Member 'error'
# Member 'error_history'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MaxonStatus(type):
    """Metaclass of message 'MaxonStatus'."""

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
            module = import_type_support('cmr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cmr_msgs.msg.MaxonStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__maxon_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__maxon_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__maxon_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__maxon_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__maxon_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MaxonStatus(metaclass=Metaclass_MaxonStatus):
    """Message class 'MaxonStatus'."""

    __slots__ = [
        '_header',
        '_device_state',
        '_velocity_dem',
        '_velocity_act',
        '_torque_act_avg',
        '_voltage',
        '_i2t_level_cont',
        '_i2t_level_motor',
        '_current_dem',
        '_current_act',
        '_current_act_avg',
        '_sense_vel_act',
        '_sense_vel_avg',
        '_error',
        '_error_history',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'device_state': 'sequence<uint8>',
        'velocity_dem': 'sequence<int32>',
        'velocity_act': 'sequence<int32>',
        'torque_act_avg': 'sequence<int16>',
        'voltage': 'sequence<uint16>',
        'i2t_level_cont': 'sequence<uint16>',
        'i2t_level_motor': 'sequence<uint16>',
        'current_dem': 'sequence<int32>',
        'current_act': 'sequence<int32>',
        'current_act_avg': 'sequence<int32>',
        'sense_vel_act': 'sequence<int32>',
        'sense_vel_avg': 'sequence<int32>',
        'error': 'sequence<uint8>',
        'error_history': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.device_state = array.array('B', kwargs.get('device_state', []))
        self.velocity_dem = array.array('i', kwargs.get('velocity_dem', []))
        self.velocity_act = array.array('i', kwargs.get('velocity_act', []))
        self.torque_act_avg = array.array('h', kwargs.get('torque_act_avg', []))
        self.voltage = array.array('H', kwargs.get('voltage', []))
        self.i2t_level_cont = array.array('H', kwargs.get('i2t_level_cont', []))
        self.i2t_level_motor = array.array('H', kwargs.get('i2t_level_motor', []))
        self.current_dem = array.array('i', kwargs.get('current_dem', []))
        self.current_act = array.array('i', kwargs.get('current_act', []))
        self.current_act_avg = array.array('i', kwargs.get('current_act_avg', []))
        self.sense_vel_act = array.array('i', kwargs.get('sense_vel_act', []))
        self.sense_vel_avg = array.array('i', kwargs.get('sense_vel_avg', []))
        self.error = array.array('B', kwargs.get('error', []))
        self.error_history = array.array('H', kwargs.get('error_history', []))

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
        if self.header != other.header:
            return False
        if self.device_state != other.device_state:
            return False
        if self.velocity_dem != other.velocity_dem:
            return False
        if self.velocity_act != other.velocity_act:
            return False
        if self.torque_act_avg != other.torque_act_avg:
            return False
        if self.voltage != other.voltage:
            return False
        if self.i2t_level_cont != other.i2t_level_cont:
            return False
        if self.i2t_level_motor != other.i2t_level_motor:
            return False
        if self.current_dem != other.current_dem:
            return False
        if self.current_act != other.current_act:
            return False
        if self.current_act_avg != other.current_act_avg:
            return False
        if self.sense_vel_act != other.sense_vel_act:
            return False
        if self.sense_vel_avg != other.sense_vel_avg:
            return False
        if self.error != other.error:
            return False
        if self.error_history != other.error_history:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def device_state(self):
        """Message field 'device_state'."""
        return self._device_state

    @device_state.setter
    def device_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'device_state' array.array() must have the type code of 'B'"
            self._device_state = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'device_state' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._device_state = array.array('B', value)

    @property
    def velocity_dem(self):
        """Message field 'velocity_dem'."""
        return self._velocity_dem

    @velocity_dem.setter
    def velocity_dem(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'velocity_dem' array.array() must have the type code of 'i'"
            self._velocity_dem = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'velocity_dem' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._velocity_dem = array.array('i', value)

    @property
    def velocity_act(self):
        """Message field 'velocity_act'."""
        return self._velocity_act

    @velocity_act.setter
    def velocity_act(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'velocity_act' array.array() must have the type code of 'i'"
            self._velocity_act = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'velocity_act' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._velocity_act = array.array('i', value)

    @property
    def torque_act_avg(self):
        """Message field 'torque_act_avg'."""
        return self._torque_act_avg

    @torque_act_avg.setter
    def torque_act_avg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'torque_act_avg' array.array() must have the type code of 'h'"
            self._torque_act_avg = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'torque_act_avg' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._torque_act_avg = array.array('h', value)

    @property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'voltage' array.array() must have the type code of 'H'"
            self._voltage = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'voltage' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._voltage = array.array('H', value)

    @property
    def i2t_level_cont(self):
        """Message field 'i2t_level_cont'."""
        return self._i2t_level_cont

    @i2t_level_cont.setter
    def i2t_level_cont(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'i2t_level_cont' array.array() must have the type code of 'H'"
            self._i2t_level_cont = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'i2t_level_cont' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._i2t_level_cont = array.array('H', value)

    @property
    def i2t_level_motor(self):
        """Message field 'i2t_level_motor'."""
        return self._i2t_level_motor

    @i2t_level_motor.setter
    def i2t_level_motor(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'i2t_level_motor' array.array() must have the type code of 'H'"
            self._i2t_level_motor = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'i2t_level_motor' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._i2t_level_motor = array.array('H', value)

    @property
    def current_dem(self):
        """Message field 'current_dem'."""
        return self._current_dem

    @current_dem.setter
    def current_dem(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'current_dem' array.array() must have the type code of 'i'"
            self._current_dem = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'current_dem' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._current_dem = array.array('i', value)

    @property
    def current_act(self):
        """Message field 'current_act'."""
        return self._current_act

    @current_act.setter
    def current_act(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'current_act' array.array() must have the type code of 'i'"
            self._current_act = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'current_act' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._current_act = array.array('i', value)

    @property
    def current_act_avg(self):
        """Message field 'current_act_avg'."""
        return self._current_act_avg

    @current_act_avg.setter
    def current_act_avg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'current_act_avg' array.array() must have the type code of 'i'"
            self._current_act_avg = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'current_act_avg' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._current_act_avg = array.array('i', value)

    @property
    def sense_vel_act(self):
        """Message field 'sense_vel_act'."""
        return self._sense_vel_act

    @sense_vel_act.setter
    def sense_vel_act(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'sense_vel_act' array.array() must have the type code of 'i'"
            self._sense_vel_act = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'sense_vel_act' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._sense_vel_act = array.array('i', value)

    @property
    def sense_vel_avg(self):
        """Message field 'sense_vel_avg'."""
        return self._sense_vel_avg

    @sense_vel_avg.setter
    def sense_vel_avg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'sense_vel_avg' array.array() must have the type code of 'i'"
            self._sense_vel_avg = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'sense_vel_avg' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._sense_vel_avg = array.array('i', value)

    @property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'error' array.array() must have the type code of 'B'"
            self._error = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'error' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._error = array.array('B', value)

    @property
    def error_history(self):
        """Message field 'error_history'."""
        return self._error_history

    @error_history.setter
    def error_history(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'error_history' array.array() must have the type code of 'H'"
            self._error_history = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'error_history' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._error_history = array.array('H', value)
