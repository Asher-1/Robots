// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/range_data_inserter_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/range_data_inserter_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* RangeDataInserterOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RangeDataInserterOptions_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* RangeDataInserterOptions_RangeDataInserterType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/range_data_inserter_options.proto");
  GOOGLE_CHECK(file != NULL);
  RangeDataInserterOptions_descriptor_ = file->message_type(0);
  static const int RangeDataInserterOptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions, range_data_inserter_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions, probability_grid_range_data_inserter_options_2d_),
  };
  RangeDataInserterOptions_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RangeDataInserterOptions_descriptor_,
      RangeDataInserterOptions::default_instance_,
      RangeDataInserterOptions_offsets_,
      -1,
      -1,
      -1,
      sizeof(RangeDataInserterOptions),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RangeDataInserterOptions, _is_default_instance_));
  RangeDataInserterOptions_RangeDataInserterType_descriptor_ = RangeDataInserterOptions_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RangeDataInserterOptions_descriptor_, &RangeDataInserterOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() {
  delete RangeDataInserterOptions::default_instance_;
  delete RangeDataInserterOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fprobability_5fgrid_5frange_5fdata_5finserter_5foptions_5f2d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n<cartographer/mapping/proto/range_data_"
    "inserter_options.proto\022\032cartographer.map"
    "ping.proto\032Scartographer/mapping/proto/2"
    "d/probability_grid_range_data_inserter_o"
    "ptions_2d.proto\"\331\002\n\030RangeDataInserterOpt"
    "ions\022l\n\030range_data_inserter_type\030\001 \001(\0162J"
    ".cartographer.mapping.proto.RangeDataIns"
    "erterOptions.RangeDataInserterType\022~\n/pr"
    "obability_grid_range_data_inserter_optio"
    "ns_2d\030\002 \001(\0132E.cartographer.mapping.proto"
    ".ProbabilityGridRangeDataInserterOptions"
    "2D\"O\n\025RangeDataInserterType\022\024\n\020INVALID_I"
    "NSERTER\020\000\022 \n\034PROBABILITY_GRID_INSERTER_2"
    "D\020\001b\006proto3", 531);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/range_data_inserter_options.proto", &protobuf_RegisterTypes);
  RangeDataInserterOptions::default_instance_ = new RangeDataInserterOptions();
  RangeDataInserterOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* RangeDataInserterOptions_RangeDataInserterType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RangeDataInserterOptions_RangeDataInserterType_descriptor_;
}
bool RangeDataInserterOptions_RangeDataInserterType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::INVALID_INSERTER;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::PROBABILITY_GRID_INSERTER_2D;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::RangeDataInserterType_MIN;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::RangeDataInserterType_MAX;
const int RangeDataInserterOptions::RangeDataInserterType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RangeDataInserterOptions::kRangeDataInserterTypeFieldNumber;
const int RangeDataInserterOptions::kProbabilityGridRangeDataInserterOptions2DFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RangeDataInserterOptions::RangeDataInserterOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.RangeDataInserterOptions)
}

void RangeDataInserterOptions::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  probability_grid_range_data_inserter_options_2d_ = const_cast< ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D*>(&::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D::default_instance());
}

RangeDataInserterOptions::RangeDataInserterOptions(const RangeDataInserterOptions& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.RangeDataInserterOptions)
}

void RangeDataInserterOptions::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  range_data_inserter_type_ = 0;
  probability_grid_range_data_inserter_options_2d_ = NULL;
}

RangeDataInserterOptions::~RangeDataInserterOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.RangeDataInserterOptions)
  SharedDtor();
}

void RangeDataInserterOptions::SharedDtor() {
  if (this != default_instance_) {
    delete probability_grid_range_data_inserter_options_2d_;
  }
}

void RangeDataInserterOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RangeDataInserterOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RangeDataInserterOptions_descriptor_;
}

const RangeDataInserterOptions& RangeDataInserterOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  return *default_instance_;
}

RangeDataInserterOptions* RangeDataInserterOptions::default_instance_ = NULL;

RangeDataInserterOptions* RangeDataInserterOptions::New(::google::protobuf::Arena* arena) const {
  RangeDataInserterOptions* n = new RangeDataInserterOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RangeDataInserterOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.RangeDataInserterOptions)
  range_data_inserter_type_ = 0;
  if (GetArenaNoVirtual() == NULL && probability_grid_range_data_inserter_options_2d_ != NULL) delete probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = NULL;
}

