/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sonarData.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "sonarData.pb-c.h"
void   sonar_data__sonar_data__init
                     (SonarData__SonarData         *message)
{
  static const SonarData__SonarData init_value = SONAR_DATA__SONAR_DATA__INIT;
  *message = init_value;
}
size_t sonar_data__sonar_data__get_packed_size
                     (const SonarData__SonarData *message)
{
  assert(message->base.descriptor == &sonar_data__sonar_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t sonar_data__sonar_data__pack
                     (const SonarData__SonarData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &sonar_data__sonar_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t sonar_data__sonar_data__pack_to_buffer
                     (const SonarData__SonarData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &sonar_data__sonar_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SonarData__SonarData *
       sonar_data__sonar_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SonarData__SonarData *)
     protobuf_c_message_unpack (&sonar_data__sonar_data__descriptor,
                                allocator, len, data);
}
void   sonar_data__sonar_data__free_unpacked
                     (SonarData__SonarData *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &sonar_data__sonar_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor sonar_data__sonar_data__field_descriptors[4] =
{
  {
    "pointX",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(SonarData__SonarData, n_pointx),
    offsetof(SonarData__SonarData, pointx),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pointY",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(SonarData__SonarData, n_pointy),
    offsetof(SonarData__SonarData, pointy),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "beamIdx",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    offsetof(SonarData__SonarData, n_beamidx),
    offsetof(SonarData__SonarData, beamidx),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "quality",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(SonarData__SonarData, n_quality),
    offsetof(SonarData__SonarData, quality),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned sonar_data__sonar_data__field_indices_by_name[] = {
  2,   /* field[2] = beamIdx */
  0,   /* field[0] = pointX */
  1,   /* field[1] = pointY */
  3,   /* field[3] = quality */
};
static const ProtobufCIntRange sonar_data__sonar_data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor sonar_data__sonar_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "sonarData.sonarData",
  "SonarData",
  "SonarData__SonarData",
  "sonarData",
  sizeof(SonarData__SonarData),
  4,
  sonar_data__sonar_data__field_descriptors,
  sonar_data__sonar_data__field_indices_by_name,
  1,  sonar_data__sonar_data__number_ranges,
  (ProtobufCMessageInit) sonar_data__sonar_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
