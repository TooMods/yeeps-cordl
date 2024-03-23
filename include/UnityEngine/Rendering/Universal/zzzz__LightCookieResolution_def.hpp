#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieResolution)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightCookieResolution;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightCookieResolution);
// Type: UnityEngine.Rendering.Universal::LightCookieResolution
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightCookieResolution
struct CORDL_TYPE LightCookieResolution {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightCookieResolution_Unwrapped
  enum struct __LightCookieResolution_Unwrapped : int32_t {
    __E__256 = static_cast<int32_t>(0x100),
    __E__512 = static_cast<int32_t>(0x200),
    __E__1024 = static_cast<int32_t>(0x400),
    __E__2048 = static_cast<int32_t>(0x800),
    __E__4096 = static_cast<int32_t>(0x1000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightCookieResolution_Unwrapped() const noexcept {
    return static_cast<__LightCookieResolution_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightCookieResolution();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightCookieResolution(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field _1024 value: static_cast<int32_t>(0x400)
  static ::UnityEngine::Rendering::Universal::LightCookieResolution const _1024;

  /// @brief Field _2048 value: static_cast<int32_t>(0x800)
  static ::UnityEngine::Rendering::Universal::LightCookieResolution const _2048;

  /// @brief Field _256 value: static_cast<int32_t>(0x100)
  static ::UnityEngine::Rendering::Universal::LightCookieResolution const _256;

  /// @brief Field _4096 value: static_cast<int32_t>(0x1000)
  static ::UnityEngine::Rendering::Universal::LightCookieResolution const _4096;

  /// @brief Field _512 value: static_cast<int32_t>(0x200)
  static ::UnityEngine::Rendering::Universal::LightCookieResolution const _512;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightCookieResolution, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieResolution, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieResolution, "UnityEngine.Rendering.Universal", "LightCookieResolution");