bool RangeDataInserterOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.RangeDataInserterOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_range_data_inserter_type(static_cast< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_probability_grid_range_data_inserter_options_2d;
        break;
      }

      // optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
      case 2: {
        if (tag == 18) {
         parse_probability_grid_range_data_inserter_options_2d:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_probability_grid_range_data_inserter_options_2d()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.RangeDataInserterOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.RangeDataInserterOptions)
  return false;
#undef DO_
}

void RangeDataInserterOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.RangeDataInserterOptions)
  // optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->range_data_inserter_type(), output);
  }

  // optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->probability_grid_range_data_inserter_options_2d_, output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.RangeDataInserterOptions)
}

::google::protobuf::uint8* RangeDataInserterOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.RangeDataInserterOptions)
  // optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->range_data_inserter_type(), target);
  }

  // optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->probability_grid_range_data_inserter_options_2d_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.RangeDataInserterOptions)
  return target;
}

int RangeDataInserterOptions::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.RangeDataInserterOptions)
  int total_size = 0;

  // optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  if (this->range_data_inserter_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->range_data_inserter_type());
  }

  // optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  if (this->has_probability_grid_range_data_inserter_options_2d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->probability_grid_range_data_inserter_options_2d_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RangeDataInserterOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RangeDataInserterOptions* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RangeDataInserterOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.RangeDataInserterOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.RangeDataInserterOptions)
    MergeFrom(*source);
  }
}

void RangeDataInserterOptions::MergeFrom(const RangeDataInserterOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.range_data_inserter_type() != 0) {
    set_range_data_inserter_type(from.range_data_inserter_type());
  }
  if (from.has_probability_grid_range_data_inserter_options_2d()) {
    mutable_probability_grid_range_data_inserter_options_2d()->::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D::MergeFrom(from.probability_grid_range_data_inserter_options_2d());
  }
}

void RangeDataInserterOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RangeDataInserterOptions::CopyFrom(const RangeDataInserterOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.RangeDataInserterOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RangeDataInserterOptions::IsInitialized() const {

  return true;
}

void RangeDataInserterOptions::Swap(RangeDataInserterOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RangeDataInserterOptions::InternalSwap(RangeDataInserterOptions* other) {
  std::swap(range_data_inserter_type_, other->range_data_inserter_type_);
  std::swap(probability_grid_range_data_inserter_options_2d_, other->probability_grid_range_data_inserter_options_2d_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RangeDataInserterOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RangeDataInserterOptions_descriptor_;
  metadata.reflection = RangeDataInserterOptions_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RangeDataInserterOptions

// optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
void RangeDataInserterOptions::clear_range_data_inserter_type() {
  range_data_inserter_type_ = 0;
}
 ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::range_data_inserter_type() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions.range_data_inserter_type)
  return static_cast< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType >(range_data_inserter_type_);
}
 void RangeDataInserterOptions::set_range_data_inserter_type(::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType value) {
  
  range_data_inserter_type_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions.range_data_inserter_type)
}

// optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
bool RangeDataInserterOptions::has_probability_grid_range_data_inserter_options_2d() const {
  return !_is_default_instance_ && probability_grid_range_data_inserter_options_2d_ != NULL;
}
void RangeDataInserterOptions::clear_probability_grid_range_data_inserter_options_2d() {
  if (GetArenaNoVirtual() == NULL && probability_grid_range_data_inserter_options_2d_ != NULL) delete probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = NULL;
}
const ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D& RangeDataInserterOptions::probability_grid_range_data_inserter_options_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  return probability_grid_range_data_inserter_options_2d_ != NULL ? *probability_grid_range_data_inserter_options_2d_ : *default_instance_->probability_grid_range_data_inserter_options_2d_;
}
::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* RangeDataInserterOptions::mutable_probability_grid_range_data_inserter_options_2d() {
  
  if (probability_grid_range_data_inserter_options_2d_ == NULL) {
    probability_grid_range_data_inserter_options_2d_ = new ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  return probability_grid_range_data_inserter_options_2d_;
}
::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* RangeDataInserterOptions::release_probability_grid_range_data_inserter_options_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* temp = probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = NULL;
  return temp;
}
void RangeDataInserterOptions::set_allocated_probability_grid_range_data_inserter_options_2d(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* probability_grid_range_data_inserter_options_2d) {
  delete probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = probability_grid_range_data_inserter_options_2d;
  if (probability_grid_range_data_inserter_options_2d) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
