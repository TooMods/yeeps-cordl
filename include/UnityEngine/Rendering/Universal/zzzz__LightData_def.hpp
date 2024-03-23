#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightData)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightData);
// Type: UnityEngine.Rendering.Universal::LightData
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 70, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightData
struct CORDL_TYPE LightData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightData();

  // Ctor Parameters [CppParam { name: "mainLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "additionalLightsCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "maxPerObjectAdditionalLightsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleLights", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None }, CppParam { name: "originalIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "shadeAdditionalLightsPerVertex", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "supportsMixedLighting", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "reflectionProbeBoxProjection", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "reflectionProbeBlending", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportsLightLayers", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "supportsAdditionalLights", ty: "bool", modifiers: "", def_value: None }]
  constexpr LightData(int32_t mainLightIndex, int32_t additionalLightsCount, int32_t maxPerObjectAdditionalLightsCount,
                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights, ::Unity::Collections::NativeArray_1<int32_t> originalIndices,
                      bool shadeAdditionalLightsPerVertex, bool supportsMixedLighting, bool reflectionProbeBoxProjection, bool reflectionProbeBlending, bool supportsLightLayers,
                      bool supportsAdditionalLights) noexcept;

  /// @brief Field mainLightIndex, offset: 0x0, size: 0x4, def value: None
  int32_t mainLightIndex;

  /// @brief Field additionalLightsCount, offset: 0x4, size: 0x4, def value: None
  int32_t additionalLightsCount;

  /// @brief Field maxPerObjectAdditionalLightsCount, offset: 0x8, size: 0x4, def value: None
  int32_t maxPerObjectAdditionalLightsCount;

  /// @brief Field visibleLights, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights;

  /// @brief Field originalIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> originalIndices;

  /// @brief Field shadeAdditionalLightsPerVertex, offset: 0x30, size: 0x1, def value: None
  bool shadeAdditionalLightsPerVertex;

  /// @brief Field supportsMixedLighting, offset: 0x31, size: 0x1, def value: None
  bool supportsMixedLighting;

  /// @brief Field reflectionProbeBoxProjection, offset: 0x32, size: 0x1, def value: None
  bool reflectionProbeBoxProjection;

  /// @brief Field reflectionProbeBlending, offset: 0x33, size: 0x1, def value: None
  bool reflectionProbeBlending;

  /// @brief Field supportsLightLayers, offset: 0x34, size: 0x1, def value: None
  bool supportsLightLayers;

  /// @brief Field supportsAdditionalLights, offset: 0x35, size: 0x1, def value: None
  bool supportsAdditionalLights;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightData, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, mainLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, additionalLightsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, maxPerObjectAdditionalLightsCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, visibleLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, originalIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, shadeAdditionalLightsPerVertex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, supportsMixedLighting) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, reflectionProbeBoxProjection) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, reflectionProbeBlending) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, supportsLightLayers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightData, supportsAdditionalLights) == 0x35, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightData, "UnityEngine.Rendering.Universal", "LightData");
