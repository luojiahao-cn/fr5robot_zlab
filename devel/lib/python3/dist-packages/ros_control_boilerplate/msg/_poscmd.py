# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ros_control_boilerplate/poscmd.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class poscmd(genpy.Message):
  _md5sum = "d52264d0965d62e7c180d35534e09146"
  _type = "ros_control_boilerplate/poscmd"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """uint16 cmd
uint16[6] cntlwd
int32[6] tarpos
uint16[6] tolerant"""
  __slots__ = ['cmd','cntlwd','tarpos','tolerant']
  _slot_types = ['uint16','uint16[6]','int32[6]','uint16[6]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmd,cntlwd,tarpos,tolerant

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(poscmd, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.cmd is None:
        self.cmd = 0
      if self.cntlwd is None:
        self.cntlwd = [0] * 6
      if self.tarpos is None:
        self.tarpos = [0] * 6
      if self.tolerant is None:
        self.tolerant = [0] * 6
    else:
      self.cmd = 0
      self.cntlwd = [0] * 6
      self.tarpos = [0] * 6
      self.tolerant = [0] * 6

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.cmd
      buff.write(_get_struct_H().pack(_x))
      buff.write(_get_struct_6H().pack(*self.cntlwd))
      buff.write(_get_struct_6i().pack(*self.tarpos))
      buff.write(_get_struct_6H().pack(*self.tolerant))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 2
      (self.cmd,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 12
      self.cntlwd = _get_struct_6H().unpack(str[start:end])
      start = end
      end += 24
      self.tarpos = _get_struct_6i().unpack(str[start:end])
      start = end
      end += 12
      self.tolerant = _get_struct_6H().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.cmd
      buff.write(_get_struct_H().pack(_x))
      buff.write(self.cntlwd.tostring())
      buff.write(self.tarpos.tostring())
      buff.write(self.tolerant.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 2
      (self.cmd,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 12
      self.cntlwd = numpy.frombuffer(str[start:end], dtype=numpy.uint16, count=6)
      start = end
      end += 24
      self.tarpos = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=6)
      start = end
      end += 12
      self.tolerant = numpy.frombuffer(str[start:end], dtype=numpy.uint16, count=6)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6H = None
def _get_struct_6H():
    global _struct_6H
    if _struct_6H is None:
        _struct_6H = struct.Struct("<6H")
    return _struct_6H
_struct_6i = None
def _get_struct_6i():
    global _struct_6i
    if _struct_6i is None:
        _struct_6i = struct.Struct("<6i")
    return _struct_6i
_struct_H = None
def _get_struct_H():
    global _struct_H
    if _struct_H is None:
        _struct_H = struct.Struct("<H")
    return _struct_H
