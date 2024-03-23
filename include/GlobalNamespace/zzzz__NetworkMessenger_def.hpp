#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMessenger)
namespace GlobalNamespace {
struct ExplosionType;
}
namespace GlobalNamespace {
struct HitType;
}
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
struct MapData;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct PrivateRoomPermissions;
}
namespace GlobalNamespace {
struct VoteType;
}
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __MapObject__DropType;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
struct __NetworkManager__KickSource;
}
namespace GlobalNamespace {
struct __Player__KnockbackSource;
}
namespace GlobalNamespace {
struct __Player__Pose;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace GlobalNamespace {
struct __StuffingManager__TransferType;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkMessenger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkMessenger);
// Type: ::NetworkMessenger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkMessenger*
class CORDL_TYPE NetworkMessenger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <local>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__local_k__BackingField, put = setStaticF__local_k__BackingField))::UnityW<::GlobalNamespace::NetworkMessenger> _local_k__BackingField;

  /// @brief Field hasQueuedKeyPose, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasQueuedKeyPose, put = setStaticF_hasQueuedKeyPose)) bool hasQueuedKeyPose;

  __declspec(property(get = get_isLinked)) bool isLinked;

  /// @brief Field linkedPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_linkedPlayer, put = __cordl_internal_set_linkedPlayer))::UnityW<::GlobalNamespace::Player> linkedPlayer;

  /// @brief Field pv, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pv, put = __cordl_internal_set_pv))::UnityW<::Photon::Pun::PhotonView> pv;

  /// @brief Field queuedKeyPose, offset 0xffffffff, size 0x88
  static __declspec(property(get = getStaticF_queuedKeyPose, put = setStaticF_queuedKeyPose))::GlobalNamespace::__Player__Pose queuedKeyPose;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method ApplyStatusEffectToPlayer, addr 0x2c7ad40, size 0x17c, virtual false, abstract: false, final false
  inline void ApplyStatusEffectToPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration);

  /// @brief Method Awake, addr 0x2c79990, size 0x2a4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ClearStatusEffectOnPlayer, addr 0x2c7af34, size 0x128, virtual false, abstract: false, final false
  inline void ClearStatusEffectOnPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method DoHiderHint, addr 0x2c7b840, size 0xc8, virtual false, abstract: false, final false
  inline void DoHiderHint(::StringW userID);

  /// @brief Method MakeSeekerForGameBalance, addr 0x2c7b6ac, size 0x12c, virtual false, abstract: false, final false
  inline void MakeSeekerForGameBalance(::StringW userID, bool skipKillPhase);

  static inline ::GlobalNamespace::NetworkMessenger* New_ctor();

  /// @brief Method OnDestroy, addr 0x2c79c34, size 0x1c8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPhotonSerializeView, addr 0x2c79ff0, size 0x784, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method OnPlayerCollidedWithMapObject, addr 0x2c7d3d8, size 0x24c, virtual false, abstract: false, final false
  inline void OnPlayerCollidedWithMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW userID, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnPlayerCreated, addr 0x2c79dfc, size 0x188, virtual false, abstract: false, final false
  inline void OnPlayerCreated(::GlobalNamespace::Player* createdPlayer);

  /// @brief Method OnPlayerDestroyed, addr 0x2c79f84, size 0x6c, virtual false, abstract: false, final false
  inline void OnPlayerDestroyed(::StringW userID);

  /// @brief Method ReceiveNetworkedList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ReceiveNetworkedList(::Photon::Pun::PhotonStream* stream, ByRef<::System::Collections::Generic::List_1<T>*> list);

  /// @brief Method ReceiveNetworkedStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ReceiveNetworkedStruct(::Photon::Pun::PhotonStream* stream, ByRef<T> data);

  /// @brief Method ReceiveRotation, addr 0x2c7aa50, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ReceiveRotation(::Photon::Pun::PhotonStream* stream);

  /// @brief Method ReceiveVector3, addr 0x2c7a930, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ReceiveVector3(::Photon::Pun::PhotonStream* stream);

  /// @brief Method RpcAddFootprint, addr 0x2c80084, size 0x80, virtual false, abstract: false, final false
  inline void RpcAddFootprint(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method RpcApplyPlayerKnockback, addr 0x2c7b25c, size 0xc0, virtual false, abstract: false, final false
  inline void RpcApplyPlayerKnockback(::StringW userID, ::UnityEngine::Vector3 force, int32_t source);

  /// @brief Method RpcApplyStatusEffectToPlayer, addr 0x2c7aebc, size 0x78, virtual false, abstract: false, final false
  inline void RpcApplyStatusEffectToPlayer(::StringW userID, int32_t statusEffect, float_t duration);

  /// @brief Method RpcBanAccount, addr 0x2c80b0c, size 0xc, virtual false, abstract: false, final false
  inline void RpcBanAccount(::StringW targetAccountID, int32_t hours);

  /// @brief Method RpcBeginParty, addr 0x2c7f4dc, size 0x50, virtual false, abstract: false, final false
  inline void RpcBeginParty();

  /// @brief Method RpcCallVote, addr 0x2c7e9bc, size 0xa0, virtual false, abstract: false, final false
  inline void RpcCallVote(::StringW voteID, int32_t voteTypeID, ::StringW voteCallerUserID, ::StringW voteTargetUserID, ::StringW message, ::StringW approvedMessage, ::StringW rejectedMessage);

  /// @brief Method RpcCastVote, addr 0x2c7ebb4, size 0x70, virtual false, abstract: false, final false
  inline void RpcCastVote(::StringW userID, ::StringW voteID, bool approved);

  /// @brief Method RpcChangeFloorDepth, addr 0x2c7ff08, size 0x10, virtual false, abstract: false, final false
  inline void RpcChangeFloorDepth(::StringW roomKey, int32_t newDepth);

  /// @brief Method RpcChangeMapObjectColor, addr 0x2c7d8b0, size 0x88, virtual false, abstract: false, final false
  inline void RpcChangeMapObjectColor(::StringW key, int32_t placedPositionX, int32_t placedPositionY, int32_t placedPositionZ, ::StringW newColorKey);

  /// @brief Method RpcClearStatusEffectOnPlayer, addr 0x2c7b05c, size 0x68, virtual false, abstract: false, final false
  inline void RpcClearStatusEffectOnPlayer(::StringW userID, int32_t statusEffect);

  /// @brief Method RpcCreateExplosion, addr 0x2c7f08c, size 0x9c, virtual false, abstract: false, final false
  inline void RpcCreateExplosion(int32_t explosionType, ::UnityEngine::Vector3 position, float_t radius, int32_t seed);

  /// @brief Method RpcCreateHitEffect, addr 0x2c7ede4, size 0xa0, virtual false, abstract: false, final false
  inline void RpcCreateHitEffect(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, int32_t hitType);

  /// @brief Method RpcCreateItem, addr 0x2c7bce0, size 0x224, virtual false, abstract: false, final false
  inline void RpcCreateItem(::StringW userID, ::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position,
                            ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity,
                            ::ArrayW<::StringW, ::Array<::StringW>*> serializedCustomParameters);

  /// @brief Method RpcCreateProjectile, addr 0x2c7f898, size 0xd4, virtual false, abstract: false, final false
  inline void RpcCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed, ::StringW colorKey, ::StringW projectileID);

  /// @brief Method RpcDestroyItem, addr 0x2c7bff8, size 0xc0, virtual false, abstract: false, final false
  inline void RpcDestroyItem(::StringW userID, ::StringW itemID);

  /// @brief Method RpcDestroyMapObject, addr 0x2c7d1f4, size 0xe4, virtual false, abstract: false, final false
  inline void RpcDestroyMapObject(::StringW key, int32_t placedPositionX, int32_t placedPositionY, int32_t placedPositionZ, ::StringW accountID, int32_t dropType, bool isPickup);

  /// @brief Method RpcDestroyProjectile, addr 0x2c7fab0, size 0x80, virtual false, abstract: false, final false
  inline void RpcDestroyProjectile(::StringW projectileID, ::UnityEngine::Vector3 position);

  /// @brief Method RpcDoBundlePurchaseCelebration, addr 0x2c7f5dc, size 0x50, virtual false, abstract: false, final false
  inline void RpcDoBundlePurchaseCelebration();

  /// @brief Method RpcDoHiderHint, addr 0x2c7b908, size 0x58, virtual false, abstract: false, final false
  inline void RpcDoHiderHint(::StringW userID);

  /// @brief Method RpcDoTransferAnimation, addr 0x2c7e65c, size 0x14c, virtual false, abstract: false, final false
  inline void RpcDoTransferAnimation(::StringW userID, ::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                     ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity, int32_t transferType, int32_t amount);

  /// @brief Method RpcExecuteKickPlayer, addr 0x2c7acd4, size 0x6c, virtual false, abstract: false, final false
  inline void RpcExecuteKickPlayer(int32_t source, ::StringW sourceUserID, ::StringW targetUserID);

  /// @brief Method RpcItemTransformation, addr 0x2c7c5b0, size 0x15c, virtual false, abstract: false, final false
  inline void RpcItemTransformation(::StringW userID, ::StringW itemID, ::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position,
                                    ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity);

  /// @brief Method RpcMakeSeekerForGameBalance, addr 0x2c7b7d8, size 0x68, virtual false, abstract: false, final false
  inline void RpcMakeSeekerForGameBalance(::StringW userID, bool skipKillPhase);

  /// @brief Method RpcMapAutosaveSucceeded, addr 0x2c7d388, size 0x50, virtual false, abstract: false, final false
  inline void RpcMapAutosaveSucceeded();

  /// @brief Method RpcMapObjectCreated, addr 0x2c7cec8, size 0xb0, virtual false, abstract: false, final false
  inline void RpcMapObjectCreated(::StringW key, int32_t placedPositionX, int32_t placedPositionY, int32_t placedPositionZ, int32_t forwardFacing, int32_t upFacing, ::StringW colorKey,
                                  ::StringW accountID);

  /// @brief Method RpcMapObjectPreviewCreated, addr 0x2c7dcf0, size 0x80, virtual false, abstract: false, final false
  inline void RpcMapObjectPreviewCreated(::StringW userID, ::StringW previewID, ::StringW mapObjectKey, ::StringW colorKey);

  /// @brief Method RpcMapObjectPreviewDestroyed, addr 0x2c7e27c, size 0x58, virtual false, abstract: false, final false
  inline void RpcMapObjectPreviewDestroyed(::StringW previewID);

  /// @brief Method RpcMapObjectPreviewHidden, addr 0x2c7e130, size 0x84, virtual false, abstract: false, final false
  inline void RpcMapObjectPreviewHidden(::StringW previewID);

  /// @brief Method RpcMapObjectPreviewUpdated, addr 0x2c7df80, size 0xe8, virtual false, abstract: false, final false
  inline void RpcMapObjectPreviewUpdated(::StringW previewID, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, bool isValid);

  /// @brief Method RpcMapSync, addr 0x2c7cb60, size 0xd0, virtual false, abstract: false, final false
  inline void RpcMapSync(int32_t mapDataVersion, ::ArrayW<uint8_t, ::Array<uint8_t>*> compressesdMapSyncData, bool forceExpress);

  /// @brief Method RpcMutedUserSync, addr 0x2c80668, size 0x108, virtual false, abstract: false, final false
  inline void RpcMutedUserSync(::StringW accountID, ::ArrayW<::StringW, ::Array<::StringW>*> mutedUserIDs);

  /// @brief Method RpcOnPlayerCollidedWithMapObject, addr 0x2c7d624, size 0xb0, virtual false, abstract: false, final false
  inline void RpcOnPlayerCollidedWithMapObject(::StringW key, int32_t placedPositionX, int32_t placedPositionY, int32_t placedPositionZ, ::StringW userID, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method RpcPlaySoundEffect, addr 0x2c80338, size 0xa8, virtual false, abstract: false, final false
  inline void RpcPlaySoundEffect(::StringW soundEffectKey, ::UnityEngine::Vector3 position, float_t volumeMultiplier, float_t pitchMultiplier, int32_t randomSeed);

  /// @brief Method RpcPreviewBundle, addr 0x2c7f290, size 0x9c, virtual false, abstract: false, final false
  inline void RpcPreviewBundle(::StringW groupKey, int32_t indexInGroup, int32_t bundleIndex);

  /// @brief Method RpcRefreshRoomMap, addr 0x2c7fd88, size 0x58, virtual false, abstract: false, final false
  inline void RpcRefreshRoomMap(::StringW roomMapKey);

  /// @brief Method RpcSeekerCaughtHider, addr 0x2c7b644, size 0x68, virtual false, abstract: false, final false
  inline void RpcSeekerCaughtHider(::StringW seekerUserID, ::StringW hiderUserID);

  /// @brief Method RpcSetActiveCamera, addr 0x2c804d4, size 0x74, virtual false, abstract: false, final false
  inline void RpcSetActiveCamera(::StringW userID, ::StringW cameraID);

  /// @brief Method RpcSetupNewRound, addr 0x2c7b470, size 0xe0, virtual false, abstract: false, final false
  inline void RpcSetupNewRound(int32_t roundNumber, ::ArrayW<::StringW, ::Array<::StringW>*> initialSeekerUserIDs);

  /// @brief Method RpcSimpleCustomItemMessage, addr 0x2c7c834, size 0x98, virtual false, abstract: false, final false
  inline void RpcSimpleCustomItemMessage(::StringW userID, ::StringW itemID, ::StringW payload);

  /// @brief Method RpcSimpleCustomMapObjectMessage, addr 0x2c7db14, size 0x88, virtual false, abstract: false, final false
  inline void RpcSimpleCustomMapObjectMessage(::StringW key, int32_t placedPositionX, int32_t placedPositionY, int32_t placedPositionZ, ::StringW payload);

  /// @brief Method RpcTransferItemOwnership, addr 0x2c7c1e0, size 0xb8, virtual false, abstract: false, final false
  inline void RpcTransferItemOwnership(::StringW userID, ::StringW itemID, ::StringW newUserID);

  /// @brief Method RpcUncoverBuyAllButton, addr 0x2c7f3dc, size 0x50, virtual false, abstract: false, final false
  inline void RpcUncoverBuyAllButton();

  /// @brief Method RpcUpdatePrivateRoomPermissions, addr 0x2c7fc58, size 0x68, virtual false, abstract: false, final false
  inline void RpcUpdatePrivateRoomPermissions(::StringW accountID, int32_t privateRoomPermissions);

  /// @brief Method RpcWarnAccount, addr 0x2c80838, size 0x8, virtual false, abstract: false, final false
  inline void RpcWarnAccount(::StringW targetAccountID);

  /// @brief Method SeekerCaughtHider, addr 0x2c7b550, size 0xf4, virtual false, abstract: false, final false
  inline void SeekerCaughtHider(::StringW seekerUserID, ::StringW hiderUserID);

  /// @brief Method SendAddFootprint, addr 0x2c7ff18, size 0x16c, virtual false, abstract: false, final false
  inline void SendAddFootprint(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method SendApplyPlayerKnockback, addr 0x2c7b0c4, size 0x198, virtual false, abstract: false, final false
  inline void SendApplyPlayerKnockback(::StringW userID, ::UnityEngine::Vector3 force, ::GlobalNamespace::__Player__KnockbackSource source);

  /// @brief Method SendBanAccount, addr 0x2c809e4, size 0x128, virtual false, abstract: false, final false
  inline void SendBanAccount(::StringW targetAccountID, int32_t hours);

  /// @brief Method SendBeginParty, addr 0x2c7f42c, size 0xb0, virtual false, abstract: false, final false
  inline void SendBeginParty();

  /// @brief Method SendCallVote, addr 0x2c7e7a8, size 0x214, virtual false, abstract: false, final false
  inline void SendCallVote(::StringW voteID, ::GlobalNamespace::VoteType voteType, ::StringW voteCallerUserID, ::StringW voteTargetUserID, ::StringW message, ::StringW approvedMessage,
                           ::StringW rejectedMessage);

  /// @brief Method SendCastVote, addr 0x2c7ea5c, size 0x158, virtual false, abstract: false, final false
  inline void SendCastVote(::StringW userID, ::StringW voteID, bool approved);

  /// @brief Method SendChangeFloorDepth, addr 0x2c7fde0, size 0x128, virtual false, abstract: false, final false
  inline void SendChangeFloorDepth(::StringW roomKey, int32_t newDepth);

  /// @brief Method SendChangeMapObjectColor, addr 0x2c7d6d4, size 0x1dc, virtual false, abstract: false, final false
  inline void SendChangeMapObjectColor(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW newColorKey);

  /// @brief Method SendCreateExplosion, addr 0x2c7ee84, size 0x208, virtual false, abstract: false, final false
  inline void SendCreateExplosion(::GlobalNamespace::ExplosionType explosionType, ::UnityEngine::Vector3 position, float_t radius, int32_t seed);

  /// @brief Method SendCreateHitEffect, addr 0x2c7ec24, size 0x1c0, virtual false, abstract: false, final false
  inline void SendCreateHitEffect(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::GlobalNamespace::HitType hitType);

  /// @brief Method SendCreateItem, addr 0x2c7b960, size 0x380, virtual false, abstract: false, final false
  inline void SendCreateItem(::StringW userID, ::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                             ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method SendCreateProjectile, addr 0x2c7f62c, size 0x26c, virtual false, abstract: false, final false
  inline void SendCreateProjectile(::StringW projectileKey, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t speed, ::StringW colorKey, ::StringW projectileID);

  /// @brief Method SendDestroyItem, addr 0x2c7bf04, size 0xf4, virtual false, abstract: false, final false
  inline void SendDestroyItem(::StringW userID, ::StringW itemID);

  /// @brief Method SendDestroyMapObject, addr 0x2c7cf78, size 0x27c, virtual false, abstract: false, final false
  inline void SendDestroyMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW accountID, ::GlobalNamespace::__MapObject__DropType dropType, bool isPickup);

  /// @brief Method SendDestroyProjectile, addr 0x2c7f96c, size 0x144, virtual false, abstract: false, final false
  inline void SendDestroyProjectile(::StringW projectileID, ::UnityEngine::Vector3 position);

  /// @brief Method SendDoBundlePurchaseCelebration, addr 0x2c7f52c, size 0xb0, virtual false, abstract: false, final false
  inline void SendDoBundlePurchaseCelebration();

  /// @brief Method SendDoTransferAnimation, addr 0x2c7e2d4, size 0x388, virtual false, abstract: false, final false
  inline void SendDoTransferAnimation(::StringW userID, ::GlobalNamespace::ItemTransformationData source, ::GlobalNamespace::__StuffingManager__TransferType transferType, int32_t amount);

  /// @brief Method SendExecuteKickPlayer, addr 0x2c77534, size 0x15c, virtual false, abstract: false, final false
  inline void SendExecuteKickPlayer(::GlobalNamespace::__NetworkManager__KickSource source, ::StringW sourceUserID, ::StringW targetUserID);

  /// @brief Method SendItemTransformation, addr 0x2c7c298, size 0x318, virtual false, abstract: false, final false
  inline void SendItemTransformation(::StringW userID, ::StringW itemID, ::GlobalNamespace::ItemTransformationData itemTransformationData);

  /// @brief Method SendMapAutosaveSucceeded, addr 0x2c7d2d8, size 0xb0, virtual false, abstract: false, final false
  inline void SendMapAutosaveSucceeded();

  /// @brief Method SendMapObjectPreviewCreated, addr 0x2c7db9c, size 0x154, virtual false, abstract: false, final false
  inline void SendMapObjectPreviewCreated(::StringW userID, ::StringW previewID, ::StringW mapObjectKey, ::StringW colorKey);

  /// @brief Method SendMapObjectPreviewDestroyed, addr 0x2c7e1b4, size 0xc8, virtual false, abstract: false, final false
  inline void SendMapObjectPreviewDestroyed(::StringW previewID);

  /// @brief Method SendMapObjectPreviewHidden, addr 0x2c7e068, size 0xc8, virtual false, abstract: false, final false
  inline void SendMapObjectPreviewHidden(::StringW previewID);

  /// @brief Method SendMapObjectPreviewUpdated, addr 0x2c7dd70, size 0x210, virtual false, abstract: false, final false
  inline void SendMapObjectPreviewUpdated(::StringW previewID, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Quaternion worldRotation, bool isValid);

  /// @brief Method SendMapOjectCreated, addr 0x2c7cc30, size 0x298, virtual false, abstract: false, final false
  inline void SendMapOjectCreated(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing forwardFacing, ::GlobalNamespace::__MapObject__Facing upFacing,
                                  ::StringW colorKey, ::StringW accountID);

  /// @brief Method SendMapSync, addr 0x2c7c8cc, size 0x294, virtual false, abstract: false, final false
  inline void SendMapSync(::GlobalNamespace::MapData mapData, bool forceExpress);

  /// @brief Method SendMutedUserSync, addr 0x2c80548, size 0x120, virtual false, abstract: false, final false
  inline void SendMutedUserSync(::StringW accountID, ::System::Collections::Generic::List_1<::StringW>* mutedUserIDs);

  /// @brief Method SendNetworkedList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SendNetworkedList(::Photon::Pun::PhotonStream* stream, ::System::Collections::Generic::List_1<T>* list);

  /// @brief Method SendNetworkedStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SendNetworkedStruct(::Photon::Pun::PhotonStream* stream, T data);

  /// @brief Method SendPlaySoundEffect, addr 0x2c80104, size 0x234, virtual false, abstract: false, final false
  inline void SendPlaySoundEffect(::StringW soundEffectKey, ::UnityEngine::Vector3 position, float_t volumeMultiplier, float_t pitchMultiplier, int32_t randomSeed);

  /// @brief Method SendPreviewBundle, addr 0x2c7f128, size 0x168, virtual false, abstract: false, final false
  inline void SendPreviewBundle(::StringW groupKey, int32_t indexInGroup, int32_t bundleIndex);

  /// @brief Method SendRefreshRoomMap, addr 0x2c7fcc0, size 0xc8, virtual false, abstract: false, final false
  inline void SendRefreshRoomMap(::StringW roomMapKey);

  /// @brief Method SendRotation, addr 0x2c7a840, size 0xf0, virtual false, abstract: false, final false
  static inline void SendRotation(::Photon::Pun::PhotonStream* stream, ::UnityEngine::Quaternion rotation);

  /// @brief Method SendSetActiveCamera, addr 0x2c803e0, size 0xf4, virtual false, abstract: false, final false
  inline void SendSetActiveCamera(::StringW userID, ::StringW cameraID);

  /// @brief Method SendSimpleCustomItemMessage, addr 0x2c7c70c, size 0x128, virtual false, abstract: false, final false
  inline void SendSimpleCustomItemMessage(::StringW userID, ::StringW itemID, ::StringW payload);

  /// @brief Method SendSimpleCustomMapObjectMessage, addr 0x2c7d938, size 0x1dc, virtual false, abstract: false, final false
  inline void SendSimpleCustomMapObjectMessage(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW payload);

  /// @brief Method SendTransferItemOwnership, addr 0x2c7c0b8, size 0x128, virtual false, abstract: false, final false
  inline void SendTransferItemOwnership(::StringW userID, ::StringW itemID, ::StringW newUserID);

  /// @brief Method SendUncoverBuyAllButton, addr 0x2c7f32c, size 0xb0, virtual false, abstract: false, final false
  inline void SendUncoverBuyAllButton();

  /// @brief Method SendUpdatePrivateRoomPermissions, addr 0x2c7fb30, size 0x128, virtual false, abstract: false, final false
  inline void SendUpdatePrivateRoomPermissions(::StringW accountID, ::GlobalNamespace::PrivateRoomPermissions privateRoomPermissions);

  /// @brief Method SendVector3, addr 0x2c7a774, size 0xcc, virtual false, abstract: false, final false
  static inline void SendVector3(::Photon::Pun::PhotonStream* stream, ::UnityEngine::Vector3 vector);

  /// @brief Method SendWarnAccount, addr 0x2c80770, size 0xc8, virtual false, abstract: false, final false
  inline void SendWarnAccount(::StringW targetAccountID);

  /// @brief Method SetQueuedKeyPose, addr 0x2c7abbc, size 0x7c, virtual false, abstract: false, final false
  static inline void SetQueuedKeyPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method SetupNewRound, addr 0x2c7b31c, size 0x154, virtual false, abstract: false, final false
  inline void SetupNewRound(int32_t roundNumber, ::System::Collections::Generic::List_1<::StringW>* initialSeekerUserIDs);

  /// @brief Method TrySetQueuedKeyPoseToCurrent, addr 0x2c7ac38, size 0x9c, virtual false, abstract: false, final false
  inline void TrySetQueuedKeyPoseToCurrent();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_linkedPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_linkedPlayer();

  constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_pv() const;

  constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_pv();

  constexpr void __cordl_internal_set_linkedPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_pv(::UnityW<::Photon::Pun::PhotonView> value);

  /// @brief Method .ctor, addr 0x2c80c94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::NetworkMessenger> getStaticF__local_k__BackingField();

  static inline bool getStaticF_hasQueuedKeyPose();

  static inline ::GlobalNamespace::__Player__Pose getStaticF_queuedKeyPose();

  /// @brief Method get_isLinked, addr 0x2c79930, size 0x60, virtual false, abstract: false, final false
  inline bool get_isLinked();

  /// @brief Method get_local, addr 0x2c7989c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::NetworkMessenger> get_local();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

  static inline void setStaticF__local_k__BackingField(::UnityW<::GlobalNamespace::NetworkMessenger> value);

  static inline void setStaticF_hasQueuedKeyPose(bool value);

  static inline void setStaticF_queuedKeyPose(::GlobalNamespace::__Player__Pose value);

  /// @brief Method set_local, addr 0x2c798e4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_local(::GlobalNamespace::NetworkMessenger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkMessenger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkMessenger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkMessenger(NetworkMessenger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkMessenger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkMessenger(NetworkMessenger const&) = delete;

  /// @brief Field pv, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::PhotonView> ___pv;

  /// @brief Field linkedPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___linkedPlayer;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Network Messages: " };

  /// @brief Field logPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString logPreface{ u"Network" };

  /// @brief Field packetsPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t packetsPerSecond{ static_cast<int32_t>(0xa) };

  /// @brief Field queueLengthFactor offset 0xffffffff size 0x4
  static constexpr float_t queueLengthFactor{ 0.2 };

  /// @brief Field timeBetweenPackets offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenPackets{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkMessenger, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMessenger, ___pv) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMessenger, ___linkedPlayer) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkMessenger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkMessenger*, "", "NetworkMessenger");
