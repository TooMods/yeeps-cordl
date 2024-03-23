#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExplosionEffect)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ExplosionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExplosionEffect);
// Type: ::ExplosionEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExplosionEffect*
class CORDL_TYPE ExplosionEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field destroysStuffedMapObjects, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_destroysStuffedMapObjects, put = __cordl_internal_set_destroysStuffedMapObjects)) bool destroysStuffedMapObjects;

  /// @brief Field doPlayerKnockback, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_doPlayerKnockback, put = __cordl_internal_set_doPlayerKnockback)) bool doPlayerKnockback;

  /// @brief Field explosionColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_explosionColor, put = __cordl_internal_set_explosionColor))::UnityEngine::Color explosionColor;

  /// @brief Field explosionColorAlpha, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_explosionColorAlpha, put = __cordl_internal_set_explosionColorAlpha)) float_t explosionColorAlpha;

  /// @brief Field explosionMat, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_explosionMat, put = __cordl_internal_set_explosionMat))::UnityW<::UnityEngine::Material> explosionMat;

  /// @brief Field mapObjectLayerMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mapObjectLayerMask, put = __cordl_internal_set_mapObjectLayerMask))::UnityEngine::LayerMask mapObjectLayerMask;

  /// @brief Field p, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) float_t p;

  /// @brief Field r, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  /// @brief Field radius, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field soundKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_soundKey, put = __cordl_internal_set_soundKey))::StringW soundKey;

  /// @brief Field statusEffect, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_statusEffect, put = __cordl_internal_set_statusEffect))::GlobalNamespace::__Player__StatusEffect statusEffect;

  /// @brief Field statusEffectDuration, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_statusEffectDuration, put = __cordl_internal_set_statusEffectDuration)) float_t statusEffectDuration;

  /// @brief Method Initialize, addr 0x29c4a10, size 0xa7c, virtual false, abstract: false, final false
  inline void Initialize(bool isMaster, float_t radius, float_t knockbackMultiplier);

  static inline ::GlobalNamespace::ExplosionEffect* New_ctor();

  /// @brief Method Update, addr 0x29c5fe4, size 0x15c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_destroysStuffedMapObjects() const;

  constexpr bool& __cordl_internal_get_destroysStuffedMapObjects();

  constexpr bool const& __cordl_internal_get_doPlayerKnockback() const;

  constexpr bool& __cordl_internal_get_doPlayerKnockback();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_explosionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_explosionColor();

  constexpr float_t const& __cordl_internal_get_explosionColorAlpha() const;

  constexpr float_t& __cordl_internal_get_explosionColorAlpha();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_explosionMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_explosionMat();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mapObjectLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mapObjectLayerMask();

  constexpr float_t const& __cordl_internal_get_p() const;

  constexpr float_t& __cordl_internal_get_p();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr ::StringW const& __cordl_internal_get_soundKey() const;

  constexpr ::StringW& __cordl_internal_get_soundKey();

  constexpr ::GlobalNamespace::__Player__StatusEffect const& __cordl_internal_get_statusEffect() const;

  constexpr ::GlobalNamespace::__Player__StatusEffect& __cordl_internal_get_statusEffect();

  constexpr float_t const& __cordl_internal_get_statusEffectDuration() const;

  constexpr float_t& __cordl_internal_get_statusEffectDuration();

  constexpr void __cordl_internal_set_destroysStuffedMapObjects(bool value);

  constexpr void __cordl_internal_set_doPlayerKnockback(bool value);

  constexpr void __cordl_internal_set_explosionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_explosionColorAlpha(float_t value);

  constexpr void __cordl_internal_set_explosionMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_mapObjectLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_p(float_t value);

  constexpr void __cordl_internal_set_r(float_t value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_soundKey(::StringW value);

  constexpr void __cordl_internal_set_statusEffect(::GlobalNamespace::__Player__StatusEffect value);

  constexpr void __cordl_internal_set_statusEffectDuration(float_t value);

  /// @brief Method .ctor, addr 0x29c6140, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplosionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExplosionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExplosionEffect(ExplosionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExplosionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExplosionEffect(ExplosionEffect const&) = delete;

  /// @brief Field mapObjectLayerMask, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___mapObjectLayerMask;

  /// @brief Field destroysStuffedMapObjects, offset: 0x1c, size: 0x1, def value: None
  bool ___destroysStuffedMapObjects;

  /// @brief Field doPlayerKnockback, offset: 0x1d, size: 0x1, def value: None
  bool ___doPlayerKnockback;

  /// @brief Field statusEffect, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__Player__StatusEffect ___statusEffect;

  /// @brief Field statusEffectDuration, offset: 0x24, size: 0x4, def value: None
  float_t ___statusEffectDuration;

  /// @brief Field soundKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___soundKey;

  /// @brief Field p, offset: 0x30, size: 0x4, def value: None
  float_t ___p;

  /// @brief Field r, offset: 0x34, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field radius, offset: 0x38, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field explosionMat, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___explosionMat;

  /// @brief Field explosionColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___explosionColor;

  /// @brief Field explosionColorAlpha, offset: 0x58, size: 0x4, def value: None
  float_t ___explosionColorAlpha;

  /// @brief Field duration offset 0xffffffff size 0x4
  static constexpr float_t duration{ 0.6 };

  /// @brief Field explosionRadiusForMaxParticleCount offset 0xffffffff size 0x4
  static constexpr float_t explosionRadiusForMaxParticleCount{ 3.0 };

  /// @brief Field explosionRadiusForMinParticleCount offset 0xffffffff size 0x4
  static constexpr float_t explosionRadiusForMinParticleCount{ 0.75 };

  /// @brief Field itemKnockbackLift offset 0xffffffff size 0x4
  static constexpr float_t itemKnockbackLift{ 0.5 };

  /// @brief Field itemKnockbackMultiplier offset 0xffffffff size 0x4
  static constexpr float_t itemKnockbackMultiplier{ 0.75 };

  /// @brief Field maxKnockbackForce offset 0xffffffff size 0x4
  static constexpr float_t maxKnockbackForce{ 15.0 };

  /// @brief Field maxParticleCountMultiplier offset 0xffffffff size 0x4
  static constexpr float_t maxParticleCountMultiplier{ 1.5 };

  /// @brief Field minKnockbackForce offset 0xffffffff size 0x4
  static constexpr float_t minKnockbackForce{ 4.0 };

  /// @brief Field minParticleCountMultiplier offset 0xffffffff size 0x4
  static constexpr float_t minParticleCountMultiplier{ 0.33 };

  /// @brief Field radiusToKnockbackForceRatio offset 0xffffffff size 0x4
  static constexpr float_t radiusToKnockbackForceRatio{ 4.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplosionEffect, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___mapObjectLayerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___destroysStuffedMapObjects) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___doPlayerKnockback) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___statusEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___statusEffectDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___soundKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___p) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___r) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___radius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___explosionMat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___explosionColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplosionEffect, ___explosionColorAlpha) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExplosionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplosionEffect*, "", "ExplosionEffect");
