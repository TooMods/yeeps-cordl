#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SlashingItem)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SlashingItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SlashingItem);
// Type: ::SlashingItem
// SizeInfo { instance_size: 368, native_size: -1, calculated_instance_size: 368, calculated_native_size: 364, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SlashingItem*
class CORDL_TYPE SlashingItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field anchorChangeTime, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_anchorChangeTime, put = __cordl_internal_set_anchorChangeTime)) float_t anchorChangeTime;

  /// @brief Field boundingCenter, offset 0x15c, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field collectAsStuffingOnHit, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_collectAsStuffingOnHit, put = __cordl_internal_set_collectAsStuffingOnHit)) bool collectAsStuffingOnHit;

  /// @brief Field deadlyCenterVelocity, offset 0x128, size 0xc
  __declspec(property(get = __cordl_internal_get_deadlyCenterVelocity, put = __cordl_internal_set_deadlyCenterVelocity))::UnityEngine::Vector3 deadlyCenterVelocity;

  /// @brief Field deadlyExtents, offset 0x100, size 0xc
  __declspec(property(get = __cordl_internal_get_deadlyExtents, put = __cordl_internal_set_deadlyExtents))::UnityEngine::Vector3 deadlyExtents;

  /// @brief Field deadlyLocalOffset, offset 0xf4, size 0xc
  __declspec(property(get = __cordl_internal_get_deadlyLocalOffset, put = __cordl_internal_set_deadlyLocalOffset))::UnityEngine::Vector3 deadlyLocalOffset;

  /// @brief Field hitDropVelocityMultiplier, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_hitDropVelocityMultiplier, put = __cordl_internal_set_hitDropVelocityMultiplier)) float_t hitDropVelocityMultiplier;

  /// @brief Field hitPlayerKnockbackMultiplier, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_hitPlayerKnockbackMultiplier, put = __cordl_internal_set_hitPlayerKnockbackMultiplier)) float_t hitPlayerKnockbackMultiplier;

  /// @brief Field hitPlayerSoundKey, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_hitPlayerSoundKey, put = __cordl_internal_set_hitPlayerSoundKey))::StringW hitPlayerSoundKey;

  /// @brief Field hitableLayerMask, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_hitableLayerMask, put = __cordl_internal_set_hitableLayerMask))::UnityEngine::LayerMask hitableLayerMask;

  /// @brief Field isHeld, offset 0x154, size 0x1
  __declspec(property(get = __cordl_internal_get_isHeld, put = __cordl_internal_set_isHeld)) bool isHeld;

  /// @brief Field lastDeadlyCenterPosition, offset 0x11c, size 0xc
  __declspec(property(get = __cordl_internal_get_lastDeadlyCenterPosition, put = __cordl_internal_set_lastDeadlyCenterPosition))::UnityEngine::Vector3 lastDeadlyCenterPosition;

  /// @brief Field lastPlayerHitTime, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_lastPlayerHitTime, put = __cordl_internal_set_lastPlayerHitTime)) float_t lastPlayerHitTime;

  /// @brief Field maxPlayerKnockback, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPlayerKnockback, put = __cordl_internal_set_maxPlayerKnockback)) float_t maxPlayerKnockback;

  /// @brief Field squeakSoundKey, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_squeakSoundKey, put = __cordl_internal_set_squeakSoundKey))::StringW squeakSoundKey;

  /// @brief Field thrownDeadlyExtents, offset 0x10c, size 0xc
  __declspec(property(get = __cordl_internal_get_thrownDeadlyExtents, put = __cordl_internal_set_thrownDeadlyExtents))::UnityEngine::Vector3 thrownDeadlyExtents;

  /// @brief Method GetBounds, addr 0x2aaf248, size 0x20, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  static inline ::GlobalNamespace::SlashingItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aaf268, size 0xc0, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnHitMapObject, addr 0x2aaf854, size 0x1b0, virtual false, abstract: false, final false
  inline void OnHitMapObject(::GlobalNamespace::MapObject* mapObject, ::UnityEngine::Vector3 hitPosition);

  /// @brief Method OnHitPlayer, addr 0x2aafa04, size 0x300, virtual false, abstract: false, final false
  inline void OnHitPlayer(::GlobalNamespace::Player* player, ::UnityEngine::Vector3 hitPosition);

  /// @brief Method OnUpdate, addr 0x2aaf328, size 0x52c, virtual true, abstract: false, final false
  inline void OnUpdate();

  constexpr float_t const& __cordl_internal_get_anchorChangeTime() const;

  constexpr float_t& __cordl_internal_get_anchorChangeTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr bool const& __cordl_internal_get_collectAsStuffingOnHit() const;

  constexpr bool& __cordl_internal_get_collectAsStuffingOnHit();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_deadlyCenterVelocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_deadlyCenterVelocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_deadlyExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_deadlyExtents();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_deadlyLocalOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_deadlyLocalOffset();

  constexpr float_t const& __cordl_internal_get_hitDropVelocityMultiplier() const;

  constexpr float_t& __cordl_internal_get_hitDropVelocityMultiplier();

  constexpr float_t const& __cordl_internal_get_hitPlayerKnockbackMultiplier() const;

  constexpr float_t& __cordl_internal_get_hitPlayerKnockbackMultiplier();

  constexpr ::StringW const& __cordl_internal_get_hitPlayerSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_hitPlayerSoundKey();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_hitableLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_hitableLayerMask();

  constexpr bool const& __cordl_internal_get_isHeld() const;

  constexpr bool& __cordl_internal_get_isHeld();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastDeadlyCenterPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastDeadlyCenterPosition();

  constexpr float_t const& __cordl_internal_get_lastPlayerHitTime() const;

  constexpr float_t& __cordl_internal_get_lastPlayerHitTime();

  constexpr float_t const& __cordl_internal_get_maxPlayerKnockback() const;

  constexpr float_t& __cordl_internal_get_maxPlayerKnockback();

  constexpr ::StringW const& __cordl_internal_get_squeakSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_squeakSoundKey();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_thrownDeadlyExtents() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_thrownDeadlyExtents();

  constexpr void __cordl_internal_set_anchorChangeTime(float_t value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_collectAsStuffingOnHit(bool value);

  constexpr void __cordl_internal_set_deadlyCenterVelocity(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_deadlyExtents(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_deadlyLocalOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_hitDropVelocityMultiplier(float_t value);

  constexpr void __cordl_internal_set_hitPlayerKnockbackMultiplier(float_t value);

  constexpr void __cordl_internal_set_hitPlayerSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hitableLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_isHeld(bool value);

  constexpr void __cordl_internal_set_lastDeadlyCenterPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastPlayerHitTime(float_t value);

  constexpr void __cordl_internal_set_maxPlayerKnockback(float_t value);

  constexpr void __cordl_internal_set_squeakSoundKey(::StringW value);

  constexpr void __cordl_internal_set_thrownDeadlyExtents(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2aafd04, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SlashingItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SlashingItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SlashingItem(SlashingItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SlashingItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SlashingItem(SlashingItem const&) = delete;

  /// @brief Field collectAsStuffingOnHit, offset: 0xf0, size: 0x1, def value: None
  bool ___collectAsStuffingOnHit;

  /// @brief Field deadlyLocalOffset, offset: 0xf4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___deadlyLocalOffset;

  /// @brief Field deadlyExtents, offset: 0x100, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___deadlyExtents;

  /// @brief Field thrownDeadlyExtents, offset: 0x10c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___thrownDeadlyExtents;

  /// @brief Field hitableLayerMask, offset: 0x118, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___hitableLayerMask;

  /// @brief Field lastDeadlyCenterPosition, offset: 0x11c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastDeadlyCenterPosition;

  /// @brief Field deadlyCenterVelocity, offset: 0x128, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___deadlyCenterVelocity;

  /// @brief Field hitDropVelocityMultiplier, offset: 0x134, size: 0x4, def value: None
  float_t ___hitDropVelocityMultiplier;

  /// @brief Field hitPlayerKnockbackMultiplier, offset: 0x138, size: 0x4, def value: None
  float_t ___hitPlayerKnockbackMultiplier;

  /// @brief Field maxPlayerKnockback, offset: 0x13c, size: 0x4, def value: None
  float_t ___maxPlayerKnockback;

  /// @brief Field hitPlayerSoundKey, offset: 0x140, size: 0x8, def value: None
  ::StringW ___hitPlayerSoundKey;

  /// @brief Field squeakSoundKey, offset: 0x148, size: 0x8, def value: None
  ::StringW ___squeakSoundKey;

  /// @brief Field anchorChangeTime, offset: 0x150, size: 0x4, def value: None
  float_t ___anchorChangeTime;

  /// @brief Field isHeld, offset: 0x154, size: 0x1, def value: None
  bool ___isHeld;

  /// @brief Field lastPlayerHitTime, offset: 0x158, size: 0x4, def value: None
  float_t ___lastPlayerHitTime;

  /// @brief Field boundingCenter, offset: 0x15c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x168, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field SQUEAK_CHANCE offset 0xffffffff size 0x4
  static constexpr float_t SQUEAK_CHANCE{ 0.4 };

  /// @brief Field deadlyCenterVelocityLerp offset 0xffffffff size 0x4
  static constexpr float_t deadlyCenterVelocityLerp{ 5.0 };

  /// @brief Field hitHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hitHapticAmplitude{ 0.5 };

  /// @brief Field hitHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hitHapticDuration{ 0.15 };

  /// @brief Field minTimeBeforeSlash offset 0xffffffff size 0x4
  static constexpr float_t minTimeBeforeSlash{ 0.35 };

  /// @brief Field minTimeBetweenPlayerHits offset 0xffffffff size 0x4
  static constexpr float_t minTimeBetweenPlayerHits{ 0.5 };

  /// @brief Field playerKnockbackUpAngleDeg offset 0xffffffff size 0x4
  static constexpr float_t playerKnockbackUpAngleDeg{ 30.0 };

  /// @brief Field throwVelocityActivateThreshold offset 0xffffffff size 0x4
  static constexpr float_t throwVelocityActivateThreshold{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SlashingItem, 0x170>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___collectAsStuffingOnHit) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___deadlyLocalOffset) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___deadlyExtents) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___thrownDeadlyExtents) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___hitableLayerMask) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___lastDeadlyCenterPosition) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___deadlyCenterVelocity) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___hitDropVelocityMultiplier) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___hitPlayerKnockbackMultiplier) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___maxPlayerKnockback) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___hitPlayerSoundKey) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___squeakSoundKey) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___anchorChangeTime) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___isHeld) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___lastPlayerHitTime) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___boundingCenter) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlashingItem, ___boundingRadius) == 0x168, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SlashingItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SlashingItem*, "", "SlashingItem");
