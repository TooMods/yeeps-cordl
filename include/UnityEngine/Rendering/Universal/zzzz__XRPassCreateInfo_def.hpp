#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRPassCreateInfo)
namespace UnityEngine::Rendering::Universal {
class __XRPass__CustomMirrorView;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct XRPassCreateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::XRPassCreateInfo);
// Type: UnityEngine.Rendering.Universal::XRPassCreateInfo
// SizeInfo { instance_size: 1656, native_size: -1, calculated_instance_size: 1656, calculated_native_size: 1672, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::XRPassCreateInfo
struct CORDL_TYPE XRPassCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPassCreateInfo();

  // Ctor Parameters [CppParam { name: "multipassId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingPassId", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "renderTarget", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers:
  // "", def_value: None }, CppParam { name: "renderTargetIsRenderTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingParameters", ty:
  // "::UnityEngine::Rendering::ScriptableCullingParameters", modifiers: "", def_value: None }, CppParam { name: "customMirrorView", ty:
  // "::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView*", modifiers: "", def_value: None }]
  constexpr XRPassCreateInfo(int32_t multipassId, int32_t cullingPassId, ::UnityW<::UnityEngine::RenderTexture> renderTarget, ::UnityEngine::RenderTextureDescriptor renderTargetDesc,
                             bool renderTargetIsRenderTexture, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
                             ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* customMirrorView) noexcept;

  /// @brief Field multipassId, offset: 0x0, size: 0x4, def value: None
  int32_t multipassId;

  /// @brief Field cullingPassId, offset: 0x4, size: 0x4, def value: None
  int32_t cullingPassId;

  /// @brief Field renderTarget, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> renderTarget;

  /// @brief Field renderTargetDesc, offset: 0x10, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  /// @brief Field renderTargetIsRenderTexture, offset: 0x44, size: 0x1, def value: None
  bool renderTargetIsRenderTexture;

  /// @brief Field cullingParameters, offset: 0x48, size: 0x628, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters;

  /// @brief Field customMirrorView, offset: 0x670, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* customMirrorView;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRPassCreateInfo, 0x678>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, multipassId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, cullingPassId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, renderTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, renderTargetDesc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, renderTargetIsRenderTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, cullingParameters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPassCreateInfo, customMirrorView) == 0x670, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRPassCreateInfo, "UnityEngine.Rendering.Universal", "XRPassCreateInfo");
