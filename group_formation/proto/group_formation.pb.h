// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: group_formation.proto

#ifndef PROTOBUF_group_5fformation_2eproto__INCLUDED
#define PROTOBUF_group_5fformation_2eproto__INCLUDED

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

namespace group_formation {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_group_5fformation_2eproto();
void protobuf_AssignDesc_group_5fformation_2eproto();
void protobuf_ShutdownFile_group_5fformation_2eproto();

class GroupConfig;
class Pose;
class Robot;

// ===================================================================

class Pose : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:group_formation.Pose) */ {
 public:
  Pose();
  virtual ~Pose();

  Pose(const Pose& from);

  inline Pose& operator=(const Pose& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Pose& default_instance();

  void Swap(Pose* other);

  // implements Message ----------------------------------------------

  inline Pose* New() const { return New(NULL); }

  Pose* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Pose& from);
  void MergeFrom(const Pose& from);
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
  void InternalSwap(Pose* other);
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

  // optional float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // optional float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // optional float z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // optional float roll = 4;
  bool has_roll() const;
  void clear_roll();
  static const int kRollFieldNumber = 4;
  float roll() const;
  void set_roll(float value);

  // optional float pitch = 5;
  bool has_pitch() const;
  void clear_pitch();
  static const int kPitchFieldNumber = 5;
  float pitch() const;
  void set_pitch(float value);

  // optional float yaw = 6;
  bool has_yaw() const;
  void clear_yaw();
  static const int kYawFieldNumber = 6;
  float yaw() const;
  void set_yaw(float value);

  // @@protoc_insertion_point(class_scope:group_formation.Pose)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();
  inline void set_has_roll();
  inline void clear_has_roll();
  inline void set_has_pitch();
  inline void clear_has_pitch();
  inline void set_has_yaw();
  inline void clear_has_yaw();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float x_;
  float y_;
  float z_;
  float roll_;
  float pitch_;
  float yaw_;
  friend void  protobuf_AddDesc_group_5fformation_2eproto();
  friend void protobuf_AssignDesc_group_5fformation_2eproto();
  friend void protobuf_ShutdownFile_group_5fformation_2eproto();

  void InitAsDefaultInstance();
  static Pose* default_instance_;
};
// -------------------------------------------------------------------

class Robot : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:group_formation.Robot) */ {
 public:
  Robot();
  virtual ~Robot();

  Robot(const Robot& from);

  inline Robot& operator=(const Robot& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Robot& default_instance();

  void Swap(Robot* other);

  // implements Message ----------------------------------------------

  inline Robot* New() const { return New(NULL); }

  Robot* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Robot& from);
  void MergeFrom(const Robot& from);
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
  void InternalSwap(Robot* other);
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

  // optional string robot_name = 1;
  bool has_robot_name() const;
  void clear_robot_name();
  static const int kRobotNameFieldNumber = 1;
  const ::std::string& robot_name() const;
  void set_robot_name(const ::std::string& value);
  void set_robot_name(const char* value);
  void set_robot_name(const char* value, size_t size);
  ::std::string* mutable_robot_name();
  ::std::string* release_robot_name();
  void set_allocated_robot_name(::std::string* robot_name);

  // optional string goal_pose_topic = 2;
  bool has_goal_pose_topic() const;
  void clear_goal_pose_topic();
  static const int kGoalPoseTopicFieldNumber = 2;
  const ::std::string& goal_pose_topic() const;
  void set_goal_pose_topic(const ::std::string& value);
  void set_goal_pose_topic(const char* value);
  void set_goal_pose_topic(const char* value, size_t size);
  ::std::string* mutable_goal_pose_topic();
  ::std::string* release_goal_pose_topic();
  void set_allocated_goal_pose_topic(::std::string* goal_pose_topic);

  // optional string goal_frame_id = 3;
  bool has_goal_frame_id() const;
  void clear_goal_frame_id();
  static const int kGoalFrameIdFieldNumber = 3;
  const ::std::string& goal_frame_id() const;
  void set_goal_frame_id(const ::std::string& value);
  void set_goal_frame_id(const char* value);
  void set_goal_frame_id(const char* value, size_t size);
  ::std::string* mutable_goal_frame_id();
  ::std::string* release_goal_frame_id();
  void set_allocated_goal_frame_id(::std::string* goal_frame_id);

