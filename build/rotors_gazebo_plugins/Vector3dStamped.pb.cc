// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Vector3dStamped.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Vector3dStamped.pb.h"

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

namespace gz_geometry_msgs {

namespace {

const ::google::protobuf::Descriptor* Vector3dStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Vector3dStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Vector3dStamped_2eproto() {
  protobuf_AddDesc_Vector3dStamped_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Vector3dStamped.proto");
  GOOGLE_CHECK(file != NULL);
  Vector3dStamped_descriptor_ = file->message_type(0);
  static const int Vector3dStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3dStamped, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3dStamped, position_),
  };
  Vector3dStamped_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Vector3dStamped_descriptor_,
      Vector3dStamped::default_instance_,
      Vector3dStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3dStamped, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Vector3dStamped, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Vector3dStamped));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Vector3dStamped_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Vector3dStamped_descriptor_, &Vector3dStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Vector3dStamped_2eproto() {
  delete Vector3dStamped::default_instance_;
  delete Vector3dStamped_reflection_;
}

void protobuf_AddDesc_Vector3dStamped_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gz_std_msgs::protobuf_AddDesc_Header_2eproto();
  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025Vector3dStamped.proto\022\020gz_geometry_msg"
    "s\032\014Header.proto\032\016vector3d.proto\"_\n\017Vecto"
    "r3dStamped\022#\n\006header\030\001 \002(\0132\023.gz_std_msgs"
    ".Header\022\'\n\010position\030\002 \002(\0132\025.gazebo.msgs."
    "Vector3d", 168);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Vector3dStamped.proto", &protobuf_RegisterTypes);
  Vector3dStamped::default_instance_ = new Vector3dStamped();
  Vector3dStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Vector3dStamped_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Vector3dStamped_2eproto {
  StaticDescriptorInitializer_Vector3dStamped_2eproto() {
    protobuf_AddDesc_Vector3dStamped_2eproto();
  }
} static_descriptor_initializer_Vector3dStamped_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Vector3dStamped::kHeaderFieldNumber;
const int Vector3dStamped::kPositionFieldNumber;
#endif  // !_MSC_VER

Vector3dStamped::Vector3dStamped()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz_geometry_msgs.Vector3dStamped)
}

void Vector3dStamped::InitAsDefaultInstance() {
  header_ = const_cast< ::gz_std_msgs::Header*>(&::gz_std_msgs::Header::default_instance());
  position_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Vector3dStamped::Vector3dStamped(const Vector3dStamped& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:gz_geometry_msgs.Vector3dStamped)
}

void Vector3dStamped::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  position_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Vector3dStamped::~Vector3dStamped() {
  // @@protoc_insertion_point(destructor:gz_geometry_msgs.Vector3dStamped)
  SharedDtor();
}

void Vector3dStamped::SharedDtor() {
  if (this != default_instance_) {
    delete header_;
    delete position_;
  }
}

void Vector3dStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Vector3dStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Vector3dStamped_descriptor_;
}

const Vector3dStamped& Vector3dStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Vector3dStamped_2eproto();
  return *default_instance_;
}

Vector3dStamped* Vector3dStamped::default_instance_ = NULL;

Vector3dStamped* Vector3dStamped::New() const {
  return new Vector3dStamped;
}

void Vector3dStamped::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_header()) {
      if (header_ != NULL) header_->::gz_std_msgs::Header::Clear();
    }
    if (has_position()) {
      if (position_ != NULL) position_->::gazebo::msgs::Vector3d::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Vector3dStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz_geometry_msgs.Vector3dStamped)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gz_std_msgs.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_position;
        break;
      }

      // required .gazebo.msgs.Vector3d position = 2;
      case 2: {
        if (tag == 18) {
         parse_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_position()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz_geometry_msgs.Vector3dStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz_geometry_msgs.Vector3dStamped)
  return false;
#undef DO_
}

void Vector3dStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz_geometry_msgs.Vector3dStamped)
  // required .gz_std_msgs.Header header = 1;
  if (has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->header(), output);
  }

  // required .gazebo.msgs.Vector3d position = 2;
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->position(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gz_geometry_msgs.Vector3dStamped)
}

::google::protobuf::uint8* Vector3dStamped::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:gz_geometry_msgs.Vector3dStamped)
  // required .gz_std_msgs.Header header = 1;
  if (has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->header(), target);
  }

  // required .gazebo.msgs.Vector3d position = 2;
  if (has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->position(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz_geometry_msgs.Vector3dStamped)
  return target;
}

int Vector3dStamped::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .gz_std_msgs.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->header());
    }

    // required .gazebo.msgs.Vector3d position = 2;
    if (has_position()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->position());
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

void Vector3dStamped::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Vector3dStamped* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Vector3dStamped*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Vector3dStamped::MergeFrom(const Vector3dStamped& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_header()) {
      mutable_header()->::gz_std_msgs::Header::MergeFrom(from.header());
    }
    if (from.has_position()) {
      mutable_position()->::gazebo::msgs::Vector3d::MergeFrom(from.position());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Vector3dStamped::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3dStamped::CopyFrom(const Vector3dStamped& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3dStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_header()) {
    if (!this->header().IsInitialized()) return false;
  }
  if (has_position()) {
    if (!this->position().IsInitialized()) return false;
  }
  return true;
}

void Vector3dStamped::Swap(Vector3dStamped* other) {
  if (other != this) {
    std::swap(header_, other->header_);
    std::swap(position_, other->position_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Vector3dStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Vector3dStamped_descriptor_;
  metadata.reflection = Vector3dStamped_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gz_geometry_msgs

// @@protoc_insertion_point(global_scope)