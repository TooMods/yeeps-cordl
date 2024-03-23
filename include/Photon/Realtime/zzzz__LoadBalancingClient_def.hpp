#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "Photon/Realtime/zzzz__AuthModeOption_def.hpp"
#include "Photon/Realtime/zzzz__ClientAppType_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__EncryptionMode_def.hpp"
#include "Photon/Realtime/zzzz__JoinType_def.hpp"
#include "Photon/Realtime/zzzz__PhotonPortDefinition_def.hpp"
#include "Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingClient)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class DisconnectMessage;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
namespace Photon::Realtime {
class AppSettings;
}
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
struct ClientAppType;
}
namespace Photon::Realtime {
struct ClientState;
}
namespace Photon::Realtime {
class ConnectionCallbacksContainer;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Realtime {
class ErrorInfoCallbacksContainer;
}
namespace Photon::Realtime {
class FindFriendsOptions;
}
namespace Photon::Realtime {
class InRoomCallbacksContainer;
}
namespace Photon::Realtime {
class LoadBalancingPeer;
}
namespace Photon::Realtime {
class LobbyCallbacksContainer;
}
namespace Photon::Realtime {
class MatchMakingCallbacksContainer;
}
namespace Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class Room;
}
namespace Photon::Realtime {
struct ServerConnection;
}
namespace Photon::Realtime {
class TypedLobbyInfo;
}
namespace Photon::Realtime {
class TypedLobby;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace Photon::Realtime {
class WebRpcCallbacksContainer;
}
namespace Photon::Realtime {
class __LoadBalancingClient__CallbackTargetChange;
}
namespace Photon::Realtime {
class __LoadBalancingClient__EncryptionDataParameters;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class __LoadBalancingClient__CallbackTargetChange;
}
namespace Photon::Realtime {
class __LoadBalancingClient__EncryptionDataParameters;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::LoadBalancingClient);
MARK_REF_PTR_T(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange);
MARK_REF_PTR_T(::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters);
// Type: ::EncryptionDataParameters
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::LoadBalancingClient::EncryptionDataParameters*
class CORDL_TYPE __LoadBalancingClient__EncryptionDataParameters : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters* New_ctor();

  /// @brief Method .ctor, addr 0x2244968, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadBalancingClient__EncryptionDataParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingClient__EncryptionDataParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadBalancingClient__EncryptionDataParameters(__LoadBalancingClient__EncryptionDataParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingClient__EncryptionDataParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadBalancingClient__EncryptionDataParameters(__LoadBalancingClient__EncryptionDataParameters const&) = delete;

  /// @brief Field Mode offset 0xffffffff size 0x1
  static constexpr uint8_t Mode{ static_cast<uint8_t>(0x0u) };

  /// @brief Field Secret1 offset 0xffffffff size 0x1
  static constexpr uint8_t Secret1{ static_cast<uint8_t>(0x1u) };

  /// @brief Field Secret2 offset 0xffffffff size 0x1
  static constexpr uint8_t Secret2{ static_cast<uint8_t>(0x2u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
// Type: ::CallbackTargetChange
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::LoadBalancingClient::CallbackTargetChange*
class CORDL_TYPE __LoadBalancingClient__CallbackTargetChange : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddTarget, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_AddTarget, put = __cordl_internal_set_AddTarget)) bool AddTarget;

  /// @brief Field Target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target))::System::Object* Target;

  static inline ::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange* New_ctor(::System::Object* target, bool addTarget);

  constexpr bool const& __cordl_internal_get_AddTarget() const;

  constexpr bool& __cordl_internal_get_AddTarget();

  constexpr ::System::Object*& __cordl_internal_get_Target();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_Target() const;

  constexpr void __cordl_internal_set_AddTarget(bool value);

  constexpr void __cordl_internal_set_Target(::System::Object* value);

  /// @brief Method .ctor, addr 0x22447b0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* target, bool addTarget);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LoadBalancingClient__CallbackTargetChange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingClient__CallbackTargetChange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LoadBalancingClient__CallbackTargetChange(__LoadBalancingClient__CallbackTargetChange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LoadBalancingClient__CallbackTargetChange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LoadBalancingClient__CallbackTargetChange(__LoadBalancingClient__CallbackTargetChange const&) = delete;

  /// @brief Field Target, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___Target;

  /// @brief Field AddTarget, offset: 0x18, size: 0x1, def value: None
  bool ___AddTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange, ___Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange, ___AddTarget) == 0x18, "Offset mismatch!");

} // namespace Photon::Realtime
// Type: Photon.Realtime::LoadBalancingClient
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 380, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::LoadBalancingClient*
class CORDL_TYPE LoadBalancingClient : public ::System::Object {
public:
  // Declarations
  using CallbackTargetChange = ::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange;

  using EncryptionDataParameters = ::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters;

  __declspec(property(get = get_AppId, put = set_AppId))::StringW AppId;

  __declspec(property(get = get_AppVersion, put = set_AppVersion))::StringW AppVersion;

  /// @brief Field AuthMode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_AuthMode, put = __cordl_internal_set_AuthMode))::Photon::Realtime::AuthModeOption AuthMode;

  __declspec(property(get = get_AuthValues, put = set_AuthValues))::Photon::Realtime::AuthenticationValues* AuthValues;

  __declspec(property(get = get_ClientType, put = set_ClientType))::Photon::Realtime::ClientAppType ClientType;

  __declspec(property(get = get_CloudRegion, put = set_CloudRegion))::StringW CloudRegion;

