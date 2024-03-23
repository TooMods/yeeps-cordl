#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClearFlag)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ClearFlag;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ClearFlag);
// Type: UnityEngine.Rendering::ClearFlag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ClearFlag
struct CORDL_TYPE ClearFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ClearFlag_Unwrapped
  enum struct __ClearFlag_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Color = static_cast<int32_t>(0x1),
    __E_Depth = static_cast<int32_t>(0x2),
    __E_Stencil = static_cast<int32_t>(0x4),
    __E_DepthStencil = static_cast<int32_t>(0x6),
    __E_ColorStencil = static_cast<int32_t>(0x5),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ClearFlag_Unwrapped() const noexcept {
    return static_cast<__ClearFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ClearFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ClearFlag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::ClearFlag const All;

  /// @brief Field Color value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ClearFlag const Color;

  /// @brief Field ColorStencil value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::ClearFlag const ColorStencil;

  /// @brief Field Depth value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ClearFlag const Depth;

  /// @brief Field DepthStencil value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::ClearFlag const DepthStencil;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::ClearFlag const None;

  /// @brief Field Stencil value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::ClearFlag const Stencil;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ClearFlag, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ClearFlag, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ClearFlag, "UnityEngine.Rendering", "ClearFlag");
