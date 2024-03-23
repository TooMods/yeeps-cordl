#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterCode)
// Forward declare root types
namespace Photon::Realtime {
class ParameterCode;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ParameterCode);
// Type: Photon.Realtime::ParameterCode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ParameterCode*
class CORDL_TYPE ParameterCode : public ::System::Object {
public:
  // Declarations
  static inline ::Photon::Realtime::ParameterCode* New_ctor();

  /// @brief Method .ctor, addr 0x2247c4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterCode(ParameterCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterCode(ParameterCode const&) = delete;

  /// @brief Field ActorList offset 0xffffffff size 0x1
  static constexpr uint8_t ActorList{ static_cast<uint8_t>(0xfcu) };

  /// @brief Field ActorNr offset 0xffffffff size 0x1
  static constexpr uint8_t ActorNr{ static_cast<uint8_t>(0xfeu) };

  /// @brief Field Add offset 0xffffffff size 0x1
  static constexpr uint8_t Add{ static_cast<uint8_t>(0xeeu) };

  /// @brief Field Address offset 0xffffffff size 0x1
  static constexpr uint8_t Address{ static_cast<uint8_t>(0xe6u) };

  /// @brief Field AppVersion offset 0xffffffff size 0x1
  static constexpr uint8_t AppVersion{ static_cast<uint8_t>(0xdcu) };

  /// @brief Field ApplicationId offset 0xffffffff size 0x1
  static constexpr uint8_t ApplicationId{ static_cast<uint8_t>(0xe0u) };

  /// @brief Field AzureLocalNodeId offset 0xffffffff size 0x1
  static constexpr uint8_t AzureLocalNodeId{ static_cast<uint8_t>(0xd1u) };

  /// @brief Field AzureMasterNodeId offset 0xffffffff size 0x1
  static constexpr uint8_t AzureMasterNodeId{ static_cast<uint8_t>(0xd0u) };

  /// @brief Field AzureNodeInfo offset 0xffffffff size 0x1
  static constexpr uint8_t AzureNodeInfo{ static_cast<uint8_t>(0xd2u) };

  /// @brief Field Broadcast offset 0xffffffff size 0x1
  static constexpr uint8_t Broadcast{ static_cast<uint8_t>(0xfau) };

  /// @brief Field Cache offset 0xffffffff size 0x1
  static constexpr uint8_t Cache{ static_cast<uint8_t>(0xf7u) };

  /// @brief Field CacheSliceIndex offset 0xffffffff size 0x1
  static constexpr uint8_t CacheSliceIndex{ static_cast<uint8_t>(0xcdu) };

  /// @brief Field CheckUserOnJoin offset 0xffffffff size 0x1
  static constexpr uint8_t CheckUserOnJoin{ static_cast<uint8_t>(0xe8u) };

  /// @brief Field CleanupCacheOnLeave offset 0xffffffff size 0x1
  static constexpr uint8_t CleanupCacheOnLeave{ static_cast<uint8_t>(0xf1u) };

  /// @brief Field ClientAuthenticationData offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationData{ static_cast<uint8_t>(0xd6u) };

  /// @brief Field ClientAuthenticationParams offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationParams{ static_cast<uint8_t>(0xd8u) };

  /// @brief Field ClientAuthenticationType offset 0xffffffff size 0x1
  static constexpr uint8_t ClientAuthenticationType{ static_cast<uint8_t>(0xd9u) };

  /// @brief Field Cluster offset 0xffffffff size 0x1
  static constexpr uint8_t Cluster{ static_cast<uint8_t>(0xc4u) };

  /// @brief Field Code offset 0xffffffff size 0x1
  static constexpr uint8_t Code{ static_cast<uint8_t>(0xf4u) };

  /// @brief Field CustomEventContent offset 0xffffffff size 0x1
  static constexpr uint8_t CustomEventContent{ static_cast<uint8_t>(0xf5u) };

  /// @brief Field CustomInitData offset 0xffffffff size 0x1
  static constexpr uint8_t CustomInitData{ static_cast<uint8_t>(0xc2u) };

