// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto__INCLUDED

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
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();

class ProbabilityGridRangeDataInserterOptions2D;

// ===================================================================

class ProbabilityGridRangeDataInserterOptions2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D) */ {
 public:
  ProbabilityGridRangeDataInserterOptions2D();
  virtual ~ProbabilityGridRangeDataInserterOptions2D();

  ProbabilityGridRangeDataInserterOptions2D(const ProbabilityGridRangeDataInserterOptions2D& from);

  inline ProbabilityGridRangeDataInserterOptions2D& operator=(const ProbabilityGridRangeDataInserterOptions2D& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProbabilityGridRangeDataInserterOptions2D& default_instance();

  void Swap(ProbabilityGridRangeDataInserterOptions2D* other);

  // implements Message ----------------------------------------------

  inline ProbabilityGridRangeDataInserterOptions2D* New() const { return New(NULL); }

  ProbabilityGridRangeDataInserterOptions2D* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProbabilityGridRangeDataInserterOptions2D& from);
  void MergeFrom(const ProbabilityGridRangeDataInserterOptions2D& from);
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
  void InternalSwap(ProbabilityGridRangeDataInserterOptions2D* other);
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

  // optional double hit_probability = 1;
  void clear_hit_probability();
  static const int kHitProbabilityFieldNumber = 1;
  double hit_probability() const;
  void set_hit_probability(double value);

  // optional double miss_probability = 2;
  void clear_miss_probability();
  static const int kMissProbabilityFieldNumber = 2;
  double miss_probability() const;
  void set_miss_probability(double value);

  // optional bool insert_free_space = 3;
  void clear_insert_free_space();
  static const int kInsertFreeSpaceFieldNumber = 3;
  bool insert_free_space() const;
  void set_insert_free_space(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  double hit_probability_;
  double miss_probability_;
  bool insert_free_space_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();

  void InitAsDefaultInstance();
  static ProbabilityGridRangeDataInserterOptions2D* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ProbabilityGridRangeDataInserterOptions2D

// optional double hit_probability = 1;
inline void ProbabilityGridRangeDataInserterOptions2D::clear_hit_probability() {
  hit_probability_ = 0;
}
inline double ProbabilityGridRangeDataInserterOptions2D::hit_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.hit_probability)
  return hit_probability_;
}
inline void ProbabilityGridRangeDataInserterOptions2D::set_hit_probability(double value) {
  
  hit_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.hit_probability)
}

// optional double miss_probability = 2;
inline void ProbabilityGridRangeDataInserterOptions2D::clear_miss_probability() {
  miss_probability_ = 0;
}
inline double ProbabilityGridRangeDataInserterOptions2D::miss_probability() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.miss_probability)
  return miss_probability_;
}
inline void ProbabilityGridRangeDataInserterOptions2D::set_miss_probability(double value) {
  
  miss_probability_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.miss_probability)
}

// optional bool insert_free_space = 3;
inline void ProbabilityGridRangeDataInserterOptions2D::clear_insert_free_space() {
  insert_free_space_ = false;
}
inline bool ProbabilityGridRangeDataInserterOptions2D::insert_free_space() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.insert_free_space)
  return insert_free_space_;
}
inline void ProbabilityGridRangeDataInserterOptions2D::set_insert_free_space(bool value) {
  
  insert_free_space_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D.insert_free_space)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto__INCLUDED