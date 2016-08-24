// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kinect_robot.proto

#ifndef PROTOBUF_kinect_5frobot_2eproto__INCLUDED
#define PROTOBUF_kinect_5frobot_2eproto__INCLUDED

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

namespace kinectrobot {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_kinect_5frobot_2eproto();
void protobuf_AssignDesc_kinect_5frobot_2eproto();
void protobuf_ShutdownFile_kinect_5frobot_2eproto();

class Response;
class Speech;
class UrlInfo;
class VoiceTriggers;

// ===================================================================

class Speech : public ::google::protobuf::Message {
 public:
  Speech();
  virtual ~Speech();

  Speech(const Speech& from);

  inline Speech& operator=(const Speech& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Speech& default_instance();

  void Swap(Speech* other);

  // implements Message ----------------------------------------------

  inline Speech* New() const { return New(NULL); }

  Speech* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Speech& from);
  void MergeFrom(const Speech& from);
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
  void InternalSwap(Speech* other);
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

  // optional string command = 1;
  void clear_command();
  static const int kCommandFieldNumber = 1;
  const ::std::string& command() const;
  void set_command(const ::std::string& value);
  void set_command(const char* value);
  void set_command(const char* value, size_t size);
  ::std::string* mutable_command();
  ::std::string* release_command();
  void set_allocated_command(::std::string* command);

  // optional string speech = 2;
  void clear_speech();
  static const int kSpeechFieldNumber = 2;
  const ::std::string& speech() const;
  void set_speech(const ::std::string& value);
  void set_speech(const char* value);
  void set_speech(const char* value, size_t size);
  ::std::string* mutable_speech();
  ::std::string* release_speech();
  void set_allocated_speech(::std::string* speech);

  // @@protoc_insertion_point(class_scope:kinectrobot.Speech)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr command_;
  ::google::protobuf::internal::ArenaStringPtr speech_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_kinect_5frobot_2eproto();
  friend void protobuf_AssignDesc_kinect_5frobot_2eproto();
  friend void protobuf_ShutdownFile_kinect_5frobot_2eproto();

  void InitAsDefaultInstance();
  static Speech* default_instance_;
};
// -------------------------------------------------------------------

class VoiceTriggers : public ::google::protobuf::Message {
 public:
  VoiceTriggers();
  virtual ~VoiceTriggers();

  VoiceTriggers(const VoiceTriggers& from);

  inline VoiceTriggers& operator=(const VoiceTriggers& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const VoiceTriggers& default_instance();

  void Swap(VoiceTriggers* other);

  // implements Message ----------------------------------------------

  inline VoiceTriggers* New() const { return New(NULL); }

  VoiceTriggers* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VoiceTriggers& from);
  void MergeFrom(const VoiceTriggers& from);
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
  void InternalSwap(VoiceTriggers* other);
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

  // optional bool AutoTriggerAfterRecognition = 1;
  void clear_autotriggerafterrecognition();
  static const int kAutoTriggerAfterRecognitionFieldNumber = 1;
  bool autotriggerafterrecognition() const;
  void set_autotriggerafterrecognition(bool value);

  // optional bool AutoTriggerDuringSpeech = 2;
  void clear_autotriggerduringspeech();
  static const int kAutoTriggerDuringSpeechFieldNumber = 2;
  bool autotriggerduringspeech() const;
  void set_autotriggerduringspeech(bool value);

  // optional bool ManualTriggerOn = 3;
  void clear_manualtriggeron();
  static const int kManualTriggerOnFieldNumber = 3;
  bool manualtriggeron() const;
  void set_manualtriggeron(bool value);

  // optional bool ManualTriggerOff = 4;
  void clear_manualtriggeroff();
  static const int kManualTriggerOffFieldNumber = 4;
  bool manualtriggeroff() const;
  void set_manualtriggeroff(bool value);

  // @@protoc_insertion_point(class_scope:kinectrobot.VoiceTriggers)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  bool autotriggerafterrecognition_;
  bool autotriggerduringspeech_;
  bool manualtriggeron_;
  bool manualtriggeroff_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_kinect_5frobot_2eproto();
  friend void protobuf_AssignDesc_kinect_5frobot_2eproto();
  friend void protobuf_ShutdownFile_kinect_5frobot_2eproto();

  void InitAsDefaultInstance();
  static VoiceTriggers* default_instance_;
};
// -------------------------------------------------------------------

class UrlInfo : public ::google::protobuf::Message {
 public:
  UrlInfo();
  virtual ~UrlInfo();

  UrlInfo(const UrlInfo& from);

  inline UrlInfo& operator=(const UrlInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UrlInfo& default_instance();

  void Swap(UrlInfo* other);

  // implements Message ----------------------------------------------

  inline UrlInfo* New() const { return New(NULL); }

  UrlInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UrlInfo& from);
  void MergeFrom(const UrlInfo& from);
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
  void InternalSwap(UrlInfo* other);
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

