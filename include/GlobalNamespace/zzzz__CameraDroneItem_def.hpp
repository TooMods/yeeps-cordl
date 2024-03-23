#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CameraDroneItem)
namespace GlobalNamespace {
class OverrideCamera;
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraDroneItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CameraDroneItem);
// Type: ::CameraDroneItem
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 372, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CameraDroneItem*
class CORDL_TYPE CameraDroneItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field acceleration, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_acceleration, put = __cordl_internal_set_acceleration)) float_t acceleration;

  /// @brief Field accelerationRampRatio, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_accelerationRampRatio, put = __cordl_internal_set_accelerationRampRatio)) float_t accelerationRampRatio;

  /// @brief Field accelerationRampTime, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_accelerationRampTime, put = __cordl_internal_set_accelerationRampTime)) float_t accelerationRampTime;

  /// @brief Field boundingCenter, offset 0x164, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field cameraPivot, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraPivot, put = __cordl_internal_set_cameraPivot))::UnityW<::UnityEngine::Transform> cameraPivot;

  /// @brief Field clockwisePropellors, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_clockwisePropellors,
                      put = __cordl_internal_set_clockwisePropellors))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> clockwisePropellors;

  /// @brief Field counterClockwisePropellors, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_counterClockwisePropellors,
                      put = __cordl_internal_set_counterClockwisePropellors))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> counterClockwisePropellors;

  /// @brief Field flyingCollider, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_flyingCollider, put = __cordl_internal_set_flyingCollider))::UnityW<::UnityEngine::GameObject> flyingCollider;

  /// @brief Field groundLayerMask, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_groundLayerMask, put = __cordl_internal_set_groundLayerMask))::UnityEngine::LayerMask groundLayerMask;

  /// @brief Field isActive, offset 0x158, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field lineOfSightBlockedTimer, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_lineOfSightBlockedTimer, put = __cordl_internal_set_lineOfSightBlockedTimer)) float_t lineOfSightBlockedTimer;

  /// @brief Field minDinstanceToTarget, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_minDinstanceToTarget, put = __cordl_internal_set_minDinstanceToTarget)) float_t minDinstanceToTarget;

  /// @brief Field minHoverHeight, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_minHoverHeight, put = __cordl_internal_set_minHoverHeight)) float_t minHoverHeight;

  /// @brief Field nextLineOfSightCheckTime, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_nextLineOfSightCheckTime, put = __cordl_internal_set_nextLineOfSightCheckTime)) float_t nextLineOfSightCheckTime;

  /// @brief Field nextTryLookForTargetTime, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_nextTryLookForTargetTime, put = __cordl_internal_set_nextTryLookForTargetTime)) float_t nextTryLookForTargetTime;

  /// @brief Field nextValidTeleportAttemptTime, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_nextValidTeleportAttemptTime, put = __cordl_internal_set_nextValidTeleportAttemptTime)) float_t nextValidTeleportAttemptTime;

  /// @brief Field overrideCamera, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideCamera, put = __cordl_internal_set_overrideCamera))::UnityW<::GlobalNamespace::OverrideCamera> overrideCamera;

  /// @brief Field propellorAngle, offset 0x124, size 0x4
  __declspec(property(get = __cordl_internal_get_propellorAngle, put = __cordl_internal_set_propellorAngle)) float_t propellorAngle;

  /// @brief Field propellorSpeed, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_propellorSpeed, put = __cordl_internal_set_propellorSpeed)) float_t propellorSpeed;

  /// @brief Field speed, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_speed, put = __cordl_internal_set_speed)) float_t speed;

  /// @brief Field stoppingDistance, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_stoppingDistance, put = __cordl_internal_set_stoppingDistance)) float_t stoppingDistance;

  /// @brief Field timeUntilActivate, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeUntilActivate, put = __cordl_internal_set_timeUntilActivate)) float_t timeUntilActivate;

  /// @brief Field trackingTarget, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_trackingTarget, put = __cordl_internal_set_trackingTarget))::UnityW<::GlobalNamespace::Player> trackingTarget;

  /// @brief Field trackingTargetUserID, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_trackingTargetUserID, put = __cordl_internal_set_trackingTargetUserID))::StringW trackingTargetUserID;

  /// @brief Method CalculateVelocityToTarget, addr 0x29da354, size 0x1b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 CalculateVelocityToTarget(::UnityEngine::Vector3 targetPosition);

  /// @brief Method CanTransferOwnership, addr 0x29d9e5c, size 0x8, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method GetBounds, addr 0x29dabdc, size 0x20, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x29d9dc4, size 0x98, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::CameraDroneItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x29d9e64, size 0x2c, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnFixedUpdate, addr 0x29d9efc, size 0x458, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnUpdate, addr 0x29da50c, size 0x6d0, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetActive, addr 0x29d9e90, size 0x6c, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  constexpr float_t const& __cordl_internal_get_acceleration() const;

  constexpr float_t& __cordl_internal_get_acceleration();

  constexpr float_t const& __cordl_internal_get_accelerationRampRatio() const;

  constexpr float_t& __cordl_internal_get_accelerationRampRatio();

  constexpr float_t const& __cordl_internal_get_accelerationRampTime() const;

  constexpr float_t& __cordl_internal_get_accelerationRampTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraPivot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraPivot();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_clockwisePropellors() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_clockwisePropellors();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_counterClockwisePropellors() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_counterClockwisePropellors();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_flyingCollider() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_flyingCollider();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundLayerMask();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr float_t const& __cordl_internal_get_lineOfSightBlockedTimer() const;

  constexpr float_t& __cordl_internal_get_lineOfSightBlockedTimer();

  constexpr float_t const& __cordl_internal_get_minDinstanceToTarget() const;

  constexpr float_t& __cordl_internal_get_minDinstanceToTarget();

  constexpr float_t const& __cordl_internal_get_minHoverHeight() const;

  constexpr float_t& __cordl_internal_get_minHoverHeight();

  constexpr float_t const& __cordl_internal_get_nextLineOfSightCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextLineOfSightCheckTime();

  constexpr float_t const& __cordl_internal_get_nextTryLookForTargetTime() const;

  constexpr float_t& __cordl_internal_get_nextTryLookForTargetTime();

  constexpr float_t const& __cordl_internal_get_nextValidTeleportAttemptTime() const;

  constexpr float_t& __cordl_internal_get_nextValidTeleportAttemptTime();

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& __cordl_internal_get_overrideCamera() const;

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& __cordl_internal_get_overrideCamera();

  constexpr float_t const& __cordl_internal_get_propellorAngle() const;

  constexpr float_t& __cordl_internal_get_propellorAngle();

  constexpr float_t const& __cordl_internal_get_propellorSpeed() const;

  constexpr float_t& __cordl_internal_get_propellorSpeed();

  constexpr float_t const& __cordl_internal_get_speed() const;

  constexpr float_t& __cordl_internal_get_speed();

  constexpr float_t const& __cordl_internal_get_stoppingDistance() const;

  constexpr float_t& __cordl_internal_get_stoppingDistance();

  constexpr float_t const& __cordl_internal_get_timeUntilActivate() const;

  constexpr float_t& __cordl_internal_get_timeUntilActivate();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_trackingTarget() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_trackingTarget();

  constexpr ::StringW const& __cordl_internal_get_trackingTargetUserID() const;

  constexpr ::StringW& __cordl_internal_get_trackingTargetUserID();

  constexpr void __cordl_internal_set_acceleration(float_t value);

  constexpr void __cordl_internal_set_accelerationRampRatio(float_t value);

  constexpr void __cordl_internal_set_accelerationRampTime(float_t value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_cameraPivot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_clockwisePropellors(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_counterClockwisePropellors(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_flyingCollider(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_lineOfSightBlockedTimer(float_t value);

  constexpr void __cordl_internal_set_minDinstanceToTarget(float_t value);

  constexpr void __cordl_internal_set_minHoverHeight(float_t value);

  constexpr void __cordl_internal_set_nextLineOfSightCheckTime(float_t value);

  constexpr void __cordl_internal_set_nextTryLookForTargetTime(float_t value);

  constexpr void __cordl_internal_set_nextValidTeleportAttemptTime(float_t value);

  constexpr void __cordl_internal_set_overrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value);

  constexpr void __cordl_internal_set_propellorAngle(float_t value);

  constexpr void __cordl_internal_set_propellorSpeed(float_t value);

  constexpr void __cordl_internal_set_speed(float_t value);

  constexpr void __cordl_internal_set_stoppingDistance(float_t value);

  constexpr void __cordl_internal_set_timeUntilActivate(float_t value);

  constexpr void __cordl_internal_set_trackingTarget(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_trackingTargetUserID(::StringW value);

  /// @brief Method .ctor, addr 0x29dabfc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraDroneItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraDroneItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraDroneItem(CameraDroneItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraDroneItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraDroneItem(CameraDroneItem const&) = delete;

  /// @brief Field overrideCamera, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OverrideCamera> ___overrideCamera;

  /// @brief Field minDinstanceToTarget, offset: 0xf0, size: 0x4, def value: None
  float_t ___minDinstanceToTarget;

  /// @brief Field stoppingDistance, offset: 0xf4, size: 0x4, def value: None
  float_t ___stoppingDistance;

  /// @brief Field minHoverHeight, offset: 0xf8, size: 0x4, def value: None
  float_t ___minHoverHeight;

  /// @brief Field groundLayerMask, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___groundLayerMask;

  /// @brief Field speed, offset: 0x100, size: 0x4, def value: None
  float_t ___speed;

  /// @brief Field acceleration, offset: 0x104, size: 0x4, def value: None
  float_t ___acceleration;

  /// @brief Field accelerationRampTime, offset: 0x108, size: 0x4, def value: None
  float_t ___accelerationRampTime;

  /// @brief Field accelerationRampRatio, offset: 0x10c, size: 0x4, def value: None
  float_t ___accelerationRampRatio;

  /// @brief Field flyingCollider, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___flyingCollider;

  /// @brief Field cameraPivot, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cameraPivot;

  /// @brief Field propellorSpeed, offset: 0x120, size: 0x4, def value: None
  float_t ___propellorSpeed;

  /// @brief Field propellorAngle, offset: 0x124, size: 0x4, def value: None
  float_t ___propellorAngle;

  /// @brief Field clockwisePropellors, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___clockwisePropellors;

  /// @brief Field counterClockwisePropellors, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___counterClockwisePropellors;

  /// @brief Field nextLineOfSightCheckTime, offset: 0x138, size: 0x4, def value: None
  float_t ___nextLineOfSightCheckTime;

  /// @brief Field lineOfSightBlockedTimer, offset: 0x13c, size: 0x4, def value: None
  float_t ___lineOfSightBlockedTimer;

  /// @brief Field nextValidTeleportAttemptTime, offset: 0x140, size: 0x4, def value: None
  float_t ___nextValidTeleportAttemptTime;

  /// @brief Field trackingTargetUserID, offset: 0x148, size: 0x8, def value: None
  ::StringW ___trackingTargetUserID;

  /// @brief Field trackingTarget, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___trackingTarget;

  /// @brief Field isActive, offset: 0x158, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field timeUntilActivate, offset: 0x15c, size: 0x4, def value: None
  float_t ___timeUntilActivate;

  /// @brief Field nextTryLookForTargetTime, offset: 0x160, size: 0x4, def value: None
  float_t ___nextTryLookForTargetTime;

  /// @brief Field boundingCenter, offset: 0x164, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x170, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field activateDelay offset 0xffffffff size 0x4
  static constexpr float_t activateDelay{ 0.05 };

  /// @brief Field lerpToFacingSpeed offset 0xffffffff size 0x4
  static constexpr float_t lerpToFacingSpeed{ 3.0 };

  /// @brief Field minLineOfSightBlockTimeForTeleport offset 0xffffffff size 0x4
  static constexpr float_t minLineOfSightBlockTimeForTeleport{ 1.0 };

  /// @brief Field timeBetweenLineOfSightChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenLineOfSightChecks{ 0.2 };

  /// @brief Field timeBetweenTryLookForTarget offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenTryLookForTarget{ 0.5 };

  /// @brief Field timeBetweenValidTeleportAttempts offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenValidTeleportAttempts{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CameraDroneItem, 0x178>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___overrideCamera) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___minDinstanceToTarget) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___stoppingDistance) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___minHoverHeight) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___groundLayerMask) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___speed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___acceleration) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___accelerationRampTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___accelerationRampRatio) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___flyingCollider) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___cameraPivot) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___propellorSpeed) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___propellorAngle) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___clockwisePropellors) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___counterClockwisePropellors) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___nextLineOfSightCheckTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___lineOfSightBlockedTimer) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___nextValidTeleportAttemptTime) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___trackingTargetUserID) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___trackingTarget) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___isActive) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___timeUntilActivate) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___nextTryLookForTargetTime) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___boundingCenter) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraDroneItem, ___boundingRadius) == 0x170, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CameraDroneItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CameraDroneItem*, "", "CameraDroneItem");
