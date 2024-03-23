#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PokeAxis)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
struct PokeAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::PokeAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::PokeAxis
struct CORDL_TYPE PokeAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PokeAxis_Unwrapped
  enum struct __PokeAxis_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_X = static_cast<int32_t>(0x1),
    __E_Y = static_cast<int32_t>(0x2),
    __E_Z = static_cast<int32_t>(0x3),
    __E_NegativeX = static_cast<int32_t>(0x4),
    __E_NegativeY = static_cast<int32_t>(0x5),
    __E_NegativeZ = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PokeAxis_Unwrapped() const noexcept {
    return static_cast<__PokeAxis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PokeAxis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PokeAxis(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NegativeX value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const NegativeX;

  /// @brief Field NegativeY value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const NegativeY;

  /// @brief Field NegativeZ value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const NegativeZ;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const None;

  /// @brief Field X value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis const Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeAxis, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeAxis");