  /// @brief Field Data offset 0xffffffff size 0x1
  static constexpr uint8_t Data{ static_cast<uint8_t>(0xf5u) };

  /// @brief Field EmptyRoomTTL offset 0xffffffff size 0x1
  static constexpr uint8_t EmptyRoomTTL{ static_cast<uint8_t>(0xecu) };

  /// @brief Field EncryptionData offset 0xffffffff size 0x1
  static constexpr uint8_t EncryptionData{ static_cast<uint8_t>(0xc0u) };

  /// @brief Field EncryptionMode offset 0xffffffff size 0x1
  static constexpr uint8_t EncryptionMode{ static_cast<uint8_t>(0xc1u) };

  /// @brief Field EventForward offset 0xffffffff size 0x1
  static constexpr uint8_t EventForward{ static_cast<uint8_t>(0xeau) };

  /// @brief Field ExpectedProtocol offset 0xffffffff size 0x1
  static constexpr uint8_t ExpectedProtocol{ static_cast<uint8_t>(0xc3u) };

  /// @brief Field ExpectedValues offset 0xffffffff size 0x1
  static constexpr uint8_t ExpectedValues{ static_cast<uint8_t>(0xe7u) };

  /// @brief Field FindFriendsOptions offset 0xffffffff size 0x1
  static constexpr uint8_t FindFriendsOptions{ static_cast<uint8_t>(0x2u) };

  /// @brief Field FindFriendsRequestList offset 0xffffffff size 0x1
  static constexpr uint8_t FindFriendsRequestList{ static_cast<uint8_t>(0x1u) };

  /// @brief Field FindFriendsResponseOnlineList offset 0xffffffff size 0x1
  static constexpr uint8_t FindFriendsResponseOnlineList{ static_cast<uint8_t>(0x1u) };

  /// @brief Field FindFriendsResponseRoomIdList offset 0xffffffff size 0x1
  static constexpr uint8_t FindFriendsResponseRoomIdList{ static_cast<uint8_t>(0x2u) };

  /// @brief Field GameCount offset 0xffffffff size 0x1
  static constexpr uint8_t GameCount{ static_cast<uint8_t>(0xe4u) };

  /// @brief Field GameList offset 0xffffffff size 0x1
  static constexpr uint8_t GameList{ static_cast<uint8_t>(0xdeu) };

  /// @brief Field GameProperties offset 0xffffffff size 0x1
  static constexpr uint8_t GameProperties{ static_cast<uint8_t>(0xf8u) };

  /// @brief Field Group offset 0xffffffff size 0x1
  static constexpr uint8_t Group{ static_cast<uint8_t>(0xf0u) };

  /// @brief Field Info offset 0xffffffff size 0x1
  static constexpr uint8_t Info{ static_cast<uint8_t>(0xdau) };

  /// @brief Field IsComingBack offset 0xffffffff size 0x1
  static constexpr uint8_t IsComingBack{ static_cast<uint8_t>(0xe9u) };

  /// @brief Field IsInactive offset 0xffffffff size 0x1
  static constexpr uint8_t IsInactive{ static_cast<uint8_t>(0xe9u) };

  /// @brief Field JoinMode offset 0xffffffff size 0x1
  static constexpr uint8_t JoinMode{ static_cast<uint8_t>(0xd7u) };

  /// @brief Field LobbyName offset 0xffffffff size 0x1
  static constexpr uint8_t LobbyName{ static_cast<uint8_t>(0xd5u) };

  /// @brief Field LobbyStats offset 0xffffffff size 0x1
  static constexpr uint8_t LobbyStats{ static_cast<uint8_t>(0xd3u) };

  /// @brief Field LobbyType offset 0xffffffff size 0x1
  static constexpr uint8_t LobbyType{ static_cast<uint8_t>(0xd4u) };

  /// @brief Field MasterClientId offset 0xffffffff size 0x1
  static constexpr uint8_t MasterClientId{ static_cast<uint8_t>(0xcbu) };

  /// @brief Field MasterPeerCount offset 0xffffffff size 0x1
  static constexpr uint8_t MasterPeerCount{ static_cast<uint8_t>(0xe3u) };

