# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: base/job_desc.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from base import task_desc_pb2 as base_dot_task__desc__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='base/job_desc.proto',
  package='firmament',
  syntax='proto3',
  serialized_pb=_b('\n\x13\x62\x61se/job_desc.proto\x12\tfirmament\x1a\x14\x62\x61se/task_desc.proto\"\x83\x02\n\rJobDescriptor\x12\x0c\n\x04uuid\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x30\n\x05state\x18\x03 \x01(\x0e\x32!.firmament.JobDescriptor.JobState\x12,\n\troot_task\x18\x04 \x01(\x0b\x32\x19.firmament.TaskDescriptor\x12\x12\n\noutput_ids\x18\x05 \x03(\x0c\"b\n\x08JobState\x12\x07\n\x03NEW\x10\x00\x12\x0b\n\x07\x43REATED\x10\x01\x12\x0b\n\x07RUNNING\x10\x02\x12\r\n\tCOMPLETED\x10\x03\x12\n\n\x06\x46\x41ILED\x10\x04\x12\x0b\n\x07\x41\x42ORTED\x10\x05\x12\x0b\n\x07UNKNOWN\x10\x06\x62\x06proto3')
  ,
  dependencies=[base_dot_task__desc__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_JOBDESCRIPTOR_JOBSTATE = _descriptor.EnumDescriptor(
  name='JobState',
  full_name='firmament.JobDescriptor.JobState',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NEW', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CREATED', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RUNNING', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COMPLETED', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FAILED', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ABORTED', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=6, number=6,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=218,
  serialized_end=316,
)
_sym_db.RegisterEnumDescriptor(_JOBDESCRIPTOR_JOBSTATE)


_JOBDESCRIPTOR = _descriptor.Descriptor(
  name='JobDescriptor',
  full_name='firmament.JobDescriptor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='uuid', full_name='firmament.JobDescriptor.uuid', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='firmament.JobDescriptor.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='state', full_name='firmament.JobDescriptor.state', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='root_task', full_name='firmament.JobDescriptor.root_task', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='output_ids', full_name='firmament.JobDescriptor.output_ids', index=4,
      number=5, type=12, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _JOBDESCRIPTOR_JOBSTATE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=57,
  serialized_end=316,
)

_JOBDESCRIPTOR.fields_by_name['state'].enum_type = _JOBDESCRIPTOR_JOBSTATE
_JOBDESCRIPTOR.fields_by_name['root_task'].message_type = base_dot_task__desc__pb2._TASKDESCRIPTOR
_JOBDESCRIPTOR_JOBSTATE.containing_type = _JOBDESCRIPTOR
DESCRIPTOR.message_types_by_name['JobDescriptor'] = _JOBDESCRIPTOR

JobDescriptor = _reflection.GeneratedProtocolMessageType('JobDescriptor', (_message.Message,), dict(
  DESCRIPTOR = _JOBDESCRIPTOR,
  __module__ = 'base.job_desc_pb2'
  # @@protoc_insertion_point(class_scope:firmament.JobDescriptor)
  ))
_sym_db.RegisterMessage(JobDescriptor)


# @@protoc_insertion_point(module_scope)
