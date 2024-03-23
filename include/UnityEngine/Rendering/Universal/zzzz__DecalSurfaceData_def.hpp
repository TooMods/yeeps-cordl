#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalSurfaceData)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalSurfaceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalSurfaceData);
// Type: UnityEngine.Rendering.Universal::DecalSurfaceData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DecalSurfaceData
struct CORDL_TYPE DecalSurfaceData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecalSurfaceData_Unwrapped
  enum struct __DecalSurfaceData_Unwrapped : int32_t {
    __E_Albedo = static_cast<int32_t>(0x0),
    __E_AlbedoNormal = static_cast<int32_t>(0x1),
    __E_AlbedoNormalMAOS = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecalSurfaceData_Unwrapped() const noexcept {
    return static_cast<__DecalSurfaceData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalSurfaceData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalSurfaceData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Albedo value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::DecalSurfaceData const Albedo;

  /// @brief Field AlbedoNormal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::DecalSurfaceData const AlbedoNormal;

  /// @brief Field AlbedoNormalMAOS value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::DecalSurfaceData const AlbedoNormalMAOS;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalSurfaceData, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSurfaceData, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalSurfaceData, "UnityEngine.Rendering.Universal", "DecalSurfaceData");
