// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PhotoInfo.proto

#ifndef PROTOBUF_PhotoInfo_2eproto__INCLUDED
#define PROTOBUF_PhotoInfo_2eproto__INCLUDED

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
void  protobuf_AddDesc_PhotoInfo_2eproto();
void protobuf_AssignDesc_PhotoInfo_2eproto();
void protobuf_ShutdownFile_PhotoInfo_2eproto();

class PhotoInfo;

// ===================================================================

class PhotoInfo : public ::google::protobuf::Message {
 public:
  PhotoInfo();
  virtual ~PhotoInfo();

  PhotoInfo(const PhotoInfo& from);

  inline PhotoInfo& operator=(const PhotoInfo& from) {
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
  static const PhotoInfo& default_instance();

  void Swap(PhotoInfo* other);

  // implements Message ----------------------------------------------

  PhotoInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PhotoInfo& from);
  void MergeFrom(const PhotoInfo& from);
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

  // optional int32 last_publisher = 3;
  inline bool has_last_publisher() const;
  inline void clear_last_publisher();
  static const int kLastPublisherFieldNumber = 3;
  inline ::google::protobuf::int32 last_publisher() const;
  inline void set_last_publisher(::google::protobuf::int32 value);

  // optional int32 last_publish_time = 4;
  inline bool has_last_publish_time() const;
  inline void clear_last_publish_time();
  static const int kLastPublishTimeFieldNumber = 4;
  inline ::google::protobuf::int32 last_publish_time() const;
  inline void set_last_publish_time(::google::protobuf::int32 value);

  // optional int32 last_publish_message_id = 5;
  inline bool has_last_publish_message_id() const;
  inline void clear_last_publish_message_id();
  static const int kLastPublishMessageIdFieldNumber = 5;
  inline ::google::protobuf::int32 last_publish_message_id() const;
  inline void set_last_publish_message_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ssp.PhotoInfo)
 private:
  inline void set_has_verion();
  inline void clear_has_verion();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_last_publisher();
  inline void clear_has_last_publisher();
  inline void set_has_last_publish_time();
  inline void clear_has_last_publish_time();
  inline void set_has_last_publish_message_id();
  inline void clear_has_last_publish_message_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 verion_;
  ::google::protobuf::int32 user_id_;
  ::google::protobuf::int32 last_publisher_;
  ::google::protobuf::int32 last_publish_time_;
  ::google::protobuf::int32 last_publish_message_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_PhotoInfo_2eproto();
  friend void protobuf_AssignDesc_PhotoInfo_2eproto();
  friend void protobuf_ShutdownFile_PhotoInfo_2eproto();

  void InitAsDefaultInstance();
  static PhotoInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// PhotoInfo

// optional int32 verion = 1;
inline bool PhotoInfo::has_verion() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PhotoInfo::set_has_verion() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PhotoInfo::clear_has_verion() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PhotoInfo::clear_verion() {
  verion_ = 0;
  clear_has_verion();
}
inline ::google::protobuf::int32 PhotoInfo::verion() const {
  return verion_;
}
inline void PhotoInfo::set_verion(::google::protobuf::int32 value) {
  set_has_verion();
  verion_ = value;
}

// optional int32 user_id = 2;
inline bool PhotoInfo::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PhotoInfo::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PhotoInfo::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PhotoInfo::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 PhotoInfo::user_id() const {
  return user_id_;
}
inline void PhotoInfo::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
}

// optional int32 last_publisher = 3;
inline bool PhotoInfo::has_last_publisher() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PhotoInfo::set_has_last_publisher() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PhotoInfo::clear_has_last_publisher() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PhotoInfo::clear_last_publisher() {
  last_publisher_ = 0;
  clear_has_last_publisher();
}
inline ::google::protobuf::int32 PhotoInfo::last_publisher() const {
  return last_publisher_;
}
inline void PhotoInfo::set_last_publisher(::google::protobuf::int32 value) {
  set_has_last_publisher();
  last_publisher_ = value;
}

// optional int32 last_publish_time = 4;
inline bool PhotoInfo::has_last_publish_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PhotoInfo::set_has_last_publish_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PhotoInfo::clear_has_last_publish_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PhotoInfo::clear_last_publish_time() {
  last_publish_time_ = 0;
  clear_has_last_publish_time();
}
inline ::google::protobuf::int32 PhotoInfo::last_publish_time() const {
  return last_publish_time_;
}
inline void PhotoInfo::set_last_publish_time(::google::protobuf::int32 value) {
  set_has_last_publish_time();
  last_publish_time_ = value;
}

// optional int32 last_publish_message_id = 5;
inline bool PhotoInfo::has_last_publish_message_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PhotoInfo::set_has_last_publish_message_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PhotoInfo::clear_has_last_publish_message_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PhotoInfo::clear_last_publish_message_id() {
  last_publish_message_id_ = 0;
  clear_has_last_publish_message_id();
}
inline ::google::protobuf::int32 PhotoInfo::last_publish_message_id() const {
  return last_publish_message_id_;
}
inline void PhotoInfo::set_last_publish_message_id(::google::protobuf::int32 value) {
  set_has_last_publish_message_id();
  last_publish_message_id_ = value;
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

#endif  // PROTOBUF_PhotoInfo_2eproto__INCLUDED