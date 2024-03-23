#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ExplosionType_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableImpactItem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowableImpactBombItem)
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableImpactBombItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableImpactBombItem);
// Type: ::ThrowableImpactBombItem
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableImpactBombItem*
class CORDL_TYPE ThrowableImpactBombItem : public ::GlobalNamespace::ThrowableImpactItem {
public:
  // Declarations
  /// @brief Field directImpactStatusEffect, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_directImpactStatusEffect, put = __cordl_internal_set_directImpactStatusEffect))::GlobalNamespace::__Player__StatusEffect directImpactStatusEffect;

  /// @brief Field directImpactStatusEffectDuration, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_directImpactStatusEffectDuration, put = __cordl_internal_set_directImpactStatusEffectDuration)) float_t directImpactStatusEffectDuration;

  /// @brief Field explosionRadius, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionRadius, put = __cordl_internal_set_explosionRadius)) float_t explosionRadius;

  /// @brief Field explosionType, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionType, put = __cordl_internal_set_explosionType))::GlobalNamespace::ExplosionType explosionType;

  /// @brief Method DoesCollideWithPlayers, addr 0x2f6693c, size 0x8, virtual true, abstract: false, final false
  inline bool DoesCollideWithPlayers();

  static inline ::GlobalNamespace::ThrowableImpactBombItem* New_ctor();

  /// @brief Method OnImpactTriggered, addr 0x2f66944, size 0x22c, virtual true, abstract: false, final false
  inline void OnImpactTriggered(::UnityEngine::Collision* collision);

  constexpr ::GlobalNamespace::__Player__StatusEffect const& __cordl_internal_get_directImpactStatusEffect() const;

  constexpr ::GlobalNamespace::__Player__StatusEffect& __cordl_internal_get_directImpactStatusEffect();

  constexpr float_t const& __cordl_internal_get_directImpactStatusEffectDuration() const;

  constexpr float_t& __cordl_internal_get_directImpactStatusEffectDuration();

  constexpr float_t const& __cordl_internal_get_explosionRadius() const;

  constexpr float_t& __cordl_internal_get_explosionRadius();

  constexpr ::GlobalNamespace::ExplosionType const& __cordl_internal_get_explosionType() const;

  constexpr ::GlobalNamespace::ExplosionType& __cordl_internal_get_explosionType();

  constexpr void __cordl_internal_set_directImpactStatusEffect(::GlobalNamespace::__Player__StatusEffect value);

  constexpr void __cordl_internal_set_directImpactStatusEffectDuration(float_t value);

  constexpr void __cordl_internal_set_explosionRadius(float_t value);

  constexpr void __cordl_internal_set_explosionType(::GlobalNamespace::ExplosionType value);

  /// @brief Method .ctor, addr 0x2f66b70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableImpactBombItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableImpactBombItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableImpactBombItem(ThrowableImpactBombItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableImpactBombItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableImpactBombItem(ThrowableImpactBombItem const&) = delete;

  /// @brief Field directImpactStatusEffect, offset: 0x110, size: 0x4, def value: None
  ::GlobalNamespace::__Player__StatusEffect ___directImpactStatusEffect;

  /// @brief Field directImpactStatusEffectDuration, offset: 0x114, size: 0x4, def value: None
  float_t ___directImpactStatusEffectDuration;

  /// @brief Field explosionType, offset: 0x118, size: 0x4, def value: None
  ::GlobalNamespace::ExplosionType ___explosionType;

  /// @brief Field explosionRadius, offset: 0x11c, size: 0x4, def value: None
  float_t ___explosionRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableImpactBombItem, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactBombItem, ___directImpactStatusEffect) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactBombItem, ___directImpactStatusEffectDuration) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactBombItem, ___explosionType) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableImpactBombItem, ___explosionRadius) == 0x11c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableImpactBombItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableImpactBombItem*, "", "ThrowableImpactBombItem");
