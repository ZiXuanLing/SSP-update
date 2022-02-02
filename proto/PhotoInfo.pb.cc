// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PhotoInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PhotoInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ssp {

namespace {

const ::google::protobuf::Descriptor* PhotoInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PhotoInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_PhotoInfo_2eproto() {
  protobuf_AddDesc_PhotoInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "PhotoInfo.proto");
  GOOGLE_CHECK(file != NULL);
  PhotoInfo_descriptor_ = file->message_type(0);
  static const int PhotoInfo_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, verion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, last_publisher_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, last_publish_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, last_publish_message_id_),
  };
  PhotoInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PhotoInfo_descriptor_,
      PhotoInfo::default_instance_,
      PhotoInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PhotoInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PhotoInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_PhotoInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PhotoInfo_descriptor_, &PhotoInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_PhotoInfo_2eproto() {
  delete PhotoInfo::default_instance_;
  delete PhotoInfo_reflection_;
}

void protobuf_AddDesc_PhotoInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017PhotoInfo.proto\022\003ssp\"\200\001\n\tPhotoInfo\022\016\n\006"
    "verion\030\001 \001(\005\022\017\n\007user_id\030\002 \001(\005\022\026\n\016last_pu"
    "blisher\030\003 \001(\005\022\031\n\021last_publish_time\030\004 \001(\005"
    "\022\037\n\027last_publish_message_id\030\005 \001(\005", 153);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PhotoInfo.proto", &protobuf_RegisterTypes);
  PhotoInfo::default_instance_ = new PhotoInfo();
  PhotoInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_PhotoInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_PhotoInfo_2eproto {
  StaticDescriptorInitializer_PhotoInfo_2eproto() {
    protobuf_AddDesc_PhotoInfo_2eproto();
  }
} static_descriptor_initializer_PhotoInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PhotoInfo::kVerionFieldNumber;
const int PhotoInfo::kUserIdFieldNumber;
const int PhotoInfo::kLastPublisherFieldNumber;
const int PhotoInfo::kLastPublishTimeFieldNumber;
const int PhotoInfo::kLastPublishMessageIdFieldNumber;
#endif  // !_MSC_VER

PhotoInfo::PhotoInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PhotoInfo::InitAsDefaultInstance() {
}

PhotoInfo::PhotoInfo(const PhotoInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PhotoInfo::SharedCtor() {
  _cached_size_ = 0;
  verion_ = 0;
  user_id_ = 0;
  last_publisher_ = 0;
  last_publish_time_ = 0;
  last_publish_message_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PhotoInfo::~PhotoInfo() {
  SharedDtor();
}

void PhotoInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PhotoInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PhotoInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PhotoInfo_descriptor_;
}

const PhotoInfo& PhotoInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_PhotoInfo_2eproto();
  return *default_instance_;
}

PhotoInfo* PhotoInfo::default_instance_ = NULL;

PhotoInfo* PhotoInfo::New() const {
  return new PhotoInfo;
}

void PhotoInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verion_ = 0;
    user_id_ = 0;
    last_publisher_ = 0;
    last_publish_time_ = 0;
    last_publish_message_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PhotoInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 verion = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &verion_)));
          set_has_verion();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }

      // optional int32 user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_last_publisher;
        break;
      }

      // optional int32 last_publisher = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_publisher:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_publisher_)));
          set_has_last_publisher();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_last_publish_time;
        break;
      }

      // optional int32 last_publish_time = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_publish_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_publish_time_)));
          set_has_last_publish_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_last_publish_message_id;
        break;
      }

      // optional int32 last_publish_message_id = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_publish_message_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_publish_message_id_)));
          set_has_last_publish_message_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PhotoInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->verion(), output);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // optional int32 last_publisher = 3;
  if (has_last_publisher()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->last_publisher(), output);
  }

  // optional int32 last_publish_time = 4;
  if (has_last_publish_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->last_publish_time(), output);
  }

  // optional int32 last_publish_message_id = 5;
  if (has_last_publish_message_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->last_publish_message_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PhotoInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->verion(), target);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }

  // optional int32 last_publisher = 3;
  if (has_last_publisher()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->last_publisher(), target);
  }

  // optional int32 last_publish_time = 4;
  if (has_last_publish_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->last_publish_time(), target);
  }

  // optional int32 last_publish_message_id = 5;
  if (has_last_publish_message_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->last_publish_message_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PhotoInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 verion = 1;
    if (has_verion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->verion());
    }

    // optional int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }

    // optional int32 last_publisher = 3;
    if (has_last_publisher()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_publisher());
    }

    // optional int32 last_publish_time = 4;
    if (has_last_publish_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_publish_time());
    }

    // optional int32 last_publish_message_id = 5;
    if (has_last_publish_message_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_publish_message_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PhotoInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PhotoInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PhotoInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PhotoInfo::MergeFrom(const PhotoInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verion()) {
      set_verion(from.verion());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_last_publisher()) {
      set_last_publisher(from.last_publisher());
    }
    if (from.has_last_publish_time()) {
      set_last_publish_time(from.last_publish_time());
    }
    if (from.has_last_publish_message_id()) {
      set_last_publish_message_id(from.last_publish_message_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PhotoInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PhotoInfo::CopyFrom(const PhotoInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PhotoInfo::IsInitialized() const {

  return true;
}

void PhotoInfo::Swap(PhotoInfo* other) {
  if (other != this) {
    std::swap(verion_, other->verion_);
    std::swap(user_id_, other->user_id_);
    std::swap(last_publisher_, other->last_publisher_);
    std::swap(last_publish_time_, other->last_publish_time_);
    std::swap(last_publish_message_id_, other->last_publish_message_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PhotoInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PhotoInfo_descriptor_;
  metadata.reflection = PhotoInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

// @@protoc_insertion_point(global_scope)