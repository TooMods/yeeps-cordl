#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cardinal)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct Cardinal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs::Cardinal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs::Cardinal
struct CORDL_TYPE Cardinal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Cardinal_Unwrapped
  enum struct __Cardinal_Unwrapped : int32_t {
    __E_North = static_cast<int32_t>(0x0),
    __E_South = static_cast<int32_t>(0x1),
    __E_East = static_cast<int32_t>(0x2),
    __E_West = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Cardinal_Unwrapped() const noexcept {
    return static_cast<__Cardinal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cardinal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cardinal(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field East value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal const East;

  /// @brief Field North value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal const North;

  /// @brief Field South value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal const South;

  /// @brief Field West value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal const West;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal, "UnityEngine.XR.Interaction.Toolkit.Inputs", "Cardinal");