  /// @brief Field MatchMakingType offset 0xffffffff size 0x1
  static constexpr uint8_t MatchMakingType{ static_cast<uint8_t>(0xdfu) };

  /// @brief Field NickName offset 0xffffffff size 0x1
  static constexpr uint8_t NickName{ static_cast<uint8_t>(0xcau) };

  /// @brief Field PeerCount offset 0xffffffff size 0x1
  static constexpr uint8_t PeerCount{ static_cast<uint8_t>(0xe5u) };

  /// @brief Field PlayerProperties offset 0xffffffff size 0x1
  static constexpr uint8_t PlayerProperties{ static_cast<uint8_t>(0xf9u) };

  /// @brief Field PlayerTTL offset 0xffffffff size 0x1
  static constexpr uint8_t PlayerTTL{ static_cast<uint8_t>(0xebu) };

  /// @brief Field PluginName offset 0xffffffff size 0x1
  static constexpr uint8_t PluginName{ static_cast<uint8_t>(0xc9u) };

  /// @brief Field PluginVersion offset 0xffffffff size 0x1
  static constexpr uint8_t PluginVersion{ static_cast<uint8_t>(0xc8u) };

  /// @brief Field Plugins offset 0xffffffff size 0x1
  static constexpr uint8_t Plugins{ static_cast<uint8_t>(0xccu) };

  /// @brief Field Position offset 0xffffffff size 0x1
  static constexpr uint8_t Position{ static_cast<uint8_t>(0xdfu) };

  /// @brief Field Properties offset 0xffffffff size 0x1
  static constexpr uint8_t Properties{ static_cast<uint8_t>(0xfbu) };

  /// @brief Field PublishUserId offset 0xffffffff size 0x1
  static constexpr uint8_t PublishUserId{ static_cast<uint8_t>(0xefu) };

  /// @brief Field ReceiverGroup offset 0xffffffff size 0x1
  static constexpr uint8_t ReceiverGroup{ static_cast<uint8_t>(0xf6u) };

  /// @brief Field Region offset 0xffffffff size 0x1
  static constexpr uint8_t Region{ static_cast<uint8_t>(0xd2u) };

  /// @brief Field Remove offset 0xffffffff size 0x1
  static constexpr uint8_t Remove{ static_cast<uint8_t>(0xefu) };

  /// @brief Field RoomName offset 0xffffffff size 0x1
  static constexpr uint8_t RoomName{ static_cast<uint8_t>(0xffu) };

  /// @brief Field RoomOptionFlags offset 0xffffffff size 0x1
  static constexpr uint8_t RoomOptionFlags{ static_cast<uint8_t>(0xbfu) };

  /// @brief Field SuppressRoomEvents offset 0xffffffff size 0x1
  static constexpr uint8_t SuppressRoomEvents{ static_cast<uint8_t>(0xedu) };

  /// @brief Field TargetActorNr offset 0xffffffff size 0x1
  static constexpr uint8_t TargetActorNr{ static_cast<uint8_t>(0xfdu) };

  /// @brief Field Token offset 0xffffffff size 0x1
  static constexpr uint8_t Token{ static_cast<uint8_t>(0xddu) };

  /// @brief Field UriPath offset 0xffffffff size 0x1
  static constexpr uint8_t UriPath{ static_cast<uint8_t>(0xd1u) };

  /// @brief Field UserId offset 0xffffffff size 0x1
  static constexpr uint8_t UserId{ static_cast<uint8_t>(0xe1u) };

  /// @brief Field WebRpcParameters offset 0xffffffff size 0x1
  static constexpr uint8_t WebRpcParameters{ static_cast<uint8_t>(0xd0u) };

  /// @brief Field WebRpcReturnCode offset 0xffffffff size 0x1
  static constexpr uint8_t WebRpcReturnCode{ static_cast<uint8_t>(0xcfu) };

  /// @brief Field WebRpcReturnMessage offset 0xffffffff size 0x1
  static constexpr uint8_t WebRpcReturnMessage{ static_cast<uint8_t>(0xceu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ParameterCode, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ParameterCode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ParameterCode*, "Photon.Realtime", "ParameterCode");
