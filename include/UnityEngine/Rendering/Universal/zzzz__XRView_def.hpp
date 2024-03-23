#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRView)
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderParameter;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct XRView;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::XRView);
// Type: UnityEngine.Rendering.Universal::XRView
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::XRView
struct CORDL_TYPE XRView {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x288e3b0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Rect vp, int32_t dstSlice);

  /// @brief Method .ctor, addr 0x288e3e4, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass renderPass, ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter renderParameter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRView();

  // Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "",
  // def_value: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRView(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh,
                   int32_t textureArraySlice) noexcept;

  /// @brief Field projMatrix, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projMatrix;

  /// @brief Field viewMatrix, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field viewport, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field occlusionMesh, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> occlusionMesh;

  /// @brief Field textureArraySlice, offset: 0x98, size: 0x4, def value: None
  int32_t textureArraySlice;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRView, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRView, projMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRView, viewMatrix) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRView, viewport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRView, occlusionMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRView, textureArraySlice) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRView, "UnityEngine.Rendering.Universal", "XRView");
