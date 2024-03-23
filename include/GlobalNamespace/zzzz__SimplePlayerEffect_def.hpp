#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimplePlayerEffect)
namespace GlobalNamespace {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class SimplePlayerEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimplePlayerEffect);
// Type: ::SimplePlayerEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimplePlayerEffect*
class CORDL_TYPE SimplePlayerEffect : public ::GlobalNamespace::PlayerEffect {
public:
  // Declarations
  /// @brief Field duration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Method Initialize, addr 0x29c678c, size 0x94, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::Player* player);

  static inline ::GlobalNamespace::SimplePlayerEffect* New_ctor();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x29c6820, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePlayerEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimplePlayerEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePlayerEffect(SimplePlayerEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePlayerEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePlayerEffect(SimplePlayerEffect const&) = delete;

  /// @brief Field duration, offset: 0x30, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimplePlayerEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimplePlayerEffect, ___duration) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimplePlayerEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimplePlayerEffect*, "", "SimplePlayerEffect");
