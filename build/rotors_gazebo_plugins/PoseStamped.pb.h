// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PoseStamped.proto

#ifndef PROTOBUF_PoseStamped_2eproto__INCLUDED
#define PROTOBUF_PoseStamped_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Header.pb.h"
#include "pose.pb.h"
// @@protoc_insertion_point(includes)

namespace gz_geometry_msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PoseStamped_2eproto();
void protobuf_AssignDesc_PoseStamped_2eproto();
void protobuf_ShutdownFile_PoseStamped_2eproto();

class PoseStamped;

// ===================================================================

class PoseStamped : public ::google::protobuf::Message {
 public:
  PoseStamped();
  virtual ~PoseStamped();

  PoseStamped(const PoseStamped& from);

  inline PoseStamped& operator=(const PoseStamped& from) {
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
  static const PoseStamped& default_instance();

  void Swap(PoseStamped* other);

  // implements Message ----------------------------------------------

  PoseStamped* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoseStamped& from);
  void MergeFrom(const PoseStamped& from);
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

  // required .gz_std_msgs.Header header = 1;
  inline bool has_header() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 1;
  inline const ::gz_std_msgs::Header& header() const;
  inline ::gz_std_msgs::Header* mutable_header();
  inline ::gz_std_msgs::Header* release_header();
  inline void set_allocated_header(::gz_std_msgs::Header* header);

  // required .gazebo.msgs.Pose pose = 2;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 2;
  inline const ::gazebo::msgs::Pose& pose() const;
  inline ::gazebo::msgs::Pose* mutable_pose();
  inline ::gazebo::msgs::Pose* release_pose();
  inline void set_allocated_pose(::gazebo::msgs::Pose* pose);

  // @@protoc_insertion_point(class_scope:gz_geometry_msgs.PoseStamped)
 private:
  inline void set_has_header();
  inline void clear_has_header();
  inline void set_has_pose();
  inline void clear_has_pose();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gz_std_msgs::Header* header_;
  ::gazebo::msgs::Pose* pose_;
  friend void  protobuf_AddDesc_PoseStamped_2eproto();
  friend void protobuf_AssignDesc_PoseStamped_2eproto();
  friend void protobuf_ShutdownFile_PoseStamped_2eproto();

  void InitAsDefaultInstance();
  static PoseStamped* default_instance_;
};
// ===================================================================


// ===================================================================

// PoseStamped

// required .gz_std_msgs.Header header = 1;
inline bool PoseStamped::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PoseStamped::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PoseStamped::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PoseStamped::clear_header() {
  if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
  clear_has_header();
}
inline const ::gz_std_msgs::Header& PoseStamped::header() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.PoseStamped.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
inline ::gz_std_msgs::Header* PoseStamped::mutable_header() {
  set_has_header();
  if (header_ == NULL) header_ = new ::gz_std_msgs::Header;
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.PoseStamped.header)
  return header_;
}
inline ::gz_std_msgs::Header* PoseStamped::release_header() {
  clear_has_header();
  ::gz_std_msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void PoseStamped::set_allocated_header(::gz_std_msgs::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.PoseStamped.header)
}

// required .gazebo.msgs.Pose pose = 2;
inline bool PoseStamped::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PoseStamped::set_has_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PoseStamped::clear_has_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PoseStamped::clear_pose() {
  if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::gazebo::msgs::Pose& PoseStamped::pose() const {
  // @@protoc_insertion_point(field_get:gz_geometry_msgs.PoseStamped.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::gazebo::msgs::Pose* PoseStamped::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::gazebo::msgs::Pose;
  // @@protoc_insertion_point(field_mutable:gz_geometry_msgs.PoseStamped.pose)
  return pose_;
}
inline ::gazebo::msgs::Pose* PoseStamped::release_pose() {
  clear_has_pose();
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void PoseStamped::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:gz_geometry_msgs.PoseStamped.pose)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PoseStamped_2eproto__INCLUDED
