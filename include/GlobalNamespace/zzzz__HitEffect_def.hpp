#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HitEffect)
// Forward declare root types
namespace GlobalNamespace {
class HitEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HitEffect);
// Type: ::HitEffect
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitEffect*
class CORDL_TYPE HitEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field duration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Method Initialize, addr 0x29c5d9c, size 0x7c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::HitEffect* New_ctor();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x29c6148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HitEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HitEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HitEffect(HitEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HitEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HitEffect(HitEffect const&) = delete;

  /// @brief Field duration, offset: 0x18, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field renderRange offset 0xffffffff size 0x4
  static constexpr float_t renderRange{ 15.0 };

  /// @brief Field renderRangeSqr offset 0xffffffff size 0x4
  static constexpr float_t renderRangeSqr{ 225.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HitEffect, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HitEffect, ___duration) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HitEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HitEffect*, "", "HitEffect");
