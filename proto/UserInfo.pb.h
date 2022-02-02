// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserInfo.proto

#ifndef PROTOBUF_UserInfo_2eproto__INCLUDED
#define PROTOBUF_UserInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ssp {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UserInfo_2eproto();
void protobuf_AssignDesc_UserInfo_2eproto();
void protobuf_ShutdownFile_UserInfo_2eproto();

class UserInfo;

// ===================================================================

class UserInfo : public ::google::protobuf::Message {
 public:
  UserInfo();
  virtual ~UserInfo();

  UserInfo(const UserInfo& from);

  inline UserInfo& operator=(const UserInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UserInfo& default_instance();

  void Swap(UserInfo* other);

  // implements Message ----------------------------------------------

  UserInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserInfo& from);
  void MergeFrom(const UserInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 verion = 1;
  inline bool has_verion() const;
  inline void clear_verion();
  static const int kVerionFieldNumber = 1;
  inline ::google::protobuf::int32 verion() const;
  inline void set_verion(::google::protobuf::int32 value);

  // optional int32 user_id = 2;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);

  // optional string user_name = 3;
  inline bool has_user_name() const;
  inline void clear_user_name();
  static const int kUserNameFieldNumber = 3;
  inline const ::std::string& user_name() const;
  inline void set_user_name(const ::std::string& value);
  inline void set_user_name(const char* value);
  inline void set_user_name(const char* value, size_t size);
  inline ::std::string* mutable_user_name();
  inline ::std::string* release_user_name();
  inline void set_allocated_user_name(::std::string* user_name);

  // optional string nick_name = 4;
  inline bool has_nick_name() const;
  inline void clear_nick_name();
  static const int kNickNameFieldNumber = 4;
  inline const ::std::string& nick_name() const;
  inline void set_nick_name(const ::std::string& value);
  inline void set_nick_name(const char* value);
  inline void set_nick_name(const char* value, size_t size);
  inline ::std::string* mutable_nick_name();
  inline ::std::string* release_nick_name();
  inline void set_allocated_nick_name(::std::string* nick_name);

  // optional int32 reg_time = 5;
  inline bool has_reg_time() const;
  inline void clear_reg_time();
  static const int kRegTimeFieldNumber = 5;
  inline ::google::protobuf::int32 reg_time() const;
  inline void set_reg_time(::google::protobuf::int32 value);

  // optional int32 from = 6;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 6;
  inline ::google::protobuf::int32 from() const;
  inline void set_from(::google::protobuf::int32 value);

  // optional int32 login_time = 7;
  inline bool has_login_time() const;
  inline void clear_login_time();
  static const int kLoginTimeFieldNumber = 7;
  inline ::google::protobuf::int32 login_time() const;
  inline void set_login_time(::google::protobuf::int32 value);

  // optional int32 last_login_time = 8;
  inline bool has_last_login_time() const;
  inline void clear_last_login_time();
  static const int kLastLoginTimeFieldNumber = 8;
  inline ::google::protobuf::int32 last_login_time() const;
  inline void set_last_login_time(::google::protobuf::int32 value);

  // optional int32 fresh_time = 9;
  inline bool has_fresh_time() const;
  inline void clear_fresh_time();
  static const int kFreshTimeFieldNumber = 9;
  inline ::google::protobuf::int32 fresh_time() const;
  inline void set_fresh_time(::google::protobuf::int32 value);

  // optional string password = 10;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 10;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // optional int32 logout_time = 11;
  inline bool has_logout_time() const;
  inline void clear_logout_time();
  static const int kLogoutTimeFieldNumber = 11;
  inline ::google::protobuf::int32 logout_time() const;
  inline void set_logout_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ssp.UserInfo)
 private:
  inline void set_has_verion();
  inline void clear_has_verion();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_user_name();
  inline void clear_has_user_name();
  inline void set_has_nick_name();
  inline void clear_has_nick_name();
  inline void set_has_reg_time();
  inline void clear_has_reg_time();
  inline void set_has_from();
  inline void clear_has_from();
  inline void set_has_login_time();
  inline void clear_has_login_time();
  inline void set_has_last_login_time();
  inline void clear_has_last_login_time();
  inline void set_has_fresh_time();
  inline void clear_has_fresh_time();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_logout_time();
  inline void clear_has_logout_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 verion_;
  ::google::protobuf::int32 user_id_;
  ::std::string* user_name_;
  ::std::string* nick_name_;
  ::google::protobuf::int32 reg_time_;
  ::google::protobuf::int32 from_;
  ::google::protobuf::int32 login_time_;
  ::google::protobuf::int32 last_login_time_;
  ::std::string* password_;
  ::google::protobuf::int32 fresh_time_;
  ::google::protobuf::int32 logout_time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  friend void  protobuf_AddDesc_UserInfo_2eproto();
  friend void protobuf_AssignDesc_UserInfo_2eproto();
  friend void protobuf_ShutdownFile_UserInfo_2eproto();

  void InitAsDefaultInstance();
  static UserInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// UserInfo

// optional int32 verion = 1;
inline bool UserInfo::has_verion() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserInfo::set_has_verion() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserInfo::clear_has_verion() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserInfo::clear_verion() {
  verion_ = 0;
  clear_has_verion();
}
inline ::google::protobuf::int32 UserInfo::verion() const {
  return verion_;
}
inline void UserInfo::set_verion(::google::protobuf::int32 value) {
  set_has_verion();
  verion_ = value;
}

// optional int32 user_id = 2;
inline bool UserInfo::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserInfo::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserInfo::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserInfo::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 UserInfo::user_id() const {
  return user_id_;
}
inline void UserInfo::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
}

