#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IVivoxService)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class ReadOnlyDictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
namespace Unity::Services::Vivox {
class ChannelOptions;
}
namespace Unity::Services::Vivox {
struct ChatCapability;
}
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
namespace Unity::Services::Vivox {
class ConversationQueryOptions;
}
namespace Unity::Services::Vivox {
class IVivoxTokenProvider;
}
namespace Unity::Services::Vivox {
class LoginOptions;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
struct TextToSpeechMessageType;
}
namespace Unity::Services::Vivox {
struct TransmissionMode;
}
namespace Unity::Services::Vivox {
class VivoxConfigurationOptions;
}
namespace Unity::Services::Vivox {
class VivoxConversation;
}
namespace Unity::Services::Vivox {
class VivoxInputDevice;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace Unity::Services::Vivox {
class VivoxOutputDevice;
}
namespace Unity::Services::Vivox {
class VivoxParticipant;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IVivoxService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IVivoxService);
// Type: Unity.Services.Vivox::IVivoxService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IVivoxService*
class CORDL_TYPE IVivoxService {
public:
  // Declarations
  __declspec(property(get = get_ActiveChannels))::System::Collections::ObjectModel::ReadOnlyDictionary_2<
      ::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>* ActiveChannels;

  __declspec(property(get = get_ActiveInputDevice))::Unity::Services::Vivox::VivoxInputDevice* ActiveInputDevice;

  __declspec(property(get = get_ActiveOutputDevice))::Unity::Services::Vivox::VivoxOutputDevice* ActiveOutputDevice;

