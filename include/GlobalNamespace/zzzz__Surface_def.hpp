#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Surface)
// Forward declare root types
namespace GlobalNamespace {
class Surface;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Surface);
// Type: ::Surface
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Surface*
class CORDL_TYPE Surface : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field slipPercentage, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_slipPercentage, put = __cordl_internal_set_slipPercentage)) float_t slipPercentage;

  static inline ::GlobalNamespace::Surface* New_ctor();

  constexpr float_t const& __cordl_internal_get_slipPercentage() const;

  constexpr float_t& __cordl_internal_get_slipPercentage();

  constexpr void __cordl_internal_set_slipPercentage(float_t value);

  /// @brief Method .ctor, addr 0x29c7b18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Surface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Surface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Surface(Surface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Surface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Surface(Surface const&) = delete;

  /// @brief Field slipPercentage, offset: 0x18, size: 0x4, def value: None
  float_t ___slipPercentage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Surface, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Surface, ___slipPercentage) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Surface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Surface*, "", "Surface");
