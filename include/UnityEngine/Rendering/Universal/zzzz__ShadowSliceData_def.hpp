#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowSliceData)
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ShadowSliceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ShadowSliceData);
// Type: UnityEngine.Rendering.Universal::ShadowSliceData
// SizeInfo { instance_size: 392, native_size: 392, calculated_instance_size: 392, calculated_native_size: 408, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ShadowSliceData
struct CORDL_TYPE ShadowSliceData {
public:
  // Declarations
  /// @brief Method Clear, addr 0x2731320, size 0x90, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowSliceData();

  // Ctor Parameters [CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "projectionMatrix", ty: "::UnityEngine::Matrix4x4", modifiers:
  // "", def_value: None }, CppParam { name: "shadowTransform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "offsetX", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "offsetY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "splitData",
  // ty: "::UnityEngine::Rendering::ShadowSplitData", modifiers: "", def_value: None }]
  constexpr ShadowSliceData(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 shadowTransform, int32_t offsetX, int32_t offsetY,
                            int32_t resolution, ::UnityEngine::Rendering::ShadowSplitData splitData) noexcept;

  /// @brief Field viewMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field projectionMatrix, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projectionMatrix;

  /// @brief Field shadowTransform, offset: 0x80, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 shadowTransform;

  /// @brief Field offsetX, offset: 0xc0, size: 0x4, def value: None
  int32_t offsetX;

  /// @brief Field offsetY, offset: 0xc4, size: 0x4, def value: None
  int32_t offsetY;

  /// @brief Field resolution, offset: 0xc8, size: 0x4, def value: None
  int32_t resolution;

  /// @brief Field splitData, offset: 0xcc, size: 0xbc, def value: None
  ::UnityEngine::Rendering::ShadowSplitData splitData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowSliceData, 0x188>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, viewMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, projectionMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, shadowTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, offsetX) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, offsetY) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, resolution) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShadowSliceData, splitData) == 0xcc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowSliceData, "UnityEngine.Rendering.Universal", "ShadowSliceData");
