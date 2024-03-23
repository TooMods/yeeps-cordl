#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IChannelSession)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
namespace Unity::Services::Vivox {
class AccountId;
}
namespace Unity::Services::Vivox {
class ChannelId;
}
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
namespace Unity::Services::Vivox {
struct ConnectionState;
}
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class IChannelTextMessage;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class ILoginSession;
}
namespace Unity::Services::Vivox {
class IParticipant;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
namespace Unity::Services::Vivox {
class ISessionArchiveMessage;
}
namespace Unity::Services::Vivox {
class ITranscribedMessage;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class IChannelSession;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IChannelSession);
// Type: Unity.Services.Vivox::IChannelSession
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IChannelSession*
class CORDL_TYPE IChannelSession {
public:
  // Declarations
  __declspec(property(get = get_AudioState))::Unity::Services::Vivox::ConnectionState AudioState;

  __declspec(property(get = get_Channel))::Unity::Services::Vivox::ChannelId* Channel;

  __declspec(property(get = get_ChannelState))::Unity::Services::Vivox::ConnectionState ChannelState;

  __declspec(property(get = get_IsSessionBeingTranscribed)) bool IsSessionBeingTranscribed;

  __declspec(property(get = get_IsTransmitting)) bool IsTransmitting;

  __declspec(property(get = get_MessageLog))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* MessageLog;

  __declspec(property(get = get_Parent))::Unity::Services::Vivox::ILoginSession* Parent;

  __declspec(property(get = get_Participants))::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* Participants;

  __declspec(property(get = get_SessionArchive))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* SessionArchive;

  __declspec(property(get = get_SessionArchiveResult))::Unity::Services::Vivox::IArchiveQueryResult* SessionArchiveResult;

  __declspec(property(get = get_SessionHandle))::StringW SessionHandle;

  __declspec(property(get = get_TextState))::Unity::Services::Vivox::ConnectionState TextState;

  __declspec(property(get = get_TranscribedLog))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* TranscribedLog;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*() noexcept;

  /// @brief Method BeginConnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginConnect(bool connectAudio, bool connectText, bool switchTransmission, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSendText(::StringW language, ::StringW message, ::StringW applicationStanzaNamespace, ::StringW applicationStanzaBody, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSendText(::StringW message, ::Unity::Services::Vivox::MessageOptions* options, ::System::AsyncCallback* callback);

  /// @brief Method BeginSessionArchiveQuery, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSessionArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd, ::StringW searchText,
                                                          ::Unity::Services::Vivox::AccountId* userId, uint32_t max, ::StringW afterId, ::StringW beforeId, int32_t firstMessageIndex,
                                                          ::System::AsyncCallback* callback);

  /// @brief Method BeginSetAudioConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSetAudioConnected(bool value, bool switchTransmission, ::System::AsyncCallback* callback);

  /// @brief Method BeginSetChannelTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSetChannelTranscription(bool value, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginSetTextConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSetTextConnected(bool value, ::System::AsyncCallback* callback);

  /// @brief Method ConnectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ConnectAsync(bool connectAudio, bool connectText, bool switchTransmission, ::System::AsyncCallback* callback, ::StringW accessToken);

  /// @brief Method DeleteChannelTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteChannelTextMessageAsync(::StringW messageId);

  /// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* Disconnect(::System::AsyncCallback* callback);

  /// @brief Method DisconnectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DisconnectAsync();

  /// @brief Method EditChannelTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EditChannelTextMessageAsync(::StringW messageId, ::StringW newMessage);

  /// @brief Method EndConnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndConnect(::System::IAsyncResult* result);

  /// @brief Method EndSendText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSendText(::System::IAsyncResult* result);

  /// @brief Method EndSessionArchiveQuery, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSessionArchiveQuery(::System::IAsyncResult* result);

  /// @brief Method EndSetAudioConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSetAudioConnected(::System::IAsyncResult* result);

  /// @brief Method EndSetChannelTranscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSetChannelTranscription(::System::IAsyncResult* result);

  /// @brief Method EndSetTextConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSetTextConnected(::System::IAsyncResult* result);

  /// @brief Method GetChannelTextMessageHistoryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetChannelTextMessageHistoryAsync(int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions, ::System::AsyncCallback* callback);

  /// @brief Method GetConnectToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetConnectToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration);

  /// @brief Method GetConnectToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetConnectToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration);

  /// @brief Method GetTranscriptionToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetTranscriptionToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration);

  /// @brief Method GetTranscriptionToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetTranscriptionToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration);

  /// @brief Method SendChannelMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SendChannelMessageAsync(::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method Set3DPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Set3DPosition(::UnityEngine::Vector3 speakerPos, ::UnityEngine::Vector3 listenerPos, ::UnityEngine::Vector3 listenerAtOrient, ::UnityEngine::Vector3 listenerUpOrient);

  /// @brief Method SetVolumeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetVolumeAsync(int32_t value);

  /// @brief Method add_MessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_MessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method get_AudioState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ConnectionState get_AudioState();

  /// @brief Method get_Channel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ChannelId* get_Channel();

  /// @brief Method get_ChannelState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ConnectionState get_ChannelState();

  /// @brief Method get_IsSessionBeingTranscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSessionBeingTranscribed();

  /// @brief Method get_IsTransmitting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsTransmitting();

  /// @brief Method get_MessageLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IChannelTextMessage*>* get_MessageLog();

  /// @brief Method get_Parent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ILoginSession* get_Parent();

  /// @brief Method get_Participants, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::StringW, ::Unity::Services::Vivox::IParticipant*>* get_Participants();

  /// @brief Method get_SessionArchive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ISessionArchiveMessage*>* get_SessionArchive();

  /// @brief Method get_SessionArchiveResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IArchiveQueryResult* get_SessionArchiveResult();

  /// @brief Method get_SessionHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_SessionHandle();

  /// @brief Method get_TextState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ConnectionState get_TextState();

  /// @brief Method get_TranscribedLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::ITranscribedMessage*>* get_TranscribedLog();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::ChannelId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__ChannelId__() noexcept;

  /// @brief Method remove_MessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_MessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_MessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_MessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IChannelSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannelSession(IChannelSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannelSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannelSession(IChannelSession const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IChannelSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IChannelSession*, "Unity.Services.Vivox", "IChannelSession");
