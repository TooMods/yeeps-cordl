#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ILoginSession)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
namespace System {
class Uri;
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
struct ConnectionRecoveryState;
}
namespace Unity::Services::Vivox {
class ConversationQueryOptions;
}
namespace Unity::Services::Vivox {
class IAccountArchiveMessage;
}
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class IChannelSession;
}
namespace Unity::Services::Vivox {
class IDirectedMessageResult;
}
namespace Unity::Services::Vivox {
class IDirectedTextMessage;
}
namespace Unity::Services::Vivox {
class IFailedDirectedTextMessage;
}
namespace Unity::Services::Vivox {
template <typename TK> class IKeyedItemNotifyPropertyChanged_1;
}
namespace Unity::Services::Vivox {
class IPresenceSubscription;
}
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyHashSet_1;
}
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
namespace Unity::Services::Vivox {
class ITextToSpeech;
}
namespace Unity::Services::Vivox {
struct LoginState;
}
namespace Unity::Services::Vivox {
class MessageOptions;
}
namespace Unity::Services::Vivox {
struct ParticipantPropertyUpdateFrequency;
}
namespace Unity::Services::Vivox {
struct Presence;
}
namespace Unity::Services::Vivox {
struct SubscriptionMode;
}
namespace Unity::Services::Vivox {
struct TransmissionMode;
}
namespace Unity::Services::Vivox {
class VivoxConversation;
}
namespace Unity::Services::Vivox {
class VivoxMessage;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ILoginSession;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ILoginSession);
// Type: Unity.Services.Vivox::ILoginSession
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ILoginSession*
class CORDL_TYPE ILoginSession {
public:
  // Declarations
  __declspec(property(get = get_AccountArchive))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* AccountArchive;

  __declspec(property(get = get_AccountArchiveResult))::Unity::Services::Vivox::IArchiveQueryResult* AccountArchiveResult;

  __declspec(property(get = get_AllowedSubscriptions))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* AllowedSubscriptions;

  __declspec(property(get = get_BlockedSubscriptions))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* BlockedSubscriptions;

  __declspec(property(get = get_ChannelSessions))::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* ChannelSessions;

  __declspec(property(get = get_CrossMutedCommunications))::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* CrossMutedCommunications;

  __declspec(property(get = get_DirectedMessageResult))::Unity::Services::Vivox::IDirectedMessageResult* DirectedMessageResult;

  __declspec(property(get = get_DirectedMessages))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* DirectedMessages;

  __declspec(property(get = get_FailedDirectedMessages))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* FailedDirectedMessages;

  __declspec(property(get = get_IncomingSubscriptionRequests))::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* IncomingSubscriptionRequests;

  __declspec(property(get = get_IsInjectingAudio)) bool IsInjectingAudio;

  __declspec(property(get = get_LoginSessionId))::Unity::Services::Vivox::AccountId* LoginSessionId;

  __declspec(property(get = get_ParticipantPropertyFrequency, put = set_ParticipantPropertyFrequency))::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency ParticipantPropertyFrequency;

  __declspec(property(get = get_Presence, put = set_Presence))::Unity::Services::Vivox::Presence Presence;

  __declspec(property(
      get = get_PresenceSubscriptions))::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>* PresenceSubscriptions;

  __declspec(property(get = get_RecoveryState))::Unity::Services::Vivox::ConnectionRecoveryState RecoveryState;

  __declspec(property(get = get_State))::Unity::Services::Vivox::LoginState State;

  __declspec(property(get = get_TTS))::Unity::Services::Vivox::ITextToSpeech* TTS;

  __declspec(property(get = get_TransmissionType))::Unity::Services::Vivox::TransmissionMode TransmissionType;

  __declspec(property(get = get_TransmittingChannels))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* TransmittingChannels;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr operator ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*() noexcept;

