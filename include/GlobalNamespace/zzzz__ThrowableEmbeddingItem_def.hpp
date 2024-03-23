#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowableEmbeddingItem)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
class AudioSource;
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
struct Quaternion;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableEmbeddingItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableEmbeddingItem);
// Type: ::ThrowableEmbeddingItem
// SizeInfo { instance_size: 368, native_size: -1, calculated_instance_size: 368, calculated_native_size: 368, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableEmbeddingItem*
class CORDL_TYPE ThrowableEmbeddingItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0x13c, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field canEmbed, offset 0xfc, size 0x1
  __declspec(property(get = __cordl_internal_get_canEmbed, put = __cordl_internal_set_canEmbed)) bool canEmbed;

  /// @brief Field canEmbedSoundEffect, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_canEmbedSoundEffect, put = __cordl_internal_set_canEmbedSoundEffect))::UnityW<::UnityEngine::AudioSource> canEmbedSoundEffect;

  /// @brief Field canEmbedSoundEffectKey, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_canEmbedSoundEffectKey, put = __cordl_internal_set_canEmbedSoundEffectKey))::StringW canEmbedSoundEffectKey;

  /// @brief Field deadlyCollider, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_deadlyCollider, put = __cordl_internal_set_deadlyCollider))::UnityW<::UnityEngine::CapsuleCollider> deadlyCollider;

  /// @brief Field deadlyColliderTransform, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_deadlyColliderTransform, put = __cordl_internal_set_deadlyColliderTransform))::UnityW<::UnityEngine::Transform> deadlyColliderTransform;

  /// @brief Field despawnTime, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTime, put = __cordl_internal_set_despawnTime)) float_t despawnTime;

  /// @brief Field embedRotOffset, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_embedRotOffset, put = setStaticF_embedRotOffset))::UnityEngine::Quaternion embedRotOffset;

  /// @brief Field embedSoundEffectKey, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_embedSoundEffectKey, put = __cordl_internal_set_embedSoundEffectKey))::StringW embedSoundEffectKey;

  /// @brief Field flipEmbedPoint, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_flipEmbedPoint, put = __cordl_internal_set_flipEmbedPoint)) bool flipEmbedPoint;

  /// @brief Field heldDeadlyColliderHeightMul, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_heldDeadlyColliderHeightMul, put = __cordl_internal_set_heldDeadlyColliderHeightMul)) float_t heldDeadlyColliderHeightMul;

  /// @brief Field heldDeadlyColliderRadiusMul, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_heldDeadlyColliderRadiusMul, put = __cordl_internal_set_heldDeadlyColliderRadiusMul)) float_t heldDeadlyColliderRadiusMul;

  /// @brief Field playerDeadlyCollider, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDeadlyCollider, put = __cordl_internal_set_playerDeadlyCollider))::UnityW<::UnityEngine::CapsuleCollider> playerDeadlyCollider;

  /// @brief Field stabLayerMask, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_stabLayerMask, put = __cordl_internal_set_stabLayerMask))::UnityEngine::LayerMask stabLayerMask;

  /// @brief Field thrownAlignmentPower, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownAlignmentPower, put = __cordl_internal_set_thrownAlignmentPower)) float_t thrownAlignmentPower;

  /// @brief Field thrownAlignmentTargetRotation, offset 0xec, size 0x10
  __declspec(property(get = __cordl_internal_get_thrownAlignmentTargetRotation, put = __cordl_internal_set_thrownAlignmentTargetRotation))::UnityEngine::Quaternion thrownAlignmentTargetRotation;

  /// @brief Field thrownDeadlyColliderHeightMul, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownDeadlyColliderHeightMul, put = __cordl_internal_set_thrownDeadlyColliderHeightMul)) float_t thrownDeadlyColliderHeightMul;

  /// @brief Field thrownDeadlyColliderRadiusMul, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_thrownDeadlyColliderRadiusMul, put = __cordl_internal_set_thrownDeadlyColliderRadiusMul)) float_t thrownDeadlyColliderRadiusMul;

  /// @brief Field timeSinceLastUsed, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSinceLastUsed, put = __cordl_internal_set_timeSinceLastUsed)) float_t timeSinceLastUsed;

  /// @brief Field timeSincePickup, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSincePickup, put = __cordl_internal_set_timeSincePickup)) float_t timeSincePickup;

  /// @brief Field trail, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_trail, put = __cordl_internal_set_trail))::UnityW<::UnityEngine::TrailRenderer> trail;

  /// @brief Method CalculateEmbedPosition, addr 0x2ab4434, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CalculateEmbedPosition(::UnityEngine::Collider* collider, ::UnityEngine::Collision* collision);

  /// @brief Method CalculateHitEffect, addr 0x2ab4600, size 0x140, virtual false, abstract: false, final false
  inline void CalculateHitEffect(::UnityEngine::Vector3 embedPosition, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal);

  /// @brief Method CalculateRightAngleEmbed, addr 0x2ab4740, size 0x274, virtual false, abstract: false, final false
  inline void CalculateRightAngleEmbed(::UnityEngine::Collision* collision, ByRef<::UnityEngine::Vector3> embedPos, ByRef<::UnityEngine::Quaternion> embedRot);

  /// @brief Method CanStabPlayer, addr 0x2ab49b8, size 0x20, virtual true, abstract: false, final false
  inline bool CanStabPlayer(::GlobalNamespace::Player* player);

  /// @brief Method DestroysMapObjectsOnHit, addr 0x2ab49dc, size 0x8, virtual true, abstract: false, final false
  inline bool DestroysMapObjectsOnHit();

  /// @brief Method DisableDespawning, addr 0x2ab4250, size 0xc, virtual true, abstract: false, final false
  inline void DisableDespawning();

  /// @brief Method EmbedAtRightAngle, addr 0x2ab49e4, size 0x8, virtual true, abstract: false, final false
  inline bool EmbedAtRightAngle();

  /// @brief Method EmbedInObject, addr 0x2ab392c, size 0x924, virtual false, abstract: false, final false
  inline void EmbedInObject(::UnityEngine::GameObject* embedObject, bool isStab, ::UnityEngine::Collider* collider, ::UnityEngine::Collision* collision);

  /// @brief Method GetBounds, addr 0x2ab3164, size 0x20, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2ab245c, size 0x308, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::ThrowableEmbeddingItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2ab30c8, size 0x20, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnDestroyedStuffedMapObject, addr 0x2ab49b4, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroyedStuffedMapObject(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method OnEmbedded, addr 0x2ab49d8, size 0x4, virtual true, abstract: false, final false
  inline void OnEmbedded(::UnityEngine::Vector3 embedPosition, ::GlobalNamespace::Player* hitPlayer, bool isStab);

  /// @brief Method OnFixedUpdate, addr 0x2ab347c, size 0x4b0, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnMasterCollisionEnter, addr 0x2ab425c, size 0x1d8, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnUpdate, addr 0x2ab2b28, size 0x7c, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetCanEmbed, addr 0x2ab3184, size 0x2f8, virtual false, abstract: false, final false
  inline void SetCanEmbed(bool newCanEmbed);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr bool const& __cordl_internal_get_canEmbed() const;

  constexpr bool& __cordl_internal_get_canEmbed();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_canEmbedSoundEffect() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_canEmbedSoundEffect();

  constexpr ::StringW const& __cordl_internal_get_canEmbedSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_canEmbedSoundEffectKey();

  constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_deadlyCollider() const;

  constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_deadlyCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_deadlyColliderTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_deadlyColliderTransform();

  constexpr float_t const& __cordl_internal_get_despawnTime() const;

  constexpr float_t& __cordl_internal_get_despawnTime();

  constexpr ::StringW const& __cordl_internal_get_embedSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_embedSoundEffectKey();

  constexpr bool const& __cordl_internal_get_flipEmbedPoint() const;

  constexpr bool& __cordl_internal_get_flipEmbedPoint();

  constexpr float_t const& __cordl_internal_get_heldDeadlyColliderHeightMul() const;

  constexpr float_t& __cordl_internal_get_heldDeadlyColliderHeightMul();

  constexpr float_t const& __cordl_internal_get_heldDeadlyColliderRadiusMul() const;

  constexpr float_t& __cordl_internal_get_heldDeadlyColliderRadiusMul();

  constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_playerDeadlyCollider() const;

  constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_playerDeadlyCollider();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_stabLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_stabLayerMask();

  constexpr float_t const& __cordl_internal_get_thrownAlignmentPower() const;

  constexpr float_t& __cordl_internal_get_thrownAlignmentPower();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_thrownAlignmentTargetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_thrownAlignmentTargetRotation();

  constexpr float_t const& __cordl_internal_get_thrownDeadlyColliderHeightMul() const;

  constexpr float_t& __cordl_internal_get_thrownDeadlyColliderHeightMul();

  constexpr float_t const& __cordl_internal_get_thrownDeadlyColliderRadiusMul() const;

  constexpr float_t& __cordl_internal_get_thrownDeadlyColliderRadiusMul();

  constexpr float_t const& __cordl_internal_get_timeSinceLastUsed() const;

  constexpr float_t& __cordl_internal_get_timeSinceLastUsed();

  constexpr float_t const& __cordl_internal_get_timeSincePickup() const;

  constexpr float_t& __cordl_internal_get_timeSincePickup();

  constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trail() const;

  constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trail();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_canEmbed(bool value);

  constexpr void __cordl_internal_set_canEmbedSoundEffect(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_canEmbedSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_deadlyCollider(::UnityW<::UnityEngine::CapsuleCollider> value);

  constexpr void __cordl_internal_set_deadlyColliderTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_despawnTime(float_t value);

  constexpr void __cordl_internal_set_embedSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_flipEmbedPoint(bool value);

  constexpr void __cordl_internal_set_heldDeadlyColliderHeightMul(float_t value);

  constexpr void __cordl_internal_set_heldDeadlyColliderRadiusMul(float_t value);

  constexpr void __cordl_internal_set_playerDeadlyCollider(::UnityW<::UnityEngine::CapsuleCollider> value);

  constexpr void __cordl_internal_set_stabLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_thrownAlignmentPower(float_t value);

  constexpr void __cordl_internal_set_thrownAlignmentTargetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_thrownDeadlyColliderHeightMul(float_t value);

  constexpr void __cordl_internal_set_thrownDeadlyColliderRadiusMul(float_t value);

  constexpr void __cordl_internal_set_timeSinceLastUsed(float_t value);

  constexpr void __cordl_internal_set_timeSincePickup(float_t value);

  constexpr void __cordl_internal_set_trail(::UnityW<::UnityEngine::TrailRenderer> value);

  /// @brief Method .ctor, addr 0x2ab2c28, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Quaternion getStaticF_embedRotOffset();

  static inline void setStaticF_embedRotOffset(::UnityEngine::Quaternion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableEmbeddingItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableEmbeddingItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableEmbeddingItem(ThrowableEmbeddingItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableEmbeddingItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableEmbeddingItem(ThrowableEmbeddingItem const&) = delete;

  /// @brief Field thrownAlignmentPower, offset: 0xe8, size: 0x4, def value: None
  float_t ___thrownAlignmentPower;

  /// @brief Field thrownAlignmentTargetRotation, offset: 0xec, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___thrownAlignmentTargetRotation;

  /// @brief Field canEmbed, offset: 0xfc, size: 0x1, def value: None
  bool ___canEmbed;

  /// @brief Field trail, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TrailRenderer> ___trail;

  /// @brief Field deadlyCollider, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CapsuleCollider> ___deadlyCollider;

  /// @brief Field playerDeadlyCollider, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CapsuleCollider> ___playerDeadlyCollider;

  /// @brief Field flipEmbedPoint, offset: 0x118, size: 0x1, def value: None
  bool ___flipEmbedPoint;

  /// @brief Field thrownDeadlyColliderRadiusMul, offset: 0x11c, size: 0x4, def value: None
  float_t ___thrownDeadlyColliderRadiusMul;

  /// @brief Field thrownDeadlyColliderHeightMul, offset: 0x120, size: 0x4, def value: None
  float_t ___thrownDeadlyColliderHeightMul;

  /// @brief Field heldDeadlyColliderRadiusMul, offset: 0x124, size: 0x4, def value: None
  float_t ___heldDeadlyColliderRadiusMul;

  /// @brief Field heldDeadlyColliderHeightMul, offset: 0x128, size: 0x4, def value: None
  float_t ___heldDeadlyColliderHeightMul;

  /// @brief Field deadlyColliderTransform, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___deadlyColliderTransform;

  /// @brief Field stabLayerMask, offset: 0x138, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___stabLayerMask;

  /// @brief Field boundingCenter, offset: 0x13c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x148, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field despawnTime, offset: 0x14c, size: 0x4, def value: None
  float_t ___despawnTime;

  /// @brief Field timeSinceLastUsed, offset: 0x150, size: 0x4, def value: None
  float_t ___timeSinceLastUsed;

  /// @brief Field timeSincePickup, offset: 0x154, size: 0x4, def value: None
  float_t ___timeSincePickup;

  /// @brief Field canEmbedSoundEffectKey, offset: 0x158, size: 0x8, def value: None
  ::StringW ___canEmbedSoundEffectKey;

  /// @brief Field embedSoundEffectKey, offset: 0x160, size: 0x8, def value: None
  ::StringW ___embedSoundEffectKey;

  /// @brief Field canEmbedSoundEffect, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___canEmbedSoundEffect;

  /// @brief Field embedShiftIntoPlayerRatio offset 0xffffffff size 0x4
  static constexpr float_t embedShiftIntoPlayerRatio{ 0.65 };

  /// @brief Field embedVelocityThreshold offset 0xffffffff size 0x4
  static constexpr float_t embedVelocityThreshold{ 3.3 };

  /// @brief Field minThrownSelfCollisionTime offset 0xffffffff size 0x4
  static constexpr float_t minThrownSelfCollisionTime{ 0.1 };

  /// @brief Field minTimeBetweenPickupAndStab offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenPickupAndStab{ 0.25 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableEmbeddingItem, 0x170>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___thrownAlignmentPower) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___thrownAlignmentTargetRotation) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___canEmbed) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___trail) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___deadlyCollider) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___playerDeadlyCollider) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___flipEmbedPoint) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___thrownDeadlyColliderRadiusMul) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___thrownDeadlyColliderHeightMul) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___heldDeadlyColliderRadiusMul) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___heldDeadlyColliderHeightMul) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___deadlyColliderTransform) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___stabLayerMask) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___boundingCenter) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___boundingRadius) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___despawnTime) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___timeSinceLastUsed) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___timeSincePickup) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___canEmbedSoundEffectKey) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___embedSoundEffectKey) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableEmbeddingItem, ___canEmbedSoundEffect) == 0x168, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableEmbeddingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableEmbeddingItem*, "", "ThrowableEmbeddingItem");
