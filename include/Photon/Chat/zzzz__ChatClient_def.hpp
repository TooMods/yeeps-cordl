#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Chat/zzzz__ChatDisconnectCause_def.hpp"
#include "Photon/Chat/zzzz__ChatState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChatClient)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace Photon::Chat {
class AuthenticationValues;
}
namespace Photon::Chat {
class ChannelCreationOptions;
}
namespace Photon::Chat {
class ChatAppSettings;
}
namespace Photon::Chat {
class ChatChannel;
}
namespace Photon::Chat {
struct ChatDisconnectCause;
}
namespace Photon::Chat {
class ChatPeer;
}
namespace Photon::Chat {
struct ChatState;
}
namespace Photon::Chat {
class IChatClientListener;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Photon::Chat {
class ChatClient;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Chat::ChatClient);
// Type: Photon.Chat::ChatClient
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 169, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Chat {
// Is value type: false
// CS Name: ::Photon.Chat::ChatClient*
class CORDL_TYPE ChatClient : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AppId, put = set_AppId))::StringW AppId;

  __declspec(property(get = get_AppVersion, put = set_AppVersion))::StringW AppVersion;

  __declspec(property(get = get_AuthValues, put = set_AuthValues))::Photon::Chat::AuthenticationValues* AuthValues;

  __declspec(property(get = get_CanChat)) bool CanChat;

  __declspec(property(get = get_ChatRegion, put = set_ChatRegion))::StringW ChatRegion;

  __declspec(property(get = get_DebugOut, put = set_DebugOut))::ExitGames::Client::Photon::DebugLevel DebugOut;

  __declspec(property(get = get_DisconnectedCause, put = set_DisconnectedCause))::Photon::Chat::ChatDisconnectCause DisconnectedCause;

  __declspec(property(get = get_EnableProtocolFallback, put = set_EnableProtocolFallback)) bool EnableProtocolFallback;

  __declspec(property(get = get_FrontendAddress, put = set_FrontendAddress))::StringW FrontendAddress;

  __declspec(property(get = get_HasPeer)) bool HasPeer;

  /// @brief Field MessageLimit, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_MessageLimit, put = __cordl_internal_set_MessageLimit)) int32_t MessageLimit;

  __declspec(property(get = get_NameServerAddress, put = set_NameServerAddress))::StringW NameServerAddress;

  /// @brief Field PrivateChannels, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PrivateChannels,
                      put = __cordl_internal_set_PrivateChannels))::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* PrivateChannels;

  /// @brief Field PrivateChatHistoryLength, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrivateChatHistoryLength, put = __cordl_internal_set_PrivateChatHistoryLength)) int32_t PrivateChatHistoryLength;

  /// @brief Field ProxyServerAddress, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ProxyServerAddress, put = __cordl_internal_set_ProxyServerAddress))::StringW ProxyServerAddress;

  /// @brief Field PublicChannels, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PublicChannels,
                      put = __cordl_internal_set_PublicChannels))::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* PublicChannels;

  /// @brief Field PublicChannelsUnsubscribing, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_PublicChannelsUnsubscribing,
                      put = __cordl_internal_set_PublicChannelsUnsubscribing))::System::Collections::Generic::HashSet_1<::StringW>* PublicChannelsUnsubscribing;

  __declspec(property(get = get_SocketImplementationConfig))::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>* SocketImplementationConfig;

  __declspec(property(get = get_State, put = set_State))::Photon::Chat::ChatState State;

  __declspec(property(get = get_TransportProtocol, put = set_TransportProtocol))::ExitGames::Client::Photon::ConnectionProtocol TransportProtocol;

  __declspec(property(get = get_UseBackgroundWorkerForSending, put = set_UseBackgroundWorkerForSending)) bool UseBackgroundWorkerForSending;

  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Field <AppId>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__AppId_k__BackingField, put = __cordl_internal_set__AppId_k__BackingField))::StringW _AppId_k__BackingField;

  /// @brief Field <AppVersion>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AppVersion_k__BackingField, put = __cordl_internal_set__AppVersion_k__BackingField))::StringW _AppVersion_k__BackingField;

  /// @brief Field <AuthValues>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__AuthValues_k__BackingField, put = __cordl_internal_set__AuthValues_k__BackingField))::Photon::Chat::AuthenticationValues* _AuthValues_k__BackingField;

  /// @brief Field <DisconnectedCause>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__DisconnectedCause_k__BackingField,
                      put = __cordl_internal_set__DisconnectedCause_k__BackingField))::Photon::Chat::ChatDisconnectCause _DisconnectedCause_k__BackingField;

  /// @brief Field <EnableProtocolFallback>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableProtocolFallback_k__BackingField,
                      put = __cordl_internal_set__EnableProtocolFallback_k__BackingField)) bool _EnableProtocolFallback_k__BackingField;

  /// @brief Field <FrontendAddress>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__FrontendAddress_k__BackingField, put = __cordl_internal_set__FrontendAddress_k__BackingField))::StringW _FrontendAddress_k__BackingField;

  /// @brief Field <NameServerAddress>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__NameServerAddress_k__BackingField, put = __cordl_internal_set__NameServerAddress_k__BackingField))::StringW _NameServerAddress_k__BackingField;

  /// @brief Field <State>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::Photon::Chat::ChatState _State_k__BackingField;

  /// @brief Field <UseBackgroundWorkerForSending>k__BackingField, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get__UseBackgroundWorkerForSending_k__BackingField,
                      put = __cordl_internal_set__UseBackgroundWorkerForSending_k__BackingField)) bool _UseBackgroundWorkerForSending_k__BackingField;

  /// @brief Field chatPeer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_chatPeer, put = __cordl_internal_set_chatPeer))::Photon::Chat::ChatPeer* chatPeer;

  /// @brief Field chatRegion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_chatRegion, put = __cordl_internal_set_chatRegion))::StringW chatRegion;

  /// @brief Field didAuthenticate, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_didAuthenticate, put = __cordl_internal_set_didAuthenticate)) bool didAuthenticate;

  /// @brief Field listener, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_listener, put = __cordl_internal_set_listener))::Photon::Chat::IChatClientListener* listener;

  /// @brief Field messageToSetWhenConnected, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_messageToSetWhenConnected, put = __cordl_internal_set_messageToSetWhenConnected))::System::Object* messageToSetWhenConnected;

  /// @brief Field msDeltaForServiceCalls, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_msDeltaForServiceCalls, put = __cordl_internal_set_msDeltaForServiceCalls)) int32_t msDeltaForServiceCalls;

  /// @brief Field msTimestampOfLastServiceCall, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_msTimestampOfLastServiceCall, put = __cordl_internal_set_msTimestampOfLastServiceCall)) int32_t msTimestampOfLastServiceCall;

  /// @brief Field statusToSetWhenConnected, offset 0x8c, size 0x8
  __declspec(property(get = __cordl_internal_get_statusToSetWhenConnected, put = __cordl_internal_set_statusToSetWhenConnected))::System::Nullable_1<int32_t> statusToSetWhenConnected;

  /// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
  constexpr operator ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept;

  /// @brief Method AddFriends, addr 0x180cb24, size 0x318, virtual false, abstract: false, final false
  inline bool AddFriends(::ArrayW<::StringW, ::Array<::StringW>*> friends);

  /// @brief Method AuthenticateOnFrontEnd, addr 0x180f8a0, size 0x274, virtual false, abstract: false, final false
  inline bool AuthenticateOnFrontEnd();

  /// @brief Method CanChatInChannel, addr 0x180af2c, size 0xac, virtual false, abstract: false, final false
  inline bool CanChatInChannel(::StringW channelName);

  /// @brief Method Connect, addr 0x180b608, size 0x1e4, virtual false, abstract: false, final false
  inline bool Connect(::StringW appId, ::StringW appVersion, ::Photon::Chat::AuthenticationValues* authValues);

  /// @brief Method ConnectAndSetStatus, addr 0x180b7f0, size 0xa4, virtual false, abstract: false, final false
  inline bool ConnectAndSetStatus(::StringW appId, ::StringW appVersion, ::Photon::Chat::AuthenticationValues* authValues, int32_t status, ::System::Object* message);

  /// @brief Method ConnectToFrontEnd, addr 0x180fb14, size 0x1e4, virtual false, abstract: false, final false
  inline bool ConnectToFrontEnd();

  /// @brief Method ConnectUsingSettings, addr 0x180b498, size 0x154, virtual false, abstract: false, final false
  inline bool ConnectUsingSettings(::Photon::Chat::ChatAppSettings* appSettings);

  /// @brief Method Disconnect, addr 0x180b95c, size 0x5c, virtual false, abstract: false, final false
  inline void Disconnect(::Photon::Chat::ChatDisconnectCause cause);

  /// @brief Method ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn, addr 0x180d328, size 0xb8, virtual true, abstract: false, final true
  inline void ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message);

  /// @brief Method ExitGames.Client.Photon.IPhotonPeerListener.OnEvent, addr 0x180d3e0, size 0x70, virtual true, abstract: false, final true
  inline void ExitGames_Client_Photon_IPhotonPeerListener_OnEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse, addr 0x180e85c, size 0x214, virtual true, abstract: false, final true
  inline void ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged, addr 0x180f14c, size 0x618, virtual true, abstract: false, final true
  inline void ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode);

  /// @brief Method GetPrivateChannelNameByUser, addr 0x180d154, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetPrivateChannelNameByUser(::StringW userName);

  /// @brief Method HandleAuthResponse, addr 0x180ea70, size 0x6dc, virtual false, abstract: false, final false
  inline void HandleAuthResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method HandleChatMessagesEvent, addr 0x180d450, size 0x318, virtual false, abstract: false, final false
  inline void HandleChatMessagesEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandlePrivateMessageEvent, addr 0x180d768, size 0x2a4, virtual false, abstract: false, final false
  inline void HandlePrivateMessageEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandleStatusUpdate, addr 0x180da0c, size 0x19c, virtual false, abstract: false, final false
  inline void HandleStatusUpdate(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandleSubscribeEvent, addr 0x180dba8, size 0x35c, virtual false, abstract: false, final false
  inline void HandleSubscribeEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandleUnsubscribeEvent, addr 0x180df04, size 0x194, virtual false, abstract: false, final false
  inline void HandleUnsubscribeEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandleUserSubscribedEvent, addr 0x180e098, size 0x464, virtual false, abstract: false, final false
  inline void HandleUserSubscribedEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method HandleUserUnsubscribedEvent, addr 0x180e4fc, size 0x360, virtual false, abstract: false, final false
  inline void HandleUserUnsubscribedEvent(::ExitGames::Client::Photon::EventData* eventData);

  static inline ::Photon::Chat::ChatClient* New_ctor(::Photon::Chat::IChatClientListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  /// @brief Method PublishMessage, addr 0x180c2d4, size 0xc, virtual false, abstract: false, final false
  inline bool PublishMessage(::StringW channelName, ::System::Object* message, bool forwardAsWebhook);

  /// @brief Method PublishMessageUnreliable, addr 0x180c5a0, size 0xc, virtual false, abstract: false, final false
  inline bool PublishMessageUnreliable(::StringW channelName, ::System::Object* message, bool forwardAsWebhook);

  /// @brief Method RemoveFriends, addr 0x180ce3c, size 0x318, virtual false, abstract: false, final false
  inline bool RemoveFriends(::ArrayW<::StringW, ::Array<::StringW>*> friends);

  /// @brief Method SendAcksOnly, addr 0x180b940, size 0x1c, virtual false, abstract: false, final false
  inline void SendAcksOnly();

  /// @brief Method SendChannelOperation, addr 0x180bf88, size 0x150, virtual false, abstract: false, final false
  inline bool SendChannelOperation(::ArrayW<::StringW, ::Array<::StringW>*> channels, uint8_t operation, int32_t historyLength);

  /// @brief Method SendOutgoingInBackground, addr 0x180b90c, size 0x34, virtual false, abstract: false, final false
  inline bool SendOutgoingInBackground();

  /// @brief Method SendPrivateMessage, addr 0x180c5bc, size 0x10, virtual false, abstract: false, final false
  inline bool SendPrivateMessage(::StringW target, ::System::Object* message, bool encrypt, bool forwardAsWebhook);

  /// @brief Method SendPrivateMessage, addr 0x180c5ac, size 0x10, virtual false, abstract: false, final false
  inline bool SendPrivateMessage(::StringW target, ::System::Object* message, bool forwardAsWebhook);

  /// @brief Method SendPrivateMessageUnreliable, addr 0x180c898, size 0x10, virtual false, abstract: false, final false
  inline bool SendPrivateMessageUnreliable(::StringW target, ::System::Object* message, bool encrypt, bool forwardAsWebhook);

  /// @brief Method Service, addr 0x180b894, size 0x78, virtual false, abstract: false, final false
  inline void Service();

  /// @brief Method SetOnlineStatus, addr 0x180cb10, size 0xc, virtual false, abstract: false, final false
  inline bool SetOnlineStatus(int32_t status);

  /// @brief Method SetOnlineStatus, addr 0x180cb1c, size 0x8, virtual false, abstract: false, final false
  inline bool SetOnlineStatus(int32_t status, ::System::Object* message);

  /// @brief Method SetOnlineStatus, addr 0x180c8a8, size 0x268, virtual false, abstract: false, final false
  inline bool SetOnlineStatus(int32_t status, ::System::Object* message, bool skipMessage);

  /// @brief Method StopThread, addr 0x180b9b8, size 0x18, virtual false, abstract: false, final false
  inline void StopThread();

  /// @brief Method Subscribe, addr 0x180ff8c, size 0x710, virtual false, abstract: false, final false
  inline bool Subscribe(::StringW channel, int32_t lastMsgId, int32_t messagesFromHistory, ::Photon::Chat::ChannelCreationOptions* creationOptions);

  /// @brief Method Subscribe, addr 0x180b9d0, size 0x8, virtual false, abstract: false, final false
  inline bool Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels);

  /// @brief Method Subscribe, addr 0x180bb84, size 0x3e8, virtual false, abstract: false, final false
  inline bool Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels, ::ArrayW<int32_t, ::Array<int32_t>*> lastMsgIds);

  /// @brief Method Subscribe, addr 0x180b9d8, size 0x1ac, virtual false, abstract: false, final false
  inline bool Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels, int32_t messagesFromHistory);

  /// @brief Method TryAuthenticateOnNameServer, addr 0x180f764, size 0x13c, virtual false, abstract: false, final false
  inline void TryAuthenticateOnNameServer();

  /// @brief Method TryGetChannel, addr 0x180d230, size 0x98, virtual false, abstract: false, final false
  inline bool TryGetChannel(::StringW channelName, ByRef<::Photon::Chat::ChatChannel*> channel);

  /// @brief Method TryGetChannel, addr 0x180d1b8, size 0x78, virtual false, abstract: false, final false
  inline bool TryGetChannel(::StringW channelName, bool isPrivate, ByRef<::Photon::Chat::ChatChannel*> channel);

  /// @brief Method TryGetPrivateChannelByUser, addr 0x180d2c8, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetPrivateChannelByUser(::StringW userId, ByRef<::Photon::Chat::ChatChannel*> channel);

  /// @brief Method Unsubscribe, addr 0x180c0d8, size 0x1fc, virtual false, abstract: false, final false
  inline bool Unsubscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels);

  constexpr int32_t const& __cordl_internal_get_MessageLimit() const;

  constexpr int32_t& __cordl_internal_get_MessageLimit();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*& __cordl_internal_get_PrivateChannels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*> const& __cordl_internal_get_PrivateChannels() const;

  constexpr int32_t const& __cordl_internal_get_PrivateChatHistoryLength() const;

  constexpr int32_t& __cordl_internal_get_PrivateChatHistoryLength();

  constexpr ::StringW const& __cordl_internal_get_ProxyServerAddress() const;

  constexpr ::StringW& __cordl_internal_get_ProxyServerAddress();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*& __cordl_internal_get_PublicChannels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*> const& __cordl_internal_get_PublicChannels() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_PublicChannelsUnsubscribing();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get_PublicChannelsUnsubscribing() const;

  constexpr ::StringW const& __cordl_internal_get__AppId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AppId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__AppVersion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AppVersion_k__BackingField();

  constexpr ::Photon::Chat::AuthenticationValues*& __cordl_internal_get__AuthValues_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::AuthenticationValues*> const& __cordl_internal_get__AuthValues_k__BackingField() const;

  constexpr ::Photon::Chat::ChatDisconnectCause const& __cordl_internal_get__DisconnectedCause_k__BackingField() const;

  constexpr ::Photon::Chat::ChatDisconnectCause& __cordl_internal_get__DisconnectedCause_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableProtocolFallback_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableProtocolFallback_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FrontendAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FrontendAddress_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__NameServerAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__NameServerAddress_k__BackingField();

  constexpr ::Photon::Chat::ChatState const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::Photon::Chat::ChatState& __cordl_internal_get__State_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseBackgroundWorkerForSending_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseBackgroundWorkerForSending_k__BackingField();

  constexpr ::Photon::Chat::ChatPeer*& __cordl_internal_get_chatPeer();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::ChatPeer*> const& __cordl_internal_get_chatPeer() const;

  constexpr ::StringW const& __cordl_internal_get_chatRegion() const;

  constexpr ::StringW& __cordl_internal_get_chatRegion();

  constexpr bool const& __cordl_internal_get_didAuthenticate() const;

  constexpr bool& __cordl_internal_get_didAuthenticate();

  constexpr ::Photon::Chat::IChatClientListener*& __cordl_internal_get_listener();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::IChatClientListener*> const& __cordl_internal_get_listener() const;

  constexpr ::System::Object*& __cordl_internal_get_messageToSetWhenConnected();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_messageToSetWhenConnected() const;

  constexpr int32_t const& __cordl_internal_get_msDeltaForServiceCalls() const;

  constexpr int32_t& __cordl_internal_get_msDeltaForServiceCalls();

  constexpr int32_t const& __cordl_internal_get_msTimestampOfLastServiceCall() const;

  constexpr int32_t& __cordl_internal_get_msTimestampOfLastServiceCall();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_statusToSetWhenConnected() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_statusToSetWhenConnected();

  constexpr void __cordl_internal_set_MessageLimit(int32_t value);

  constexpr void __cordl_internal_set_PrivateChannels(::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* value);

  constexpr void __cordl_internal_set_PrivateChatHistoryLength(int32_t value);

  constexpr void __cordl_internal_set_ProxyServerAddress(::StringW value);

  constexpr void __cordl_internal_set_PublicChannels(::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* value);

  constexpr void __cordl_internal_set_PublicChannelsUnsubscribing(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__AppId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AppVersion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AuthValues_k__BackingField(::Photon::Chat::AuthenticationValues* value);

  constexpr void __cordl_internal_set__DisconnectedCause_k__BackingField(::Photon::Chat::ChatDisconnectCause value);

  constexpr void __cordl_internal_set__EnableProtocolFallback_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FrontendAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__NameServerAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__State_k__BackingField(::Photon::Chat::ChatState value);

  constexpr void __cordl_internal_set__UseBackgroundWorkerForSending_k__BackingField(bool value);

  constexpr void __cordl_internal_set_chatPeer(::Photon::Chat::ChatPeer* value);

  constexpr void __cordl_internal_set_chatRegion(::StringW value);

  constexpr void __cordl_internal_set_didAuthenticate(bool value);

  constexpr void __cordl_internal_set_listener(::Photon::Chat::IChatClientListener* value);

  constexpr void __cordl_internal_set_messageToSetWhenConnected(::System::Object* value);

  constexpr void __cordl_internal_set_msDeltaForServiceCalls(int32_t value);

  constexpr void __cordl_internal_set_msTimestampOfLastServiceCall(int32_t value);

  constexpr void __cordl_internal_set_statusToSetWhenConnected(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x180b294, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Chat::IChatClientListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  /// @brief Method get_AppId, addr 0x180afe8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppId();

  /// @brief Method get_AppVersion, addr 0x180afd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppVersion();

  /// @brief Method get_AuthValues, addr 0x180aff8, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Chat::AuthenticationValues* get_AuthValues();

  /// @brief Method get_CanChat, addr 0x180aef8, size 0x24, virtual false, abstract: false, final false
  inline bool get_CanChat();

  /// @brief Method get_ChatRegion, addr 0x180aec8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ChatRegion();

  /// @brief Method get_DebugOut, addr 0x180bf6c, size 0x1c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::DebugLevel get_DebugOut();

  /// @brief Method get_DisconnectedCause, addr 0x180aee8, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Chat::ChatDisconnectCause get_DisconnectedCause();

  /// @brief Method get_EnableProtocolFallback, addr 0x180ae94, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableProtocolFallback();

  /// @brief Method get_FrontendAddress, addr 0x180aeb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FrontendAddress();

  /// @brief Method get_HasPeer, addr 0x180af1c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasPeer();

  /// @brief Method get_NameServerAddress, addr 0x180aea8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NameServerAddress();

  /// @brief Method get_SocketImplementationConfig, addr 0x180b278, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>* get_SocketImplementationConfig();

  /// @brief Method get_State, addr 0x180aed8, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Chat::ChatState get_State();

  /// @brief Method get_TransportProtocol, addr 0x180b0bc, size 0x1c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ConnectionProtocol get_TransportProtocol();

  /// @brief Method get_UseBackgroundWorkerForSending, addr 0x180b0a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseBackgroundWorkerForSending();

  /// @brief Method get_UserId, addr 0x180b008, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_UserId();

  /// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
  constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept;

  /// @brief Method publishMessage, addr 0x180c2e0, size 0x2c0, virtual false, abstract: false, final false
  inline bool publishMessage(::StringW channelName, ::System::Object* message, bool reliable, bool forwardAsWebhook);

  /// @brief Method sendPrivateMessage, addr 0x180c5cc, size 0x2cc, virtual false, abstract: false, final false
  inline bool sendPrivateMessage(::StringW target, ::System::Object* message, bool encrypt, bool reliable, bool forwardAsWebhook);

  /// @brief Method set_AppId, addr 0x180aff0, size 0x8, virtual false, abstract: false, final false
  inline void set_AppId(::StringW value);

  /// @brief Method set_AppVersion, addr 0x180afe0, size 0x8, virtual false, abstract: false, final false
  inline void set_AppVersion(::StringW value);

  /// @brief Method set_AuthValues, addr 0x180b000, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthValues(::Photon::Chat::AuthenticationValues* value);

  /// @brief Method set_ChatRegion, addr 0x180aed0, size 0x8, virtual false, abstract: false, final false
  inline void set_ChatRegion(::StringW value);

  /// @brief Method set_DebugOut, addr 0x180b5ec, size 0x1c, virtual false, abstract: false, final false
  inline void set_DebugOut(::ExitGames::Client::Photon::DebugLevel value);

  /// @brief Method set_DisconnectedCause, addr 0x180aef0, size 0x8, virtual false, abstract: false, final false
  inline void set_DisconnectedCause(::Photon::Chat::ChatDisconnectCause value);

  /// @brief Method set_EnableProtocolFallback, addr 0x180ae9c, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableProtocolFallback(bool value);

  /// @brief Method set_FrontendAddress, addr 0x180aec0, size 0x8, virtual false, abstract: false, final false
  inline void set_FrontendAddress(::StringW value);

  /// @brief Method set_NameServerAddress, addr 0x180aeb0, size 0x8, virtual false, abstract: false, final false
  inline void set_NameServerAddress(::StringW value);

  /// @brief Method set_State, addr 0x180aee0, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Photon::Chat::ChatState value);

  /// @brief Method set_TransportProtocol, addr 0x180b0d8, size 0x1a0, virtual false, abstract: false, final false
  inline void set_TransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol value);

  /// @brief Method set_UseBackgroundWorkerForSending, addr 0x180b0b0, size 0xc, virtual false, abstract: false, final false
  inline void set_UseBackgroundWorkerForSending(bool value);

  /// @brief Method set_UserId, addr 0x180b020, size 0x78, virtual false, abstract: false, final false
  inline void set_UserId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatClient(ChatClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatClient(ChatClient const&) = delete;

  /// @brief Field <EnableProtocolFallback>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____EnableProtocolFallback_k__BackingField;

  /// @brief Field <NameServerAddress>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____NameServerAddress_k__BackingField;

  /// @brief Field <FrontendAddress>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____FrontendAddress_k__BackingField;

  /// @brief Field chatRegion, offset: 0x28, size: 0x8, def value: None
  ::StringW ___chatRegion;

  /// @brief Field ProxyServerAddress, offset: 0x30, size: 0x8, def value: None
  ::StringW ___ProxyServerAddress;

  /// @brief Field <State>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::Photon::Chat::ChatState ____State_k__BackingField;

  /// @brief Field <DisconnectedCause>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::Photon::Chat::ChatDisconnectCause ____DisconnectedCause_k__BackingField;

  /// @brief Field <AppVersion>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____AppVersion_k__BackingField;

  /// @brief Field <AppId>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____AppId_k__BackingField;

  /// @brief Field <AuthValues>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Photon::Chat::AuthenticationValues* ____AuthValues_k__BackingField;

  /// @brief Field MessageLimit, offset: 0x58, size: 0x4, def value: None
  int32_t ___MessageLimit;

  /// @brief Field PrivateChatHistoryLength, offset: 0x5c, size: 0x4, def value: None
  int32_t ___PrivateChatHistoryLength;

  /// @brief Field PublicChannels, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* ___PublicChannels;

  /// @brief Field PrivateChannels, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* ___PrivateChannels;

  /// @brief Field PublicChannelsUnsubscribing, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___PublicChannelsUnsubscribing;

  /// @brief Field listener, offset: 0x78, size: 0x8, def value: None
  ::Photon::Chat::IChatClientListener* ___listener;

  /// @brief Field chatPeer, offset: 0x80, size: 0x8, def value: None
  ::Photon::Chat::ChatPeer* ___chatPeer;

  /// @brief Field didAuthenticate, offset: 0x88, size: 0x1, def value: None
  bool ___didAuthenticate;

  /// @brief Field statusToSetWhenConnected, offset: 0x8c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___statusToSetWhenConnected;

  /// @brief Field messageToSetWhenConnected, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ___messageToSetWhenConnected;

  /// @brief Field msDeltaForServiceCalls, offset: 0xa0, size: 0x4, def value: None
  int32_t ___msDeltaForServiceCalls;

  /// @brief Field msTimestampOfLastServiceCall, offset: 0xa4, size: 0x4, def value: None
  int32_t ___msTimestampOfLastServiceCall;

  /// @brief Field <UseBackgroundWorkerForSending>k__BackingField, offset: 0xa8, size: 0x1, def value: None
  bool ____UseBackgroundWorkerForSending_k__BackingField;

  /// @brief Field ChatAppName offset 0xffffffff size 0x8
  static constexpr ::ConstString ChatAppName{ u"chat" };

  /// @brief Field DefaultMaxSubscribers offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMaxSubscribers{ static_cast<int32_t>(0x64) };

  /// @brief Field FriendRequestListMax offset 0xffffffff size 0x4
  static constexpr int32_t FriendRequestListMax{ static_cast<int32_t>(0x400) };

  /// @brief Field HttpForwardWebFlag offset 0xffffffff size 0x1
  static constexpr uint8_t HttpForwardWebFlag{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Chat::ChatClient, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____EnableProtocolFallback_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____NameServerAddress_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____FrontendAddress_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___chatRegion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___ProxyServerAddress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____State_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____DisconnectedCause_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____AppVersion_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____AppId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____AuthValues_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___MessageLimit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___PrivateChatHistoryLength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___PublicChannels) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___PrivateChannels) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___PublicChannelsUnsubscribing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___listener) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___chatPeer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___didAuthenticate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___statusToSetWhenConnected) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___messageToSetWhenConnected) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___msDeltaForServiceCalls) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ___msTimestampOfLastServiceCall) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Photon::Chat::ChatClient, ____UseBackgroundWorkerForSending_k__BackingField) == 0xa8, "Offset mismatch!");

} // namespace Photon::Chat
NEED_NO_BOX(::Photon::Chat::ChatClient);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatClient*, "Photon.Chat", "ChatClient");