  // optional string url = 1;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // optional string linkhead = 2;
  void clear_linkhead();
  static const int kLinkheadFieldNumber = 2;
  const ::std::string& linkhead() const;
  void set_linkhead(const ::std::string& value);
  void set_linkhead(const char* value);
  void set_linkhead(const char* value, size_t size);
  ::std::string* mutable_linkhead();
  ::std::string* release_linkhead();
  void set_allocated_linkhead(::std::string* linkhead);

  // optional string key = 3;
  void clear_key();
  static const int kKeyFieldNumber = 3;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string style = 4;
  void clear_style();
  static const int kStyleFieldNumber = 4;
  const ::std::string& style() const;
  void set_style(const ::std::string& value);
  void set_style(const char* value);
  void set_style(const char* value, size_t size);
  ::std::string* mutable_style();
  ::std::string* release_style();
  void set_allocated_style(::std::string* style);

  // @@protoc_insertion_point(class_scope:kinectrobot.UrlInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr linkhead_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr style_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_kinect_5frobot_2eproto();
  friend void protobuf_AssignDesc_kinect_5frobot_2eproto();
  friend void protobuf_ShutdownFile_kinect_5frobot_2eproto();

  void InitAsDefaultInstance();
  static UrlInfo* default_instance_;
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  void Swap(Response* other);

  // implements Message ----------------------------------------------

  inline Response* New() const { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
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
  void InternalSwap(Response* other);
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

  // optional bool status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  bool status() const;
  void set_status(bool value);

  // @@protoc_insertion_point(class_scope:kinectrobot.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  bool status_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_kinect_5frobot_2eproto();
  friend void protobuf_AssignDesc_kinect_5frobot_2eproto();
  friend void protobuf_ShutdownFile_kinect_5frobot_2eproto();

  void InitAsDefaultInstance();
  static Response* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Speech

// optional string command = 1;
inline void Speech::clear_command() {
  command_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Speech::command() const {
  // @@protoc_insertion_point(field_get:kinectrobot.Speech.command)
  return command_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Speech::set_command(const ::std::string& value) {
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.Speech.command)
}
inline void Speech::set_command(const char* value) {
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.Speech.command)
}
inline void Speech::set_command(const char* value, size_t size) {
  
  command_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.Speech.command)
}
inline ::std::string* Speech::mutable_command() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.Speech.command)
  return command_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Speech::release_command() {
  // @@protoc_insertion_point(field_release:kinectrobot.Speech.command)
  
  return command_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Speech::set_allocated_command(::std::string* command) {
  if (command != NULL) {
    
  } else {
    
  }
  command_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), command);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.Speech.command)
}

// optional string speech = 2;
inline void Speech::clear_speech() {
  speech_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Speech::speech() const {
  // @@protoc_insertion_point(field_get:kinectrobot.Speech.speech)
  return speech_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Speech::set_speech(const ::std::string& value) {
  
  speech_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.Speech.speech)
}
inline void Speech::set_speech(const char* value) {
  
  speech_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.Speech.speech)
}
inline void Speech::set_speech(const char* value, size_t size) {
  
  speech_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.Speech.speech)
}
inline ::std::string* Speech::mutable_speech() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.Speech.speech)
  return speech_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Speech::release_speech() {
  // @@protoc_insertion_point(field_release:kinectrobot.Speech.speech)
  
  return speech_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Speech::set_allocated_speech(::std::string* speech) {
  if (speech != NULL) {
    
  } else {
    
  }
  speech_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), speech);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.Speech.speech)
}

// -------------------------------------------------------------------

// VoiceTriggers

// optional bool AutoTriggerAfterRecognition = 1;
inline void VoiceTriggers::clear_autotriggerafterrecognition() {
  autotriggerafterrecognition_ = false;
}
inline bool VoiceTriggers::autotriggerafterrecognition() const {
  // @@protoc_insertion_point(field_get:kinectrobot.VoiceTriggers.AutoTriggerAfterRecognition)
  return autotriggerafterrecognition_;
}
inline void VoiceTriggers::set_autotriggerafterrecognition(bool value) {
  
  autotriggerafterrecognition_ = value;
  // @@protoc_insertion_point(field_set:kinectrobot.VoiceTriggers.AutoTriggerAfterRecognition)
}

// optional bool AutoTriggerDuringSpeech = 2;
inline void VoiceTriggers::clear_autotriggerduringspeech() {
  autotriggerduringspeech_ = false;
}
inline bool VoiceTriggers::autotriggerduringspeech() const {
  // @@protoc_insertion_point(field_get:kinectrobot.VoiceTriggers.AutoTriggerDuringSpeech)
  return autotriggerduringspeech_;
}
inline void VoiceTriggers::set_autotriggerduringspeech(bool value) {
  
  autotriggerduringspeech_ = value;
  // @@protoc_insertion_point(field_set:kinectrobot.VoiceTriggers.AutoTriggerDuringSpeech)
}

