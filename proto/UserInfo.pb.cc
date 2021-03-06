// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserInfo.pb.h"

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

const ::google::protobuf::Descriptor* UserInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserInfo_2eproto() {
  protobuf_AddDesc_UserInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserInfo.proto");
  GOOGLE_CHECK(file != NULL);
  UserInfo_descriptor_ = file->message_type(0);
  static const int UserInfo_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, verion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, user_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, nick_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, reg_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, from_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, login_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, last_login_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, fresh_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, password_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, logout_time_),
  };
  UserInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserInfo_descriptor_,
      UserInfo::default_instance_,
      UserInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserInfo_descriptor_, &UserInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserInfo_2eproto() {
  delete UserInfo::default_instance_;
  delete UserInfo_reflection_;
}

void protobuf_AddDesc_UserInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016UserInfo.proto\022\003ssp\"\331\001\n\010UserInfo\022\016\n\006ve"
    "rion\030\001 \001(\005\022\017\n\007user_id\030\002 \001(\005\022\021\n\tuser_name"
    "\030\003 \001(\t\022\021\n\tnick_name\030\004 \001(\t\022\020\n\010reg_time\030\005 "
    "\001(\005\022\014\n\004from\030\006 \001(\005\022\022\n\nlogin_time\030\007 \001(\005\022\027\n"
    "\017last_login_time\030\010 \001(\005\022\022\n\nfresh_time\030\t \001"
    "(\005\022\020\n\010password\030\n \001(\t\022\023\n\013logout_time\030\013 \001("
    "\005", 241);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserInfo.proto", &protobuf_RegisterTypes);
  UserInfo::default_instance_ = new UserInfo();
  UserInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserInfo_2eproto {
  StaticDescriptorInitializer_UserInfo_2eproto() {
    protobuf_AddDesc_UserInfo_2eproto();
  }
} static_descriptor_initializer_UserInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UserInfo::kVerionFieldNumber;
const int UserInfo::kUserIdFieldNumber;
const int UserInfo::kUserNameFieldNumber;
const int UserInfo::kNickNameFieldNumber;
const int UserInfo::kRegTimeFieldNumber;
const int UserInfo::kFromFieldNumber;
const int UserInfo::kLoginTimeFieldNumber;
const int UserInfo::kLastLoginTimeFieldNumber;
const int UserInfo::kFreshTimeFieldNumber;
const int UserInfo::kPasswordFieldNumber;
const int UserInfo::kLogoutTimeFieldNumber;
#endif  // !_MSC_VER

UserInfo::UserInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserInfo::InitAsDefaultInstance() {
}

UserInfo::UserInfo(const UserInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserInfo::SharedCtor() {
  _cached_size_ = 0;
  verion_ = 0;
  user_id_ = 0;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  reg_time_ = 0;
  from_ = 0;
  login_time_ = 0;
  last_login_time_ = 0;
  fresh_time_ = 0;
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  logout_time_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserInfo::~UserInfo() {
  SharedDtor();
}

void UserInfo::SharedDtor() {
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    delete user_name_;
  }
  if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
    delete nick_name_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void UserInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserInfo_descriptor_;
}

const UserInfo& UserInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserInfo_2eproto();
  return *default_instance_;
}

UserInfo* UserInfo::default_instance_ = NULL;

UserInfo* UserInfo::New() const {
  return new UserInfo;
}

void UserInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    verion_ = 0;
    user_id_ = 0;
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::kEmptyString) {
        user_name_->clear();
      }
    }
    if (has_nick_name()) {
      if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
        nick_name_->clear();
      }
    }
    reg_time_ = 0;
    from_ = 0;
    login_time_ = 0;
    last_login_time_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    fresh_time_ = 0;
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
    logout_time_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserInfo::MergePartialFromCodedStream(
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
        if (input->ExpectTag(34)) goto parse_nick_name;
        break;
      }

      // optional string nick_name = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nick_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->nick_name().data(), this->nick_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_reg_time;
        break;
      }

      // optional int32 reg_time = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_reg_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &reg_time_)));
          set_has_reg_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_from;
        break;
      }

      // optional int32 from = 6;
      case 6: {
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
        if (input->ExpectTag(56)) goto parse_login_time;
        break;
      }

      // optional int32 login_time = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_login_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &login_time_)));
          set_has_login_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_last_login_time;
        break;
      }

      // optional int32 last_login_time = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_login_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_login_time_)));
          set_has_last_login_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_fresh_time;
        break;
      }

      // optional int32 fresh_time = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_fresh_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &fresh_time_)));
          set_has_fresh_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_password;
        break;
      }

      // optional string password = 10;
      case 10: {
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
        if (input->ExpectTag(88)) goto parse_logout_time;
        break;
      }

      // optional int32 logout_time = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_logout_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &logout_time_)));
          set_has_logout_time();
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

void UserInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->verion(), output);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // optional string user_name = 3;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->user_name().data(), this->user_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->user_name(), output);
  }

  // optional string nick_name = 4;
  if (has_nick_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nick_name().data(), this->nick_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->nick_name(), output);
  }

  // optional int32 reg_time = 5;
  if (has_reg_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->reg_time(), output);
  }

  // optional int32 from = 6;
  if (has_from()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->from(), output);
  }

  // optional int32 login_time = 7;
  if (has_login_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->login_time(), output);
  }

  // optional int32 last_login_time = 8;
  if (has_last_login_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->last_login_time(), output);
  }

  // optional int32 fresh_time = 9;
  if (has_fresh_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->fresh_time(), output);
  }

  // optional string password = 10;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->password(), output);
  }

  // optional int32 logout_time = 11;
  if (has_logout_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->logout_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 verion = 1;
  if (has_verion()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->verion(), target);
  }

  // optional int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
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

  // optional string nick_name = 4;
  if (has_nick_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->nick_name().data(), this->nick_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->nick_name(), target);
  }

  // optional int32 reg_time = 5;
  if (has_reg_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->reg_time(), target);
  }

  // optional int32 from = 6;
  if (has_from()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->from(), target);
  }

  // optional int32 login_time = 7;
  if (has_login_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->login_time(), target);
  }

  // optional int32 last_login_time = 8;
  if (has_last_login_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->last_login_time(), target);
  }

  // optional int32 fresh_time = 9;
  if (has_fresh_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->fresh_time(), target);
  }

  // optional string password = 10;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->password(), target);
  }

  // optional int32 logout_time = 11;
  if (has_logout_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->logout_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserInfo::ByteSize() const {
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

    // optional string user_name = 3;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // optional string nick_name = 4;
    if (has_nick_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->nick_name());
    }

    // optional int32 reg_time = 5;
    if (has_reg_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->reg_time());
    }

    // optional int32 from = 6;
    if (has_from()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->from());
    }

    // optional int32 login_time = 7;
    if (has_login_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->login_time());
    }

    // optional int32 last_login_time = 8;
    if (has_last_login_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_login_time());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 fresh_time = 9;
    if (has_fresh_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->fresh_time());
    }

    // optional string password = 10;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // optional int32 logout_time = 11;
    if (has_logout_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->logout_time());
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

void UserInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserInfo::MergeFrom(const UserInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_verion()) {
      set_verion(from.verion());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
    if (from.has_nick_name()) {
      set_nick_name(from.nick_name());
    }
    if (from.has_reg_time()) {
      set_reg_time(from.reg_time());
    }
    if (from.has_from()) {
      set_from(from.from());
    }
    if (from.has_login_time()) {
      set_login_time(from.login_time());
    }
    if (from.has_last_login_time()) {
      set_last_login_time(from.last_login_time());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_fresh_time()) {
      set_fresh_time(from.fresh_time());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_logout_time()) {
      set_logout_time(from.logout_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserInfo::CopyFrom(const UserInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserInfo::IsInitialized() const {

  return true;
}

void UserInfo::Swap(UserInfo* other) {
  if (other != this) {
    std::swap(verion_, other->verion_);
    std::swap(user_id_, other->user_id_);
    std::swap(user_name_, other->user_name_);
    std::swap(nick_name_, other->nick_name_);
    std::swap(reg_time_, other->reg_time_);
    std::swap(from_, other->from_);
    std::swap(login_time_, other->login_time_);
    std::swap(last_login_time_, other->last_login_time_);
    std::swap(fresh_time_, other->fresh_time_);
    std::swap(password_, other->password_);
    std::swap(logout_time_, other->logout_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserInfo_descriptor_;
  metadata.reflection = UserInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

// @@protoc_insertion_point(global_scope)