  // optional string initial_pose_topic = 4;
  bool has_initial_pose_topic() const;
  void clear_initial_pose_topic();
  static const int kInitialPoseTopicFieldNumber = 4;
  const ::std::string& initial_pose_topic() const;
  void set_initial_pose_topic(const ::std::string& value);
  void set_initial_pose_topic(const char* value);
  void set_initial_pose_topic(const char* value, size_t size);
  ::std::string* mutable_initial_pose_topic();
  ::std::string* release_initial_pose_topic();
  void set_allocated_initial_pose_topic(::std::string* initial_pose_topic);

  // optional .group_formation.Pose initial_pose = 5;
  bool has_initial_pose() const;
  void clear_initial_pose();
  static const int kInitialPoseFieldNumber = 5;
  const ::group_formation::Pose& initial_pose() const;
  ::group_formation::Pose* mutable_initial_pose();
  ::group_formation::Pose* release_initial_pose();
  void set_allocated_initial_pose(::group_formation::Pose* initial_pose);

  // @@protoc_insertion_point(class_scope:group_formation.Robot)
 private:
  inline void set_has_robot_name();
  inline void clear_has_robot_name();
  inline void set_has_goal_pose_topic();
  inline void clear_has_goal_pose_topic();
  inline void set_has_goal_frame_id();
  inline void clear_has_goal_frame_id();
  inline void set_has_initial_pose_topic();
  inline void clear_has_initial_pose_topic();
  inline void set_has_initial_pose();
  inline void clear_has_initial_pose();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr robot_name_;
  ::google::protobuf::internal::ArenaStringPtr goal_pose_topic_;
  ::google::protobuf::internal::ArenaStringPtr goal_frame_id_;
  ::google::protobuf::internal::ArenaStringPtr initial_pose_topic_;
  ::group_formation::Pose* initial_pose_;
  friend void  protobuf_AddDesc_group_5fformation_2eproto();
  friend void protobuf_AssignDesc_group_5fformation_2eproto();
  friend void protobuf_ShutdownFile_group_5fformation_2eproto();

  void InitAsDefaultInstance();
  static Robot* default_instance_;
};
// -------------------------------------------------------------------

class GroupConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:group_formation.GroupConfig) */ {
 public:
  GroupConfig();
  virtual ~GroupConfig();

  GroupConfig(const GroupConfig& from);

  inline GroupConfig& operator=(const GroupConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GroupConfig& default_instance();

  void Swap(GroupConfig* other);

  // implements Message ----------------------------------------------

  inline GroupConfig* New() const { return New(NULL); }

  GroupConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GroupConfig& from);
  void MergeFrom(const GroupConfig& from);
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
  void InternalSwap(GroupConfig* other);
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

  // optional .group_formation.Pose start_pose = 1;
  bool has_start_pose() const;
  void clear_start_pose();
  static const int kStartPoseFieldNumber = 1;
  const ::group_formation::Pose& start_pose() const;
  ::group_formation::Pose* mutable_start_pose();
  ::group_formation::Pose* release_start_pose();
  void set_allocated_start_pose(::group_formation::Pose* start_pose);

  // optional .group_formation.Pose door_pose = 2;
  bool has_door_pose() const;
  void clear_door_pose();
  static const int kDoorPoseFieldNumber = 2;
  const ::group_formation::Pose& door_pose() const;
  ::group_formation::Pose* mutable_door_pose();
  ::group_formation::Pose* release_door_pose();
  void set_allocated_door_pose(::group_formation::Pose* door_pose);

  // optional .group_formation.Pose tv_pose = 3;
  bool has_tv_pose() const;
  void clear_tv_pose();
  static const int kTvPoseFieldNumber = 3;
  const ::group_formation::Pose& tv_pose() const;
  ::group_formation::Pose* mutable_tv_pose();
  ::group_formation::Pose* release_tv_pose();
  void set_allocated_tv_pose(::group_formation::Pose* tv_pose);

  // repeated .group_formation.Robot robot = 4;
  int robot_size() const;
  void clear_robot();
  static const int kRobotFieldNumber = 4;
  const ::group_formation::Robot& robot(int index) const;
  ::group_formation::Robot* mutable_robot(int index);
  ::group_formation::Robot* add_robot();
  ::google::protobuf::RepeatedPtrField< ::group_formation::Robot >*
      mutable_robot();
  const ::google::protobuf::RepeatedPtrField< ::group_formation::Robot >&
      robot() const;

  // @@protoc_insertion_point(class_scope:group_formation.GroupConfig)
 private:
  inline void set_has_start_pose();
  inline void clear_has_start_pose();
  inline void set_has_door_pose();
  inline void clear_has_door_pose();
  inline void set_has_tv_pose();
  inline void clear_has_tv_pose();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::group_formation::Pose* start_pose_;
  ::group_formation::Pose* door_pose_;
  ::group_formation::Pose* tv_pose_;
  ::google::protobuf::RepeatedPtrField< ::group_formation::Robot > robot_;
  friend void  protobuf_AddDesc_group_5fformation_2eproto();
  friend void protobuf_AssignDesc_group_5fformation_2eproto();
  friend void protobuf_ShutdownFile_group_5fformation_2eproto();

  void InitAsDefaultInstance();
  static GroupConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Pose

// optional float x = 1;
inline bool Pose::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Pose::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Pose::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Pose::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Pose::x() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.x)
  return x_;
}
inline void Pose::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.x)
}

// optional float y = 2;
inline bool Pose::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Pose::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Pose::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Pose::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Pose::y() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.y)
  return y_;
}
inline void Pose::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.y)
}

// optional float z = 3;
inline bool Pose::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Pose::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Pose::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Pose::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float Pose::z() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.z)
  return z_;
}
inline void Pose::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.z)
}

// optional float roll = 4;
inline bool Pose::has_roll() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Pose::set_has_roll() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Pose::clear_has_roll() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Pose::clear_roll() {
  roll_ = 0;
  clear_has_roll();
}
inline float Pose::roll() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.roll)
  return roll_;
}
inline void Pose::set_roll(float value) {
  set_has_roll();
  roll_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.roll)
}

// optional float pitch = 5;
inline bool Pose::has_pitch() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Pose::set_has_pitch() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Pose::clear_has_pitch() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Pose::clear_pitch() {
  pitch_ = 0;
  clear_has_pitch();
}
inline float Pose::pitch() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.pitch)
  return pitch_;
}
inline void Pose::set_pitch(float value) {
  set_has_pitch();
  pitch_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.pitch)
}

// optional float yaw = 6;
inline bool Pose::has_yaw() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Pose::set_has_yaw() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Pose::clear_has_yaw() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Pose::clear_yaw() {
  yaw_ = 0;
  clear_has_yaw();
}
inline float Pose::yaw() const {
  // @@protoc_insertion_point(field_get:group_formation.Pose.yaw)
  return yaw_;
}
inline void Pose::set_yaw(float value) {
  set_has_yaw();
  yaw_ = value;
  // @@protoc_insertion_point(field_set:group_formation.Pose.yaw)
}

// -------------------------------------------------------------------

// Robot

// optional string robot_name = 1;
inline bool Robot::has_robot_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot::set_has_robot_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Robot::clear_has_robot_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Robot::clear_robot_name() {
  robot_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_robot_name();
}
inline const ::std::string& Robot::robot_name() const {
  // @@protoc_insertion_point(field_get:group_formation.Robot.robot_name)
  return robot_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_robot_name(const ::std::string& value) {
  set_has_robot_name();
  robot_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:group_formation.Robot.robot_name)
}
inline void Robot::set_robot_name(const char* value) {
  set_has_robot_name();
  robot_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:group_formation.Robot.robot_name)
}
inline void Robot::set_robot_name(const char* value, size_t size) {
  set_has_robot_name();
  robot_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:group_formation.Robot.robot_name)
}
inline ::std::string* Robot::mutable_robot_name() {
  set_has_robot_name();
  // @@protoc_insertion_point(field_mutable:group_formation.Robot.robot_name)
  return robot_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Robot::release_robot_name() {
  // @@protoc_insertion_point(field_release:group_formation.Robot.robot_name)
  clear_has_robot_name();
  return robot_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_allocated_robot_name(::std::string* robot_name) {
  if (robot_name != NULL) {
    set_has_robot_name();
  } else {
    clear_has_robot_name();
  }
  robot_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), robot_name);
  // @@protoc_insertion_point(field_set_allocated:group_formation.Robot.robot_name)
}

// optional string goal_pose_topic = 2;
inline bool Robot::has_goal_pose_topic() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot::set_has_goal_pose_topic() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Robot::clear_has_goal_pose_topic() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Robot::clear_goal_pose_topic() {
  goal_pose_topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_goal_pose_topic();
}
inline const ::std::string& Robot::goal_pose_topic() const {
  // @@protoc_insertion_point(field_get:group_formation.Robot.goal_pose_topic)
  return goal_pose_topic_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_goal_pose_topic(const ::std::string& value) {
  set_has_goal_pose_topic();
  goal_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:group_formation.Robot.goal_pose_topic)
}
inline void Robot::set_goal_pose_topic(const char* value) {
  set_has_goal_pose_topic();
  goal_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:group_formation.Robot.goal_pose_topic)
}
inline void Robot::set_goal_pose_topic(const char* value, size_t size) {
  set_has_goal_pose_topic();
  goal_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:group_formation.Robot.goal_pose_topic)
}
inline ::std::string* Robot::mutable_goal_pose_topic() {
  set_has_goal_pose_topic();
  // @@protoc_insertion_point(field_mutable:group_formation.Robot.goal_pose_topic)
  return goal_pose_topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Robot::release_goal_pose_topic() {
  // @@protoc_insertion_point(field_release:group_formation.Robot.goal_pose_topic)
  clear_has_goal_pose_topic();
  return goal_pose_topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_allocated_goal_pose_topic(::std::string* goal_pose_topic) {
  if (goal_pose_topic != NULL) {
    set_has_goal_pose_topic();
  } else {
    clear_has_goal_pose_topic();
  }
  goal_pose_topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), goal_pose_topic);
  // @@protoc_insertion_point(field_set_allocated:group_formation.Robot.goal_pose_topic)
}

// optional string goal_frame_id = 3;
inline bool Robot::has_goal_frame_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot::set_has_goal_frame_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Robot::clear_has_goal_frame_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Robot::clear_goal_frame_id() {
  goal_frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_goal_frame_id();
}
inline const ::std::string& Robot::goal_frame_id() const {
  // @@protoc_insertion_point(field_get:group_formation.Robot.goal_frame_id)
  return goal_frame_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_goal_frame_id(const ::std::string& value) {
  set_has_goal_frame_id();
  goal_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:group_formation.Robot.goal_frame_id)
}
inline void Robot::set_goal_frame_id(const char* value) {
  set_has_goal_frame_id();
  goal_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:group_formation.Robot.goal_frame_id)
}
inline void Robot::set_goal_frame_id(const char* value, size_t size) {
  set_has_goal_frame_id();
  goal_frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:group_formation.Robot.goal_frame_id)
}
inline ::std::string* Robot::mutable_goal_frame_id() {
  set_has_goal_frame_id();
  // @@protoc_insertion_point(field_mutable:group_formation.Robot.goal_frame_id)
  return goal_frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Robot::release_goal_frame_id() {
  // @@protoc_insertion_point(field_release:group_formation.Robot.goal_frame_id)
  clear_has_goal_frame_id();
  return goal_frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_allocated_goal_frame_id(::std::string* goal_frame_id) {
  if (goal_frame_id != NULL) {
    set_has_goal_frame_id();
  } else {
    clear_has_goal_frame_id();
  }
  goal_frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), goal_frame_id);
  // @@protoc_insertion_point(field_set_allocated:group_formation.Robot.goal_frame_id)
}

// optional string initial_pose_topic = 4;
inline bool Robot::has_initial_pose_topic() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot::set_has_initial_pose_topic() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Robot::clear_has_initial_pose_topic() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Robot::clear_initial_pose_topic() {
  initial_pose_topic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_initial_pose_topic();
}
inline const ::std::string& Robot::initial_pose_topic() const {
  // @@protoc_insertion_point(field_get:group_formation.Robot.initial_pose_topic)
  return initial_pose_topic_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_initial_pose_topic(const ::std::string& value) {
  set_has_initial_pose_topic();
  initial_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:group_formation.Robot.initial_pose_topic)
}
inline void Robot::set_initial_pose_topic(const char* value) {
  set_has_initial_pose_topic();
  initial_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:group_formation.Robot.initial_pose_topic)
}
inline void Robot::set_initial_pose_topic(const char* value, size_t size) {
  set_has_initial_pose_topic();
  initial_pose_topic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:group_formation.Robot.initial_pose_topic)
}
inline ::std::string* Robot::mutable_initial_pose_topic() {
  set_has_initial_pose_topic();
  // @@protoc_insertion_point(field_mutable:group_formation.Robot.initial_pose_topic)
  return initial_pose_topic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Robot::release_initial_pose_topic() {
  // @@protoc_insertion_point(field_release:group_formation.Robot.initial_pose_topic)
  clear_has_initial_pose_topic();
  return initial_pose_topic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Robot::set_allocated_initial_pose_topic(::std::string* initial_pose_topic) {
  if (initial_pose_topic != NULL) {
    set_has_initial_pose_topic();
  } else {
    clear_has_initial_pose_topic();
  }
  initial_pose_topic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), initial_pose_topic);
  // @@protoc_insertion_point(field_set_allocated:group_formation.Robot.initial_pose_topic)
}

// optional .group_formation.Pose initial_pose = 5;
inline bool Robot::has_initial_pose() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Robot::set_has_initial_pose() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Robot::clear_has_initial_pose() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Robot::clear_initial_pose() {
  if (initial_pose_ != NULL) initial_pose_->::group_formation::Pose::Clear();
  clear_has_initial_pose();
}
inline const ::group_formation::Pose& Robot::initial_pose() const {
  // @@protoc_insertion_point(field_get:group_formation.Robot.initial_pose)
  return initial_pose_ != NULL ? *initial_pose_ : *default_instance_->initial_pose_;
}
inline ::group_formation::Pose* Robot::mutable_initial_pose() {
  set_has_initial_pose();
  if (initial_pose_ == NULL) {
    initial_pose_ = new ::group_formation::Pose;
  }
  // @@protoc_insertion_point(field_mutable:group_formation.Robot.initial_pose)
  return initial_pose_;
}
inline ::group_formation::Pose* Robot::release_initial_pose() {
  // @@protoc_insertion_point(field_release:group_formation.Robot.initial_pose)
  clear_has_initial_pose();
  ::group_formation::Pose* temp = initial_pose_;
  initial_pose_ = NULL;
  return temp;
}
inline void Robot::set_allocated_initial_pose(::group_formation::Pose* initial_pose) {
  delete initial_pose_;
  initial_pose_ = initial_pose;
  if (initial_pose) {
    set_has_initial_pose();
  } else {
    clear_has_initial_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:group_formation.Robot.initial_pose)
}

// -------------------------------------------------------------------

// GroupConfig

// optional .group_formation.Pose start_pose = 1;
inline bool GroupConfig::has_start_pose() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GroupConfig::set_has_start_pose() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GroupConfig::clear_has_start_pose() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GroupConfig::clear_start_pose() {
  if (start_pose_ != NULL) start_pose_->::group_formation::Pose::Clear();
  clear_has_start_pose();
}
inline const ::group_formation::Pose& GroupConfig::start_pose() const {
  // @@protoc_insertion_point(field_get:group_formation.GroupConfig.start_pose)
  return start_pose_ != NULL ? *start_pose_ : *default_instance_->start_pose_;
}
inline ::group_formation::Pose* GroupConfig::mutable_start_pose() {
  set_has_start_pose();
  if (start_pose_ == NULL) {
    start_pose_ = new ::group_formation::Pose;
  }
  // @@protoc_insertion_point(field_mutable:group_formation.GroupConfig.start_pose)
  return start_pose_;
}
inline ::group_formation::Pose* GroupConfig::release_start_pose() {
  // @@protoc_insertion_point(field_release:group_formation.GroupConfig.start_pose)
  clear_has_start_pose();
  ::group_formation::Pose* temp = start_pose_;
  start_pose_ = NULL;
  return temp;
}
inline void GroupConfig::set_allocated_start_pose(::group_formation::Pose* start_pose) {
  delete start_pose_;
  start_pose_ = start_pose;
  if (start_pose) {
    set_has_start_pose();
  } else {
    clear_has_start_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:group_formation.GroupConfig.start_pose)
}

