// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/connected_components.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

class ConnectedComponents;
class ConnectedComponents_ConnectedComponent;

// ===================================================================

class ConnectedComponents_ConnectedComponent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent) */ {
 public:
  ConnectedComponents_ConnectedComponent();
  virtual ~ConnectedComponents_ConnectedComponent();

  ConnectedComponents_ConnectedComponent(const ConnectedComponents_ConnectedComponent& from);

  inline ConnectedComponents_ConnectedComponent& operator=(const ConnectedComponents_ConnectedComponent& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectedComponents_ConnectedComponent& default_instance();

  void Swap(ConnectedComponents_ConnectedComponent* other);

  // implements Message ----------------------------------------------

  inline ConnectedComponents_ConnectedComponent* New() const { return New(NULL); }

  ConnectedComponents_ConnectedComponent* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectedComponents_ConnectedComponent& from);
  void MergeFrom(const ConnectedComponents_ConnectedComponent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ConnectedComponents_ConnectedComponent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 trajectory_id = 1;
  int trajectory_id_size() const;
  void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  ::google::protobuf::int32 trajectory_id(int index) const;
  void set_trajectory_id(int index, ::google::protobuf::int32 value);
  void add_trajectory_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      trajectory_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_trajectory_id();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > trajectory_id_;
  mutable int _trajectory_id_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

  void InitAsDefaultInstance();
  static ConnectedComponents_ConnectedComponent* default_instance_;
};
// -------------------------------------------------------------------

class ConnectedComponents : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.ConnectedComponents) */ {
 public:
  ConnectedComponents();
  virtual ~ConnectedComponents();

  ConnectedComponents(const ConnectedComponents& from);

  inline ConnectedComponents& operator=(const ConnectedComponents& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectedComponents& default_instance();

  void Swap(ConnectedComponents* other);

  // implements Message ----------------------------------------------

  inline ConnectedComponents* New() const { return New(NULL); }

  ConnectedComponents* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectedComponents& from);
  void MergeFrom(const ConnectedComponents& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ConnectedComponents* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef ConnectedComponents_ConnectedComponent ConnectedComponent;

  // accessors -------------------------------------------------------

  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  int connected_component_size() const;
  void clear_connected_component();
  static const int kConnectedComponentFieldNumber = 1;
  const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& connected_component(int index) const;
  ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* mutable_connected_component(int index);
  ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* add_connected_component();
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
      mutable_connected_component();
  const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
      connected_component() const;

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent > connected_component_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

  void InitAsDefaultInstance();
  static ConnectedComponents* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ConnectedComponents_ConnectedComponent

// repeated int32 trajectory_id = 1;
inline int ConnectedComponents_ConnectedComponent::trajectory_id_size() const {
  return trajectory_id_.size();
}
inline void ConnectedComponents_ConnectedComponent::clear_trajectory_id() {
  trajectory_id_.Clear();
}
inline ::google::protobuf::int32 ConnectedComponents_ConnectedComponent::trajectory_id(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return trajectory_id_.Get(index);
}
inline void ConnectedComponents_ConnectedComponent::set_trajectory_id(int index, ::google::protobuf::int32 value) {
  trajectory_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline void ConnectedComponents_ConnectedComponent::add_trajectory_id(::google::protobuf::int32 value) {
  trajectory_id_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ConnectedComponents_ConnectedComponent::trajectory_id() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return trajectory_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ConnectedComponents_ConnectedComponent::mutable_trajectory_id() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return &trajectory_id_;
}

// -------------------------------------------------------------------

// ConnectedComponents

// repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
inline int ConnectedComponents::connected_component_size() const {
  return connected_component_.size();
}
inline void ConnectedComponents::clear_connected_component() {
  connected_component_.Clear();
}
inline const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& ConnectedComponents::connected_component(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Get(index);
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::mutable_connected_component(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Mutable(index);
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::add_connected_component() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
ConnectedComponents::mutable_connected_component() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return &connected_component_;
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
ConnectedComponents::connected_component() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED
