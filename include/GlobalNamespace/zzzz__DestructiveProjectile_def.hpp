#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Projectile_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DestructiveProjectile)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DestructiveProjectile;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DestructiveProjectile);
// Type: ::DestructiveProjectile
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DestructiveProjectile*
class CORDL_TYPE DestructiveProjectile : public ::GlobalNamespace::Projectile {
public:
  // Declarations
  /// @brief Field itemKnockbackAmount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_itemKnockbackAmount, put = __cordl_internal_set_itemKnockbackAmount)) float_t itemKnockbackAmount;

  /// @brief Field minAllowedHitTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_minAllowedHitTime, put = __cordl_internal_set_minAllowedHitTime)) float_t minAllowedHitTime;

  /// @brief Field playerKnockbackAmount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_playerKnockbackAmount, put = __cordl_internal_set_playerKnockbackAmount)) float_t playerKnockbackAmount;

  /// @brief Field trailRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_trailRenderer, put = __cordl_internal_set_trailRenderer))::UnityW<::UnityEngine::TrailRenderer> trailRenderer;

  /// @brief Field verticalKnockbackAmount, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalKnockbackAmount, put = __cordl_internal_set_verticalKnockbackAmount)) float_t verticalKnockbackAmount;

  /// @brief Method DestroySelf, addr 0x1756458, size 0xf4, virtual true, abstract: false, final false
  inline void DestroySelf(::UnityEngine::Vector3 position);

  /// @brief Method GetDestroyPosition, addr 0x175635c, size 0x34, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDestroyPosition(::UnityEngine::Collider* other);

  /// @brief Method Initialize, addr 0x1755bd0, size 0xd4, virtual true, abstract: false, final false
  inline void Initialize(::StringW projectileID, bool isMaster, ::UnityEngine::Vector3 velocity);

  static inline ::GlobalNamespace::DestructiveProjectile* New_ctor();

  /// @brief Method OnHitMapObject, addr 0x17563f4, size 0x64, virtual true, abstract: false, final false
  inline void OnHitMapObject(::GlobalNamespace::MapObject* mapObject);

  /// @brief Method OnHitPlayer, addr 0x1756390, size 0x64, virtual true, abstract: false, final false
  inline void OnHitPlayer(::GlobalNamespace::Player* player);

  /// @brief Method OnImpact, addr 0x1756224, size 0x20, virtual true, abstract: false, final false
  inline void OnImpact(::UnityEngine::Collider* other);

  /// @brief Method OnTriggerEnter, addr 0x1755d5c, size 0x4c8, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* other);

  constexpr float_t const& __cordl_internal_get_itemKnockbackAmount() const;

  constexpr float_t& __cordl_internal_get_itemKnockbackAmount();

  constexpr float_t const& __cordl_internal_get_minAllowedHitTime() const;

  constexpr float_t& __cordl_internal_get_minAllowedHitTime();

  constexpr float_t const& __cordl_internal_get_playerKnockbackAmount() const;

  constexpr float_t& __cordl_internal_get_playerKnockbackAmount();

  constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get_trailRenderer() const;

  constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get_trailRenderer();

  constexpr float_t const& __cordl_internal_get_verticalKnockbackAmount() const;

  constexpr float_t& __cordl_internal_get_verticalKnockbackAmount();

  constexpr void __cordl_internal_set_itemKnockbackAmount(float_t value);

  constexpr void __cordl_internal_set_minAllowedHitTime(float_t value);

  constexpr void __cordl_internal_set_playerKnockbackAmount(float_t value);

  constexpr void __cordl_internal_set_trailRenderer(::UnityW<::UnityEngine::TrailRenderer> value);

  constexpr void __cordl_internal_set_verticalKnockbackAmount(float_t value);

  /// @brief Method .ctor, addr 0x17565e4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DestructiveProjectile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DestructiveProjectile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DestructiveProjectile(DestructiveProjectile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DestructiveProjectile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DestructiveProjectile(DestructiveProjectile const&) = delete;

  /// @brief Field playerKnockbackAmount, offset: 0x44, size: 0x4, def value: None
  float_t ___playerKnockbackAmount;

  /// @brief Field itemKnockbackAmount, offset: 0x48, size: 0x4, def value: None
  float_t ___itemKnockbackAmount;

  /// @brief Field verticalKnockbackAmount, offset: 0x4c, size: 0x4, def value: None
  float_t ___verticalKnockbackAmount;

  /// @brief Field trailRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TrailRenderer> ___trailRenderer;

  /// @brief Field minAllowedHitTime, offset: 0x58, size: 0x4, def value: None
  float_t ___minAllowedHitTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DestructiveProjectile, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructiveProjectile, ___playerKnockbackAmount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructiveProjectile, ___itemKnockbackAmount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructiveProjectile, ___verticalKnockbackAmount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructiveProjectile, ___trailRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructiveProjectile, ___minAllowedHitTime) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DestructiveProjectile);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DestructiveProjectile*, "", "DestructiveProjectile");
