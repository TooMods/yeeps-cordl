#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowableImpactItem)
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableImpactItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableImpactItem);
// Type: ::ThrowableImpactItem
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableImpactItem*
class CORDL_TYPE ThrowableImpactItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field activeVelocityThreshold, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_activeVelocityThreshold, put = __cordl_internal_set_activeVelocityThreshold)) float_t activeVelocityThreshold;

  /// @brief Field boundingCenter, offset 0xe8, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field despawnTime, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTime, put = __cordl_internal_set_despawnTime)) float_t despawnTime;

  /// @brief Field isActive, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field timeSinceLastUsed, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeSinceLastUsed, put = __cordl_internal_set_timeSinceLastUsed)) float_t timeSinceLastUsed;

  /// @brief Field trail, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_trail, put = __cordl_internal_set_trail))::UnityW<::UnityEngine::TrailRenderer> trail;

  /// @brief Method AllowTrail, addr 0x2f66e98, size 0x8, virtual true, abstract: false, final false
  inline bool AllowTrail();

  /// @brief Method DestroySelf, addr 0x2f66fb4, size 0x10c, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DoesCollideWithPlayers, addr 0x2f66fac, size 0x8, virtual true, abstract: false, final false
  inline bool DoesCollideWithPlayers();

  /// @brief Method GetBounds, addr 0x2f66b90, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method GetDespawnTime, addr 0x2f66bac, size 0x8, virtual true, abstract: false, final false
  inline float_t GetDespawnTime();

  /// @brief Method Initialize, addr 0x2f66bb4, size 0x7c, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::ThrowableImpactItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2f66da4, size 0x20, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnFixedUpdate, addr 0x2f66e28, size 0x70, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnImpactTriggered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnImpactTriggered(::UnityEngine::Collision* collision);

  /// @brief Method OnMasterCollisionEnter, addr 0x2f66ea0, size 0x84, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2f66f24, size 0x88, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2f66dc4, size 0x64, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetIsActive, addr 0x2f66c30, size 0x174, virtual false, abstract: false, final false
  inline void SetIsActive(bool newIsActive);

  constexpr float_t const& __cordl_internal_get_activeVelocityThreshold() const;

  constexpr float_t& __cordl_internal_get_activeVelocityThreshold();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr float_t const& __cordl_internal_get_despawnTime() const;

  constexpr float_t& __cordl_internal_get_despawnTime();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr float_t const& __cordl_internal_get_timeSinceLastUsed() const;

  constexpr float_t& __cordl_internal_get_timeSinceLastUsed();

  constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trail() const;

  constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trail();

  constexpr void __cordl_internal_set_activeVelocityThreshold(float_t value);

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_despawnTime(float_t value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_timeSinceLastUsed(float_t value);

  constexpr void __cordl_internal_set_trail(::UnityW<::UnityEngine::TrailRenderer> value);

  /// @brief Method .ctor, addr 0x2f66b80, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableImpactItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableImpactItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableImpactItem(ThrowableImpactItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableImpactItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableImpactItem(ThrowableImpactItem const&) = delete;

  /// @brief Field boundingCenter, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0xf4, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field isActive, offset: 0xf8, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field activeVelocityThreshold, offset: 0xfc, size: 0x4, def value: None
  float_t ___activeVelocityThreshold;

  /// @brief Field trail, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TrailRenderer> ___trail;

  /// @brief Field despawnTime, offset: 0x108, size: 0x4, def value: None
  float_t ___despawnTime;

  /// @brief Field timeSinceLastUsed, offset: 0x10c, size: 0x4, def value: None
  float_t ___timeSinceLastUsed;

  /// @brief Field defaultDespawnTime offset 0xffffffff size 0x4
  static constexpr float_t defaultDespawnTime{ 30.0 };

  /// @brief Field triggerMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerMessage{ u"trigger" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableImpactItem, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___boundingCenter) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___boundingRadius) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___isActive) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___activeVelocityThreshold) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___trail) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___despawnTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactItem, ___timeSinceLastUsed) == 0x10c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableImpactItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableImpactItem*, "", "ThrowableImpactItem");
