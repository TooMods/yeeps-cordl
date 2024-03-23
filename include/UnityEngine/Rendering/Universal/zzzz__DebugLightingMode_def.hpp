#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugLightingMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugLightingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugLightingMode);
// Type: UnityEngine.Rendering.Universal::DebugLightingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DebugLightingMode
struct CORDL_TYPE DebugLightingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugLightingMode_Unwrapped
  enum struct __DebugLightingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ShadowCascades = static_cast<int32_t>(0x1),
    __E_LightingWithoutNormalMaps = static_cast<int32_t>(0x2),
    __E_LightingWithNormalMaps = static_cast<int32_t>(0x3),
    __E_Reflections = static_cast<int32_t>(0x4),
    __E_ReflectionsWithSmoothness = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugLightingMode_Unwrapped() const noexcept {
    return static_cast<__DebugLightingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugLightingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugLightingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LightingWithNormalMaps value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const LightingWithNormalMaps;

  /// @brief Field LightingWithoutNormalMaps value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const LightingWithoutNormalMaps;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const None;

  /// @brief Field Reflections value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const Reflections;

  /// @brief Field ReflectionsWithSmoothness value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const ReflectionsWithSmoothness;

  /// @brief Field ShadowCascades value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::DebugLightingMode const ShadowCascades;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugLightingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugLightingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugLightingMode, "UnityEngine.Rendering.Universal", "DebugLightingMode");
