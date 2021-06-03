# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cmr_msgs:srv/MaxonControlword.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MaxonControlword_Request(type):
    """Metaclass of message 'MaxonControlword_Request'."""

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
                'cmr_msgs.srv.MaxonControlword_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__maxon_controlword__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__maxon_controlword__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__maxon_controlword__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__maxon_controlword__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__maxon_controlword__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MaxonControlword_Request(metaclass=Metaclass_MaxonControlword_Request):
    """Message class 'MaxonControlword_Request'."""

    __slots__ = [
        '_node_id',
        '_switch_on',
        '_enable_voltage',
        '_quick_stop',
        '_enable_operation',
        '_fault_reset',
        '_halt',
    ]

    _fields_and_field_types = {
        'node_id': 'int8',
        'switch_on': 'boolean',
        'enable_voltage': 'boolean',
        'quick_stop': 'boolean',
        'enable_operation': 'boolean',
        'fault_reset': 'boolean',
        'halt': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_id = kwargs.get('node_id', int())
        self.switch_on = kwargs.get('switch_on', bool())
        self.enable_voltage = kwargs.get('enable_voltage', bool())
        self.quick_stop = kwargs.get('quick_stop', bool())
        self.enable_operation = kwargs.get('enable_operation', bool())
        self.fault_reset = kwargs.get('fault_reset', bool())
        self.halt = kwargs.get('halt', bool())

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
        if self.node_id != other.node_id:
            return False
        if self.switch_on != other.switch_on:
            return False
        if self.enable_voltage != other.enable_voltage:
            return False
        if self.quick_stop != other.quick_stop:
            return False
        if self.enable_operation != other.enable_operation:
            return False
        if self.fault_reset != other.fault_reset:
            return False
        if self.halt != other.halt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'node_id' field must be an integer in [-128, 127]"
        self._node_id = value

    @property
    def switch_on(self):
        """Message field 'switch_on'."""
        return self._switch_on

    @switch_on.setter
    def switch_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'switch_on' field must be of type 'bool'"
        self._switch_on = value

    @property
    def enable_voltage(self):
        """Message field 'enable_voltage'."""
        return self._enable_voltage

    @enable_voltage.setter
    def enable_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_voltage' field must be of type 'bool'"
        self._enable_voltage = value

    @property
    def quick_stop(self):
        """Message field 'quick_stop'."""
        return self._quick_stop

    @quick_stop.setter
    def quick_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quick_stop' field must be of type 'bool'"
        self._quick_stop = value

    @property
    def enable_operation(self):
        """Message field 'enable_operation'."""
        return self._enable_operation

    @enable_operation.setter
    def enable_operation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_operation' field must be of type 'bool'"
        self._enable_operation = value

    @property
    def fault_reset(self):
        """Message field 'fault_reset'."""
        return self._fault_reset

    @fault_reset.setter
    def fault_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fault_reset' field must be of type 'bool'"
        self._fault_reset = value

    @property
    def halt(self):
        """Message field 'halt'."""
        return self._halt

    @halt.setter
    def halt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'halt' field must be of type 'bool'"
        self._halt = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MaxonControlword_Response(type):
    """Metaclass of message 'MaxonControlword_Response'."""

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
                'cmr_msgs.srv.MaxonControlword_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__maxon_controlword__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__maxon_controlword__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__maxon_controlword__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__maxon_controlword__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__maxon_controlword__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MaxonControlword_Response(metaclass=Metaclass_MaxonControlword_Response):
    """Message class 'MaxonControlword_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', bool())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'response' field must be of type 'bool'"
        self._response = value


class Metaclass_MaxonControlword(type):
    """Metaclass of service 'MaxonControlword'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cmr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cmr_msgs.srv.MaxonControlword')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__maxon_controlword

            from cmr_msgs.srv import _maxon_controlword
            if _maxon_controlword.Metaclass_MaxonControlword_Request._TYPE_SUPPORT is None:
                _maxon_controlword.Metaclass_MaxonControlword_Request.__import_type_support__()
            if _maxon_controlword.Metaclass_MaxonControlword_Response._TYPE_SUPPORT is None:
                _maxon_controlword.Metaclass_MaxonControlword_Response.__import_type_support__()


class MaxonControlword(metaclass=Metaclass_MaxonControlword):
    from cmr_msgs.srv._maxon_controlword import MaxonControlword_Request as Request
    from cmr_msgs.srv._maxon_controlword import MaxonControlword_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