// optional .group_formation.Pose door_pose = 2;
inline bool GroupConfig::has_door_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GroupConfig::set_has_door_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GroupConfig::clear_has_door_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GroupConfig::clear_door_pose() {
  if (door_pose_ != NULL) door_pose_->::group_formation::Pose::Clear();
  clear_has_door_pose();
}
inline const ::group_formation::Pose& GroupConfig::door_pose() const {
  // @@protoc_insertion_point(field_get:group_formation.GroupConfig.door_pose)
  return door_pose_ != NULL ? *door_pose_ : *default_instance_->door_pose_;
}
inline ::group_formation::Pose* GroupConfig::mutable_door_pose() {
  set_has_door_pose();
  if (door_pose_ == NULL) {
    door_pose_ = new ::group_formation::Pose;
  }
  // @@protoc_insertion_point(field_mutable:group_formation.GroupConfig.door_pose)
  return door_pose_;
}
inline ::group_formation::Pose* GroupConfig::release_door_pose() {
  // @@protoc_insertion_point(field_release:group_formation.GroupConfig.door_pose)
  clear_has_door_pose();
  ::group_formation::Pose* temp = door_pose_;
  door_pose_ = NULL;
  return temp;
}
inline void GroupConfig::set_allocated_door_pose(::group_formation::Pose* door_pose) {
  delete door_pose_;
  door_pose_ = door_pose;
  if (door_pose) {
    set_has_door_pose();
  } else {
    clear_has_door_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:group_formation.GroupConfig.door_pose)
}

// optional .group_formation.Pose tv_pose = 3;
inline bool GroupConfig::has_tv_pose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GroupConfig::set_has_tv_pose() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GroupConfig::clear_has_tv_pose() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GroupConfig::clear_tv_pose() {
  if (tv_pose_ != NULL) tv_pose_->::group_formation::Pose::Clear();
  clear_has_tv_pose();
}
inline const ::group_formation::Pose& GroupConfig::tv_pose() const {
  // @@protoc_insertion_point(field_get:group_formation.GroupConfig.tv_pose)
  return tv_pose_ != NULL ? *tv_pose_ : *default_instance_->tv_pose_;
}
inline ::group_formation::Pose* GroupConfig::mutable_tv_pose() {
  set_has_tv_pose();
  if (tv_pose_ == NULL) {
    tv_pose_ = new ::group_formation::Pose;
  }
  // @@protoc_insertion_point(field_mutable:group_formation.GroupConfig.tv_pose)
  return tv_pose_;
}
inline ::group_formation::Pose* GroupConfig::release_tv_pose() {
  // @@protoc_insertion_point(field_release:group_formation.GroupConfig.tv_pose)
  clear_has_tv_pose();
  ::group_formation::Pose* temp = tv_pose_;
  tv_pose_ = NULL;
  return temp;
}
inline void GroupConfig::set_allocated_tv_pose(::group_formation::Pose* tv_pose) {
  delete tv_pose_;
  tv_pose_ = tv_pose;
  if (tv_pose) {
    set_has_tv_pose();
  } else {
    clear_has_tv_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:group_formation.GroupConfig.tv_pose)
}

// repeated .group_formation.Robot robot = 4;
inline int GroupConfig::robot_size() const {
  return robot_.size();
}
inline void GroupConfig::clear_robot() {
  robot_.Clear();
}
inline const ::group_formation::Robot& GroupConfig::robot(int index) const {
  // @@protoc_insertion_point(field_get:group_formation.GroupConfig.robot)
  return robot_.Get(index);
}
inline ::group_formation::Robot* GroupConfig::mutable_robot(int index) {
  // @@protoc_insertion_point(field_mutable:group_formation.GroupConfig.robot)
  return robot_.Mutable(index);
}
inline ::group_formation::Robot* GroupConfig::add_robot() {
  // @@protoc_insertion_point(field_add:group_formation.GroupConfig.robot)
  return robot_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::group_formation::Robot >*
GroupConfig::mutable_robot() {
  // @@protoc_insertion_point(field_mutable_list:group_formation.GroupConfig.robot)
  return &robot_;
}
inline const ::google::protobuf::RepeatedPtrField< ::group_formation::Robot >&
GroupConfig::robot() const {
  // @@protoc_insertion_point(field_list:group_formation.GroupConfig.robot)
  return robot_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace group_formation

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_group_5fformation_2eproto__INCLUDED