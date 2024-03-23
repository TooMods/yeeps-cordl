#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRViewCreateInfo)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct XRViewCreateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::XRViewCreateInfo);
// Type: UnityEngine.Rendering.Universal::XRViewCreateInfo
// SizeInfo { instance_size: 148, native_size: 148, calculated_instance_size: 148, calculated_native_size: 164, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::XRViewCreateInfo
struct CORDL_TYPE XRViewCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRViewCreateInfo();

  // Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRViewCreateInfo(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Rect viewport, int32_t textureArraySlice) noexcept;

  /// @brief Field projMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projMatrix;

  /// @brief Field viewMatrix, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field viewport, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field textureArraySlice, offset: 0x90, size: 0x4, def value: None
  int32_t textureArraySlice;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x94 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRViewCreateInfo, 0x94>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRViewCreateInfo, projMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRViewCreateInfo, viewMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRViewCreateInfo, viewport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRViewCreateInfo, textureArraySlice) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRViewCreateInfo, "UnityEngine.Rendering.Universal", "XRViewCreateInfo");
