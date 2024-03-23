#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerObjectData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PerObjectData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PerObjectData);
// Type: UnityEngine.Rendering::PerObjectData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::PerObjectData
struct CORDL_TYPE PerObjectData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerObjectData_Unwrapped
  enum struct __PerObjectData_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LightProbe = static_cast<int32_t>(0x1),
    __E_ReflectionProbes = static_cast<int32_t>(0x2),
    __E_LightProbeProxyVolume = static_cast<int32_t>(0x4),
    __E_Lightmaps = static_cast<int32_t>(0x8),
    __E_LightData = static_cast<int32_t>(0x10),
    __E_MotionVectors = static_cast<int32_t>(0x20),
    __E_LightIndices = static_cast<int32_t>(0x40),
    __E_ReflectionProbeData = static_cast<int32_t>(0x80),
    __E_OcclusionProbe = static_cast<int32_t>(0x100),
    __E_OcclusionProbeProxyVolume = static_cast<int32_t>(0x200),
    __E_ShadowMask = static_cast<int32_t>(0x400),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerObjectData_Unwrapped() const noexcept {
    return static_cast<__PerObjectData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerObjectData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerObjectData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LightData value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::PerObjectData const LightData;

  /// @brief Field LightIndices value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Rendering::PerObjectData const LightIndices;

  /// @brief Field LightProbe value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::PerObjectData const LightProbe;

  /// @brief Field LightProbeProxyVolume value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::PerObjectData const LightProbeProxyVolume;

  /// @brief Field Lightmaps value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::PerObjectData const Lightmaps;

  /// @brief Field MotionVectors value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::PerObjectData const MotionVectors;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::PerObjectData const None;

  /// @brief Field OcclusionProbe value: static_cast<int32_t>(0x100)
  static ::UnityEngine::Rendering::PerObjectData const OcclusionProbe;

  /// @brief Field OcclusionProbeProxyVolume value: static_cast<int32_t>(0x200)
  static ::UnityEngine::Rendering::PerObjectData const OcclusionProbeProxyVolume;

  /// @brief Field ReflectionProbeData value: static_cast<int32_t>(0x80)
  static ::UnityEngine::Rendering::PerObjectData const ReflectionProbeData;

  /// @brief Field ReflectionProbes value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::PerObjectData const ReflectionProbes;

  /// @brief Field ShadowMask value: static_cast<int32_t>(0x400)
  static ::UnityEngine::Rendering::PerObjectData const ShadowMask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PerObjectData, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PerObjectData, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PerObjectData, "UnityEngine.Rendering", "PerObjectData");
