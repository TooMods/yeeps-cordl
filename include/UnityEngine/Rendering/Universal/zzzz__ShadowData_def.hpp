#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShadowData);
// Type: UnityEngine.Rendering.Universal::ShadowData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ShadowData
struct CORDL_TYPE ShadowData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowData();

  // Ctor Parameters [CppParam { name: "supportsMainLightShadows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresScreenSpaceShadowResolve", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "mainLightShadowmapWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mainLightShadowmapHeight", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "mainLightShadowCascadesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mainLightShadowCascadesSplit", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "mainLightShadowCascadeBorder", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "supportsAdditionalLightShadows", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "additionalLightsShadowmapWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "additionalLightsShadowmapHeight", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportsSoftShadows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "shadowmapDepthBufferBits", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "bias", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: None }, CppParam { name: "resolution",
  // ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "isKeywordAdditionalLightShadowsEnabled", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "isKeywordSoftShadowsEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr ShadowData(bool supportsMainLightShadows, bool requiresScreenSpaceShadowResolve, int32_t mainLightShadowmapWidth, int32_t mainLightShadowmapHeight, int32_t mainLightShadowCascadesCount,
                       ::UnityEngine::Vector3 mainLightShadowCascadesSplit, float_t mainLightShadowCascadeBorder, bool supportsAdditionalLightShadows, int32_t additionalLightsShadowmapWidth,
                       int32_t additionalLightsShadowmapHeight, bool supportsSoftShadows, int32_t shadowmapDepthBufferBits, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias,
                       ::System::Collections::Generic::List_1<int32_t>* resolution, bool isKeywordAdditionalLightShadowsEnabled, bool isKeywordSoftShadowsEnabled) noexcept;

  /// @brief Field supportsMainLightShadows, offset: 0x0, size: 0x1, def value: None
  bool supportsMainLightShadows;

  /// @brief Field requiresScreenSpaceShadowResolve, offset: 0x1, size: 0x1, def value: None
  bool requiresScreenSpaceShadowResolve;

  /// @brief Field mainLightShadowmapWidth, offset: 0x4, size: 0x4, def value: None
  int32_t mainLightShadowmapWidth;

  /// @brief Field mainLightShadowmapHeight, offset: 0x8, size: 0x4, def value: None
  int32_t mainLightShadowmapHeight;

  /// @brief Field mainLightShadowCascadesCount, offset: 0xc, size: 0x4, def value: None
  int32_t mainLightShadowCascadesCount;

  /// @brief Field mainLightShadowCascadesSplit, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 mainLightShadowCascadesSplit;

  /// @brief Field mainLightShadowCascadeBorder, offset: 0x1c, size: 0x4, def value: None
  float_t mainLightShadowCascadeBorder;

  /// @brief Field supportsAdditionalLightShadows, offset: 0x20, size: 0x1, def value: None
  bool supportsAdditionalLightShadows;

  /// @brief Field additionalLightsShadowmapWidth, offset: 0x24, size: 0x4, def value: None
  int32_t additionalLightsShadowmapWidth;

  /// @brief Field additionalLightsShadowmapHeight, offset: 0x28, size: 0x4, def value: None
  int32_t additionalLightsShadowmapHeight;

  /// @brief Field supportsSoftShadows, offset: 0x2c, size: 0x1, def value: None
  bool supportsSoftShadows;

  /// @brief Field shadowmapDepthBufferBits, offset: 0x30, size: 0x4, def value: None
  int32_t shadowmapDepthBufferBits;

  /// @brief Field bias, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* bias;

  /// @brief Field resolution, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* resolution;

  /// @brief Field isKeywordAdditionalLightShadowsEnabled, offset: 0x48, size: 0x1, def value: None
  bool isKeywordAdditionalLightShadowsEnabled;

  /// @brief Field isKeywordSoftShadowsEnabled, offset: 0x49, size: 0x1, def value: None
  bool isKeywordSoftShadowsEnabled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowData, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, supportsMainLightShadows) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, requiresScreenSpaceShadowResolve) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, mainLightShadowmapWidth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, mainLightShadowmapHeight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, mainLightShadowCascadesCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, mainLightShadowCascadesSplit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, mainLightShadowCascadeBorder) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, supportsAdditionalLightShadows) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, additionalLightsShadowmapWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, additionalLightsShadowmapHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, supportsSoftShadows) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, shadowmapDepthBufferBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, bias) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, resolution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, isKeywordAdditionalLightShadowsEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowData, isKeywordSoftShadowsEnabled) == 0x49, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowData, "UnityEngine.Rendering.Universal", "ShadowData");
