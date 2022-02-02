// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessType.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessType.pb.h"

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

const ::google::protobuf::Descriptor* RegReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RegReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* RegRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RegRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessType_2eproto() {
  protobuf_AddDesc_MessType_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessType.proto");
  GOOGLE_CHECK(file != NULL);
  RegReq_descriptor_ = file->message_type(0);
  static const int RegReq_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, verion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, mess_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, user_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, password_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, from_),
  };
  RegReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RegReq_descriptor_,
      RegReq::default_instance_,
      RegReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RegReq));
  RegRsp_descriptor_ = file->message_type(1);
  static const int RegRsp_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, verion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, mess_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, ret_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, user_name_),
  };
  RegRsp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RegRsp_descriptor_,
      RegRsp::default_instance_,
      RegRsp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RegRsp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RegRsp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessType_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RegReq_descriptor_, &RegReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RegRsp_descriptor_, &RegRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessType_2eproto() {
  delete RegReq::default_instance_;
  delete RegReq_reflection_;
  delete RegRsp::default_instance_;
  delete RegRsp_reflection_;
}

void protobuf_AddDesc_MessType_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016MessType.proto\022\003ssp\"^\n\006RegReq\022\016\n\006verio"
    "n\030\001 \001(\005\022\021\n\tmess_type\030\002 \001(\005\022\021\n\tuser_name\030"
    "\003 \001(\t\022\020\n\010password\030\004 \001(\t\022\014\n\004from\030\005 \001(\005\"\\\n"
    "\006RegRsp\022\016\n\006verion\030\001 \001(\005\022\021\n\tmess_type\030\002 \001"
    "(\005\022\013\n\003ret\030\003 \001(\005\022\017\n\007user_id\030\004 \001(\005\022\021\n\tuser"
    "_name\030\005 \001(\t", 211);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessType.proto", &protobuf_RegisterTypes);
  RegReq::default_instance_ = new RegReq();
  RegRsp::default_instance_ = new RegRsp();
  RegReq::default_instance_->InitAsDefaultInstance();
  RegRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessType_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessType_2eproto {
  StaticDescriptorInitializer_MessType_2eproto() {
    protobuf_AddDesc_MessType_2eproto();
  }
} static_descriptor_initializer_MessType_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RegReq::kVerionFieldNumber;
const int RegReq::kMessTypeFieldNumber;
const int RegReq::kUserNameFieldNumber;
const int RegReq::kPasswordFieldNumber;
const int RegReq::kFromFieldNumber;
#endif  // !_MSC_VER

RegReq::RegReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RegReq::InitAsDefaultInstance() {
}

RegReq::RegReq(const RegReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RegReq::SharedCtor() {
  _cached_size_ = 0;
  verion_ = 0;
  mess_type_ = 0;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  from_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RegReq::~RegReq() {
  SharedDtor();
}

void RegReq::SharedDtor() {
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    delete user_name_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void RegReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RegReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RegReq_descriptor_;
}

const RegReq& RegReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessType_2eproto();
  return *default_instance_;
}

RegReq* RegReq::default_instance_ = NULL;

RegReq* RegReq::New() const {
  return new RegReq;
}

void RegReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verion_ = 0;
    mess_type_ = 0;
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::kEmptyString) {
        user_name_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
    from_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RegReq::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_mess_type;
        break;
      }

      // optional int32 mess_type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mess_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mess_type_)));
          set_has_mess_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_user_name;
        break;
      }

      // optional string user_name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->user_name().data(), this->user_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_password;
        break;
      }

      // optional string password = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_from;
        break;
      }

      // optional int32 from = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_from:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &from_)));
          set_has_from();
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

void RegReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->verion(), output);
  }

  // optional int32 mess_type = 2;
  if (has_mess_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->mess_type(), output);
  }

  // optional string user_name = 3;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user_name().data(), this->user_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->user_name(), output);
  }

  // optional string password = 4;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->password(), output);
  }

  // optional int32 from = 5;
  if (has_from()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->from(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RegReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->verion(), target);
  }

  // optional int32 mess_type = 2;
  if (has_mess_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->mess_type(), target);
  }

  // optional string user_name = 3;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user_name().data(), this->user_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->user_name(), target);
  }

  // optional string password = 4;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->password(), target);
  }

  // optional int32 from = 5;
  if (has_from()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->from(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RegReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 verion = 1;
    if (has_verion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->verion());
    }

    // optional int32 mess_type = 2;
    if (has_mess_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mess_type());
    }

    // optional string user_name = 3;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // optional string password = 4;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // optional int32 from = 5;
    if (has_from()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->from());
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

void RegReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RegReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RegReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RegReq::MergeFrom(const RegReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verion()) {
      set_verion(from.verion());
    }
    if (from.has_mess_type()) {
      set_mess_type(from.mess_type());
    }
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_from()) {
      set_from(from.from());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RegReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegReq::CopyFrom(const RegReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegReq::IsInitialized() const {

  return true;
}

void RegReq::Swap(RegReq* other) {
  if (other != this) {
    std::swap(verion_, other->verion_);
    std::swap(mess_type_, other->mess_type_);
    std::swap(user_name_, other->user_name_);
    std::swap(password_, other->password_);
    std::swap(from_, other->from_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RegReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RegReq_descriptor_;
  metadata.reflection = RegReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RegRsp::kVerionFieldNumber;
const int RegRsp::kMessTypeFieldNumber;
const int RegRsp::kRetFieldNumber;
const int RegRsp::kUserIdFieldNumber;
const int RegRsp::kUserNameFieldNumber;
#endif  // !_MSC_VER

RegRsp::RegRsp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RegRsp::InitAsDefaultInstance() {
}

RegRsp::RegRsp(const RegRsp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RegRsp::SharedCtor() {
  _cached_size_ = 0;
  verion_ = 0;
  mess_type_ = 0;
  ret_ = 0;
  user_id_ = 0;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RegRsp::~RegRsp() {
  SharedDtor();
}

void RegRsp::SharedDtor() {
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    delete user_name_;
  }
  if (this != default_instance_) {
  }
}

void RegRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RegRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RegRsp_descriptor_;
}

const RegRsp& RegRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessType_2eproto();
  return *default_instance_;
}

RegRsp* RegRsp::default_instance_ = NULL;

RegRsp* RegRsp::New() const {
  return new RegRsp;
}

void RegRsp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verion_ = 0;
    mess_type_ = 0;
    ret_ = 0;
    user_id_ = 0;
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::kEmptyString) {
        user_name_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RegRsp::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_mess_type;
        break;
      }

      // optional int32 mess_type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mess_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mess_type_)));
          set_has_mess_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_ret;
        break;
      }

      // optional int32 ret = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ret:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ret_)));
          set_has_ret();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_user_id;
        break;
      }

      // optional int32 user_id = 4;
      case 4: {
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
        if (input->ExpectTag(42)) goto parse_user_name;
        break;
      }

      // optional string user_name = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_user_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->user_name().data(), this->user_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void RegRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->verion(), output);
  }

  // optional int32 mess_type = 2;
  if (has_mess_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->mess_type(), output);
  }

  // optional int32 ret = 3;
  if (has_ret()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->ret(), output);
  }

  // optional int32 user_id = 4;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->user_id(), output);
  }

  // optional string user_name = 5;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user_name().data(), this->user_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->user_name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RegRsp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->verion(), target);
  }

  // optional int32 mess_type = 2;
  if (has_mess_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->mess_type(), target);
  }

  // optional int32 ret = 3;
  if (has_ret()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->ret(), target);
  }

  // optional int32 user_id = 4;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->user_id(), target);
  }

  // optional string user_name = 5;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user_name().data(), this->user_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->user_name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RegRsp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 verion = 1;
    if (has_verion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->verion());
    }

    // optional int32 mess_type = 2;
    if (has_mess_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mess_type());
    }

    // optional int32 ret = 3;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ret());
    }

    // optional int32 user_id = 4;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }

    // optional string user_name = 5;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
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

void RegRsp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RegRsp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RegRsp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RegRsp::MergeFrom(const RegRsp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verion()) {
      set_verion(from.verion());
    }
    if (from.has_mess_type()) {
      set_mess_type(from.mess_type());
    }
    if (from.has_ret()) {
      set_ret(from.ret());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RegRsp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegRsp::CopyFrom(const RegRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegRsp::IsInitialized() const {

  return true;
}

void RegRsp::Swap(RegRsp* other) {
  if (other != this) {
    std::swap(verion_, other->verion_);
    std::swap(mess_type_, other->mess_type_);
    std::swap(ret_, other->ret_);
    std::swap(user_id_, other->user_id_);
    std::swap(user_name_, other->user_name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RegRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RegRsp_descriptor_;
  metadata.reflection = RegRsp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

// @@protoc_insertion_point(global_scope)