// optional bool ManualTriggerOn = 3;
inline void VoiceTriggers::clear_manualtriggeron() {
  manualtriggeron_ = false;
}
inline bool VoiceTriggers::manualtriggeron() const {
  // @@protoc_insertion_point(field_get:kinectrobot.VoiceTriggers.ManualTriggerOn)
  return manualtriggeron_;
}
inline void VoiceTriggers::set_manualtriggeron(bool value) {
  
  manualtriggeron_ = value;
  // @@protoc_insertion_point(field_set:kinectrobot.VoiceTriggers.ManualTriggerOn)
}

// optional bool ManualTriggerOff = 4;
inline void VoiceTriggers::clear_manualtriggeroff() {
  manualtriggeroff_ = false;
}
inline bool VoiceTriggers::manualtriggeroff() const {
  // @@protoc_insertion_point(field_get:kinectrobot.VoiceTriggers.ManualTriggerOff)
  return manualtriggeroff_;
}
inline void VoiceTriggers::set_manualtriggeroff(bool value) {
  
  manualtriggeroff_ = value;
  // @@protoc_insertion_point(field_set:kinectrobot.VoiceTriggers.ManualTriggerOff)
}

// -------------------------------------------------------------------

// UrlInfo

// optional string url = 1;
inline void UrlInfo::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UrlInfo::url() const {
  // @@protoc_insertion_point(field_get:kinectrobot.UrlInfo.url)
  return url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.UrlInfo.url)
}
inline void UrlInfo::set_url(const char* value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.UrlInfo.url)
}
inline void UrlInfo::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.UrlInfo.url)
}
inline ::std::string* UrlInfo::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.UrlInfo.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UrlInfo::release_url() {
  // @@protoc_insertion_point(field_release:kinectrobot.UrlInfo.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.UrlInfo.url)
}

// optional string linkhead = 2;
inline void UrlInfo::clear_linkhead() {
  linkhead_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UrlInfo::linkhead() const {
  // @@protoc_insertion_point(field_get:kinectrobot.UrlInfo.linkhead)
  return linkhead_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_linkhead(const ::std::string& value) {
  
  linkhead_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.UrlInfo.linkhead)
}
inline void UrlInfo::set_linkhead(const char* value) {
  
  linkhead_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.UrlInfo.linkhead)
}
inline void UrlInfo::set_linkhead(const char* value, size_t size) {
  
  linkhead_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.UrlInfo.linkhead)
}
inline ::std::string* UrlInfo::mutable_linkhead() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.UrlInfo.linkhead)
  return linkhead_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UrlInfo::release_linkhead() {
  // @@protoc_insertion_point(field_release:kinectrobot.UrlInfo.linkhead)
  
  return linkhead_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_allocated_linkhead(::std::string* linkhead) {
  if (linkhead != NULL) {
    
  } else {
    
  }
  linkhead_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), linkhead);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.UrlInfo.linkhead)
}

// optional string key = 3;
inline void UrlInfo::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UrlInfo::key() const {
  // @@protoc_insertion_point(field_get:kinectrobot.UrlInfo.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.UrlInfo.key)
}
inline void UrlInfo::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.UrlInfo.key)
}
inline void UrlInfo::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.UrlInfo.key)
}
inline ::std::string* UrlInfo::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.UrlInfo.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UrlInfo::release_key() {
  // @@protoc_insertion_point(field_release:kinectrobot.UrlInfo.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.UrlInfo.key)
}

// optional string style = 4;
inline void UrlInfo::clear_style() {
  style_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UrlInfo::style() const {
  // @@protoc_insertion_point(field_get:kinectrobot.UrlInfo.style)
  return style_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_style(const ::std::string& value) {
  
  style_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:kinectrobot.UrlInfo.style)
}
inline void UrlInfo::set_style(const char* value) {
  
  style_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:kinectrobot.UrlInfo.style)
}
inline void UrlInfo::set_style(const char* value, size_t size) {
  
  style_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:kinectrobot.UrlInfo.style)
}
inline ::std::string* UrlInfo::mutable_style() {
  
  // @@protoc_insertion_point(field_mutable:kinectrobot.UrlInfo.style)
  return style_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UrlInfo::release_style() {
  // @@protoc_insertion_point(field_release:kinectrobot.UrlInfo.style)
  
  return style_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UrlInfo::set_allocated_style(::std::string* style) {
  if (style != NULL) {
    
  } else {
    
  }
  style_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), style);
  // @@protoc_insertion_point(field_set_allocated:kinectrobot.UrlInfo.style)
}

// -------------------------------------------------------------------

// Response

// optional bool status = 1;
inline void Response::clear_status() {
  status_ = false;
}
inline bool Response::status() const {
  // @@protoc_insertion_point(field_get:kinectrobot.Response.status)
  return status_;
}
inline void Response::set_status(bool value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:kinectrobot.Response.status)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace kinectrobot

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_kinect_5frobot_2eproto__INCLUDED