  /// @brief Field ConnectionCallbackTargets, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionCallbackTargets,
                      put = __cordl_internal_set_ConnectionCallbackTargets))::Photon::Realtime::ConnectionCallbacksContainer* ConnectionCallbackTargets;

  __declspec(property(get = get_CurrentCluster, put = set_CurrentCluster))::StringW CurrentCluster;

  __declspec(property(get = get_CurrentLobby, put = set_CurrentLobby))::Photon::Realtime::TypedLobby* CurrentLobby;

  __declspec(property(get = get_CurrentRoom, put = set_CurrentRoom))::Photon::Realtime::Room* CurrentRoom;

  __declspec(property(get = get_CurrentServerAddress))::StringW CurrentServerAddress;

  __declspec(property(get = get_DisconnectedCause, put = set_DisconnectedCause))::Photon::Realtime::DisconnectCause DisconnectedCause;

  /// @brief Field EnableLobbyStatistics, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_EnableLobbyStatistics, put = __cordl_internal_set_EnableLobbyStatistics)) bool EnableLobbyStatistics;

  __declspec(property(get = get_EnableProtocolFallback, put = set_EnableProtocolFallback)) bool EnableProtocolFallback;

  /// @brief Field EncryptionMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_EncryptionMode, put = __cordl_internal_set_EncryptionMode))::Photon::Realtime::EncryptionMode EncryptionMode;

  /// @brief Field ErrorInfoCallbackTargets, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_ErrorInfoCallbackTargets,
                      put = __cordl_internal_set_ErrorInfoCallbackTargets))::Photon::Realtime::ErrorInfoCallbacksContainer* ErrorInfoCallbackTargets;

  /// @brief Field EventReceived, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_EventReceived, put = __cordl_internal_set_EventReceived))::System::Action_1<::ExitGames::Client::Photon::EventData*>* EventReceived;

  __declspec(property(get = get_ExpectedProtocol, put = set_ExpectedProtocol))::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> ExpectedProtocol;

  __declspec(property(get = get_GameServerAddress, put = set_GameServerAddress))::StringW GameServerAddress;

  __declspec(property(get = get_InLobby)) bool InLobby;

  __declspec(property(get = get_InRoom)) bool InRoom;

  /// @brief Field InRoomCallbackTargets, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_InRoomCallbackTargets, put = __cordl_internal_set_InRoomCallbackTargets))::Photon::Realtime::InRoomCallbacksContainer* InRoomCallbackTargets;

  __declspec(property(get = get_IsConnected)) bool IsConnected;

  __declspec(property(get = get_IsConnectedAndReady)) bool IsConnectedAndReady;

  __declspec(property(get = get_IsFetchingFriendList)) bool IsFetchingFriendList;

  __declspec(property(get = get_IsUsingNameServer, put = set_IsUsingNameServer)) bool IsUsingNameServer;

  __declspec(property(get = get_LoadBalancingPeer, put = set_LoadBalancingPeer))::Photon::Realtime::LoadBalancingPeer* LoadBalancingPeer;

  /// @brief Field LobbyCallbackTargets, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_LobbyCallbackTargets, put = __cordl_internal_set_LobbyCallbackTargets))::Photon::Realtime::LobbyCallbacksContainer* LobbyCallbackTargets;

  __declspec(property(get = get_LocalPlayer, put = set_LocalPlayer))::Photon::Realtime::Player* LocalPlayer;

  __declspec(property(get = get_MasterServerAddress, put = set_MasterServerAddress))::StringW MasterServerAddress;

  /// @brief Field MatchMakingCallbackTargets, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_MatchMakingCallbackTargets,
                      put = __cordl_internal_set_MatchMakingCallbackTargets))::Photon::Realtime::MatchMakingCallbacksContainer* MatchMakingCallbackTargets;

  __declspec(property(get = get_NameServerAddress))::StringW NameServerAddress;

  /// @brief Field NameServerHost, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_NameServerHost, put = __cordl_internal_set_NameServerHost))::StringW NameServerHost;

  /// @brief Field NameServerPortInAppSettings, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_NameServerPortInAppSettings, put = __cordl_internal_set_NameServerPortInAppSettings)) int32_t NameServerPortInAppSettings;

  __declspec(property(get = get_NickName, put = set_NickName))::StringW NickName;

  /// @brief Field OpResponseReceived, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_OpResponseReceived,
                      put = __cordl_internal_set_OpResponseReceived))::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* OpResponseReceived;

  __declspec(property(get = get_PlayersInRoomsCount, put = set_PlayersInRoomsCount)) int32_t PlayersInRoomsCount;

  __declspec(property(get = get_PlayersOnMasterCount, put = set_PlayersOnMasterCount)) int32_t PlayersOnMasterCount;

  /// @brief Field ProtocolToNameServerPort, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ProtocolToNameServerPort,
               put = setStaticF_ProtocolToNameServerPort))::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* ProtocolToNameServerPort;

  /// @brief Field ProxyServerAddress, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_ProxyServerAddress, put = __cordl_internal_set_ProxyServerAddress))::StringW ProxyServerAddress;

  /// @brief Field RegionHandler, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_RegionHandler, put = __cordl_internal_set_RegionHandler))::Photon::Realtime::RegionHandler* RegionHandler;

  __declspec(property(get = get_RoomsCount, put = set_RoomsCount)) int32_t RoomsCount;

  __declspec(property(get = get_SerializationProtocol, put = set_SerializationProtocol))::ExitGames::Client::Photon::SerializationProtocol SerializationProtocol;

  __declspec(property(get = get_Server, put = set_Server))::Photon::Realtime::ServerConnection Server;

  /// @brief Field ServerPortOverrides, offset 0x62, size 0x6
  __declspec(property(get = __cordl_internal_get_ServerPortOverrides, put = __cordl_internal_set_ServerPortOverrides))::Photon::Realtime::PhotonPortDefinition ServerPortOverrides;

  __declspec(property(get = get_State, put = set_State))::Photon::Realtime::ClientState State;

  /// @brief Field StateChanged, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_StateChanged,
                      put = __cordl_internal_set_StateChanged))::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* StateChanged;

  /// @brief Field SummaryToCache, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_SummaryToCache, put = __cordl_internal_set_SummaryToCache))::StringW SummaryToCache;

  __declspec(property(get = get_TokenForInit))::System::Object* TokenForInit;

  __declspec(property(get = get_UseAlternativeUdpPorts, put = set_UseAlternativeUdpPorts)) bool UseAlternativeUdpPorts;

  __declspec(property(get = get_UserId, put = set_UserId))::StringW UserId;

  /// @brief Field WebRpcCallbackTargets, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_WebRpcCallbackTargets, put = __cordl_internal_set_WebRpcCallbackTargets))::Photon::Realtime::WebRpcCallbacksContainer* WebRpcCallbackTargets;

  /// @brief Field <AppId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__AppId_k__BackingField, put = __cordl_internal_set__AppId_k__BackingField))::StringW _AppId_k__BackingField;

  /// @brief Field <AppVersion>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AppVersion_k__BackingField, put = __cordl_internal_set__AppVersion_k__BackingField))::StringW _AppVersion_k__BackingField;

  /// @brief Field <AuthValues>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__AuthValues_k__BackingField,
                      put = __cordl_internal_set__AuthValues_k__BackingField))::Photon::Realtime::AuthenticationValues* _AuthValues_k__BackingField;

  /// @brief Field <ClientType>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__ClientType_k__BackingField, put = __cordl_internal_set__ClientType_k__BackingField))::Photon::Realtime::ClientAppType _ClientType_k__BackingField;

  /// @brief Field <CloudRegion>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__CloudRegion_k__BackingField, put = __cordl_internal_set__CloudRegion_k__BackingField))::StringW _CloudRegion_k__BackingField;

  /// @brief Field <CurrentCluster>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentCluster_k__BackingField, put = __cordl_internal_set__CurrentCluster_k__BackingField))::StringW _CurrentCluster_k__BackingField;

  /// @brief Field <CurrentLobby>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentLobby_k__BackingField, put = __cordl_internal_set__CurrentLobby_k__BackingField))::Photon::Realtime::TypedLobby* _CurrentLobby_k__BackingField;

  /// @brief Field <CurrentRoom>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentRoom_k__BackingField, put = __cordl_internal_set__CurrentRoom_k__BackingField))::Photon::Realtime::Room* _CurrentRoom_k__BackingField;

  /// @brief Field <DisconnectedCause>k__BackingField, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get__DisconnectedCause_k__BackingField,
                      put = __cordl_internal_set__DisconnectedCause_k__BackingField))::Photon::Realtime::DisconnectCause _DisconnectedCause_k__BackingField;

  /// @brief Field <EnableProtocolFallback>k__BackingField, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__EnableProtocolFallback_k__BackingField,
                      put = __cordl_internal_set__EnableProtocolFallback_k__BackingField)) bool _EnableProtocolFallback_k__BackingField;

  /// @brief Field <ExpectedProtocol>k__BackingField, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get__ExpectedProtocol_k__BackingField,
                      put = __cordl_internal_set__ExpectedProtocol_k__BackingField))::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> _ExpectedProtocol_k__BackingField;

  /// @brief Field <GameServerAddress>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__GameServerAddress_k__BackingField, put = __cordl_internal_set__GameServerAddress_k__BackingField))::StringW _GameServerAddress_k__BackingField;

  /// @brief Field <IsUsingNameServer>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__IsUsingNameServer_k__BackingField, put = __cordl_internal_set__IsUsingNameServer_k__BackingField)) bool _IsUsingNameServer_k__BackingField;

  /// @brief Field <LoadBalancingPeer>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__LoadBalancingPeer_k__BackingField,
                      put = __cordl_internal_set__LoadBalancingPeer_k__BackingField))::Photon::Realtime::LoadBalancingPeer* _LoadBalancingPeer_k__BackingField;

  /// @brief Field <LocalPlayer>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__LocalPlayer_k__BackingField, put = __cordl_internal_set__LocalPlayer_k__BackingField))::Photon::Realtime::Player* _LocalPlayer_k__BackingField;

  /// @brief Field <MasterServerAddress>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__MasterServerAddress_k__BackingField, put = __cordl_internal_set__MasterServerAddress_k__BackingField))::StringW _MasterServerAddress_k__BackingField;

  /// @brief Field <PlayersInRoomsCount>k__BackingField, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get__PlayersInRoomsCount_k__BackingField, put = __cordl_internal_set__PlayersInRoomsCount_k__BackingField)) int32_t _PlayersInRoomsCount_k__BackingField;

  /// @brief Field <PlayersOnMasterCount>k__BackingField, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__PlayersOnMasterCount_k__BackingField,
                      put = __cordl_internal_set__PlayersOnMasterCount_k__BackingField)) int32_t _PlayersOnMasterCount_k__BackingField;

  /// @brief Field <RoomsCount>k__BackingField, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__RoomsCount_k__BackingField, put = __cordl_internal_set__RoomsCount_k__BackingField)) int32_t _RoomsCount_k__BackingField;

  /// @brief Field <Server>k__BackingField, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__Server_k__BackingField, put = __cordl_internal_set__Server_k__BackingField))::Photon::Realtime::ServerConnection _Server_k__BackingField;

  /// @brief Field <UseAlternativeUdpPorts>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__UseAlternativeUdpPorts_k__BackingField,
                      put = __cordl_internal_set__UseAlternativeUdpPorts_k__BackingField)) bool _UseAlternativeUdpPorts_k__BackingField;

  /// @brief Field bestRegionSummaryFromStorage, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_bestRegionSummaryFromStorage, put = __cordl_internal_set_bestRegionSummaryFromStorage))::StringW bestRegionSummaryFromStorage;

  /// @brief Field callbackTargetChanges, offset 0x168, size 0x8
  __declspec(
      property(get = __cordl_internal_get_callbackTargetChanges,
               put = __cordl_internal_set_callbackTargetChanges))::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>* callbackTargetChanges;

  /// @brief Field callbackTargets, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_callbackTargets, put = __cordl_internal_set_callbackTargets))::System::Collections::Generic::HashSet_1<::System::Object*>* callbackTargets;

  /// @brief Field connectToBestRegion, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_connectToBestRegion, put = __cordl_internal_set_connectToBestRegion)) bool connectToBestRegion;

  /// @brief Field enterRoomParamsCache, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_enterRoomParamsCache, put = __cordl_internal_set_enterRoomParamsCache))::Photon::Realtime::EnterRoomParams* enterRoomParamsCache;

  /// @brief Field failedRoomEntryOperation, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_failedRoomEntryOperation,
                      put = __cordl_internal_set_failedRoomEntryOperation))::ExitGames::Client::Photon::OperationResponse* failedRoomEntryOperation;

  /// @brief Field friendListRequested, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_friendListRequested, put = __cordl_internal_set_friendListRequested))::ArrayW<::StringW, ::Array<::StringW>*> friendListRequested;

  /// @brief Field lastJoinType, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastJoinType, put = __cordl_internal_set_lastJoinType))::Photon::Realtime::JoinType lastJoinType;

  /// @brief Field lobbyStatistics, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_lobbyStatistics,
                      put = __cordl_internal_set_lobbyStatistics))::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics;

  /// @brief Field state, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::Photon::Realtime::ClientState state;

  /// @brief Field tokenCache, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_tokenCache, put = __cordl_internal_set_tokenCache))::System::Object* tokenCache;

  /// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
  constexpr operator ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept;

  /// @brief Method AddCallbackTarget, addr 0x2244714, size 0x9c, virtual false, abstract: false, final false
  inline void AddCallbackTarget(::System::Object* target);

  /// @brief Method CallAuthenticate, addr 0x223a2b4, size 0x3ac, virtual false, abstract: false, final false
  inline bool CallAuthenticate();

  /// @brief Method CallbackRoomEnterFailed, addr 0x223e77c, size 0x78, virtual false, abstract: false, final false
  inline void CallbackRoomEnterFailed(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method ChangeLocalID, addr 0x223d9a8, size 0x150, virtual false, abstract: false, final false
  inline void ChangeLocalID(int32_t newID);

  /// @brief Method CheckConnectSetupWebGl, addr 0x223a660, size 0x4, virtual false, abstract: false, final false
  inline void CheckConnectSetupWebGl();

  /// @brief Method CheckIfClientIsReadyToCallOperation, addr 0x223e560, size 0x10c, virtual false, abstract: false, final false
  inline bool CheckIfClientIsReadyToCallOperation(uint8_t opCode);

  /// @brief Method CheckIfOpAllowedOnServer, addr 0x223e434, size 0x12c, virtual false, abstract: false, final false
  inline bool CheckIfOpAllowedOnServer(uint8_t opCode, ::Photon::Realtime::ServerConnection serverConnection);

  /// @brief Method CheckIfOpCanBeSent, addr 0x223ae64, size 0x354, virtual false, abstract: false, final false
  inline bool CheckIfOpCanBeSent(uint8_t opCode, ::Photon::Realtime::ServerConnection serverConnection, ::StringW opName);

  /// @brief Method Connect, addr 0x2239c80, size 0xc, virtual false, abstract: false, final false
  inline bool Connect();

  /// @brief Method Connect, addr 0x223a664, size 0x2a0, virtual false, abstract: false, final false
  inline bool Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::Photon::Realtime::ServerConnection serverType);

  /// @brief Method ConnectToMasterServer, addr 0x2239c8c, size 0x1dc, virtual true, abstract: false, final false
  inline bool ConnectToMasterServer();

  /// @brief Method ConnectToNameServer, addr 0x2239e68, size 0x204, virtual false, abstract: false, final false
  inline bool ConnectToNameServer();

  /// @brief Method ConnectToRegionMaster, addr 0x223a06c, size 0x248, virtual false, abstract: false, final false
  inline bool ConnectToRegionMaster(::StringW region);

  /// @brief Method ConnectUsingSettings, addr 0x22398e0, size 0x3a0, virtual true, abstract: false, final false
  inline bool ConnectUsingSettings(::Photon::Realtime::AppSettings* appSettings);

  /// @brief Method CreatePlayer, addr 0x223e250, size 0x88, virtual true, abstract: false, final false
  inline ::Photon::Realtime::Player* CreatePlayer(::StringW actorName, int32_t actorNumber, bool isLocal, ::ExitGames::Client::Photon::Hashtable* actorProperties);

  /// @brief Method CreateRoom, addr 0x223e3bc, size 0x78, virtual true, abstract: false, final false
  inline ::Photon::Realtime::Room* CreateRoom(::StringW roomName, ::Photon::Realtime::RoomOptions* opt);

  /// @brief Method DebugReturn, addr 0x223e66c, size 0x110, virtual true, abstract: false, final false
  inline void DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message);

  /// @brief Method Disconnect, addr 0x2235630, size 0x2d8, virtual false, abstract: false, final false
  inline void Disconnect(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method DisconnectToReconnect, addr 0x223aca8, size 0xcc, virtual false, abstract: false, final false
  inline void DisconnectToReconnect();

  /// @brief Method GameEnteredOnGameServer, addr 0x223db08, size 0x2d4, virtual false, abstract: false, final false
  inline void GameEnteredOnGameServer(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method GetNameServerAddress, addr 0x2238884, size 0x214, virtual false, abstract: false, final false
  inline ::StringW GetNameServerAddress();

  static inline ::Photon::Realtime::LoadBalancingClient* New_ctor(::StringW masterAddress, ::StringW appId, ::StringW gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  static inline ::Photon::Realtime::LoadBalancingClient* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocol);

  /// @brief Method OnDisconnectMessageReceived, addr 0x2244108, size 0x100, virtual false, abstract: false, final false
  inline void OnDisconnectMessageReceived(::ExitGames::Client::Photon::DisconnectMessage* obj);

  /// @brief Method OnEvent, addr 0x224284c, size 0xbbc, virtual true, abstract: false, final false
  inline void OnEvent(::ExitGames::Client::Photon::EventData* photonEvent);

  /// @brief Method OnMessage, addr 0x2244094, size 0x74, virtual true, abstract: false, final false
  inline void OnMessage(::System::Object* message);

  /// @brief Method OnOperationResponse, addr 0x223ed58, size 0x1274, virtual true, abstract: false, final false
  inline void OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method OnRegionPingCompleted, addr 0x2244208, size 0x44, virtual false, abstract: false, final false
  inline void OnRegionPingCompleted(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method OnStatusChanged, addr 0x2241aac, size 0x868, virtual true, abstract: false, final false
  inline void OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode);

  /// @brief Method OpChangeGroups, addr 0x223d40c, size 0x9c, virtual true, abstract: false, final false
  inline bool OpChangeGroups(::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToRemove, ::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToAdd);

  /// @brief Method OpCreateRoom, addr 0x223ba98, size 0xe4, virtual false, abstract: false, final false
  inline bool OpCreateRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams);

  /// @brief Method OpFindFriends, addr 0x223b254, size 0x404, virtual false, abstract: false, final false
  inline bool OpFindFriends(::ArrayW<::StringW, ::Array<::StringW>*> friendsToFind, ::Photon::Realtime::FindFriendsOptions* options);

  /// @brief Method OpGetGameList, addr 0x223bf74, size 0x108, virtual false, abstract: false, final false
  inline bool OpGetGameList(::Photon::Realtime::TypedLobby* typedLobby, ::StringW sqlLobbyFilter);

  /// @brief Method OpGetRegions, addr 0x223b1d0, size 0x84, virtual false, abstract: false, final false
  inline bool OpGetRegions();

  /// @brief Method OpJoinLobby, addr 0x223b658, size 0xfc, virtual false, abstract: false, final false
  inline bool OpJoinLobby(::Photon::Realtime::TypedLobby* lobby);

  /// @brief Method OpJoinOrCreateRoom, addr 0x223bb7c, size 0xf0, virtual false, abstract: false, final false
  inline bool OpJoinOrCreateRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams);

  /// @brief Method OpJoinRandomOrCreateRoom, addr 0x223b934, size 0x164, virtual false, abstract: false, final false
  inline bool OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams* createRoomParams);

  /// @brief Method OpJoinRandomRoom, addr 0x223b7d4, size 0x148, virtual false, abstract: false, final false
  inline bool OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams);

  /// @brief Method OpJoinRoom, addr 0x223bc6c, size 0xf4, virtual false, abstract: false, final false
  inline bool OpJoinRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams);

  /// @brief Method OpLeaveLobby, addr 0x223b754, size 0x80, virtual false, abstract: false, final false
  inline bool OpLeaveLobby();

  /// @brief Method OpLeaveRoom, addr 0x223be80, size 0xf4, virtual false, abstract: false, final false
  inline bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie);

  /// @brief Method OpRaiseEvent, addr 0x223d354, size 0xb8, virtual true, abstract: false, final false
  inline bool OpRaiseEvent(uint8_t eventCode, ::System::Object* customEventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames::Client::Photon::SendOptions sendOptions);

  /// @brief Method OpRejoinRoom, addr 0x223bd60, size 0x120, virtual false, abstract: false, final false
  inline bool OpRejoinRoom(::StringW roomName);

  /// @brief Method OpSetCustomPropertiesOfActor, addr 0x223c07c, size 0x238, virtual false, abstract: false, final false
  inline bool OpSetCustomPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                           ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method OpSetCustomPropertiesOfRoom, addr 0x223cb38, size 0x154, virtual false, abstract: false, final false
  inline bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method OpSetPropertiesOfActor, addr 0x223c478, size 0x170, virtual false, abstract: false, final false
  inline bool OpSetPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                     ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method OpSetPropertiesOfRoom, addr 0x223cc8c, size 0x144, virtual false, abstract: false, final false
  inline bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webFlags);

  /// @brief Method OpSetPropertyOfRoom, addr 0x223cdd0, size 0x90, virtual false, abstract: false, final false
  inline bool OpSetPropertyOfRoom(uint8_t propCode, ::System::Object* value);

  /// @brief Method OpWebRpc, addr 0x2244538, size 0x1dc, virtual false, abstract: false, final false
  inline bool OpWebRpc(::StringW uriPath, ::System::Object* parameters, bool sendAuthCookie);

  /// @brief Method ReadoutProperties, addr 0x223d4a8, size 0x400, virtual false, abstract: false, final false
  inline void ReadoutProperties(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* actorProperties, int32_t targetActorNr);

  /// @brief Method ReadoutPropertiesForActorNr, addr 0x223d8a8, size 0x100, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::Hashtable* ReadoutPropertiesForActorNr(::ExitGames::Client::Photon::Hashtable* actorProperties, int32_t actorNr);

  /// @brief Method ReconnectAndRejoin, addr 0x223aac8, size 0x1e0, virtual false, abstract: false, final false
  inline bool ReconnectAndRejoin();

  /// @brief Method ReconnectToMaster, addr 0x223a904, size 0x1c4, virtual false, abstract: false, final false
  inline bool ReconnectToMaster();

  /// @brief Method RemoveCallbackTarget, addr 0x22447e0, size 0x98, virtual false, abstract: false, final false
  inline void RemoveCallbackTarget(::System::Object* target);

  /// @brief Method ReplacePortWithAlternative, addr 0x22403e8, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW ReplacePortWithAlternative(::StringW address, uint16_t replacementPort);

  /// @brief Method Service, addr 0x223b1b8, size 0x18, virtual false, abstract: false, final false
  inline void Service();

  /// @brief Method SetupEncryption, addr 0x2240190, size 0x258, virtual false, abstract: false, final false
  inline void SetupEncryption(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* encryptionData);

  /// @brief Method SimulateConnectionLoss, addr 0x223ad74, size 0xf0, virtual false, abstract: false, final false
  inline void SimulateConnectionLoss(bool simulateTimeout);

  /// @brief Method UpdateCallbackTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void UpdateCallbackTarget(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange* change, ::System::Collections::Generic::List_1<T>* container);

  /// @brief Method UpdateCallbackTargets, addr 0x2243db4, size 0x2e0, virtual false, abstract: false, final false
  inline void UpdateCallbackTargets();

  /// @brief Method UpdatedActorList, addr 0x223dddc, size 0xfc, virtual false, abstract: false, final false
  inline void UpdatedActorList(::ArrayW<int32_t, ::Array<int32_t>*> actorsInGame);

  constexpr ::Photon::Realtime::AuthModeOption const& __cordl_internal_get_AuthMode() const;

  constexpr ::Photon::Realtime::AuthModeOption& __cordl_internal_get_AuthMode();

  constexpr ::Photon::Realtime::ConnectionCallbacksContainer*& __cordl_internal_get_ConnectionCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::ConnectionCallbacksContainer*> const& __cordl_internal_get_ConnectionCallbackTargets() const;

  constexpr bool const& __cordl_internal_get_EnableLobbyStatistics() const;

  constexpr bool& __cordl_internal_get_EnableLobbyStatistics();

  constexpr ::Photon::Realtime::EncryptionMode const& __cordl_internal_get_EncryptionMode() const;

  constexpr ::Photon::Realtime::EncryptionMode& __cordl_internal_get_EncryptionMode();

  constexpr ::Photon::Realtime::ErrorInfoCallbacksContainer*& __cordl_internal_get_ErrorInfoCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::ErrorInfoCallbacksContainer*> const& __cordl_internal_get_ErrorInfoCallbackTargets() const;

  constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>*& __cordl_internal_get_EventReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ExitGames::Client::Photon::EventData*>*> const& __cordl_internal_get_EventReceived() const;

  constexpr ::Photon::Realtime::InRoomCallbacksContainer*& __cordl_internal_get_InRoomCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::InRoomCallbacksContainer*> const& __cordl_internal_get_InRoomCallbackTargets() const;

  constexpr ::Photon::Realtime::LobbyCallbacksContainer*& __cordl_internal_get_LobbyCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LobbyCallbacksContainer*> const& __cordl_internal_get_LobbyCallbackTargets() const;

  constexpr ::Photon::Realtime::MatchMakingCallbacksContainer*& __cordl_internal_get_MatchMakingCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::MatchMakingCallbacksContainer*> const& __cordl_internal_get_MatchMakingCallbackTargets() const;

  constexpr ::StringW const& __cordl_internal_get_NameServerHost() const;

  constexpr ::StringW& __cordl_internal_get_NameServerHost();

  constexpr int32_t const& __cordl_internal_get_NameServerPortInAppSettings() const;

  constexpr int32_t& __cordl_internal_get_NameServerPortInAppSettings();

  constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*& __cordl_internal_get_OpResponseReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*> const& __cordl_internal_get_OpResponseReceived() const;

  constexpr ::StringW const& __cordl_internal_get_ProxyServerAddress() const;

  constexpr ::StringW& __cordl_internal_get_ProxyServerAddress();

  constexpr ::Photon::Realtime::RegionHandler*& __cordl_internal_get_RegionHandler();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::RegionHandler*> const& __cordl_internal_get_RegionHandler() const;

  constexpr ::Photon::Realtime::PhotonPortDefinition const& __cordl_internal_get_ServerPortOverrides() const;

  constexpr ::Photon::Realtime::PhotonPortDefinition& __cordl_internal_get_ServerPortOverrides();

  constexpr ::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*& __cordl_internal_get_StateChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*> const& __cordl_internal_get_StateChanged() const;

  constexpr ::StringW const& __cordl_internal_get_SummaryToCache() const;

  constexpr ::StringW& __cordl_internal_get_SummaryToCache();

  constexpr ::Photon::Realtime::WebRpcCallbacksContainer*& __cordl_internal_get_WebRpcCallbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::WebRpcCallbacksContainer*> const& __cordl_internal_get_WebRpcCallbackTargets() const;

  constexpr ::StringW const& __cordl_internal_get__AppId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AppId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__AppVersion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AppVersion_k__BackingField();

  constexpr ::Photon::Realtime::AuthenticationValues*& __cordl_internal_get__AuthValues_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AuthenticationValues*> const& __cordl_internal_get__AuthValues_k__BackingField() const;

  constexpr ::Photon::Realtime::ClientAppType const& __cordl_internal_get__ClientType_k__BackingField() const;

  constexpr ::Photon::Realtime::ClientAppType& __cordl_internal_get__ClientType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CloudRegion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CloudRegion_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CurrentCluster_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CurrentCluster_k__BackingField();

  constexpr ::Photon::Realtime::TypedLobby*& __cordl_internal_get__CurrentLobby_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& __cordl_internal_get__CurrentLobby_k__BackingField() const;

  constexpr ::Photon::Realtime::Room*& __cordl_internal_get__CurrentRoom_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Room*> const& __cordl_internal_get__CurrentRoom_k__BackingField() const;

  constexpr ::Photon::Realtime::DisconnectCause const& __cordl_internal_get__DisconnectedCause_k__BackingField() const;

  constexpr ::Photon::Realtime::DisconnectCause& __cordl_internal_get__DisconnectedCause_k__BackingField();

  constexpr bool const& __cordl_internal_get__EnableProtocolFallback_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EnableProtocolFallback_k__BackingField();

  constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> const& __cordl_internal_get__ExpectedProtocol_k__BackingField() const;

  constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>& __cordl_internal_get__ExpectedProtocol_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__GameServerAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__GameServerAddress_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsUsingNameServer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsUsingNameServer_k__BackingField();

  constexpr ::Photon::Realtime::LoadBalancingPeer*& __cordl_internal_get__LoadBalancingPeer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingPeer*> const& __cordl_internal_get__LoadBalancingPeer_k__BackingField() const;

  constexpr ::Photon::Realtime::Player*& __cordl_internal_get__LocalPlayer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& __cordl_internal_get__LocalPlayer_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__MasterServerAddress_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MasterServerAddress_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__PlayersInRoomsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PlayersInRoomsCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__PlayersOnMasterCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PlayersOnMasterCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__RoomsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__RoomsCount_k__BackingField();

  constexpr ::Photon::Realtime::ServerConnection const& __cordl_internal_get__Server_k__BackingField() const;

  constexpr ::Photon::Realtime::ServerConnection& __cordl_internal_get__Server_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseAlternativeUdpPorts_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_bestRegionSummaryFromStorage() const;

  constexpr ::StringW& __cordl_internal_get_bestRegionSummaryFromStorage();

  constexpr ::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>*& __cordl_internal_get_callbackTargetChanges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>*> const&
  __cordl_internal_get_callbackTargetChanges() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get_callbackTargets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> const& __cordl_internal_get_callbackTargets() const;

  constexpr bool const& __cordl_internal_get_connectToBestRegion() const;

  constexpr bool& __cordl_internal_get_connectToBestRegion();

  constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_enterRoomParamsCache();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::EnterRoomParams*> const& __cordl_internal_get_enterRoomParamsCache() const;

  constexpr ::ExitGames::Client::Photon::OperationResponse*& __cordl_internal_get_failedRoomEntryOperation();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::OperationResponse*> const& __cordl_internal_get_failedRoomEntryOperation() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_friendListRequested() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_friendListRequested();

  constexpr ::Photon::Realtime::JoinType const& __cordl_internal_get_lastJoinType() const;

  constexpr ::Photon::Realtime::JoinType& __cordl_internal_get_lastJoinType();

  constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*& __cordl_internal_get_lobbyStatistics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*> const& __cordl_internal_get_lobbyStatistics() const;

  constexpr ::Photon::Realtime::ClientState const& __cordl_internal_get_state() const;

  constexpr ::Photon::Realtime::ClientState& __cordl_internal_get_state();

  constexpr ::System::Object*& __cordl_internal_get_tokenCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_tokenCache() const;

  constexpr void __cordl_internal_set_AuthMode(::Photon::Realtime::AuthModeOption value);

  constexpr void __cordl_internal_set_ConnectionCallbackTargets(::Photon::Realtime::ConnectionCallbacksContainer* value);

  constexpr void __cordl_internal_set_EnableLobbyStatistics(bool value);

  constexpr void __cordl_internal_set_EncryptionMode(::Photon::Realtime::EncryptionMode value);

  constexpr void __cordl_internal_set_ErrorInfoCallbackTargets(::Photon::Realtime::ErrorInfoCallbacksContainer* value);

  constexpr void __cordl_internal_set_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value);

  constexpr void __cordl_internal_set_InRoomCallbackTargets(::Photon::Realtime::InRoomCallbacksContainer* value);

  constexpr void __cordl_internal_set_LobbyCallbackTargets(::Photon::Realtime::LobbyCallbacksContainer* value);

  constexpr void __cordl_internal_set_MatchMakingCallbackTargets(::Photon::Realtime::MatchMakingCallbacksContainer* value);

  constexpr void __cordl_internal_set_NameServerHost(::StringW value);

  constexpr void __cordl_internal_set_NameServerPortInAppSettings(int32_t value);

  constexpr void __cordl_internal_set_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value);

  constexpr void __cordl_internal_set_ProxyServerAddress(::StringW value);

  constexpr void __cordl_internal_set_RegionHandler(::Photon::Realtime::RegionHandler* value);

  constexpr void __cordl_internal_set_ServerPortOverrides(::Photon::Realtime::PhotonPortDefinition value);

  constexpr void __cordl_internal_set_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value);

  constexpr void __cordl_internal_set_SummaryToCache(::StringW value);

  constexpr void __cordl_internal_set_WebRpcCallbackTargets(::Photon::Realtime::WebRpcCallbacksContainer* value);

  constexpr void __cordl_internal_set__AppId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AppVersion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AuthValues_k__BackingField(::Photon::Realtime::AuthenticationValues* value);

  constexpr void __cordl_internal_set__ClientType_k__BackingField(::Photon::Realtime::ClientAppType value);

  constexpr void __cordl_internal_set__CloudRegion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CurrentCluster_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CurrentLobby_k__BackingField(::Photon::Realtime::TypedLobby* value);

  constexpr void __cordl_internal_set__CurrentRoom_k__BackingField(::Photon::Realtime::Room* value);

  constexpr void __cordl_internal_set__DisconnectedCause_k__BackingField(::Photon::Realtime::DisconnectCause value);

  constexpr void __cordl_internal_set__EnableProtocolFallback_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ExpectedProtocol_k__BackingField(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> value);

  constexpr void __cordl_internal_set__GameServerAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsUsingNameServer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__LoadBalancingPeer_k__BackingField(::Photon::Realtime::LoadBalancingPeer* value);

  constexpr void __cordl_internal_set__LocalPlayer_k__BackingField(::Photon::Realtime::Player* value);

  constexpr void __cordl_internal_set__MasterServerAddress_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PlayersInRoomsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PlayersOnMasterCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__RoomsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Server_k__BackingField(::Photon::Realtime::ServerConnection value);

  constexpr void __cordl_internal_set__UseAlternativeUdpPorts_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bestRegionSummaryFromStorage(::StringW value);

  constexpr void __cordl_internal_set_callbackTargetChanges(::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>* value);

  constexpr void __cordl_internal_set_callbackTargets(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_connectToBestRegion(bool value);

  constexpr void __cordl_internal_set_enterRoomParamsCache(::Photon::Realtime::EnterRoomParams* value);

  constexpr void __cordl_internal_set_failedRoomEntryOperation(::ExitGames::Client::Photon::OperationResponse* value);

  constexpr void __cordl_internal_set_friendListRequested(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_lastJoinType(::Photon::Realtime::JoinType value);

  constexpr void __cordl_internal_set_lobbyStatistics(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* value);

  constexpr void __cordl_internal_set_state(::Photon::Realtime::ClientState value);

  constexpr void __cordl_internal_set_tokenCache(::System::Object* value);

  /// @brief Method .ctor, addr 0x22398a4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW masterAddress, ::StringW appId, ::StringW gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol protocol);

  /// @brief Method .ctor, addr 0x22391a4, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol protocol);

  /// @brief Method add_EventReceived, addr 0x2238ce0, size 0xb0, virtual false, abstract: false, final false
  inline void add_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value);

  /// @brief Method add_OpResponseReceived, addr 0x2238e40, size 0xb0, virtual false, abstract: false, final false
  inline void add_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value);

  /// @brief Method add_StateChanged, addr 0x2238b80, size 0xb0, virtual false, abstract: false, final false
  inline void add_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* getStaticF_ProtocolToNameServerPort();

  /// @brief Method get_AppId, addr 0x223880c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppId();

  /// @brief Method get_AppVersion, addr 0x22387fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AppVersion();

  /// @brief Method get_AuthValues, addr 0x223882c, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::AuthenticationValues* get_AuthValues();

  /// @brief Method get_ClientType, addr 0x223881c, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::ClientAppType get_ClientType();

  /// @brief Method get_CloudRegion, addr 0x2239184, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CloudRegion();

  /// @brief Method get_CurrentCluster, addr 0x2239194, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrentCluster();

  /// @brief Method get_CurrentLobby, addr 0x2238fc0, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::TypedLobby* get_CurrentLobby();

  /// @brief Method get_CurrentRoom, addr 0x2239110, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Room* get_CurrentRoom();

  /// @brief Method get_CurrentServerAddress, addr 0x2238ac0, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_CurrentServerAddress();

  /// @brief Method get_DisconnectedCause, addr 0x2238fa0, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::DisconnectCause get_DisconnectedCause();

  /// @brief Method get_EnableProtocolFallback, addr 0x2238aac, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableProtocolFallback();

  /// @brief Method get_ExpectedProtocol, addr 0x223883c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> get_ExpectedProtocol();

  /// @brief Method get_GameServerAddress, addr 0x2238aec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GameServerAddress();

  /// @brief Method get_InLobby, addr 0x2238fb0, size 0x10, virtual false, abstract: false, final false
  inline bool get_InLobby();

  /// @brief Method get_InRoom, addr 0x2239120, size 0x24, virtual false, abstract: false, final false
  inline bool get_InRoom();

  /// @brief Method get_IsConnected, addr 0x2235604, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsConnected();

  /// @brief Method get_IsConnectedAndReady, addr 0x2238b48, size 0x38, virtual false, abstract: false, final false
  inline bool get_IsConnectedAndReady();

  /// @brief Method get_IsFetchingFriendList, addr 0x2239174, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsFetchingFriendList();

  /// @brief Method get_IsUsingNameServer, addr 0x223886c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUsingNameServer();

  /// @brief Method get_LoadBalancingPeer, addr 0x22387b4, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::LoadBalancingPeer* get_LoadBalancingPeer();

  /// @brief Method get_LocalPlayer, addr 0x2238fd0, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::Player* get_LocalPlayer();

  /// @brief Method get_MasterServerAddress, addr 0x2238adc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MasterServerAddress();

  /// @brief Method get_NameServerAddress, addr 0x2238880, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_NameServerAddress();

  /// @brief Method get_NickName, addr 0x2238fe0, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_NickName();

  /// @brief Method get_PlayersInRoomsCount, addr 0x2239154, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PlayersInRoomsCount();

  /// @brief Method get_PlayersOnMasterCount, addr 0x2239144, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PlayersOnMasterCount();

  /// @brief Method get_RoomsCount, addr 0x2239164, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RoomsCount();

  /// @brief Method get_SerializationProtocol, addr 0x22387c4, size 0x1c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::SerializationProtocol get_SerializationProtocol();

  /// @brief Method get_Server, addr 0x2238afc, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::ServerConnection get_Server();

  /// @brief Method get_State, addr 0x2238b0c, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Realtime::ClientState get_State();

  /// @brief Method get_TokenForInit, addr 0x223884c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Object* get_TokenForInit();

  /// @brief Method get_UseAlternativeUdpPorts, addr 0x2238a98, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseAlternativeUdpPorts();

  /// @brief Method get_UserId, addr 0x2239070, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_UserId();

  /// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
  constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept;

  /// @brief Method remove_EventReceived, addr 0x2238d90, size 0xb0, virtual false, abstract: false, final false
  inline void remove_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value);

  /// @brief Method remove_OpResponseReceived, addr 0x2238ef0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value);

  /// @brief Method remove_StateChanged, addr 0x2238c30, size 0xb0, virtual false, abstract: false, final false
  inline void remove_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value);

  static inline void setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* value);

  /// @brief Method set_AppId, addr 0x2238814, size 0x8, virtual false, abstract: false, final false
  inline void set_AppId(::StringW value);

  /// @brief Method set_AppVersion, addr 0x2238804, size 0x8, virtual false, abstract: false, final false
  inline void set_AppVersion(::StringW value);

  /// @brief Method set_AuthValues, addr 0x2238834, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthValues(::Photon::Realtime::AuthenticationValues* value);

  /// @brief Method set_ClientType, addr 0x2238824, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientType(::Photon::Realtime::ClientAppType value);

  /// @brief Method set_CloudRegion, addr 0x223918c, size 0x8, virtual false, abstract: false, final false
  inline void set_CloudRegion(::StringW value);

  /// @brief Method set_CurrentCluster, addr 0x223919c, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentCluster(::StringW value);

  /// @brief Method set_CurrentLobby, addr 0x2238fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentLobby(::Photon::Realtime::TypedLobby* value);

  /// @brief Method set_CurrentRoom, addr 0x2239118, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentRoom(::Photon::Realtime::Room* value);

  /// @brief Method set_DisconnectedCause, addr 0x2238fa8, size 0x8, virtual false, abstract: false, final false
  inline void set_DisconnectedCause(::Photon::Realtime::DisconnectCause value);

  /// @brief Method set_EnableProtocolFallback, addr 0x2238ab4, size 0xc, virtual false, abstract: false, final false
  inline void set_EnableProtocolFallback(bool value);

  /// @brief Method set_ExpectedProtocol, addr 0x2238844, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpectedProtocol(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> value);

  /// @brief Method set_GameServerAddress, addr 0x2238af4, size 0x8, virtual false, abstract: false, final false
  inline void set_GameServerAddress(::StringW value);

  /// @brief Method set_IsUsingNameServer, addr 0x2238874, size 0xc, virtual false, abstract: false, final false
  inline void set_IsUsingNameServer(bool value);

  /// @brief Method set_LoadBalancingPeer, addr 0x22387bc, size 0x8, virtual false, abstract: false, final false
  inline void set_LoadBalancingPeer(::Photon::Realtime::LoadBalancingPeer* value);

  /// @brief Method set_LocalPlayer, addr 0x2238fd8, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalPlayer(::Photon::Realtime::Player* value);

  /// @brief Method set_MasterServerAddress, addr 0x2238ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_MasterServerAddress(::StringW value);

  /// @brief Method set_NickName, addr 0x2238ffc, size 0x10, virtual false, abstract: false, final false
  inline void set_NickName(::StringW value);

  /// @brief Method set_PlayersInRoomsCount, addr 0x223915c, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayersInRoomsCount(int32_t value);

  /// @brief Method set_PlayersOnMasterCount, addr 0x223914c, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayersOnMasterCount(int32_t value);

  /// @brief Method set_RoomsCount, addr 0x223916c, size 0x8, virtual false, abstract: false, final false
  inline void set_RoomsCount(int32_t value);

  /// @brief Method set_SerializationProtocol, addr 0x22387e0, size 0x1c, virtual false, abstract: false, final false
  inline void set_SerializationProtocol(::ExitGames::Client::Photon::SerializationProtocol value);

  /// @brief Method set_Server, addr 0x2238b04, size 0x8, virtual false, abstract: false, final false
  inline void set_Server(::Photon::Realtime::ServerConnection value);

  /// @brief Method set_State, addr 0x2238b14, size 0x34, virtual false, abstract: false, final false
  inline void set_State(::Photon::Realtime::ClientState value);

  /// @brief Method set_UseAlternativeUdpPorts, addr 0x2238aa0, size 0xc, virtual false, abstract: false, final false
  inline void set_UseAlternativeUdpPorts(bool value);

  /// @brief Method set_UserId, addr 0x2239088, size 0x78, virtual false, abstract: false, final false
  inline void set_UserId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBalancingClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadBalancingClient(LoadBalancingClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadBalancingClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadBalancingClient(LoadBalancingClient const&) = delete;

  /// @brief Field <LoadBalancingPeer>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingPeer* ____LoadBalancingPeer_k__BackingField;

  /// @brief Field <AppVersion>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AppVersion_k__BackingField;

  /// @brief Field <AppId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____AppId_k__BackingField;

  /// @brief Field <ClientType>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::Photon::Realtime::ClientAppType ____ClientType_k__BackingField;

  /// @brief Field <AuthValues>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Photon::Realtime::AuthenticationValues* ____AuthValues_k__BackingField;

  /// @brief Field AuthMode, offset: 0x38, size: 0x4, def value: None
  ::Photon::Realtime::AuthModeOption ___AuthMode;

  /// @brief Field EncryptionMode, offset: 0x3c, size: 0x4, def value: None
  ::Photon::Realtime::EncryptionMode ___EncryptionMode;

  /// @brief Field <ExpectedProtocol>k__BackingField, offset: 0x40, size: 0x2, def value: None
  ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> ____ExpectedProtocol_k__BackingField;

  /// @brief Field tokenCache, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ___tokenCache;

  /// @brief Field <IsUsingNameServer>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____IsUsingNameServer_k__BackingField;

  /// @brief Field NameServerHost, offset: 0x58, size: 0x8, def value: None
  ::StringW ___NameServerHost;

  /// @brief Field <UseAlternativeUdpPorts>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____UseAlternativeUdpPorts_k__BackingField;

  /// @brief Field ServerPortOverrides, offset: 0x62, size: 0x6, def value: None
  ::Photon::Realtime::PhotonPortDefinition ___ServerPortOverrides;

  /// @brief Field <EnableProtocolFallback>k__BackingField, offset: 0x68, size: 0x1, def value: None
  bool ____EnableProtocolFallback_k__BackingField;

  /// @brief Field <MasterServerAddress>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::StringW ____MasterServerAddress_k__BackingField;

  /// @brief Field <GameServerAddress>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::StringW ____GameServerAddress_k__BackingField;

  /// @brief Field <Server>k__BackingField, offset: 0x80, size: 0x4, def value: None
  ::Photon::Realtime::ServerConnection ____Server_k__BackingField;

  /// @brief Field ProxyServerAddress, offset: 0x88, size: 0x8, def value: None
  ::StringW ___ProxyServerAddress;

  /// @brief Field state, offset: 0x90, size: 0x4, def value: None
  ::Photon::Realtime::ClientState ___state;

  /// @brief Field StateChanged, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* ___StateChanged;

  /// @brief Field EventReceived, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::ExitGames::Client::Photon::EventData*>* ___EventReceived;

  /// @brief Field OpResponseReceived, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* ___OpResponseReceived;

  /// @brief Field ConnectionCallbackTargets, offset: 0xb0, size: 0x8, def value: None
  ::Photon::Realtime::ConnectionCallbacksContainer* ___ConnectionCallbackTargets;

  /// @brief Field MatchMakingCallbackTargets, offset: 0xb8, size: 0x8, def value: None
  ::Photon::Realtime::MatchMakingCallbacksContainer* ___MatchMakingCallbackTargets;

  /// @brief Field InRoomCallbackTargets, offset: 0xc0, size: 0x8, def value: None
  ::Photon::Realtime::InRoomCallbacksContainer* ___InRoomCallbackTargets;

  /// @brief Field LobbyCallbackTargets, offset: 0xc8, size: 0x8, def value: None
  ::Photon::Realtime::LobbyCallbacksContainer* ___LobbyCallbackTargets;

  /// @brief Field WebRpcCallbackTargets, offset: 0xd0, size: 0x8, def value: None
  ::Photon::Realtime::WebRpcCallbacksContainer* ___WebRpcCallbackTargets;

  /// @brief Field ErrorInfoCallbackTargets, offset: 0xd8, size: 0x8, def value: None
  ::Photon::Realtime::ErrorInfoCallbacksContainer* ___ErrorInfoCallbackTargets;

  /// @brief Field <DisconnectedCause>k__BackingField, offset: 0xe0, size: 0x4, def value: None
  ::Photon::Realtime::DisconnectCause ____DisconnectedCause_k__BackingField;

  /// @brief Field <CurrentLobby>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::Photon::Realtime::TypedLobby* ____CurrentLobby_k__BackingField;

  /// @brief Field EnableLobbyStatistics, offset: 0xf0, size: 0x1, def value: None
  bool ___EnableLobbyStatistics;

  /// @brief Field lobbyStatistics, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* ___lobbyStatistics;

  /// @brief Field <LocalPlayer>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::Photon::Realtime::Player* ____LocalPlayer_k__BackingField;

  /// @brief Field <CurrentRoom>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::Photon::Realtime::Room* ____CurrentRoom_k__BackingField;

  /// @brief Field <PlayersOnMasterCount>k__BackingField, offset: 0x110, size: 0x4, def value: None
  int32_t ____PlayersOnMasterCount_k__BackingField;

  /// @brief Field <PlayersInRoomsCount>k__BackingField, offset: 0x114, size: 0x4, def value: None
  int32_t ____PlayersInRoomsCount_k__BackingField;

  /// @brief Field <RoomsCount>k__BackingField, offset: 0x118, size: 0x4, def value: None
  int32_t ____RoomsCount_k__BackingField;

  /// @brief Field lastJoinType, offset: 0x11c, size: 0x4, def value: None
  ::Photon::Realtime::JoinType ___lastJoinType;

  /// @brief Field enterRoomParamsCache, offset: 0x120, size: 0x8, def value: None
  ::Photon::Realtime::EnterRoomParams* ___enterRoomParamsCache;

  /// @brief Field failedRoomEntryOperation, offset: 0x128, size: 0x8, def value: None
  ::ExitGames::Client::Photon::OperationResponse* ___failedRoomEntryOperation;

  /// @brief Field friendListRequested, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___friendListRequested;

  /// @brief Field <CloudRegion>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::StringW ____CloudRegion_k__BackingField;

  /// @brief Field <CurrentCluster>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::StringW ____CurrentCluster_k__BackingField;

  /// @brief Field RegionHandler, offset: 0x148, size: 0x8, def value: None
  ::Photon::Realtime::RegionHandler* ___RegionHandler;

  /// @brief Field bestRegionSummaryFromStorage, offset: 0x150, size: 0x8, def value: None
  ::StringW ___bestRegionSummaryFromStorage;

  /// @brief Field SummaryToCache, offset: 0x158, size: 0x8, def value: None
  ::StringW ___SummaryToCache;

  /// @brief Field connectToBestRegion, offset: 0x160, size: 0x1, def value: None
  bool ___connectToBestRegion;

  /// @brief Field callbackTargetChanges, offset: 0x168, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>* ___callbackTargetChanges;

  /// @brief Field callbackTargets, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ___callbackTargets;

  /// @brief Field NameServerPortInAppSettings, offset: 0x178, size: 0x4, def value: None
  int32_t ___NameServerPortInAppSettings;

  /// @brief Field FriendRequestListMax offset 0xffffffff size 0x4
  static constexpr int32_t FriendRequestListMax{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::LoadBalancingClient, 0x180>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____LoadBalancingPeer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____AppVersion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____AppId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____ClientType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____AuthValues_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___AuthMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___EncryptionMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____ExpectedProtocol_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___tokenCache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____IsUsingNameServer_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___NameServerHost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____UseAlternativeUdpPorts_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___ServerPortOverrides) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____EnableProtocolFallback_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____MasterServerAddress_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____GameServerAddress_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____Server_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___ProxyServerAddress) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___state) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___StateChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___EventReceived) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___OpResponseReceived) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___ConnectionCallbackTargets) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___MatchMakingCallbackTargets) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___InRoomCallbackTargets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___LobbyCallbackTargets) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___WebRpcCallbackTargets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___ErrorInfoCallbackTargets) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____DisconnectedCause_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____CurrentLobby_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___EnableLobbyStatistics) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___lobbyStatistics) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____LocalPlayer_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____CurrentRoom_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____PlayersOnMasterCount_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____PlayersInRoomsCount_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____RoomsCount_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___lastJoinType) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___enterRoomParamsCache) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___failedRoomEntryOperation) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___friendListRequested) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____CloudRegion_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ____CurrentCluster_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___RegionHandler) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___bestRegionSummaryFromStorage) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___SummaryToCache) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___connectToBestRegion) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___callbackTargetChanges) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___callbackTargets) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingClient, ___NameServerPortInAppSettings) == 0x178, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::LoadBalancingClient);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LoadBalancingClient*, "Photon.Realtime", "LoadBalancingClient");
NEED_NO_BOX(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*, "Photon.Realtime", "LoadBalancingClient/CallbackTargetChange");
NEED_NO_BOX(::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters*, "Photon.Realtime", "LoadBalancingClient/EncryptionDataParameters");