// optional string user_name = 3;
inline bool UserInfo::has_user_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserInfo::set_has_user_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserInfo::clear_has_user_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserInfo::clear_user_name() {
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    user_name_->clear();
  }
  clear_has_user_name();
}
inline const ::std::string& UserInfo::user_name() const {
  return *user_name_;
}
inline void UserInfo::set_user_name(const ::std::string& value) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::kEmptyString) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(value);
}
inline void UserInfo::set_user_name(const char* value) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::kEmptyString) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(value);
}
inline void UserInfo::set_user_name(const char* value, size_t size) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::kEmptyString) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserInfo::mutable_user_name() {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::kEmptyString) {
    user_name_ = new ::std::string;
  }
  return user_name_;
}
inline ::std::string* UserInfo::release_user_name() {
  clear_has_user_name();
  if (user_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = user_name_;
    user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserInfo::set_allocated_user_name(::std::string* user_name) {
  if (user_name_ != &::google::protobuf::internal::kEmptyString) {
    delete user_name_;
  }
  if (user_name) {
    set_has_user_name();
    user_name_ = user_name;
  } else {
    clear_has_user_name();
    user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string nick_name = 4;
inline bool UserInfo::has_nick_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UserInfo::set_has_nick_name() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UserInfo::clear_has_nick_name() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UserInfo::clear_nick_name() {
  if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
    nick_name_->clear();
  }
  clear_has_nick_name();
}
inline const ::std::string& UserInfo::nick_name() const {
  return *nick_name_;
}
inline void UserInfo::set_nick_name(const ::std::string& value) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(value);
}
inline void UserInfo::set_nick_name(const char* value) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(value);
}
inline void UserInfo::set_nick_name(const char* value, size_t size) {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  nick_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserInfo::mutable_nick_name() {
  set_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    nick_name_ = new ::std::string;
  }
  return nick_name_;
}
inline ::std::string* UserInfo::release_nick_name() {
  clear_has_nick_name();
  if (nick_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nick_name_;
    nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserInfo::set_allocated_nick_name(::std::string* nick_name) {
  if (nick_name_ != &::google::protobuf::internal::kEmptyString) {
    delete nick_name_;
  }
  if (nick_name) {
    set_has_nick_name();
    nick_name_ = nick_name;
  } else {
    clear_has_nick_name();
    nick_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 reg_time = 5;
inline bool UserInfo::has_reg_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UserInfo::set_has_reg_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UserInfo::clear_has_reg_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UserInfo::clear_reg_time() {
  reg_time_ = 0;
  clear_has_reg_time();
}
inline ::google::protobuf::int32 UserInfo::reg_time() const {
  return reg_time_;
}
inline void UserInfo::set_reg_time(::google::protobuf::int32 value) {
  set_has_reg_time();
  reg_time_ = value;
}

// optional int32 from = 6;
inline bool UserInfo::has_from() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserInfo::set_has_from() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserInfo::clear_has_from() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserInfo::clear_from() {
  from_ = 0;
  clear_has_from();
}
inline ::google::protobuf::int32 UserInfo::from() const {
  return from_;
}
inline void UserInfo::set_from(::google::protobuf::int32 value) {
  set_has_from();
  from_ = value;
}

// optional int32 login_time = 7;
inline bool UserInfo::has_login_time() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UserInfo::set_has_login_time() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UserInfo::clear_has_login_time() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UserInfo::clear_login_time() {
  login_time_ = 0;
  clear_has_login_time();
}
inline ::google::protobuf::int32 UserInfo::login_time() const {
  return login_time_;
}
inline void UserInfo::set_login_time(::google::protobuf::int32 value) {
  set_has_login_time();
  login_time_ = value;
}

// optional int32 last_login_time = 8;
inline bool UserInfo::has_last_login_time() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void UserInfo::set_has_last_login_time() {
  _has_bits_[0] |= 0x00000080u;
}
inline void UserInfo::clear_has_last_login_time() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void UserInfo::clear_last_login_time() {
  last_login_time_ = 0;
  clear_has_last_login_time();
}
inline ::google::protobuf::int32 UserInfo::last_login_time() const {
  return last_login_time_;
}
inline void UserInfo::set_last_login_time(::google::protobuf::int32 value) {
  set_has_last_login_time();
  last_login_time_ = value;
}

// optional int32 fresh_time = 9;
inline bool UserInfo::has_fresh_time() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void UserInfo::set_has_fresh_time() {
  _has_bits_[0] |= 0x00000100u;
}
inline void UserInfo::clear_has_fresh_time() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void UserInfo::clear_fresh_time() {
  fresh_time_ = 0;
  clear_has_fresh_time();
}
inline ::google::protobuf::int32 UserInfo::fresh_time() const {
  return fresh_time_;
}
inline void UserInfo::set_fresh_time(::google::protobuf::int32 value) {
  set_has_fresh_time();
  fresh_time_ = value;
}

// optional string password = 10;
inline bool UserInfo::has_password() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void UserInfo::set_has_password() {
  _has_bits_[0] |= 0x00000200u;
}
inline void UserInfo::clear_has_password() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void UserInfo::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& UserInfo::password() const {
  return *password_;
}
inline void UserInfo::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void UserInfo::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void UserInfo::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserInfo::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* UserInfo::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserInfo::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 logout_time = 11;
inline bool UserInfo::has_logout_time() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void UserInfo::set_has_logout_time() {
  _has_bits_[0] |= 0x00000400u;
}
inline void UserInfo::clear_has_logout_time() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void UserInfo::clear_logout_time() {
  logout_time_ = 0;
  clear_has_logout_time();
}
inline ::google::protobuf::int32 UserInfo::logout_time() const {
  return logout_time_;
}
inline void UserInfo::set_logout_time(::google::protobuf::int32 value) {
  set_has_logout_time();
  logout_time_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssp

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserInfo_2eproto__INCLUDED
