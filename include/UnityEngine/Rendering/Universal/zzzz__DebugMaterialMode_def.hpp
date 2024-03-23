#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugMaterialMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugMaterialMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugMaterialMode);
// Type: UnityEngine.Rendering.Universal::DebugMaterialMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DebugMaterialMode
struct CORDL_TYPE DebugMaterialMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugMaterialMode_Unwrapped
  enum struct __DebugMaterialMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Albedo = static_cast<int32_t>(0x1),
    __E_Specular = static_cast<int32_t>(0x2),
    __E_Alpha = static_cast<int32_t>(0x3),
    __E_Smoothness = static_cast<int32_t>(0x4),
    __E_AmbientOcclusion = static_cast<int32_t>(0x5),
    __E_Emission = static_cast<int32_t>(0x6),
    __E_NormalWorldSpace = static_cast<int32_t>(0x7),
    __E_NormalTangentSpace = static_cast<int32_t>(0x8),
    __E_LightingComplexity = static_cast<int32_t>(0x9),
    __E_Metallic = static_cast<int32_t>(0xa),
    __E_SpriteMask = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugMaterialMode_Unwrapped() const noexcept {
    return static_cast<__DebugMaterialMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMaterialMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugMaterialMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Albedo value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Albedo;

  /// @brief Field Alpha value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Alpha;

  /// @brief Field AmbientOcclusion value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const AmbientOcclusion;

  /// @brief Field Emission value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Emission;

  /// @brief Field LightingComplexity value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const LightingComplexity;

  /// @brief Field Metallic value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Metallic;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const None;

  /// @brief Field NormalTangentSpace value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const NormalTangentSpace;

  /// @brief Field NormalWorldSpace value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const NormalWorldSpace;

  /// @brief Field Smoothness value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Smoothness;

  /// @brief Field Specular value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const Specular;

  /// @brief Field SpriteMask value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::Universal::DebugMaterialMode const SpriteMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugMaterialMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugMaterialMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugMaterialMode, "UnityEngine.Rendering.Universal", "DebugMaterialMode");
