/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: sonarData.proto */

#ifndef PROTOBUF_C_sonarData_2eproto__INCLUDED
#define PROTOBUF_C_sonarData_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _SonarData__SonarData SonarData__SonarData;


/* --- enums --- */


/* --- messages --- */

/*
 * Define a message type for an array of points.
 */
struct  _SonarData__SonarData
{
  ProtobufCMessage base;
  size_t n_pointx;
  float *pointx;
  size_t n_pointy;
  float *pointy;
  size_t n_beamidx;
  float *beamidx;
};
#define SONAR_DATA__SONAR_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sonar_data__sonar_data__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL }


/* SonarData__SonarData methods */
void   sonar_data__sonar_data__init
                     (SonarData__SonarData         *message);
size_t sonar_data__sonar_data__get_packed_size
                     (const SonarData__SonarData   *message);
size_t sonar_data__sonar_data__pack
                     (const SonarData__SonarData   *message,
                      uint8_t             *out);
size_t sonar_data__sonar_data__pack_to_buffer
                     (const SonarData__SonarData   *message,
                      ProtobufCBuffer     *buffer);
SonarData__SonarData *
       sonar_data__sonar_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sonar_data__sonar_data__free_unpacked
                     (SonarData__SonarData *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SonarData__SonarData_Closure)
                 (const SonarData__SonarData *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor sonar_data__sonar_data__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_sonarData_2eproto__INCLUDED */