  __declspec(property(get = get_AvailableInputDevices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* AvailableInputDevices;

  __declspec(property(get = get_AvailableOutputDevices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* AvailableOutputDevices;

  __declspec(property(get = get_InputDeviceVolume)) int32_t InputDeviceVolume;

  __declspec(property(get = get_IsAudioEchoCancellationEnabled)) bool IsAudioEchoCancellationEnabled;

  __declspec(property(get = get_IsInputDeviceMuted)) bool IsInputDeviceMuted;

  __declspec(property(get = get_IsLoggedIn)) bool IsLoggedIn;

  __declspec(property(get = get_IsOutputDeviceMuted)) bool IsOutputDeviceMuted;

  __declspec(property(get = get_OutputDeviceVolume)) int32_t OutputDeviceVolume;

  __declspec(property(get = get_SignedInPlayerId))::StringW SignedInPlayerId;

  __declspec(property(get = get_TextToSpeechAvailableVoices))::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* TextToSpeechAvailableVoices;

  __declspec(property(get = get_TextToSpeechCurrentVoice))::StringW TextToSpeechCurrentVoice;

  __declspec(property(get = get_TransmittingChannels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* TransmittingChannels;

  /// @brief Method BlockPlayerAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* BlockPlayerAsync(::StringW playerId);

  /// @brief Method DeleteChannelTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteChannelTextMessageAsync(::StringW channelName, ::StringW messageId);

  /// @brief Method DeleteDirectTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteDirectTextMessageAsync(::StringW messageId);

  /// @brief Method DisableAcousticEchoCancellation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DisableAcousticEchoCancellation();

  /// @brief Method DisableAutoVoiceActivityDetectionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DisableAutoVoiceActivityDetectionAsync();

  /// @brief Method EditChannelTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EditChannelTextMessageAsync(::StringW channelName, ::StringW messageId, ::StringW newMessage);

  /// @brief Method EditDirectTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EditDirectTextMessageAsync(::StringW messageId, ::StringW newMessage);

  /// @brief Method EnableAcousticEchoCancellation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EnableAcousticEchoCancellation();

  /// @brief Method EnableAutoVoiceActivityDetectionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EnableAutoVoiceActivityDetectionAsync();

  /// @brief Method GetChannelTextMessageHistoryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetChannelTextMessageHistoryAsync(::StringW channelName, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions);

  /// @brief Method GetConversationsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*
  GetConversationsAsync(::Unity::Services::Vivox::ConversationQueryOptions* options);

  /// @brief Method GetDirectTextMessageHistoryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetDirectTextMessageHistoryAsync(::StringW playerId, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions);

  /// @brief Method InitializeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Vivox::VivoxConfigurationOptions* options);

  /// @brief Method JoinEchoChannelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* JoinEchoChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method JoinGroupChannelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* JoinGroupChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                 ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method JoinPositionalChannelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* JoinPositionalChannelAsync(::StringW channelName, ::Unity::Services::Vivox::ChatCapability chatCapability,
                                                                      ::Unity::Services::Vivox::Channel3DProperties* positionalChannelProperties,
                                                                      ::Unity::Services::Vivox::ChannelOptions* channelOptions);

  /// @brief Method LeaveAllChannelsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LeaveAllChannelsAsync();

  /// @brief Method LeaveChannelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LeaveChannelAsync(::StringW channelName);

  /// @brief Method LoginAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LoginAsync(::Unity::Services::Vivox::LoginOptions* options);

  /// @brief Method LogoutAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LogoutAsync();

  /// @brief Method MuteInputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MuteInputDevice();

  /// @brief Method MuteOutputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MuteOutputDevice();

  /// @brief Method SendChannelTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SendChannelTextMessageAsync(::StringW channelName, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method SendDirectTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SendDirectTextMessageAsync(::StringW playerId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method Set3DPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Set3DPosition(::UnityEngine::GameObject* participantObject, ::StringW channelName, bool allowPanning);

  /// @brief Method Set3DPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Set3DPosition(::UnityEngine::Vector3 speakerPos, ::UnityEngine::Vector3 listenerPos, ::UnityEngine::Vector3 listenerAtOrient, ::UnityEngine::Vector3 listenerUpOrient,
                            ::StringW channelName, bool allowPanning);

  /// @brief Method SetActiveInputDeviceAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetActiveInputDeviceAsync(::Unity::Services::Vivox::VivoxInputDevice* device);

  /// @brief Method SetActiveOutputDeviceAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetActiveOutputDeviceAsync(::Unity::Services::Vivox::VivoxOutputDevice* device);

  /// @brief Method SetChannelTransmissionModeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetChannelTransmissionModeAsync(::Unity::Services::Vivox::TransmissionMode transmissionMode, ::StringW channelName);

  /// @brief Method SetChannelVolumeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetChannelVolumeAsync(::StringW channelName, int32_t value);

  /// @brief Method SetInputDeviceVolume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInputDeviceVolume(int32_t value);

  /// @brief Method SetMessageAsReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetMessageAsReadAsync(::Unity::Services::Vivox::VivoxMessage* message, ::System::Nullable_1<::System::DateTime> seenAt);

  /// @brief Method SetOutputDeviceVolume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetOutputDeviceVolume(int32_t value);

  /// @brief Method SetTokenProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetTokenProvider(::Unity::Services::Vivox::IVivoxTokenProvider* tokenProvider);

  /// @brief Method SetVoiceActivityDetectionPropertiesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetVoiceActivityDetectionPropertiesAsync(int32_t hangover, int32_t noiseFloor, int32_t sensitivity);

  /// @brief Method TextToSpeechCancelAllMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TextToSpeechCancelAllMessages();

  /// @brief Method TextToSpeechCancelMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TextToSpeechCancelMessages(::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method TextToSpeechSendMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TextToSpeechSendMessage(::StringW message, ::Unity::Services::Vivox::TextToSpeechMessageType messageType);

  /// @brief Method TextToSpeechSetVoice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TextToSpeechSetVoice(::StringW voiceName);

  /// @brief Method UnblockPlayerAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* UnblockPlayerAsync(::StringW playerId);

  /// @brief Method UnmuteInputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnmuteInputDevice();

  /// @brief Method UnmuteOutputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnmuteOutputDevice();

  /// @brief Method add_AvailableInputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AvailableInputDevicesChanged(::System::Action* value);

  /// @brief Method add_AvailableOutputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AvailableOutputDevicesChanged(::System::Action* value);

  /// @brief Method add_ChannelJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ChannelJoined(::System::Action_1<::StringW>* value);

  /// @brief Method add_ChannelLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ChannelLeft(::System::Action_1<::StringW>* value);

  /// @brief Method add_ChannelMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ChannelMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ChannelMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ChannelMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ChannelMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ChannelMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_ConnectionFailedToRecover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ConnectionFailedToRecover(::System::Action* value);

  /// @brief Method add_ConnectionRecovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ConnectionRecovered(::System::Action* value);

  /// @brief Method add_ConnectionRecovering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ConnectionRecovering(::System::Action* value);

  /// @brief Method add_DirectedMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_DirectedMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_DirectedMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_DirectedMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_LoggedIn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_LoggedIn(::System::Action* value);

  /// @brief Method add_LoggedOut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_LoggedOut(::System::Action* value);

  /// @brief Method add_ParticipantAddedToChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ParticipantAddedToChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method add_ParticipantRemovedFromChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ParticipantRemovedFromChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method get_ActiveChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxParticipant*>*>*
  get_ActiveChannels();

  /// @brief Method get_ActiveInputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::VivoxInputDevice* get_ActiveInputDevice();

  /// @brief Method get_ActiveOutputDevice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::VivoxOutputDevice* get_ActiveOutputDevice();

  /// @brief Method get_AvailableInputDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxInputDevice*>* get_AvailableInputDevices();

  /// @brief Method get_AvailableOutputDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxOutputDevice*>* get_AvailableOutputDevices();

  /// @brief Method get_InputDeviceVolume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_InputDeviceVolume();

  /// @brief Method get_IsAudioEchoCancellationEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsAudioEchoCancellationEnabled();

  /// @brief Method get_IsInputDeviceMuted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInputDeviceMuted();

  /// @brief Method get_IsLoggedIn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsLoggedIn();

  /// @brief Method get_IsOutputDeviceMuted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsOutputDeviceMuted();

  /// @brief Method get_OutputDeviceVolume, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_OutputDeviceVolume();

  /// @brief Method get_SignedInPlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_SignedInPlayerId();

  /// @brief Method get_TextToSpeechAvailableVoices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_TextToSpeechAvailableVoices();

  /// @brief Method get_TextToSpeechCurrentVoice, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_TextToSpeechCurrentVoice();

  /// @brief Method get_TransmittingChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* get_TransmittingChannels();

  /// @brief Method remove_AvailableInputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AvailableInputDevicesChanged(::System::Action* value);

  /// @brief Method remove_AvailableOutputDevicesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AvailableOutputDevicesChanged(::System::Action* value);

  /// @brief Method remove_ChannelJoined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ChannelJoined(::System::Action_1<::StringW>* value);

  /// @brief Method remove_ChannelLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ChannelLeft(::System::Action_1<::StringW>* value);

  /// @brief Method remove_ChannelMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ChannelMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ChannelMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ChannelMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ChannelMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ChannelMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_ConnectionFailedToRecover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ConnectionFailedToRecover(::System::Action* value);

  /// @brief Method remove_ConnectionRecovered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ConnectionRecovered(::System::Action* value);

  /// @brief Method remove_ConnectionRecovering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ConnectionRecovering(::System::Action* value);

  /// @brief Method remove_DirectedMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_DirectedMessageDeleted(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_DirectedMessageEdited(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_DirectedMessageReceived(::System::Action_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_LoggedIn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_LoggedIn(::System::Action* value);

  /// @brief Method remove_LoggedOut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_LoggedOut(::System::Action* value);

  /// @brief Method remove_ParticipantAddedToChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ParticipantAddedToChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  /// @brief Method remove_ParticipantRemovedFromChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ParticipantRemovedFromChannel(::System::Action_1<::Unity::Services::Vivox::VivoxParticipant*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVivoxService(IVivoxService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVivoxService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVivoxService(IVivoxService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IVivoxService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IVivoxService*, "Unity.Services.Vivox", "IVivoxService");
