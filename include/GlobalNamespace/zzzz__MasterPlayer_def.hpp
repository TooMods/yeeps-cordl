#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MasterPlayer)
namespace GlobalNamespace {
class EndlessItemSpawner;
}
namespace GlobalNamespace {
class FlatScreenPlayerController;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class SpectatorCameraController;
}
namespace GlobalNamespace {
class WindZone;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
struct __MasterPlayer__CollisionBodyPart;
}
namespace GlobalNamespace {
class __MasterPlayer__OnMasterPlayerKnockedBack;
}
namespace GlobalNamespace {
class __MasterPlayer__OnPickupItem;
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
struct __Player__Type;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRDirectInteractor;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class PhysicMaterial;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MasterPlayer__CollisionBodyPart;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
class __MasterPlayer__OnMasterPlayerKnockedBack;
}
namespace GlobalNamespace {
class __MasterPlayer__OnPickupItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MasterPlayer__CollisionBodyPart);
MARK_REF_PTR_T(::GlobalNamespace::MasterPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack);
MARK_REF_PTR_T(::GlobalNamespace::__MasterPlayer__OnPickupItem);
// Type: ::OnPickupItem
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterPlayer::OnPickupItem*
class CORDL_TYPE __MasterPlayer__OnPickupItem : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1069ff0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x106a010, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1069fdc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item);

  static inline ::GlobalNamespace::__MasterPlayer__OnPickupItem* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1069eb0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MasterPlayer__OnPickupItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayer__OnPickupItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MasterPlayer__OnPickupItem(__MasterPlayer__OnPickupItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayer__OnPickupItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MasterPlayer__OnPickupItem(__MasterPlayer__OnPickupItem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MasterPlayer__OnPickupItem, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CollisionBodyPart
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MasterPlayer::CollisionBodyPart
struct CORDL_TYPE __MasterPlayer__CollisionBodyPart {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MasterPlayer__CollisionBodyPart_Unwrapped
  enum struct ____MasterPlayer__CollisionBodyPart_Unwrapped : int32_t {
    __E_body = static_cast<int32_t>(0x0),
    __E_head = static_cast<int32_t>(0x1),
    __E_rightHand = static_cast<int32_t>(0x2),
    __E_leftHand = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MasterPlayer__CollisionBodyPart_Unwrapped() const noexcept {
    return static_cast<____MasterPlayer__CollisionBodyPart_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MasterPlayer__CollisionBodyPart();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MasterPlayer__CollisionBodyPart(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field body value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MasterPlayer__CollisionBodyPart const body;

  /// @brief Field head value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MasterPlayer__CollisionBodyPart const head;

  /// @brief Field leftHand value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MasterPlayer__CollisionBodyPart const leftHand;

  /// @brief Field rightHand value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MasterPlayer__CollisionBodyPart const rightHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MasterPlayer__CollisionBodyPart, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayer__CollisionBodyPart, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnMasterPlayerKnockedBack
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterPlayer::OnMasterPlayerKnockedBack*
class CORDL_TYPE __MasterPlayer__OnMasterPlayerKnockedBack : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x106a0f4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t intensityRatio, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x106a178, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x106a0e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t intensityRatio);

  static inline ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x106a01c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MasterPlayer__OnMasterPlayerKnockedBack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayer__OnMasterPlayerKnockedBack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MasterPlayer__OnMasterPlayerKnockedBack(__MasterPlayer__OnMasterPlayerKnockedBack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayer__OnMasterPlayerKnockedBack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MasterPlayer__OnMasterPlayerKnockedBack(__MasterPlayer__OnMasterPlayerKnockedBack const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MasterPlayer
// SizeInfo { instance_size: 776, native_size: -1, calculated_instance_size: 776, calculated_native_size: 776, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterPlayer*
class CORDL_TYPE MasterPlayer : public ::GlobalNamespace::Player {
public:
  // Declarations
  using CollisionBodyPart = ::GlobalNamespace::__MasterPlayer__CollisionBodyPart;

  using OnMasterPlayerKnockedBack = ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack;

  using OnPickupItem = ::GlobalNamespace::__MasterPlayer__OnPickupItem;

  /// @brief Field <hasKnockbackImmunity>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasKnockbackImmunity_k__BackingField, put = setStaticF__hasKnockbackImmunity_k__BackingField)) bool _hasKnockbackImmunity_k__BackingField;

  /// @brief Field <spectatorCameraController>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatorCameraController_k__BackingField,
                      put = __cordl_internal_set__spectatorCameraController_k__BackingField))::UnityW<::GlobalNamespace::SpectatorCameraController> _spectatorCameraController_k__BackingField;

  /// @brief Field anchoredCanvas, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_anchoredCanvas, put = __cordl_internal_set_anchoredCanvas))::UnityW<::UnityEngine::GameObject> anchoredCanvas;

  /// @brief Field bellyAnchor, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bellyAnchor, put = __cordl_internal_set_bellyAnchor))::UnityW<::UnityEngine::Transform> bellyAnchor;

  /// @brief Field bodyCollider, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyCollider, put = __cordl_internal_set_bodyCollider))::UnityW<::UnityEngine::CapsuleCollider> bodyCollider;

  /// @brief Field bodyRotationOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_bodyRotationOffset, put = setStaticF_bodyRotationOffset))::UnityEngine::Quaternion bodyRotationOffset;

  /// @brief Field bodyTransform, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyTransform, put = __cordl_internal_set_bodyTransform))::UnityW<::UnityEngine::Transform> bodyTransform;

  /// @brief Field collisionEnabledLayers, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_collisionEnabledLayers, put = __cordl_internal_set_collisionEnabledLayers))::UnityEngine::LayerMask collisionEnabledLayers;

  /// @brief Field cosmeticsOverrideZoneExpireTime, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_cosmeticsOverrideZoneExpireTime, put = __cordl_internal_set_cosmeticsOverrideZoneExpireTime)) float_t cosmeticsOverrideZoneExpireTime;

  /// @brief Field curKnockbackEnergy, offset 0x2f8, size 0x4
  __declspec(property(get = __cordl_internal_get_curKnockbackEnergy, put = __cordl_internal_set_curKnockbackEnergy)) float_t curKnockbackEnergy;

  /// @brief Field curRollAngle, offset 0x264, size 0x4
  __declspec(property(get = __cordl_internal_get_curRollAngle, put = __cordl_internal_set_curRollAngle)) float_t curRollAngle;

  /// @brief Field curRollAxis, offset 0x258, size 0xc
  __declspec(property(get = __cordl_internal_get_curRollAxis, put = __cordl_internal_set_curRollAxis))::UnityEngine::Vector3 curRollAxis;

  /// @brief Field curRollStartRotation, offset 0x248, size 0x10
  __declspec(property(get = __cordl_internal_get_curRollStartRotation, put = __cordl_internal_set_curRollStartRotation))::UnityEngine::Quaternion curRollStartRotation;

  /// @brief Field curStatusEffectOverlay, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_curStatusEffectOverlay, put = __cordl_internal_set_curStatusEffectOverlay))::UnityW<::UnityEngine::Transform> curStatusEffectOverlay;

  /// @brief Field curWindSound, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_curWindSound, put = __cordl_internal_set_curWindSound))::UnityW<::UnityEngine::AudioSource> curWindSound;

  /// @brief Field curWindZoneCount, offset 0x2d0, size 0x4
  __declspec(property(get = __cordl_internal_get_curWindZoneCount, put = __cordl_internal_set_curWindZoneCount)) int32_t curWindZoneCount;

  /// @brief Field currentVelocity, offset 0x10c, size 0xc
  __declspec(property(get = __cordl_internal_get_currentVelocity, put = __cordl_internal_set_currentVelocity))::UnityEngine::Vector3 currentVelocity;

  /// @brief Field defaultPrecision, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultPrecision, put = __cordl_internal_set_defaultPrecision)) float_t defaultPrecision;

  /// @brief Field defaultSeekerWeaponSpawnerLocalEulerAngles, offset 0x19c, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultSeekerWeaponSpawnerLocalEulerAngles,
                      put = __cordl_internal_set_defaultSeekerWeaponSpawnerLocalEulerAngles))::UnityEngine::Vector3 defaultSeekerWeaponSpawnerLocalEulerAngles;

  /// @brief Field defaultSeekerWeaponSpawnerLocalPosition, offset 0x190, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultSeekerWeaponSpawnerLocalPosition,
                      put = __cordl_internal_set_defaultSeekerWeaponSpawnerLocalPosition))::UnityEngine::Vector3 defaultSeekerWeaponSpawnerLocalPosition;

  /// @brief Field defaultSlideFactor, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultSlideFactor, put = __cordl_internal_set_defaultSlideFactor)) float_t defaultSlideFactor;

  /// @brief Field denormalizedVelocityAverage, offset 0x118, size 0xc
  __declspec(property(get = __cordl_internal_get_denormalizedVelocityAverage, put = __cordl_internal_set_denormalizedVelocityAverage))::UnityEngine::Vector3 denormalizedVelocityAverage;

  /// @brief Field disableMovement, offset 0x152, size 0x1
  __declspec(property(get = __cordl_internal_get_disableMovement, put = __cordl_internal_set_disableMovement)) bool disableMovement;

  /// @brief Field distanceFallenInAir, offset 0x28c, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceFallenInAir, put = __cordl_internal_set_distanceFallenInAir)) float_t distanceFallenInAir;

  /// @brief Field distanceTraveledInAir, offset 0x288, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceTraveledInAir, put = __cordl_internal_set_distanceTraveledInAir)) float_t distanceTraveledInAir;

  /// @brief Field dressingRoomOverrideZoneExpireTime, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_dressingRoomOverrideZoneExpireTime, put = __cordl_internal_set_dressingRoomOverrideZoneExpireTime)) float_t dressingRoomOverrideZoneExpireTime;

  /// @brief Field enterSpectatorModePosition, offset 0x16c, size 0xc
  __declspec(property(get = __cordl_internal_get_enterSpectatorModePosition, put = __cordl_internal_set_enterSpectatorModePosition))::UnityEngine::Vector3 enterSpectatorModePosition;

  /// @brief Field footprintRadii, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_footprintRadii, put = setStaticF_footprintRadii))::ArrayW<float_t, ::Array<float_t>*> footprintRadii;

  /// @brief Field freezeActiveChatterAudioSource, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeActiveChatterAudioSource,
                      put = __cordl_internal_set_freezeActiveChatterAudioSource))::UnityW<::UnityEngine::AudioSource> freezeActiveChatterAudioSource;

  /// @brief Field freezeActiveChatterSoundKey, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeActiveChatterSoundKey, put = __cordl_internal_set_freezeActiveChatterSoundKey))::StringW freezeActiveChatterSoundKey;

  /// @brief Field freezeActiveCrackleAudioSource, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeActiveCrackleAudioSource,
                      put = __cordl_internal_set_freezeActiveCrackleAudioSource))::UnityW<::UnityEngine::AudioSource> freezeActiveCrackleAudioSource;

  /// @brief Field freezeActiveCrackleSoundKey, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeActiveCrackleSoundKey, put = __cordl_internal_set_freezeActiveCrackleSoundKey))::StringW freezeActiveCrackleSoundKey;

  /// @brief Field freezeStartAudioSource, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeStartAudioSource, put = __cordl_internal_set_freezeStartAudioSource))::UnityW<::UnityEngine::AudioSource> freezeStartAudioSource;

  /// @brief Field freezeStartSoundKey, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeStartSoundKey, put = __cordl_internal_set_freezeStartSoundKey))::StringW freezeStartSoundKey;

  /// @brief Field freezeThawPuppetSoundKey, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeThawPuppetSoundKey, put = __cordl_internal_set_freezeThawPuppetSoundKey))::StringW freezeThawPuppetSoundKey;

  /// @brief Field freezeThawSoundKey, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_freezeThawSoundKey, put = __cordl_internal_set_freezeThawSoundKey))::StringW freezeThawSoundKey;

  /// @brief Field gorillaFlatScreenController, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_gorillaFlatScreenController,
                      put = __cordl_internal_set_gorillaFlatScreenController))::UnityW<::GlobalNamespace::FlatScreenPlayerController> gorillaFlatScreenController;

  /// @brief Field griefProtectionTimer, offset 0x304, size 0x4
  __declspec(property(get = __cordl_internal_get_griefProtectionTimer, put = __cordl_internal_set_griefProtectionTimer)) float_t griefProtectionTimer;

  /// @brief Field handCollideStartTimes, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_handCollideStartTimes, put = __cordl_internal_set_handCollideStartTimes))::ArrayW<float_t, ::Array<float_t>*> handCollideStartTimes;

  /// @brief Field hasCurRollData, offset 0x244, size 0x1
  __declspec(property(get = __cordl_internal_get_hasCurRollData, put = __cordl_internal_set_hasCurRollData)) bool hasCurRollData;

  /// @brief Field hasInitializedKnockbackImmunity, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasInitializedKnockbackImmunity, put = setStaticF_hasInitializedKnockbackImmunity)) bool hasInitializedKnockbackImmunity;

  /// @brief Field headCollider, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_headCollider, put = __cordl_internal_set_headCollider))::UnityW<::UnityEngine::SphereCollider> headCollider;

  /// @brief Field headTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_headTransform, put = __cordl_internal_set_headTransform))::UnityW<::UnityEngine::Transform> headTransform;

  /// @brief Field isDoingRollReset, offset 0x270, size 0x1
  __declspec(property(get = __cordl_internal_get_isDoingRollReset, put = __cordl_internal_set_isDoingRollReset)) bool isDoingRollReset;

  /// @brief Field isGriefProtectionActive, offset 0x301, size 0x1
  __declspec(property(get = __cordl_internal_get_isGriefProtectionActive, put = __cordl_internal_set_isGriefProtectionActive)) bool isGriefProtectionActive;

  /// @brief Field isInWindZone, offset 0x2d4, size 0x1
  __declspec(property(get = __cordl_internal_get_isInWindZone, put = __cordl_internal_set_isInWindZone)) bool isInWindZone;

  /// @brief Field isPromptingGriefProtection, offset 0x300, size 0x1
  __declspec(property(get = __cordl_internal_get_isPromptingGriefProtection, put = __cordl_internal_set_isPromptingGriefProtection)) bool isPromptingGriefProtection;

  /// @brief Field isSpectatorMode, offset 0x168, size 0x1
  __declspec(property(get = __cordl_internal_get_isSpectatorMode, put = __cordl_internal_set_isSpectatorMode)) bool isSpectatorMode;

  /// @brief Field jumpMultiplier, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpMultiplier, put = __cordl_internal_set_jumpMultiplier)) float_t jumpMultiplier;

  /// @brief Field killedTime, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_killedTime, put = __cordl_internal_set_killedTime)) float_t killedTime;

  /// @brief Field knockbackImmunityChannels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_knockbackImmunityChannels, put = setStaticF_knockbackImmunityChannels))::ArrayW<bool, ::Array<bool>*> knockbackImmunityChannels;

  /// @brief Field lastCollidedCollider, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCollidedCollider,
                      put = __cordl_internal_set_lastCollidedCollider))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> lastCollidedCollider;

  /// @brief Field lastCollidedMapObject, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCollidedMapObject,
                      put = __cordl_internal_set_lastCollidedMapObject))::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> lastCollidedMapObject;

  /// @brief Field lastCollidedTime, offset 0x290, size 0x4
  __declspec(property(get = __cordl_internal_get_lastCollidedTime, put = __cordl_internal_set_lastCollidedTime)) float_t lastCollidedTime;

  /// @brief Field lastHeadPosition, offset 0xc0, size 0xc
  __declspec(property(get = __cordl_internal_get_lastHeadPosition, put = __cordl_internal_set_lastHeadPosition))::UnityEngine::Vector3 lastHeadPosition;

  /// @brief Field lastInAirBodyPosition, offset 0x27c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastInAirBodyPosition, put = __cordl_internal_set_lastInAirBodyPosition))::UnityEngine::Vector3 lastInAirBodyPosition;

  /// @brief Field lastLeftHandPosition, offset 0xa8, size 0xc
  __declspec(property(get = __cordl_internal_get_lastLeftHandPosition, put = __cordl_internal_set_lastLeftHandPosition))::UnityEngine::Vector3 lastLeftHandPosition;

  /// @brief Field lastPosition, offset 0x124, size 0xc
  __declspec(property(get = __cordl_internal_get_lastPosition, put = __cordl_internal_set_lastPosition))::UnityEngine::Vector3 lastPosition;

  /// @brief Field lastRightHandPosition, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_lastRightHandPosition, put = __cordl_internal_set_lastRightHandPosition))::UnityEngine::Vector3 lastRightHandPosition;

  /// @brief Field leftHandFollower, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandFollower, put = __cordl_internal_set_leftHandFollower))::UnityW<::UnityEngine::Transform> leftHandFollower;

  /// @brief Field leftHandInteractor, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandInteractor,
                      put = __cordl_internal_set_leftHandInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> leftHandInteractor;

  /// @brief Field leftHandOffset, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_leftHandOffset, put = __cordl_internal_set_leftHandOffset))::UnityEngine::Vector3 leftHandOffset;

  /// @brief Field leftHandTransform, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandTransform, put = __cordl_internal_set_leftHandTransform))::UnityW<::UnityEngine::Transform> leftHandTransform;

  /// @brief Field locomotionEnabledLayers, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_locomotionEnabledLayers, put = __cordl_internal_set_locomotionEnabledLayers))::UnityEngine::LayerMask locomotionEnabledLayers;

  /// @brief Field mainCamera, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mainCamera, put = __cordl_internal_set_mainCamera))::UnityW<::UnityEngine::Camera> mainCamera;

  /// @brief Field manualRollInputInertia, offset 0x278, size 0x4
  __declspec(property(get = __cordl_internal_get_manualRollInputInertia, put = __cordl_internal_set_manualRollInputInertia)) float_t manualRollInputInertia;

  /// @brief Field maxArmLength, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_maxArmLength, put = __cordl_internal_set_maxArmLength)) float_t maxArmLength;

  /// @brief Field maxJumpSpeed, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxJumpSpeed, put = __cordl_internal_set_maxJumpSpeed)) float_t maxJumpSpeed;

  /// @brief Field minimumRaycastDistance, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_minimumRaycastDistance, put = __cordl_internal_set_minimumRaycastDistance)) float_t minimumRaycastDistance;

  /// @brief Field mobilePhysicsMaterial, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_mobilePhysicsMaterial, put = __cordl_internal_set_mobilePhysicsMaterial))::UnityW<::UnityEngine::PhysicMaterial> mobilePhysicsMaterial;

  /// @brief Field nextAboveBuildHeightLimitUpdateTime, offset 0x2f0, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAboveBuildHeightLimitUpdateTime, put = __cordl_internal_set_nextAboveBuildHeightLimitUpdateTime)) float_t nextAboveBuildHeightLimitUpdateTime;

  /// @brief Field nextAllowedGriefProtectionPromptTime, offset 0x2fc, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAllowedGriefProtectionPromptTime, put = __cordl_internal_set_nextAllowedGriefProtectionPromptTime)) float_t nextAllowedGriefProtectionPromptTime;

  /// @brief Field nextAllowedHandFeedbackTimes, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_nextAllowedHandFeedbackTimes,
                      put = __cordl_internal_set_nextAllowedHandFeedbackTimes))::ArrayW<float_t, ::Array<float_t>*> nextAllowedHandFeedbackTimes;

  /// @brief Field nextMeetPlayerUpdateTime, offset 0x2ec, size 0x4
  __declspec(property(get = __cordl_internal_get_nextMeetPlayerUpdateTime, put = __cordl_internal_set_nextMeetPlayerUpdateTime)) float_t nextMeetPlayerUpdateTime;

  /// @brief Field nextValidHitDetectionTime, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_nextValidHitDetectionTime, put = __cordl_internal_set_nextValidHitDetectionTime))::ArrayW<float_t, ::Array<float_t>*> nextValidHitDetectionTime;

  /// @brief Field nextValidSnapTurnTime, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidSnapTurnTime, put = __cordl_internal_set_nextValidSnapTurnTime)) float_t nextValidSnapTurnTime;

  /// @brief Field nextWindZoneUpdateTime, offset 0x2d8, size 0x4
  __declspec(property(get = __cordl_internal_get_nextWindZoneUpdateTime, put = __cordl_internal_set_nextWindZoneUpdateTime)) float_t nextWindZoneUpdateTime;

  /// @brief Field onMasterPlayerKnockedBackCallbacks, offset 0x2c0, size 0x8
  __declspec(property(get = __cordl_internal_get_onMasterPlayerKnockedBackCallbacks,
                      put = __cordl_internal_set_onMasterPlayerKnockedBackCallbacks))::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* onMasterPlayerKnockedBackCallbacks;

  /// @brief Field onPickupItemCallbacks, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_onPickupItemCallbacks, put = __cordl_internal_set_onPickupItemCallbacks))::GlobalNamespace::__MasterPlayer__OnPickupItem* onPickupItemCallbacks;

  /// @brief Field rb, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_rb, put = __cordl_internal_set_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field rightHandFollower, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandFollower, put = __cordl_internal_set_rightHandFollower))::UnityW<::UnityEngine::Transform> rightHandFollower;

  /// @brief Field rightHandInteractor, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandInteractor,
                      put = __cordl_internal_set_rightHandInteractor))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> rightHandInteractor;

  /// @brief Field rightHandOffset, offset 0x130, size 0xc
  __declspec(property(get = __cordl_internal_get_rightHandOffset, put = __cordl_internal_set_rightHandOffset))::UnityEngine::Vector3 rightHandOffset;

  /// @brief Field rightHandTransform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandTransform, put = __cordl_internal_set_rightHandTransform))::UnityW<::UnityEngine::Transform> rightHandTransform;

  /// @brief Field rollContainer, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_rollContainer, put = __cordl_internal_set_rollContainer))::UnityW<::UnityEngine::Transform> rollContainer;

  /// @brief Field rollResetSpeedMultiplier, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_rollResetSpeedMultiplier, put = __cordl_internal_set_rollResetSpeedMultiplier)) float_t rollResetSpeedMultiplier;

  /// @brief Field rollResetTime, offset 0x26c, size 0x4
  __declspec(property(get = __cordl_internal_get_rollResetTime, put = __cordl_internal_set_rollResetTime)) float_t rollResetTime;

  /// @brief Field rollSpeed, offset 0x228, size 0x4
  __declspec(property(get = __cordl_internal_get_rollSpeed, put = __cordl_internal_set_rollSpeed)) float_t rollSpeed;

  /// @brief Field rollSpeedByRatioToVertical, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_rollSpeedByRatioToVertical, put = __cordl_internal_set_rollSpeedByRatioToVertical))::UnityEngine::AnimationCurve* rollSpeedByRatioToVertical;

  /// @brief Field seekerWeaponSpawner, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_seekerWeaponSpawner, put = __cordl_internal_set_seekerWeaponSpawner))::UnityW<::GlobalNamespace::EndlessItemSpawner> seekerWeaponSpawner;

  /// @brief Field shouldResetRoll, offset 0x268, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldResetRoll, put = __cordl_internal_set_shouldResetRoll)) bool shouldResetRoll;

  __declspec(property(get = get_spectatorCameraController, put = set_spectatorCameraController))::UnityW<::GlobalNamespace::SpectatorCameraController> spectatorCameraController;

  /// @brief Field statusEffectOverlayAnchor, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_statusEffectOverlayAnchor, put = __cordl_internal_set_statusEffectOverlayAnchor))::UnityW<::UnityEngine::Transform> statusEffectOverlayAnchor;

  /// @brief Field targetRollResetAngle, offset 0x274, size 0x4
  __declspec(property(get = __cordl_internal_get_targetRollResetAngle, put = __cordl_internal_set_targetRollResetAngle)) float_t targetRollResetAngle;

  /// @brief Field techWebOverrideZoneExpireTime, offset 0x2b8, size 0x4
  __declspec(property(get = __cordl_internal_get_techWebOverrideZoneExpireTime, put = __cordl_internal_set_techWebOverrideZoneExpireTime)) float_t techWebOverrideZoneExpireTime;

  /// @brief Field timeUntilRollReset, offset 0x240, size 0x4
  __declspec(property(get = __cordl_internal_get_timeUntilRollReset, put = __cordl_internal_set_timeUntilRollReset)) float_t timeUntilRollReset;

  /// @brief Field unStickDistance, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_unStickDistance, put = __cordl_internal_set_unStickDistance)) float_t unStickDistance;

  /// @brief Field velocityHistory, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_velocityHistory, put = __cordl_internal_set_velocityHistory))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> velocityHistory;

  /// @brief Field velocityHistorySize, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_velocityHistorySize, put = __cordl_internal_set_velocityHistorySize)) int32_t velocityHistorySize;

  /// @brief Field velocityIndex, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_velocityIndex, put = __cordl_internal_set_velocityIndex)) int32_t velocityIndex;

  /// @brief Field velocityLimit, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_velocityLimit, put = __cordl_internal_set_velocityLimit)) float_t velocityLimit;

  /// @brief Field verticalRollSpeedMultiplier, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalRollSpeedMultiplier, put = __cordl_internal_set_verticalRollSpeedMultiplier)) float_t verticalRollSpeedMultiplier;

  /// @brief Field wasAboveBuildHeightLimit, offset 0x2f4, size 0x1
  __declspec(property(get = __cordl_internal_get_wasAboveBuildHeightLimit, put = __cordl_internal_set_wasAboveBuildHeightLimit)) bool wasAboveBuildHeightLimit;

  /// @brief Field wasAppliedKnockbackFromExplosionSinceLastCollided, offset 0x294, size 0x1
  __declspec(property(get = __cordl_internal_get_wasAppliedKnockbackFromExplosionSinceLastCollided,
                      put = __cordl_internal_set_wasAppliedKnockbackFromExplosionSinceLastCollided)) bool wasAppliedKnockbackFromExplosionSinceLastCollided;

  /// @brief Field wasInDeadzoneLastInputUpdate, offset 0x218, size 0x1
  __declspec(property(get = __cordl_internal_get_wasInDeadzoneLastInputUpdate, put = __cordl_internal_set_wasInDeadzoneLastInputUpdate)) bool wasInDeadzoneLastInputUpdate;

  /// @brief Field wasLeftHandTouching, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get_wasLeftHandTouching, put = __cordl_internal_set_wasLeftHandTouching)) bool wasLeftHandTouching;

  /// @brief Field wasRightHandTouching, offset 0x151, size 0x1
  __declspec(property(get = __cordl_internal_get_wasRightHandTouching, put = __cordl_internal_set_wasRightHandTouching)) bool wasRightHandTouching;

  /// @brief Field windSoundVolume, offset 0x2e8, size 0x4
  __declspec(property(get = __cordl_internal_get_windSoundVolume, put = __cordl_internal_set_windSoundVolume)) float_t windSoundVolume;

  /// @brief Field windZones, offset 0x2c8, size 0x8
  __declspec(property(get = __cordl_internal_get_windZones,
                      put = __cordl_internal_set_windZones))::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> windZones;

  /// @brief Method ApplyAccelerationForce, addr 0x1068d1c, size 0x34, virtual false, abstract: false, final false
  inline void ApplyAccelerationForce(::UnityEngine::Vector3 force);

  /// @brief Method ApplyDrag, addr 0x10690c0, size 0xac, virtual false, abstract: false, final false
  inline void ApplyDrag(float_t verticalDrag, float_t lateralDrag);

  /// @brief Method ApplySetVelocity, addr 0x106916c, size 0x50, virtual false, abstract: false, final false
  inline void ApplySetVelocity(::UnityEngine::Vector3 velocity);

  /// @brief Method ApplySetVelocityNoHaptic, addr 0x10691bc, size 0x30, virtual false, abstract: false, final false
  inline void ApplySetVelocityNoHaptic(::UnityEngine::Vector3 velocity);

  /// @brief Method BeginRollReset, addr 0x1063f3c, size 0x168, virtual false, abstract: false, final false
  inline void BeginRollReset();

  /// @brief Method CollisionsSphereCast, addr 0x10661ec, size 0x4a4, virtual false, abstract: false, final false
  inline bool CollisionsSphereCast(::UnityEngine::Vector3 startPosition, float_t sphereRadius, ::UnityEngine::Vector3 movementVector, float_t precision, ::UnityEngine::LayerMask layerMask,
                                   ByRef<::UnityEngine::Vector3> finalPosition, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CurrentLeftHandPosition, addr 0x1063360, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CurrentLeftHandPosition();

  /// @brief Method CurrentRightHandPosition, addr 0x1063608, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CurrentRightHandPosition();

  /// @brief Method DestroySelf, addr 0x10632a0, size 0x40, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DisableGriefProtection, addr 0x1069acc, size 0x9c, virtual false, abstract: false, final false
  inline void DisableGriefProtection();

  /// @brief Method DoAboveBuildHeightLimitUpdate, addr 0x106560c, size 0x128, virtual false, abstract: false, final false
  inline void DoAboveBuildHeightLimitUpdate();

  /// @brief Method DoLocomotionUpdate, addr 0x1064114, size 0xf50, virtual false, abstract: false, final false
  inline void DoLocomotionUpdate(float_t deltaTime);

  /// @brief Method DoManualRoll, addr 0x1063c74, size 0x1b8, virtual false, abstract: false, final false
  inline void DoManualRoll(float_t input);

  /// @brief Method DoMeetPlayerUpdate, addr 0x1065308, size 0x304, virtual false, abstract: false, final false
  inline void DoMeetPlayerUpdate();

  /// @brief Method DoRoll, addr 0x1067fb8, size 0x98, virtual false, abstract: false, final false
  inline void DoRoll(float_t degreesAmount);

  /// @brief Method DoRollResetUpdate, addr 0x1063e2c, size 0x110, virtual false, abstract: false, final false
  inline void DoRollResetUpdate();

  /// @brief Method EnableGriefProtection, addr 0x1069a24, size 0xa8, virtual false, abstract: false, final false
  inline void EnableGriefProtection();

  /// @brief Method ExpressPose, addr 0x10632e0, size 0x40, virtual true, abstract: false, final false
  inline void ExpressPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method GetBellyPosition, addr 0x1069bc4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBellyPosition();

  /// @brief Method GetCamera, addr 0x1069b94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> GetCamera();

  /// @brief Method GetCameraPosition, addr 0x1069b9c, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCameraPosition();

  /// @brief Method GetCurrentRollSpeed, addr 0x1067f60, size 0x58, virtual false, abstract: false, final false
  inline float_t GetCurrentRollSpeed();

  /// @brief Method GetHandVelocity, addr 0x1069be0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHandVelocity(bool right);

  /// @brief Method GetInteractor, addr 0x1069b7c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* GetInteractor(bool right);

  /// @brief Method GetVelocity, addr 0x1066690, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetVelocity();

  /// @brief Method GetWindZones, addr 0x10697b4, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> GetWindZones(ByRef<int32_t> count);

  /// @brief Method Initialize, addr 0x10623c0, size 0x6b4, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::PlayerData playerData);

  /// @brief Method InitializeKnockbackImmunity, addr 0x1062e10, size 0x308, virtual false, abstract: false, final false
  static inline void InitializeKnockbackImmunity();

  /// @brief Method InitializeLocomotionValues, addr 0x1062d30, size 0xe0, virtual false, abstract: false, final false
  inline void InitializeLocomotionValues();

  /// @brief Method IsAirborne, addr 0x1068394, size 0x2c, virtual false, abstract: false, final false
  inline bool IsAirborne();

  /// @brief Method IsHandTouching, addr 0x1066ba4, size 0x14, virtual false, abstract: false, final false
  inline bool IsHandTouching(bool right);

  /// @brief Method IterativeCollisionSphereCast, addr 0x1065734, size 0x624, virtual false, abstract: false, final false
  inline bool IterativeCollisionSphereCast(::UnityEngine::Vector3 startPosition, float_t sphereRadius, ::UnityEngine::Vector3 movementVector, float_t precision, ::UnityEngine::LayerMask layerMask,
                                           ::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart, ByRef<::UnityEngine::Vector3> endPosition, bool singleHand);

  /// @brief Method MaximizeVelocity, addr 0x1068f80, size 0x140, virtual false, abstract: false, final false
  inline void MaximizeVelocity(float_t speed);

  /// @brief Method MaximizeVelocity, addr 0x1068d50, size 0x230, virtual false, abstract: false, final false
  inline void MaximizeVelocity(::UnityEngine::Vector3 target);

  static inline ::GlobalNamespace::MasterPlayer* New_ctor();

  /// @brief Method NotifyItemPickedUp, addr 0x1069884, size 0xc0, virtual false, abstract: false, final false
  inline void NotifyItemPickedUp(::GlobalNamespace::Item* item);

  /// @brief Method OnAllowGreifProtectionSettingUpdated, addr 0x1069b68, size 0x14, virtual false, abstract: false, final false
  inline void OnAllowGreifProtectionSettingUpdated(bool newValue);

  /// @brief Method OnCollisionEnter, addr 0x1068070, size 0x200, virtual false, abstract: false, final false
  inline void OnCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnCollisionExit, addr 0x1068270, size 0x10, virtual false, abstract: false, final false
  inline void OnCollisionExit(::UnityEngine::Collision* collision);

  /// @brief Method OnCosmeticsModeUpdated, addr 0x10685b4, size 0x58, virtual false, abstract: false, final false
  static inline void OnCosmeticsModeUpdated(bool newCosmeticsMode);

  /// @brief Method OnDressingRoomModeUpdated, addr 0x1068664, size 0x58, virtual false, abstract: false, final false
  static inline void OnDressingRoomModeUpdated(bool newDressingRoomMode);

  /// @brief Method OnEnteredFirstWindZone, addr 0x1069758, size 0x30, virtual false, abstract: false, final false
  inline void OnEnteredFirstWindZone();

  /// @brief Method OnExitedLastWindZone, addr 0x1069788, size 0x2c, virtual false, abstract: false, final false
  inline void OnExitedLastWindZone();

  /// @brief Method OnFixedUpdate, addr 0x10691ec, size 0x520, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnGriefProtectionUpdated, addr 0x1068934, size 0x58, virtual false, abstract: false, final false
  static inline void OnGriefProtectionUpdated(bool newGriefProtection);

  /// @brief Method OnHandOrBodyCollided, addr 0x10666ac, size 0x4f8, virtual false, abstract: false, final false
  inline void OnHandOrBodyCollided(::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart, ::UnityEngine::Collider* hitCollider, ::UnityEngine::Vector3 collisionPoint,
                                   ::UnityEngine::Vector3 collisionNormal, ::UnityEngine::Vector3 bodyVelocity, ::GlobalNamespace::MapObject* hitMapObject);

  /// @brief Method OnInteractionLockUpdated, addr 0x1062a74, size 0x38, virtual false, abstract: false, final false
  inline void OnInteractionLockUpdated(bool newLock);

  /// @brief Method OnIsHandCollidingUpdated, addr 0x1065e90, size 0x2b4, virtual false, abstract: false, final false
  inline void OnIsHandCollidingUpdated(::GlobalNamespace::__MasterPlayer__CollisionBodyPart collisionBodyPart, bool isColliding);

  /// @brief Method OnIsLeftHandedUpdated, addr 0x1063118, size 0xc4, virtual false, abstract: false, final false
  inline void OnIsLeftHandedUpdated(bool newIsLeftHanded);

  /// @brief Method OnIsOutsideMapOnHallwaySideUpdated, addr 0x10688dc, size 0x58, virtual false, abstract: false, final false
  static inline void OnIsOutsideMapOnHallwaySideUpdated(bool newIsOutsideMap);

  /// @brief Method OnIsOutsideMapOnLobbySideUpdated, addr 0x1068884, size 0x58, virtual false, abstract: false, final false
  static inline void OnIsOutsideMapOnLobbySideUpdated(bool newIsOutsideMap);

  /// @brief Method OnLateUpdate, addr 0x1066144, size 0xa8, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method OnReceiveApplyKnockback, addr 0x106898c, size 0x284, virtual true, abstract: false, final false
  inline void OnReceiveApplyKnockback(::UnityEngine::Vector3 force, ::GlobalNamespace::__Player__KnockbackSource source);

  /// @brief Method OnReceivedPose, addr 0x1063320, size 0x40, virtual true, abstract: false, final false
  inline void OnReceivedPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method OnStatusEffectRemoved, addr 0x1067e38, size 0xec, virtual false, abstract: false, final false
  inline void OnStatusEffectRemoved(::GlobalNamespace::__Player__StatusEffect statusEffect);

  /// @brief Method OnTechWebModeUpdated, addr 0x106860c, size 0x58, virtual false, abstract: false, final false
  static inline void OnTechWebModeUpdated(bool newTechWebMode);

  /// @brief Method OnTriggerEnter, addr 0x10682c4, size 0xd0, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* collider);

  /// @brief Method OnTriggerStay, addr 0x10683c0, size 0x140, virtual false, abstract: false, final false
  inline void OnTriggerStay(::UnityEngine::Collider* other);

  /// @brief Method OnUpdate, addr 0x1063830, size 0x2f8, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method PositionWithOffset, addr 0x1063588, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 PositionWithOffset(::UnityEngine::Transform* transformToModify, ::UnityEngine::Vector3 offsetVector);

  /// @brief Method ProcessGriefProtection, addr 0x10640a4, size 0x70, virtual false, abstract: false, final false
  inline void ProcessGriefProtection();

  /// @brief Method ProcessTurnInput, addr 0x1063b28, size 0x14c, virtual false, abstract: false, final false
  inline void ProcessTurnInput(float_t input);

  /// @brief Method PromptGriefProtection, addr 0x1069944, size 0xe0, virtual false, abstract: false, final false
  inline void PromptGriefProtection();

  /// @brief Method RefreshDisableMovement, addr 0x1067540, size 0x28, virtual false, abstract: false, final false
  inline void RefreshDisableMovement();

  /// @brief Method ResetCollisionClock, addr 0x1068280, size 0x44, virtual false, abstract: false, final false
  inline void ResetCollisionClock();

  /// @brief Method ResetLocomotion, addr 0x1066f28, size 0x218, virtual false, abstract: false, final false
  inline void ResetLocomotion();

  /// @brief Method SetIsHidden, addr 0x1067f24, size 0x3c, virtual true, abstract: false, final false
  inline void SetIsHidden(bool isHidden);

  /// @brief Method SetIsSpectatorMode, addr 0x1067568, size 0x1d0, virtual false, abstract: false, final false
  inline void SetIsSpectatorMode(bool newIsSpectatorMode);

  /// @brief Method SetKnockbackImmunity, addr 0x10686bc, size 0x1c8, virtual false, abstract: false, final false
  static inline void SetKnockbackImmunity(bool isImmune, int32_t channel);

  /// @brief Method StoreVelocities, addr 0x1065d58, size 0x138, virtual false, abstract: false, final false
  inline void StoreVelocities(float_t deltaTime);

  /// @brief Method SubmitKnockbackForGriefProtection, addr 0x1068c10, size 0x10c, virtual false, abstract: false, final false
  inline void SubmitKnockbackForGriefProtection();

  /// @brief Method TeleportByOffset, addr 0x1067140, size 0x18c, virtual false, abstract: false, final false
  inline void TeleportByOffset(::UnityEngine::Vector3 offset);

  /// @brief Method TeleportTo, addr 0x1066e60, size 0xc8, virtual false, abstract: false, final false
  inline void TeleportTo(::UnityEngine::Vector3 position);

  /// @brief Method Turn, addr 0x1066bb8, size 0x2a8, virtual false, abstract: false, final false
  inline void Turn(float_t degrees);

  /// @brief Method UpdateStatusEffect, addr 0x1067738, size 0x5e0, virtual true, abstract: false, final false
  inline void UpdateStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t expireTime);

  /// @brief Method UpdateType, addr 0x10672cc, size 0x144, virtual true, abstract: false, final false
  inline void UpdateType(::GlobalNamespace::__Player__Type type);

  /// @brief Method <PromptGriefProtection>b__227_0, addr 0x1069e68, size 0x48, virtual false, abstract: false, final false
  inline void _PromptGriefProtection_b__227_0(::GlobalNamespace::__ImaginationPrompt__ActionType action);

  constexpr ::UnityW<::GlobalNamespace::SpectatorCameraController> const& __cordl_internal_get__spectatorCameraController_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::SpectatorCameraController>& __cordl_internal_get__spectatorCameraController_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_anchoredCanvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_anchoredCanvas();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bellyAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bellyAnchor();

  constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_bodyCollider() const;

  constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_bodyCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyTransform();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionEnabledLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionEnabledLayers();

  constexpr float_t const& __cordl_internal_get_cosmeticsOverrideZoneExpireTime() const;

  constexpr float_t& __cordl_internal_get_cosmeticsOverrideZoneExpireTime();

  constexpr float_t const& __cordl_internal_get_curKnockbackEnergy() const;

  constexpr float_t& __cordl_internal_get_curKnockbackEnergy();

  constexpr float_t const& __cordl_internal_get_curRollAngle() const;

  constexpr float_t& __cordl_internal_get_curRollAngle();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_curRollAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_curRollAxis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_curRollStartRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_curRollStartRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_curStatusEffectOverlay() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_curStatusEffectOverlay();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_curWindSound() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_curWindSound();

  constexpr int32_t const& __cordl_internal_get_curWindZoneCount() const;

  constexpr int32_t& __cordl_internal_get_curWindZoneCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity();

  constexpr float_t const& __cordl_internal_get_defaultPrecision() const;

  constexpr float_t& __cordl_internal_get_defaultPrecision();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultSeekerWeaponSpawnerLocalEulerAngles() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultSeekerWeaponSpawnerLocalEulerAngles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultSeekerWeaponSpawnerLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultSeekerWeaponSpawnerLocalPosition();

  constexpr float_t const& __cordl_internal_get_defaultSlideFactor() const;

  constexpr float_t& __cordl_internal_get_defaultSlideFactor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_denormalizedVelocityAverage() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_denormalizedVelocityAverage();

  constexpr bool const& __cordl_internal_get_disableMovement() const;

  constexpr bool& __cordl_internal_get_disableMovement();

  constexpr float_t const& __cordl_internal_get_distanceFallenInAir() const;

  constexpr float_t& __cordl_internal_get_distanceFallenInAir();

  constexpr float_t const& __cordl_internal_get_distanceTraveledInAir() const;

  constexpr float_t& __cordl_internal_get_distanceTraveledInAir();

  constexpr float_t const& __cordl_internal_get_dressingRoomOverrideZoneExpireTime() const;

  constexpr float_t& __cordl_internal_get_dressingRoomOverrideZoneExpireTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_enterSpectatorModePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_enterSpectatorModePosition();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_freezeActiveChatterAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_freezeActiveChatterAudioSource();

  constexpr ::StringW const& __cordl_internal_get_freezeActiveChatterSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_freezeActiveChatterSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_freezeActiveCrackleAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_freezeActiveCrackleAudioSource();

  constexpr ::StringW const& __cordl_internal_get_freezeActiveCrackleSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_freezeActiveCrackleSoundKey();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_freezeStartAudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_freezeStartAudioSource();

  constexpr ::StringW const& __cordl_internal_get_freezeStartSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_freezeStartSoundKey();

  constexpr ::StringW const& __cordl_internal_get_freezeThawPuppetSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_freezeThawPuppetSoundKey();

  constexpr ::StringW const& __cordl_internal_get_freezeThawSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_freezeThawSoundKey();

  constexpr ::UnityW<::GlobalNamespace::FlatScreenPlayerController> const& __cordl_internal_get_gorillaFlatScreenController() const;

  constexpr ::UnityW<::GlobalNamespace::FlatScreenPlayerController>& __cordl_internal_get_gorillaFlatScreenController();

  constexpr float_t const& __cordl_internal_get_griefProtectionTimer() const;

  constexpr float_t& __cordl_internal_get_griefProtectionTimer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_handCollideStartTimes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_handCollideStartTimes();

  constexpr bool const& __cordl_internal_get_hasCurRollData() const;

  constexpr bool& __cordl_internal_get_hasCurRollData();

  constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_headCollider() const;

  constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_headCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform();

  constexpr bool const& __cordl_internal_get_isDoingRollReset() const;

  constexpr bool& __cordl_internal_get_isDoingRollReset();

  constexpr bool const& __cordl_internal_get_isGriefProtectionActive() const;

  constexpr bool& __cordl_internal_get_isGriefProtectionActive();

  constexpr bool const& __cordl_internal_get_isInWindZone() const;

  constexpr bool& __cordl_internal_get_isInWindZone();

  constexpr bool const& __cordl_internal_get_isPromptingGriefProtection() const;

  constexpr bool& __cordl_internal_get_isPromptingGriefProtection();

  constexpr bool const& __cordl_internal_get_isSpectatorMode() const;

  constexpr bool& __cordl_internal_get_isSpectatorMode();

  constexpr float_t const& __cordl_internal_get_jumpMultiplier() const;

  constexpr float_t& __cordl_internal_get_jumpMultiplier();

  constexpr float_t const& __cordl_internal_get_killedTime() const;

  constexpr float_t& __cordl_internal_get_killedTime();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_lastCollidedCollider() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get_lastCollidedCollider();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> const& __cordl_internal_get_lastCollidedMapObject() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*>& __cordl_internal_get_lastCollidedMapObject();

  constexpr float_t const& __cordl_internal_get_lastCollidedTime() const;

  constexpr float_t& __cordl_internal_get_lastCollidedTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastHeadPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastHeadPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastInAirBodyPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastInAirBodyPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftHandPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftHandPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightHandPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightHandPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandFollower() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandFollower();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> const& __cordl_internal_get_leftHandInteractor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor>& __cordl_internal_get_leftHandInteractor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_locomotionEnabledLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_locomotionEnabledLayers();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera();

  constexpr float_t const& __cordl_internal_get_manualRollInputInertia() const;

  constexpr float_t& __cordl_internal_get_manualRollInputInertia();

  constexpr float_t const& __cordl_internal_get_maxArmLength() const;

  constexpr float_t& __cordl_internal_get_maxArmLength();

  constexpr float_t const& __cordl_internal_get_maxJumpSpeed() const;

  constexpr float_t& __cordl_internal_get_maxJumpSpeed();

  constexpr float_t const& __cordl_internal_get_minimumRaycastDistance() const;

  constexpr float_t& __cordl_internal_get_minimumRaycastDistance();

  constexpr ::UnityW<::UnityEngine::PhysicMaterial> const& __cordl_internal_get_mobilePhysicsMaterial() const;

  constexpr ::UnityW<::UnityEngine::PhysicMaterial>& __cordl_internal_get_mobilePhysicsMaterial();

  constexpr float_t const& __cordl_internal_get_nextAboveBuildHeightLimitUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextAboveBuildHeightLimitUpdateTime();

  constexpr float_t const& __cordl_internal_get_nextAllowedGriefProtectionPromptTime() const;

  constexpr float_t& __cordl_internal_get_nextAllowedGriefProtectionPromptTime();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_nextAllowedHandFeedbackTimes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_nextAllowedHandFeedbackTimes();

  constexpr float_t const& __cordl_internal_get_nextMeetPlayerUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextMeetPlayerUpdateTime();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_nextValidHitDetectionTime() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_nextValidHitDetectionTime();

  constexpr float_t const& __cordl_internal_get_nextValidSnapTurnTime() const;

  constexpr float_t& __cordl_internal_get_nextValidSnapTurnTime();

  constexpr float_t const& __cordl_internal_get_nextWindZoneUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextWindZoneUpdateTime();

  constexpr ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*& __cordl_internal_get_onMasterPlayerKnockedBackCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*> const& __cordl_internal_get_onMasterPlayerKnockedBackCallbacks() const;

  constexpr ::GlobalNamespace::__MasterPlayer__OnPickupItem*& __cordl_internal_get_onPickupItemCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MasterPlayer__OnPickupItem*> const& __cordl_internal_get_onPickupItemCallbacks() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandFollower() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandFollower();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> const& __cordl_internal_get_rightHandInteractor() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor>& __cordl_internal_get_rightHandInteractor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rollContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rollContainer();

  constexpr float_t const& __cordl_internal_get_rollResetSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get_rollResetSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get_rollResetTime() const;

  constexpr float_t& __cordl_internal_get_rollResetTime();

  constexpr float_t const& __cordl_internal_get_rollSpeed() const;

  constexpr float_t& __cordl_internal_get_rollSpeed();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rollSpeedByRatioToVertical();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rollSpeedByRatioToVertical() const;

  constexpr ::UnityW<::GlobalNamespace::EndlessItemSpawner> const& __cordl_internal_get_seekerWeaponSpawner() const;

  constexpr ::UnityW<::GlobalNamespace::EndlessItemSpawner>& __cordl_internal_get_seekerWeaponSpawner();

  constexpr bool const& __cordl_internal_get_shouldResetRoll() const;

  constexpr bool& __cordl_internal_get_shouldResetRoll();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_statusEffectOverlayAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_statusEffectOverlayAnchor();

  constexpr float_t const& __cordl_internal_get_targetRollResetAngle() const;

  constexpr float_t& __cordl_internal_get_targetRollResetAngle();

  constexpr float_t const& __cordl_internal_get_techWebOverrideZoneExpireTime() const;

  constexpr float_t& __cordl_internal_get_techWebOverrideZoneExpireTime();

  constexpr float_t const& __cordl_internal_get_timeUntilRollReset() const;

  constexpr float_t& __cordl_internal_get_timeUntilRollReset();

  constexpr float_t const& __cordl_internal_get_unStickDistance() const;

  constexpr float_t& __cordl_internal_get_unStickDistance();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_velocityHistory() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_velocityHistory();

  constexpr int32_t const& __cordl_internal_get_velocityHistorySize() const;

  constexpr int32_t& __cordl_internal_get_velocityHistorySize();

  constexpr int32_t const& __cordl_internal_get_velocityIndex() const;

  constexpr int32_t& __cordl_internal_get_velocityIndex();

  constexpr float_t const& __cordl_internal_get_velocityLimit() const;

  constexpr float_t& __cordl_internal_get_velocityLimit();

  constexpr float_t const& __cordl_internal_get_verticalRollSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get_verticalRollSpeedMultiplier();

  constexpr bool const& __cordl_internal_get_wasAboveBuildHeightLimit() const;

  constexpr bool& __cordl_internal_get_wasAboveBuildHeightLimit();

  constexpr bool const& __cordl_internal_get_wasAppliedKnockbackFromExplosionSinceLastCollided() const;

  constexpr bool& __cordl_internal_get_wasAppliedKnockbackFromExplosionSinceLastCollided();

  constexpr bool const& __cordl_internal_get_wasInDeadzoneLastInputUpdate() const;

  constexpr bool& __cordl_internal_get_wasInDeadzoneLastInputUpdate();

  constexpr bool const& __cordl_internal_get_wasLeftHandTouching() const;

  constexpr bool& __cordl_internal_get_wasLeftHandTouching();

  constexpr bool const& __cordl_internal_get_wasRightHandTouching() const;

  constexpr bool& __cordl_internal_get_wasRightHandTouching();

  constexpr float_t const& __cordl_internal_get_windSoundVolume() const;

  constexpr float_t& __cordl_internal_get_windSoundVolume();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> const& __cordl_internal_get_windZones() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*>& __cordl_internal_get_windZones();

  constexpr void __cordl_internal_set__spectatorCameraController_k__BackingField(::UnityW<::GlobalNamespace::SpectatorCameraController> value);

  constexpr void __cordl_internal_set_anchoredCanvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_bellyAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider> value);

  constexpr void __cordl_internal_set_bodyTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_collisionEnabledLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_cosmeticsOverrideZoneExpireTime(float_t value);

  constexpr void __cordl_internal_set_curKnockbackEnergy(float_t value);

  constexpr void __cordl_internal_set_curRollAngle(float_t value);

  constexpr void __cordl_internal_set_curRollAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_curRollStartRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_curStatusEffectOverlay(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_curWindSound(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_curWindZoneCount(int32_t value);

  constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultPrecision(float_t value);

  constexpr void __cordl_internal_set_defaultSeekerWeaponSpawnerLocalEulerAngles(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultSeekerWeaponSpawnerLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultSlideFactor(float_t value);

  constexpr void __cordl_internal_set_denormalizedVelocityAverage(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_disableMovement(bool value);

  constexpr void __cordl_internal_set_distanceFallenInAir(float_t value);

  constexpr void __cordl_internal_set_distanceTraveledInAir(float_t value);

  constexpr void __cordl_internal_set_dressingRoomOverrideZoneExpireTime(float_t value);

  constexpr void __cordl_internal_set_enterSpectatorModePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_freezeActiveChatterAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_freezeActiveChatterSoundKey(::StringW value);

  constexpr void __cordl_internal_set_freezeActiveCrackleAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_freezeActiveCrackleSoundKey(::StringW value);

  constexpr void __cordl_internal_set_freezeStartAudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_freezeStartSoundKey(::StringW value);

  constexpr void __cordl_internal_set_freezeThawPuppetSoundKey(::StringW value);

  constexpr void __cordl_internal_set_freezeThawSoundKey(::StringW value);

  constexpr void __cordl_internal_set_gorillaFlatScreenController(::UnityW<::GlobalNamespace::FlatScreenPlayerController> value);

  constexpr void __cordl_internal_set_griefProtectionTimer(float_t value);

  constexpr void __cordl_internal_set_handCollideStartTimes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_hasCurRollData(bool value);

  constexpr void __cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider> value);

  constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isDoingRollReset(bool value);

  constexpr void __cordl_internal_set_isGriefProtectionActive(bool value);

  constexpr void __cordl_internal_set_isInWindZone(bool value);

  constexpr void __cordl_internal_set_isPromptingGriefProtection(bool value);

  constexpr void __cordl_internal_set_isSpectatorMode(bool value);

  constexpr void __cordl_internal_set_jumpMultiplier(float_t value);

  constexpr void __cordl_internal_set_killedTime(float_t value);

  constexpr void __cordl_internal_set_lastCollidedCollider(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set_lastCollidedMapObject(::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> value);

  constexpr void __cordl_internal_set_lastCollidedTime(float_t value);

  constexpr void __cordl_internal_set_lastHeadPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastInAirBodyPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leftHandFollower(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftHandInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> value);

  constexpr void __cordl_internal_set_leftHandOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_locomotionEnabledLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_manualRollInputInertia(float_t value);

  constexpr void __cordl_internal_set_maxArmLength(float_t value);

  constexpr void __cordl_internal_set_maxJumpSpeed(float_t value);

  constexpr void __cordl_internal_set_minimumRaycastDistance(float_t value);

  constexpr void __cordl_internal_set_mobilePhysicsMaterial(::UnityW<::UnityEngine::PhysicMaterial> value);

  constexpr void __cordl_internal_set_nextAboveBuildHeightLimitUpdateTime(float_t value);

  constexpr void __cordl_internal_set_nextAllowedGriefProtectionPromptTime(float_t value);

  constexpr void __cordl_internal_set_nextAllowedHandFeedbackTimes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_nextMeetPlayerUpdateTime(float_t value);

  constexpr void __cordl_internal_set_nextValidHitDetectionTime(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_nextValidSnapTurnTime(float_t value);

  constexpr void __cordl_internal_set_nextWindZoneUpdateTime(float_t value);

  constexpr void __cordl_internal_set_onMasterPlayerKnockedBackCallbacks(::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* value);

  constexpr void __cordl_internal_set_onPickupItemCallbacks(::GlobalNamespace::__MasterPlayer__OnPickupItem* value);

  constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_rightHandFollower(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightHandInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> value);

  constexpr void __cordl_internal_set_rightHandOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rollContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rollResetSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_rollResetTime(float_t value);

  constexpr void __cordl_internal_set_rollSpeed(float_t value);

  constexpr void __cordl_internal_set_rollSpeedByRatioToVertical(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_seekerWeaponSpawner(::UnityW<::GlobalNamespace::EndlessItemSpawner> value);

  constexpr void __cordl_internal_set_shouldResetRoll(bool value);

  constexpr void __cordl_internal_set_statusEffectOverlayAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_targetRollResetAngle(float_t value);

  constexpr void __cordl_internal_set_techWebOverrideZoneExpireTime(float_t value);

  constexpr void __cordl_internal_set_timeUntilRollReset(float_t value);

  constexpr void __cordl_internal_set_unStickDistance(float_t value);

  constexpr void __cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_velocityHistorySize(int32_t value);

  constexpr void __cordl_internal_set_velocityIndex(int32_t value);

  constexpr void __cordl_internal_set_velocityLimit(float_t value);

  constexpr void __cordl_internal_set_verticalRollSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_wasAboveBuildHeightLimit(bool value);

  constexpr void __cordl_internal_set_wasAppliedKnockbackFromExplosionSinceLastCollided(bool value);

  constexpr void __cordl_internal_set_wasInDeadzoneLastInputUpdate(bool value);

  constexpr void __cordl_internal_set_wasLeftHandTouching(bool value);

  constexpr void __cordl_internal_set_wasRightHandTouching(bool value);

  constexpr void __cordl_internal_set_windSoundVolume(float_t value);

  constexpr void __cordl_internal_set_windZones(::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> value);

  /// @brief Method .ctor, addr 0x1069c18, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__hasKnockbackImmunity_k__BackingField();

  static inline ::UnityEngine::Quaternion getStaticF_bodyRotationOffset();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_footprintRadii();

  static inline bool getStaticF_hasInitializedKnockbackImmunity();

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_knockbackImmunityChannels();

  /// @brief Method get_hasKnockbackImmunity, addr 0x1068500, size 0x58, virtual false, abstract: false, final false
  static inline bool get_hasKnockbackImmunity();

  /// @brief Method get_spectatorCameraController, addr 0x10623b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SpectatorCameraController> get_spectatorCameraController();

  static inline void setStaticF__hasKnockbackImmunity_k__BackingField(bool value);

  static inline void setStaticF_bodyRotationOffset(::UnityEngine::Quaternion value);

  static inline void setStaticF_footprintRadii(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline void setStaticF_hasInitializedKnockbackImmunity(bool value);

  static inline void setStaticF_knockbackImmunityChannels(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method set_hasKnockbackImmunity, addr 0x1068558, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hasKnockbackImmunity(bool value);

  /// @brief Method set_spectatorCameraController, addr 0x10623b8, size 0x8, virtual false, abstract: false, final false
  inline void set_spectatorCameraController(::GlobalNamespace::SpectatorCameraController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MasterPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MasterPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MasterPlayer(MasterPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MasterPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MasterPlayer(MasterPlayer const&) = delete;

  /// @brief Field mainCamera, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___mainCamera;

  /// @brief Field bellyAnchor, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bellyAnchor;

  /// @brief Field headCollider, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> ___headCollider;

  /// @brief Field headTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___headTransform;

  /// @brief Field bodyCollider, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CapsuleCollider> ___bodyCollider;

  /// @brief Field bodyTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bodyTransform;

  /// @brief Field leftHandFollower, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHandFollower;

  /// @brief Field rightHandFollower, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHandFollower;

  /// @brief Field rightHandTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHandTransform;

  /// @brief Field leftHandTransform, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHandTransform;

  /// @brief Field rightHandInteractor, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> ___rightHandInteractor;

  /// @brief Field leftHandInteractor, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor> ___leftHandInteractor;

  /// @brief Field lastLeftHandPosition, offset: 0xa8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastLeftHandPosition;

  /// @brief Field lastRightHandPosition, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastRightHandPosition;

  /// @brief Field lastHeadPosition, offset: 0xc0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastHeadPosition;

  /// @brief Field rb, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rb;

  /// @brief Field velocityHistorySize, offset: 0xd8, size: 0x4, def value: None
  int32_t ___velocityHistorySize;

  /// @brief Field maxArmLength, offset: 0xdc, size: 0x4, def value: None
  float_t ___maxArmLength;

  /// @brief Field unStickDistance, offset: 0xe0, size: 0x4, def value: None
  float_t ___unStickDistance;

  /// @brief Field velocityLimit, offset: 0xe4, size: 0x4, def value: None
  float_t ___velocityLimit;

  /// @brief Field maxJumpSpeed, offset: 0xe8, size: 0x4, def value: None
  float_t ___maxJumpSpeed;

  /// @brief Field jumpMultiplier, offset: 0xec, size: 0x4, def value: None
  float_t ___jumpMultiplier;

  /// @brief Field minimumRaycastDistance, offset: 0xf0, size: 0x4, def value: None
  float_t ___minimumRaycastDistance;

  /// @brief Field defaultSlideFactor, offset: 0xf4, size: 0x4, def value: None
  float_t ___defaultSlideFactor;

  /// @brief Field defaultPrecision, offset: 0xf8, size: 0x4, def value: None
  float_t ___defaultPrecision;

  /// @brief Field velocityHistory, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___velocityHistory;

  /// @brief Field velocityIndex, offset: 0x108, size: 0x4, def value: None
  int32_t ___velocityIndex;

  /// @brief Field currentVelocity, offset: 0x10c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___currentVelocity;

  /// @brief Field denormalizedVelocityAverage, offset: 0x118, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___denormalizedVelocityAverage;

  /// @brief Field lastPosition, offset: 0x124, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastPosition;

  /// @brief Field rightHandOffset, offset: 0x130, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rightHandOffset;

  /// @brief Field leftHandOffset, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___leftHandOffset;

  /// @brief Field locomotionEnabledLayers, offset: 0x148, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___locomotionEnabledLayers;

  /// @brief Field collisionEnabledLayers, offset: 0x14c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___collisionEnabledLayers;

  /// @brief Field wasLeftHandTouching, offset: 0x150, size: 0x1, def value: None
  bool ___wasLeftHandTouching;

  /// @brief Field wasRightHandTouching, offset: 0x151, size: 0x1, def value: None
  bool ___wasRightHandTouching;

  /// @brief Field disableMovement, offset: 0x152, size: 0x1, def value: None
  bool ___disableMovement;

  /// @brief Field <spectatorCameraController>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpectatorCameraController> ____spectatorCameraController_k__BackingField;

  /// @brief Field gorillaFlatScreenController, offset: 0x160, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlatScreenPlayerController> ___gorillaFlatScreenController;

  /// @brief Field isSpectatorMode, offset: 0x168, size: 0x1, def value: None
  bool ___isSpectatorMode;

  /// @brief Field enterSpectatorModePosition, offset: 0x16c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___enterSpectatorModePosition;

  /// @brief Field anchoredCanvas, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___anchoredCanvas;

  /// @brief Field mobilePhysicsMaterial, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::PhysicMaterial> ___mobilePhysicsMaterial;

  /// @brief Field seekerWeaponSpawner, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EndlessItemSpawner> ___seekerWeaponSpawner;

  /// @brief Field defaultSeekerWeaponSpawnerLocalPosition, offset: 0x190, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultSeekerWeaponSpawnerLocalPosition;

  /// @brief Field defaultSeekerWeaponSpawnerLocalEulerAngles, offset: 0x19c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultSeekerWeaponSpawnerLocalEulerAngles;

  /// @brief Field freezeStartSoundKey, offset: 0x1a8, size: 0x8, def value: None
  ::StringW ___freezeStartSoundKey;

  /// @brief Field freezeStartAudioSource, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___freezeStartAudioSource;

  /// @brief Field freezeActiveCrackleSoundKey, offset: 0x1b8, size: 0x8, def value: None
  ::StringW ___freezeActiveCrackleSoundKey;

  /// @brief Field freezeActiveCrackleAudioSource, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___freezeActiveCrackleAudioSource;

  /// @brief Field freezeActiveChatterSoundKey, offset: 0x1c8, size: 0x8, def value: None
  ::StringW ___freezeActiveChatterSoundKey;

  /// @brief Field freezeActiveChatterAudioSource, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___freezeActiveChatterAudioSource;

  /// @brief Field freezeThawSoundKey, offset: 0x1d8, size: 0x8, def value: None
  ::StringW ___freezeThawSoundKey;

  /// @brief Field freezeThawPuppetSoundKey, offset: 0x1e0, size: 0x8, def value: None
  ::StringW ___freezeThawPuppetSoundKey;

  /// @brief Field onPickupItemCallbacks, offset: 0x1e8, size: 0x8, def value: None
  ::GlobalNamespace::__MasterPlayer__OnPickupItem* ___onPickupItemCallbacks;

  /// @brief Field nextAllowedHandFeedbackTimes, offset: 0x1f0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___nextAllowedHandFeedbackTimes;

  /// @brief Field handCollideStartTimes, offset: 0x1f8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___handCollideStartTimes;

  /// @brief Field killedTime, offset: 0x200, size: 0x4, def value: None
  float_t ___killedTime;

  /// @brief Field statusEffectOverlayAnchor, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___statusEffectOverlayAnchor;

  /// @brief Field curStatusEffectOverlay, offset: 0x210, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___curStatusEffectOverlay;

  /// @brief Field wasInDeadzoneLastInputUpdate, offset: 0x218, size: 0x1, def value: None
  bool ___wasInDeadzoneLastInputUpdate;

  /// @brief Field nextValidSnapTurnTime, offset: 0x21c, size: 0x4, def value: None
  float_t ___nextValidSnapTurnTime;

  /// @brief Field rollContainer, offset: 0x220, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rollContainer;

  /// @brief Field rollSpeed, offset: 0x228, size: 0x4, def value: None
  float_t ___rollSpeed;

  /// @brief Field rollSpeedByRatioToVertical, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rollSpeedByRatioToVertical;

  /// @brief Field verticalRollSpeedMultiplier, offset: 0x238, size: 0x4, def value: None
  float_t ___verticalRollSpeedMultiplier;

  /// @brief Field rollResetSpeedMultiplier, offset: 0x23c, size: 0x4, def value: None
  float_t ___rollResetSpeedMultiplier;

  /// @brief Field timeUntilRollReset, offset: 0x240, size: 0x4, def value: None
  float_t ___timeUntilRollReset;

  /// @brief Field hasCurRollData, offset: 0x244, size: 0x1, def value: None
  bool ___hasCurRollData;

  /// @brief Field curRollStartRotation, offset: 0x248, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___curRollStartRotation;

  /// @brief Field curRollAxis, offset: 0x258, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___curRollAxis;

  /// @brief Field curRollAngle, offset: 0x264, size: 0x4, def value: None
  float_t ___curRollAngle;

  /// @brief Field shouldResetRoll, offset: 0x268, size: 0x1, def value: None
  bool ___shouldResetRoll;

  /// @brief Field rollResetTime, offset: 0x26c, size: 0x4, def value: None
  float_t ___rollResetTime;

  /// @brief Field isDoingRollReset, offset: 0x270, size: 0x1, def value: None
  bool ___isDoingRollReset;

  /// @brief Field targetRollResetAngle, offset: 0x274, size: 0x4, def value: None
  float_t ___targetRollResetAngle;

  /// @brief Field manualRollInputInertia, offset: 0x278, size: 0x4, def value: None
  float_t ___manualRollInputInertia;

  /// @brief Field lastInAirBodyPosition, offset: 0x27c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastInAirBodyPosition;

  /// @brief Field distanceTraveledInAir, offset: 0x288, size: 0x4, def value: None
  float_t ___distanceTraveledInAir;

  /// @brief Field distanceFallenInAir, offset: 0x28c, size: 0x4, def value: None
  float_t ___distanceFallenInAir;

  /// @brief Field lastCollidedTime, offset: 0x290, size: 0x4, def value: None
  float_t ___lastCollidedTime;

  /// @brief Field wasAppliedKnockbackFromExplosionSinceLastCollided, offset: 0x294, size: 0x1, def value: None
  bool ___wasAppliedKnockbackFromExplosionSinceLastCollided;

  /// @brief Field nextValidHitDetectionTime, offset: 0x298, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___nextValidHitDetectionTime;

  /// @brief Field lastCollidedMapObject, offset: 0x2a0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MapObject>, ::Array<::UnityW<::GlobalNamespace::MapObject>>*> ___lastCollidedMapObject;

  /// @brief Field lastCollidedCollider, offset: 0x2a8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ___lastCollidedCollider;

  /// @brief Field cosmeticsOverrideZoneExpireTime, offset: 0x2b0, size: 0x4, def value: None
  float_t ___cosmeticsOverrideZoneExpireTime;

  /// @brief Field dressingRoomOverrideZoneExpireTime, offset: 0x2b4, size: 0x4, def value: None
  float_t ___dressingRoomOverrideZoneExpireTime;

  /// @brief Field techWebOverrideZoneExpireTime, offset: 0x2b8, size: 0x4, def value: None
  float_t ___techWebOverrideZoneExpireTime;

  /// @brief Field onMasterPlayerKnockedBackCallbacks, offset: 0x2c0, size: 0x8, def value: None
  ::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack* ___onMasterPlayerKnockedBackCallbacks;

  /// @brief Field windZones, offset: 0x2c8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::WindZone>, ::Array<::UnityW<::GlobalNamespace::WindZone>>*> ___windZones;

  /// @brief Field curWindZoneCount, offset: 0x2d0, size: 0x4, def value: None
  int32_t ___curWindZoneCount;

  /// @brief Field isInWindZone, offset: 0x2d4, size: 0x1, def value: None
  bool ___isInWindZone;

  /// @brief Field nextWindZoneUpdateTime, offset: 0x2d8, size: 0x4, def value: None
  float_t ___nextWindZoneUpdateTime;

  /// @brief Field curWindSound, offset: 0x2e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___curWindSound;

  /// @brief Field windSoundVolume, offset: 0x2e8, size: 0x4, def value: None
  float_t ___windSoundVolume;

  /// @brief Field nextMeetPlayerUpdateTime, offset: 0x2ec, size: 0x4, def value: None
  float_t ___nextMeetPlayerUpdateTime;

  /// @brief Field nextAboveBuildHeightLimitUpdateTime, offset: 0x2f0, size: 0x4, def value: None
  float_t ___nextAboveBuildHeightLimitUpdateTime;

  /// @brief Field wasAboveBuildHeightLimit, offset: 0x2f4, size: 0x1, def value: None
  bool ___wasAboveBuildHeightLimit;

  /// @brief Field curKnockbackEnergy, offset: 0x2f8, size: 0x4, def value: None
  float_t ___curKnockbackEnergy;

  /// @brief Field nextAllowedGriefProtectionPromptTime, offset: 0x2fc, size: 0x4, def value: None
  float_t ___nextAllowedGriefProtectionPromptTime;

  /// @brief Field isPromptingGriefProtection, offset: 0x300, size: 0x1, def value: None
  bool ___isPromptingGriefProtection;

  /// @brief Field isGriefProtectionActive, offset: 0x301, size: 0x1, def value: None
  bool ___isGriefProtectionActive;

  /// @brief Field griefProtectionTimer, offset: 0x304, size: 0x4, def value: None
  float_t ___griefProtectionTimer;

  /// @brief Field FALLING_NORMAL_Y_THRESHOLD offset 0xffffffff size 0x4
  static constexpr float_t FALLING_NORMAL_Y_THRESHOLD{ 0.5 };

  /// @brief Field FALLING_PITCH_MULTIPLIER offset 0xffffffff size 0x4
  static constexpr float_t FALLING_PITCH_MULTIPLIER{ 0.8 };

  /// @brief Field FALLING_VELOCITY_SOUND_MULTIPLIER offset 0xffffffff size 0x4
  static constexpr float_t FALLING_VELOCITY_SOUND_MULTIPLIER{ 0.4 };

  /// @brief Field IN_WIND_ZONE_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString IN_WIND_ZONE_SOUND_KEY{ u"windZone" };

  /// @brief Field NUM_BLOCKS_FOR_KNOCKBACK_SOUND offset 0xffffffff size 0x4
  static constexpr int32_t NUM_BLOCKS_FOR_KNOCKBACK_SOUND{ static_cast<int32_t>(0x3) };

  /// @brief Field NUM_BLOCKS_FOR_LANDING_SOUND offset 0xffffffff size 0x4
  static constexpr int32_t NUM_BLOCKS_FOR_LANDING_SOUND{ static_cast<int32_t>(0x3) };

  /// @brief Field collisionBodyPartCount offset 0xffffffff size 0x4
  static constexpr int32_t collisionBodyPartCount{ static_cast<int32_t>(0x4) };

  /// @brief Field enterWindZoneHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t enterWindZoneHapticDuration{ 0.1 };

  /// @brief Field enterWindZoneHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t enterWindZoneHapticIntensity{ 0.2 };

  /// @brief Field exitWindZoneHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t exitWindZoneHapticDuration{ 0.1 };

  /// @brief Field exitWindZoneHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t exitWindZoneHapticIntensity{ 0.1 };

  /// @brief Field griefProectionCooldownOnDismiss offset 0xffffffff size 0x4
  static constexpr float_t griefProectionCooldownOnDismiss{ 120.0 };

  /// @brief Field griefProtectionCooldownOnDecline offset 0xffffffff size 0x4
  static constexpr float_t griefProtectionCooldownOnDecline{ 120.0 };

  /// @brief Field griefProtectionDuration offset 0xffffffff size 0x4
  static constexpr float_t griefProtectionDuration{ 20.0 };

  /// @brief Field griefProtectionHitAdditionalTime offset 0xffffffff size 0x4
  static constexpr float_t griefProtectionHitAdditionalTime{ 3.0 };

  /// @brief Field hitDetectionCooldown offset 0xffffffff size 0x4
  static constexpr float_t hitDetectionCooldown{ 0.15 };

  /// @brief Field inertiaPreferAngle offset 0xffffffff size 0x4
  static constexpr float_t inertiaPreferAngle{ 60.0 };

  /// @brief Field killedDuration offset 0xffffffff size 0x4
  static constexpr float_t killedDuration{ 2.0 };

  /// @brief Field knockbackEnergyDecay offset 0xffffffff size 0x4
  static constexpr float_t knockbackEnergyDecay{ 2.5 };

  /// @brief Field knockbackEnergyPerHit offset 0xffffffff size 0x4
  static constexpr float_t knockbackEnergyPerHit{ 10.0 };

  /// @brief Field knockbackForceForMaxHaptic offset 0xffffffff size 0x4
  static constexpr float_t knockbackForceForMaxHaptic{ 10.0 };

  /// @brief Field manualRollInputInertiaLerpSpeed offset 0xffffffff size 0x4
  static constexpr float_t manualRollInputInertiaLerpSpeed{ 10.0 };

  /// @brief Field maxKnockbackEnergy offset 0xffffffff size 0x4
  static constexpr float_t maxKnockbackEnergy{ 100.0 };

  /// @brief Field maxKnockbackHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t maxKnockbackHapticDuration{ 0.25 };

  /// @brief Field maxKnockbackHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t maxKnockbackHapticIntensity{ 0.7 };

  /// @brief Field maxWindZones offset 0xffffffff size 0x4
  static constexpr int32_t maxWindZones{ static_cast<int32_t>(0x2) };

  /// @brief Field meetPlayerDistance offset 0xffffffff size 0x4
  static constexpr float_t meetPlayerDistance{ 4.0 };

  /// @brief Field minKnockbackEnergyForGriefProtectionPrompt offset 0xffffffff size 0x4
  static constexpr float_t minKnockbackEnergyForGriefProtectionPrompt{ 100.0 };

  /// @brief Field minKnockbackHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t minKnockbackHapticDuration{ 0.1 };

  /// @brief Field minKnockbackHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t minKnockbackHapticIntensity{ 0.3 };

  /// @brief Field minTimeBetweenHandFeedback offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenHandFeedback{ 0.3 };

  /// @brief Field minTimeInAirToBeConsideredAirborne offset 0xffffffff size 0x4
  static constexpr float_t minTimeInAirToBeConsideredAirborne{ 1.0 };

  /// @brief Field minTimeSpentCollidingForEndTouchFeedback offset 0xffffffff size 0x4
  static constexpr float_t minTimeSpentCollidingForEndTouchFeedback{ 0.3 };

  /// @brief Field overrideZoneExpireWait offset 0xffffffff size 0x4
  static constexpr float_t overrideZoneExpireWait{ 0.5 };

  /// @brief Field playerTeleportHeight offset 0xffffffff size 0x4
  static constexpr float_t playerTeleportHeight{ 0.65 };

  /// @brief Field rollEndThreshold offset 0xffffffff size 0x4
  static constexpr float_t rollEndThreshold{ 1.0 };

  /// @brief Field rollResetToLevelAngle offset 0xffffffff size 0x4
  static constexpr float_t rollResetToLevelAngle{ 70.0 };

  /// @brief Field rollTriggerThreshold offset 0xffffffff size 0x4
  static constexpr float_t rollTriggerThreshold{ 0.2 };

  /// @brief Field smoothTurnDeadzone offset 0xffffffff size 0x4
  static constexpr float_t smoothTurnDeadzone{ 0.1 };

  /// @brief Field smoothTurnSpeed offset 0xffffffff size 0x4
  static constexpr float_t smoothTurnSpeed{ 270.0 };

  /// @brief Field snapTurnAmount offset 0xffffffff size 0x4
  static constexpr float_t snapTurnAmount{ 45.0 };

  /// @brief Field snapTurnCooldown offset 0xffffffff size 0x4
  static constexpr float_t snapTurnCooldown{ 0.05 };

  /// @brief Field snapTurnDeadzone offset 0xffffffff size 0x4
  static constexpr float_t snapTurnDeadzone{ 0.75 };

  /// @brief Field statusEffectAppliedHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t statusEffectAppliedHapticDuration{ 0.25 };

  /// @brief Field statusEffectAppliedHapticIntensity offset 0xffffffff size 0x4
  static constexpr float_t statusEffectAppliedHapticIntensity{ 0.5 };

  /// @brief Field statusEffectOverlayScale offset 0xffffffff size 0x4
  static constexpr float_t statusEffectOverlayScale{ 1.0 };

  /// @brief Field timeBetweeAboveBuildHeightLimitUpdates offset 0xffffffff size 0x4
  static constexpr float_t timeBetweeAboveBuildHeightLimitUpdates{ 0.25 };

  /// @brief Field timeBetweenMeetPlayerUpdates offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenMeetPlayerUpdates{ 5.0 };

  /// @brief Field timeBetweenMeetPlayerUpdatesIfNotTrackingStat offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenMeetPlayerUpdatesIfNotTrackingStat{ 20.0 };

  /// @brief Field timeBetweenWindZoneUpdates offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenWindZoneUpdates{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MasterPlayer, 0x308>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___mainCamera) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___bellyAnchor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___headCollider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___headTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___bodyCollider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___bodyTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___leftHandFollower) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rightHandFollower) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rightHandTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___leftHandTransform) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rightHandInteractor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___leftHandInteractor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastLeftHandPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastRightHandPosition) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastHeadPosition) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rb) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___velocityHistorySize) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___maxArmLength) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___unStickDistance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___velocityLimit) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___maxJumpSpeed) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___jumpMultiplier) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___minimumRaycastDistance) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___defaultSlideFactor) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___defaultPrecision) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___velocityHistory) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___velocityIndex) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___currentVelocity) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___denormalizedVelocityAverage) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastPosition) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rightHandOffset) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___leftHandOffset) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___locomotionEnabledLayers) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___collisionEnabledLayers) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___wasLeftHandTouching) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___wasRightHandTouching) == 0x151, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___disableMovement) == 0x152, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ____spectatorCameraController_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___gorillaFlatScreenController) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___isSpectatorMode) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___enterSpectatorModePosition) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___anchoredCanvas) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___mobilePhysicsMaterial) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___seekerWeaponSpawner) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___defaultSeekerWeaponSpawnerLocalPosition) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___defaultSeekerWeaponSpawnerLocalEulerAngles) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeStartSoundKey) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeStartAudioSource) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeActiveCrackleSoundKey) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeActiveCrackleAudioSource) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeActiveChatterSoundKey) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeActiveChatterAudioSource) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeThawSoundKey) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___freezeThawPuppetSoundKey) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___onPickupItemCallbacks) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextAllowedHandFeedbackTimes) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___handCollideStartTimes) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___killedTime) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___statusEffectOverlayAnchor) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curStatusEffectOverlay) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___wasInDeadzoneLastInputUpdate) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextValidSnapTurnTime) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rollContainer) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rollSpeed) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rollSpeedByRatioToVertical) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___verticalRollSpeedMultiplier) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rollResetSpeedMultiplier) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___timeUntilRollReset) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___hasCurRollData) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curRollStartRotation) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curRollAxis) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curRollAngle) == 0x264, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___shouldResetRoll) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___rollResetTime) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___isDoingRollReset) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___targetRollResetAngle) == 0x274, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___manualRollInputInertia) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastInAirBodyPosition) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___distanceTraveledInAir) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___distanceFallenInAir) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastCollidedTime) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___wasAppliedKnockbackFromExplosionSinceLastCollided) == 0x294, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextValidHitDetectionTime) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastCollidedMapObject) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___lastCollidedCollider) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___cosmeticsOverrideZoneExpireTime) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___dressingRoomOverrideZoneExpireTime) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___techWebOverrideZoneExpireTime) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___onMasterPlayerKnockedBackCallbacks) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___windZones) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curWindZoneCount) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___isInWindZone) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextWindZoneUpdateTime) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curWindSound) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___windSoundVolume) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextMeetPlayerUpdateTime) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextAboveBuildHeightLimitUpdateTime) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___wasAboveBuildHeightLimit) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___curKnockbackEnergy) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___nextAllowedGriefProtectionPromptTime) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___isPromptingGriefProtection) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___isGriefProtectionActive) == 0x301, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayer, ___griefProtectionTimer) == 0x304, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MasterPlayer__CollisionBodyPart, "", "MasterPlayer/CollisionBodyPart");
NEED_NO_BOX(::GlobalNamespace::MasterPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterPlayer*, "", "MasterPlayer");
NEED_NO_BOX(::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MasterPlayer__OnMasterPlayerKnockedBack*, "", "MasterPlayer/OnMasterPlayerKnockedBack");
NEED_NO_BOX(::GlobalNamespace::__MasterPlayer__OnPickupItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MasterPlayer__OnPickupItem*, "", "MasterPlayer/OnPickupItem");
