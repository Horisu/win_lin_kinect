// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kinect_robot.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Kinectrobot {

  /// <summary>Holder for reflection information generated from kinect_robot.proto</summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public static partial class KinectRobotReflection {

    #region Descriptor
    /// <summary>File descriptor for kinect_robot.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static KinectRobotReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChJraW5lY3Rfcm9ib3QucHJvdG8SC2tpbmVjdHJvYm90IikKBlNwZWVjaBIP",
            "Cgdjb21tYW5kGAEgASgJEg4KBnNwZWVjaBgCIAEoCSKIAQoNVm9pY2VUcmln",
            "Z2VycxIjChtBdXRvVHJpZ2dlckFmdGVyUmVjb2duaXRpb24YASABKAgSHwoX",
            "QXV0b1RyaWdnZXJEdXJpbmdTcGVlY2gYAiABKAgSFwoPTWFudWFsVHJpZ2dl",
            "ck9uGAMgASgIEhgKEE1hbnVhbFRyaWdnZXJPZmYYBCABKAgiRAoHVXJsSW5m",
            "bxILCgN1cmwYASABKAkSEAoIbGlua2hlYWQYAiABKAkSCwoDa2V5GAMgASgJ",
            "Eg0KBXN0eWxlGAQgASgJIhoKCFJlc3BvbnNlEg4KBnN0YXR1cxgBIAEoCDLL",
            "AQoLS2luZWN0Um9ib3QSOgoKU2VuZFNwZWVjaBITLmtpbmVjdHJvYm90LlNw",
            "ZWVjaBoVLmtpbmVjdHJvYm90LlJlc3BvbnNlIgASRQoOU2V0U1RUQmVoYXZp",
            "b3ISGi5raW5lY3Ryb2JvdC5Wb2ljZVRyaWdnZXJzGhUua2luZWN0cm9ib3Qu",
            "UmVzcG9uc2UiABI5CghXZWJBZ2VudBIULmtpbmVjdHJvYm90LlVybEluZm8a",
            "FS5raW5lY3Ryb2JvdC5SZXNwb25zZSIAQg8KB2V4LmdycGOiAgNSVEdiBnBy",
            "b3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Kinectrobot.Speech), global::Kinectrobot.Speech.Parser, new[]{ "Command", "Speech_" }, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Kinectrobot.VoiceTriggers), global::Kinectrobot.VoiceTriggers.Parser, new[]{ "AutoTriggerAfterRecognition", "AutoTriggerDuringSpeech", "ManualTriggerOn", "ManualTriggerOff" }, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Kinectrobot.UrlInfo), global::Kinectrobot.UrlInfo.Parser, new[]{ "Url", "Linkhead", "Key", "Style" }, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Kinectrobot.Response), global::Kinectrobot.Response.Parser, new[]{ "Status" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class Speech : pb::IMessage<Speech> {
    private static readonly pb::MessageParser<Speech> _parser = new pb::MessageParser<Speech>(() => new Speech());
    public static pb::MessageParser<Speech> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Kinectrobot.KinectRobotReflection.Descriptor.MessageTypes[0]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public Speech() {
      OnConstruction();
    }

    partial void OnConstruction();

    public Speech(Speech other) : this() {
      command_ = other.command_;
      speech_ = other.speech_;
    }

    public Speech Clone() {
      return new Speech(this);
    }

    /// <summary>Field number for the "command" field.</summary>
    public const int CommandFieldNumber = 1;
    private string command_ = "";
    public string Command {
      get { return command_; }
      set {
        command_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "speech" field.</summary>
    public const int Speech_FieldNumber = 2;
    private string speech_ = "";
    public string Speech_ {
      get { return speech_; }
      set {
        speech_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    public override bool Equals(object other) {
      return Equals(other as Speech);
    }

    public bool Equals(Speech other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Command != other.Command) return false;
      if (Speech_ != other.Speech_) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      if (Command.Length != 0) hash ^= Command.GetHashCode();
      if (Speech_.Length != 0) hash ^= Speech_.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      if (Command.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Command);
      }
      if (Speech_.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Speech_);
      }
    }

    public int CalculateSize() {
      int size = 0;
      if (Command.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Command);
      }
      if (Speech_.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Speech_);
      }
      return size;
    }

    public void MergeFrom(Speech other) {
      if (other == null) {
        return;
      }
      if (other.Command.Length != 0) {
        Command = other.Command;
      }
      if (other.Speech_.Length != 0) {
        Speech_ = other.Speech_;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 10: {
            Command = input.ReadString();
            break;
          }
          case 18: {
            Speech_ = input.ReadString();
            break;
          }
        }
      }
    }

  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class VoiceTriggers : pb::IMessage<VoiceTriggers> {
    private static readonly pb::MessageParser<VoiceTriggers> _parser = new pb::MessageParser<VoiceTriggers>(() => new VoiceTriggers());
    public static pb::MessageParser<VoiceTriggers> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Kinectrobot.KinectRobotReflection.Descriptor.MessageTypes[1]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public VoiceTriggers() {
      OnConstruction();
    }

    partial void OnConstruction();

    public VoiceTriggers(VoiceTriggers other) : this() {
      autoTriggerAfterRecognition_ = other.autoTriggerAfterRecognition_;
      autoTriggerDuringSpeech_ = other.autoTriggerDuringSpeech_;
      manualTriggerOn_ = other.manualTriggerOn_;
      manualTriggerOff_ = other.manualTriggerOff_;
    }

    public VoiceTriggers Clone() {
      return new VoiceTriggers(this);
    }

    /// <summary>Field number for the "AutoTriggerAfterRecognition" field.</summary>
    public const int AutoTriggerAfterRecognitionFieldNumber = 1;
    private bool autoTriggerAfterRecognition_;
    public bool AutoTriggerAfterRecognition {
      get { return autoTriggerAfterRecognition_; }
      set {
        autoTriggerAfterRecognition_ = value;
      }
    }

    /// <summary>Field number for the "AutoTriggerDuringSpeech" field.</summary>
    public const int AutoTriggerDuringSpeechFieldNumber = 2;
    private bool autoTriggerDuringSpeech_;
    public bool AutoTriggerDuringSpeech {
      get { return autoTriggerDuringSpeech_; }
      set {
        autoTriggerDuringSpeech_ = value;
      }
    }

    /// <summary>Field number for the "ManualTriggerOn" field.</summary>
    public const int ManualTriggerOnFieldNumber = 3;
    private bool manualTriggerOn_;
    public bool ManualTriggerOn {
      get { return manualTriggerOn_; }
      set {
        manualTriggerOn_ = value;
      }
    }

    /// <summary>Field number for the "ManualTriggerOff" field.</summary>
    public const int ManualTriggerOffFieldNumber = 4;
    private bool manualTriggerOff_;
    public bool ManualTriggerOff {
      get { return manualTriggerOff_; }
      set {
        manualTriggerOff_ = value;
      }
    }

    public override bool Equals(object other) {
      return Equals(other as VoiceTriggers);
    }

    public bool Equals(VoiceTriggers other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (AutoTriggerAfterRecognition != other.AutoTriggerAfterRecognition) return false;
      if (AutoTriggerDuringSpeech != other.AutoTriggerDuringSpeech) return false;
      if (ManualTriggerOn != other.ManualTriggerOn) return false;
      if (ManualTriggerOff != other.ManualTriggerOff) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      if (AutoTriggerAfterRecognition != false) hash ^= AutoTriggerAfterRecognition.GetHashCode();
      if (AutoTriggerDuringSpeech != false) hash ^= AutoTriggerDuringSpeech.GetHashCode();
      if (ManualTriggerOn != false) hash ^= ManualTriggerOn.GetHashCode();
      if (ManualTriggerOff != false) hash ^= ManualTriggerOff.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      if (AutoTriggerAfterRecognition != false) {
        output.WriteRawTag(8);
        output.WriteBool(AutoTriggerAfterRecognition);
      }
      if (AutoTriggerDuringSpeech != false) {
        output.WriteRawTag(16);
        output.WriteBool(AutoTriggerDuringSpeech);
      }
      if (ManualTriggerOn != false) {
        output.WriteRawTag(24);
        output.WriteBool(ManualTriggerOn);
      }
      if (ManualTriggerOff != false) {
        output.WriteRawTag(32);
        output.WriteBool(ManualTriggerOff);
      }
    }

    public int CalculateSize() {
      int size = 0;
      if (AutoTriggerAfterRecognition != false) {
        size += 1 + 1;
      }
      if (AutoTriggerDuringSpeech != false) {
        size += 1 + 1;
      }
      if (ManualTriggerOn != false) {
        size += 1 + 1;
      }
      if (ManualTriggerOff != false) {
        size += 1 + 1;
      }
      return size;
    }

    public void MergeFrom(VoiceTriggers other) {
      if (other == null) {
        return;
      }
      if (other.AutoTriggerAfterRecognition != false) {
        AutoTriggerAfterRecognition = other.AutoTriggerAfterRecognition;
      }
      if (other.AutoTriggerDuringSpeech != false) {
        AutoTriggerDuringSpeech = other.AutoTriggerDuringSpeech;
      }
      if (other.ManualTriggerOn != false) {
        ManualTriggerOn = other.ManualTriggerOn;
      }
      if (other.ManualTriggerOff != false) {
        ManualTriggerOff = other.ManualTriggerOff;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 8: {
            AutoTriggerAfterRecognition = input.ReadBool();
            break;
          }
          case 16: {
            AutoTriggerDuringSpeech = input.ReadBool();
            break;
          }
          case 24: {
            ManualTriggerOn = input.ReadBool();
            break;
          }
          case 32: {
            ManualTriggerOff = input.ReadBool();
            break;
          }
        }
      }
    }

  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class UrlInfo : pb::IMessage<UrlInfo> {
    private static readonly pb::MessageParser<UrlInfo> _parser = new pb::MessageParser<UrlInfo>(() => new UrlInfo());
    public static pb::MessageParser<UrlInfo> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Kinectrobot.KinectRobotReflection.Descriptor.MessageTypes[2]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public UrlInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    public UrlInfo(UrlInfo other) : this() {
      url_ = other.url_;
      linkhead_ = other.linkhead_;
      key_ = other.key_;
      style_ = other.style_;
    }

    public UrlInfo Clone() {
      return new UrlInfo(this);
    }

    /// <summary>Field number for the "url" field.</summary>
    public const int UrlFieldNumber = 1;
    private string url_ = "";
    public string Url {
      get { return url_; }
      set {
        url_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "linkhead" field.</summary>
    public const int LinkheadFieldNumber = 2;
    private string linkhead_ = "";
    public string Linkhead {
      get { return linkhead_; }
      set {
        linkhead_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "key" field.</summary>
    public const int KeyFieldNumber = 3;
    private string key_ = "";
    public string Key {
      get { return key_; }
      set {
        key_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "style" field.</summary>
    public const int StyleFieldNumber = 4;
    private string style_ = "";
    public string Style {
      get { return style_; }
      set {
        style_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    public override bool Equals(object other) {
      return Equals(other as UrlInfo);
    }

    public bool Equals(UrlInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Url != other.Url) return false;
      if (Linkhead != other.Linkhead) return false;
      if (Key != other.Key) return false;
      if (Style != other.Style) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      if (Url.Length != 0) hash ^= Url.GetHashCode();
      if (Linkhead.Length != 0) hash ^= Linkhead.GetHashCode();
      if (Key.Length != 0) hash ^= Key.GetHashCode();
      if (Style.Length != 0) hash ^= Style.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      if (Url.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Url);
      }
      if (Linkhead.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Linkhead);
      }
      if (Key.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(Key);
      }
      if (Style.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Style);
      }
    }

    public int CalculateSize() {
      int size = 0;
      if (Url.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Url);
      }
      if (Linkhead.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Linkhead);
      }
      if (Key.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Key);
      }
      if (Style.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Style);
      }
      return size;
    }

    public void MergeFrom(UrlInfo other) {
      if (other == null) {
        return;
      }
      if (other.Url.Length != 0) {
        Url = other.Url;
      }
      if (other.Linkhead.Length != 0) {
        Linkhead = other.Linkhead;
      }
      if (other.Key.Length != 0) {
        Key = other.Key;
      }
      if (other.Style.Length != 0) {
        Style = other.Style;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 10: {
            Url = input.ReadString();
            break;
          }
          case 18: {
            Linkhead = input.ReadString();
            break;
          }
          case 26: {
            Key = input.ReadString();
            break;
          }
          case 34: {
            Style = input.ReadString();
            break;
          }
        }
      }
    }

  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class Response : pb::IMessage<Response> {
    private static readonly pb::MessageParser<Response> _parser = new pb::MessageParser<Response>(() => new Response());
    public static pb::MessageParser<Response> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Kinectrobot.KinectRobotReflection.Descriptor.MessageTypes[3]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public Response() {
      OnConstruction();
    }

    partial void OnConstruction();

    public Response(Response other) : this() {
      status_ = other.status_;
    }

    public Response Clone() {
      return new Response(this);
    }

    /// <summary>Field number for the "status" field.</summary>
    public const int StatusFieldNumber = 1;
    private bool status_;
    public bool Status {
      get { return status_; }
      set {
        status_ = value;
      }
    }

    public override bool Equals(object other) {
      return Equals(other as Response);
    }

    public bool Equals(Response other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Status != other.Status) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      if (Status != false) hash ^= Status.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      if (Status != false) {
        output.WriteRawTag(8);
        output.WriteBool(Status);
      }
    }

    public int CalculateSize() {
      int size = 0;
      if (Status != false) {
        size += 1 + 1;
      }
      return size;
    }

    public void MergeFrom(Response other) {
      if (other == null) {
        return;
      }
      if (other.Status != false) {
        Status = other.Status;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 8: {
            Status = input.ReadBool();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