  /// @brief Method BeginAccountArchiveQuery, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginAccountArchiveQuery(::System::Nullable_1<::System::DateTime> timeStart, ::System::Nullable_1<::System::DateTime> timeEnd, ::StringW searchText,
                                                          ::Unity::Services::Vivox::AccountId* userId, ::Unity::Services::Vivox::ChannelId* channel, uint32_t max, ::StringW afterId,
                                                          ::StringW beforeId, int32_t firstMessageIndex, ::System::AsyncCallback* callback);

  /// @brief Method BeginAccountSetLoginProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginAccountSetLoginProperties(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency participantPropertyFrequency, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddAllowedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginAddAllowedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddBlockedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginAddBlockedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginAddPresenceSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginAddPresenceSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginLogin(::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginLogin(::System::Uri* server, ::StringW accessToken, ::System::AsyncCallback* callback);

  /// @brief Method BeginLogin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginLogin(::System::Uri* server, ::StringW accessToken, ::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                            ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemoveAllowedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginRemoveAllowedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemoveBlockedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginRemoveBlockedSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginRemovePresenceSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginRemovePresenceSubscription(::Unity::Services::Vivox::AccountId* accountId, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendDirectedMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* accountId, ::StringW language, ::StringW message, ::StringW applicationStanzaNamespace,
                                                          ::StringW applicationStanzaBody, ::System::AsyncCallback* callback);

  /// @brief Method BeginSendDirectedMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* BeginSendDirectedMessage(::Unity::Services::Vivox::AccountId* accountId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options,
                                                          ::System::AsyncCallback* callback);

  /// @brief Method BlockPlayerAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* BlockPlayerAsync(::Unity::Services::Vivox::AccountId* accountId, bool blockStatus, ::System::AsyncCallback* callback);

  /// @brief Method ClearCrossMutedCommunications, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* ClearCrossMutedCommunications(::System::AsyncCallback* callback);

  /// @brief Method DeleteChannelSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DeleteChannelSession(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method DeleteChannelSessionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteChannelSessionAsync(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method DeleteDirectTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteDirectTextMessageAsync(::StringW messageId);

  /// @brief Method EditDirectTextMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* EditDirectTextMessageAsync(::StringW messageId, ::StringW newMessage);

  /// @brief Method EndAccountArchiveQuery, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndAccountArchiveQuery(::System::IAsyncResult* result);

  /// @brief Method EndAccountSetLoginProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndAccountSetLoginProperties(::System::IAsyncResult* result);

  /// @brief Method EndAddAllowedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndAddAllowedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndAddBlockedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndAddBlockedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndAddPresenceSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IPresenceSubscription* EndAddPresenceSubscription(::System::IAsyncResult* result);

  /// @brief Method EndLogin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndLogin(::System::IAsyncResult* result);

  /// @brief Method EndRemoveAllowedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndRemoveAllowedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndRemoveBlockedSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndRemoveBlockedSubscription(::System::IAsyncResult* result);

  /// @brief Method EndRemovePresenceSubscription, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndRemovePresenceSubscription(::System::IAsyncResult* result);

  /// @brief Method EndSendDirectedMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EndSendDirectedMessage(::System::IAsyncResult* result);

  /// @brief Method GetChannelSession, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IChannelSession* GetChannelSession(::Unity::Services::Vivox::ChannelId* channelId);

  /// @brief Method GetConversationsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxConversation*>*>*
  GetConversationsAsync(::Unity::Services::Vivox::ConversationQueryOptions* options);

  /// @brief Method GetDirectTextMessageHistoryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::VivoxMessage*>*>*
  GetDirectTextMessageHistoryAsync(::Unity::Services::Vivox::AccountId* recipient, int32_t requestSize, ::Unity::Services::Vivox::ChatHistoryQueryOptions* chatHistoryQueryOptions,
                                   ::System::AsyncCallback* callback);

  /// @brief Method GetLoginToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetLoginToken(::System::Nullable_1<::System::TimeSpan> tokenExpirationDuration);

  /// @brief Method GetLoginToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetLoginToken(::StringW tokenSigningKey, ::System::TimeSpan tokenExpirationDuration);

  /// @brief Method LoginAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LoginAsync(::Unity::Services::Vivox::SubscriptionMode subscriptionMode,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* presenceSubscriptions,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* blockedPresenceSubscriptions,
                                                      ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* allowedPresenceSubscriptions, ::StringW accessToken,
                                                      ::System::AsyncCallback* callback);

  /// @brief Method Logout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Logout();

  /// @brief Method LogoutAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LogoutAsync();

  /// @brief Method SendDirectedMessageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SendDirectedMessageAsync(::Unity::Services::Vivox::AccountId* accountId, ::StringW message, ::Unity::Services::Vivox::MessageOptions* options);

  /// @brief Method SetAutoVADAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetAutoVADAsync(bool onOff);

  /// @brief Method SetCrossMutedCommunications, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetCrossMutedCommunications(::Unity::Services::Vivox::AccountId* accountId, bool muted, ::System::AsyncCallback* callback);

  /// @brief Method SetCrossMutedCommunications, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IAsyncResult* SetCrossMutedCommunications(::System::Collections::Generic::List_1<::Unity::Services::Vivox::AccountId*>* accountIdSet, bool muted, ::System::AsyncCallback* callback);

  /// @brief Method SetMessageAsReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetMessageAsReadAsync(::Unity::Services::Vivox::VivoxMessage* message, ::System::Nullable_1<::System::DateTime> seenAt);

  /// @brief Method SetTransmissionMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetTransmissionMode(::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel);

  /// @brief Method SetTransmissionModeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetTransmissionModeAsync(::Unity::Services::Vivox::TransmissionMode mode, ::Unity::Services::Vivox::ChannelId* singleChannel);

  /// @brief Method SetVADPropertiesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetVADPropertiesAsync(int32_t hangover, int32_t noiseFloor, int32_t sensitivity);

  /// @brief Method StartAudioInjection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StartAudioInjection(::StringW audioFilePath);

  /// @brief Method StopAudioInjection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StopAudioInjection();

  /// @brief Method add_DirectedMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method add_DirectedMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method get_AccountArchive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IAccountArchiveMessage*>* get_AccountArchive();

  /// @brief Method get_AccountArchiveResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IArchiveQueryResult* get_AccountArchiveResult();

  /// @brief Method get_AllowedSubscriptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_AllowedSubscriptions();

  /// @brief Method get_BlockedSubscriptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_BlockedSubscriptions();

  /// @brief Method get_ChannelSessions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::ChannelId*, ::Unity::Services::Vivox::IChannelSession*>* get_ChannelSessions();

  /// @brief Method get_CrossMutedCommunications, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyHashSet_1<::Unity::Services::Vivox::AccountId*>* get_CrossMutedCommunications();

  /// @brief Method get_DirectedMessageResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IDirectedMessageResult* get_DirectedMessageResult();

  /// @brief Method get_DirectedMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IDirectedTextMessage*>* get_DirectedMessages();

  /// @brief Method get_FailedDirectedMessages, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::IFailedDirectedTextMessage*>* get_FailedDirectedMessages();

  /// @brief Method get_IncomingSubscriptionRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyQueue_1<::Unity::Services::Vivox::AccountId*>* get_IncomingSubscriptionRequests();

  /// @brief Method get_IsInjectingAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsInjectingAudio();

  /// @brief Method get_LoginSessionId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::AccountId* get_LoginSessionId();

  /// @brief Method get_ParticipantPropertyFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency get_ParticipantPropertyFrequency();

  /// @brief Method get_Presence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::Presence get_Presence();

  /// @brief Method get_PresenceSubscriptions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::IReadOnlyDictionary_2<::Unity::Services::Vivox::AccountId*, ::Unity::Services::Vivox::IPresenceSubscription*>* get_PresenceSubscriptions();

  /// @brief Method get_RecoveryState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ConnectionRecoveryState get_RecoveryState();

  /// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::LoginState get_State();

  /// @brief Method get_TTS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::ITextToSpeech* get_TTS();

  /// @brief Method get_TransmissionType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Vivox::TransmissionMode get_TransmissionType();

  /// @brief Method get_TransmittingChannels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Unity::Services::Vivox::ChannelId*>* get_TransmittingChannels();

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>"
  constexpr ::Unity::Services::Vivox::IKeyedItemNotifyPropertyChanged_1<::Unity::Services::Vivox::AccountId*>*
  i___Unity__Services__Vivox__IKeyedItemNotifyPropertyChanged_1___Unity__Services__Vivox__AccountId__() noexcept;

  /// @brief Method remove_DirectedMessageDeleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_DirectedMessageDeleted(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method remove_DirectedMessageEdited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_DirectedMessageEdited(::System::EventHandler_1<::Unity::Services::Vivox::VivoxMessage*>* value);

  /// @brief Method set_ParticipantPropertyFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_ParticipantPropertyFrequency(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency value);

  /// @brief Method set_Presence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Presence(::Unity::Services::Vivox::Presence value);

  // Ctor Parameters [CppParam { name: "", ty: "ILoginSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILoginSession(ILoginSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILoginSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILoginSession(ILoginSession const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ILoginSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ILoginSession*, "Unity.Services.Vivox", "ILoginSession");
