#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Downsampling)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Downsampling);
// Type: UnityEngine.Rendering.Universal::Downsampling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::Downsampling
struct CORDL_TYPE Downsampling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Downsampling_Unwrapped
  enum struct __Downsampling_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E__2xBilinear = static_cast<int32_t>(0x1),
    __E__4xBox = static_cast<int32_t>(0x2),
    __E__4xBilinear = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Downsampling_Unwrapped() const noexcept {
    return static_cast<__Downsampling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Downsampling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Downsampling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::Downsampling const None;

  /// @brief Field _2xBilinear value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::Downsampling const _2xBilinear;

  /// @brief Field _4xBilinear value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::Downsampling const _4xBilinear;

  /// @brief Field _4xBox value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::Downsampling const _4xBox;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Downsampling, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Downsampling, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Downsampling, "UnityEngine.Rendering.Universal", "Downsampling");
