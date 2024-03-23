#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleEffect)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleEffect);
// Type: ::SimpleEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleEffect*
class CORDL_TYPE SimpleEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field particleSystem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_particleSystem, put = __cordl_internal_set_particleSystem))::UnityW<::UnityEngine::ParticleSystem> particleSystem;

  /// @brief Field soundEffectKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_soundEffectKey, put = __cordl_internal_set_soundEffectKey))::StringW soundEffectKey;

  static inline ::GlobalNamespace::SimpleEffect* New_ctor();

  /// @brief Method SetParticleScale, addr 0x29c4988, size 0x88, virtual false, abstract: false, final false
  inline void SetParticleScale(float_t scale);

  /// @brief Method Start, addr 0x29c6684, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem();

  constexpr ::StringW const& __cordl_internal_get_soundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_soundEffectKey();

  constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_soundEffectKey(::StringW value);

  /// @brief Method .ctor, addr 0x29c6784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleEffect(SimpleEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleEffect(SimpleEffect const&) = delete;

  /// @brief Field particleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___particleSystem;

  /// @brief Field soundEffectKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___soundEffectKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleEffect, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEffect, ___particleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleEffect, ___soundEffectKey) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleEffect*, "", "SimpleEffect");
