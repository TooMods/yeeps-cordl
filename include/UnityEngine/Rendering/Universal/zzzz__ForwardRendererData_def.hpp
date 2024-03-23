#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
CORDL_MODULE_EXPORT(ForwardRendererData)
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class StencilStateData;
}
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine::Rendering::Universal {
class __ForwardRendererData__ShaderResources;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ForwardRendererData;
}
namespace UnityEngine::Rendering::Universal {
class __ForwardRendererData__ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ForwardRendererData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources);
// Type: ::ShaderResources
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ForwardRendererData::ShaderResources*
class CORDL_TYPE __ForwardRendererData__ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field blitPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blitPS, put = __cordl_internal_set_blitPS))::UnityW<::UnityEngine::Shader> blitPS;

  /// @brief Field cameraMotionVector, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionVector, put = __cordl_internal_set_cameraMotionVector))::UnityW<::UnityEngine::Shader> cameraMotionVector;

  /// @brief Field copyDepthPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_copyDepthPS, put = __cordl_internal_set_copyDepthPS))::UnityW<::UnityEngine::Shader> copyDepthPS;

  /// @brief Field coreBlitColorAndDepthPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_coreBlitColorAndDepthPS, put = __cordl_internal_set_coreBlitColorAndDepthPS))::UnityW<::UnityEngine::Shader> coreBlitColorAndDepthPS;

  /// @brief Field coreBlitPS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_coreBlitPS, put = __cordl_internal_set_coreBlitPS))::UnityW<::UnityEngine::Shader> coreBlitPS;

  /// @brief Field fallbackErrorPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackErrorPS, put = __cordl_internal_set_fallbackErrorPS))::UnityW<::UnityEngine::Shader> fallbackErrorPS;

  /// @brief Field materialErrorPS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_materialErrorPS, put = __cordl_internal_set_materialErrorPS))::UnityW<::UnityEngine::Shader> materialErrorPS;

  /// @brief Field objectMotionVector, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_objectMotionVector, put = __cordl_internal_set_objectMotionVector))::UnityW<::UnityEngine::Shader> objectMotionVector;

  /// @brief Field samplingPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_samplingPS, put = __cordl_internal_set_samplingPS))::UnityW<::UnityEngine::Shader> samplingPS;

  /// @brief Field screenSpaceShadowPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_screenSpaceShadowPS, put = __cordl_internal_set_screenSpaceShadowPS))::UnityW<::UnityEngine::Shader> screenSpaceShadowPS;

  /// @brief Field stencilDeferredPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilDeferredPS, put = __cordl_internal_set_stencilDeferredPS))::UnityW<::UnityEngine::Shader> stencilDeferredPS;

  static inline ::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_blitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_blitPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_cameraMotionVector() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_cameraMotionVector();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copyDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copyDepthPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_coreBlitColorAndDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_coreBlitColorAndDepthPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_coreBlitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_coreBlitPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_fallbackErrorPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_fallbackErrorPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_materialErrorPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_materialErrorPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_objectMotionVector() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_objectMotionVector();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_samplingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_samplingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_screenSpaceShadowPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_screenSpaceShadowPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_stencilDeferredPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_stencilDeferredPS();

  constexpr void __cordl_internal_set_blitPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_cameraMotionVector(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_copyDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_coreBlitColorAndDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_coreBlitPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_fallbackErrorPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_materialErrorPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_objectMotionVector(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_samplingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_screenSpaceShadowPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_stencilDeferredPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x2e275ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ForwardRendererData__ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ForwardRendererData__ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ForwardRendererData__ShaderResources(__ForwardRendererData__ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ForwardRendererData__ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ForwardRendererData__ShaderResources(__ForwardRendererData__ShaderResources const&) = delete;

  /// @brief Field blitPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___blitPS;

  /// @brief Field copyDepthPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___copyDepthPS;

  /// @brief Field screenSpaceShadowPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___screenSpaceShadowPS;

  /// @brief Field samplingPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___samplingPS;

  /// @brief Field stencilDeferredPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___stencilDeferredPS;

  /// @brief Field fallbackErrorPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___fallbackErrorPS;

  /// @brief Field materialErrorPS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___materialErrorPS;

  /// @brief Field coreBlitPS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___coreBlitPS;

  /// @brief Field coreBlitColorAndDepthPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___coreBlitColorAndDepthPS;

  /// @brief Field cameraMotionVector, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___cameraMotionVector;

  /// @brief Field objectMotionVector, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___objectMotionVector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___blitPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___copyDepthPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___screenSpaceShadowPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___samplingPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___stencilDeferredPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___fallbackErrorPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___materialErrorPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___coreBlitPS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___coreBlitColorAndDepthPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___cameraMotionVector) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources, ___objectMotionVector) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ForwardRendererData
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ForwardRendererData*
class CORDL_TYPE ForwardRendererData : public ::UnityEngine::Rendering::Universal::ScriptableRendererData {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources;

  __declspec(property(get = get_accurateGbufferNormals, put = set_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_defaultStencilState, put = set_defaultStencilState))::UnityEngine::Rendering::Universal::StencilStateData* defaultStencilState;

  /// @brief Field m_AccurateGbufferNormals, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AccurateGbufferNormals, put = __cordl_internal_set_m_AccurateGbufferNormals)) bool m_AccurateGbufferNormals;

  /// @brief Field m_ClusteredRendering, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClusteredRendering, put = __cordl_internal_set_m_ClusteredRendering)) bool m_ClusteredRendering;

  /// @brief Field m_DefaultStencilState, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState))::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState;

  /// @brief Field m_DepthPrimingMode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode))::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_OpaqueLayerMask, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpaqueLayerMask, put = __cordl_internal_set_m_OpaqueLayerMask))::UnityEngine::LayerMask m_OpaqueLayerMask;

  /// @brief Field m_RenderingMode, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode))::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_ShadowTransparentReceive, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShadowTransparentReceive, put = __cordl_internal_set_m_ShadowTransparentReceive)) bool m_ShadowTransparentReceive;

  /// @brief Field m_TileSize, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TileSize, put = __cordl_internal_set_m_TileSize))::UnityEngine::Rendering::Universal::TileSize m_TileSize;

  /// @brief Field m_TransparentLayerMask, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransparentLayerMask, put = __cordl_internal_set_m_TransparentLayerMask))::UnityEngine::LayerMask m_TransparentLayerMask;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask))::UnityEngine::LayerMask opaqueLayerMask;

  /// @brief Field postProcessData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_postProcessData, put = __cordl_internal_set_postProcessData))::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> postProcessData;

  __declspec(property(get = get_renderingMode, put = set_renderingMode))::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  /// @brief Field shaders, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders))::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources* shaders;

  __declspec(property(get = get_shadowTransparentReceive, put = set_shadowTransparentReceive)) bool shadowTransparentReceive;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask))::UnityEngine::LayerMask transparentLayerMask;

  /// @brief Field xrSystemData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xrSystemData, put = __cordl_internal_set_xrSystemData))::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> xrSystemData;

  /// @brief Method Create, addr 0x2e27128, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  static inline ::UnityEngine::Rendering::Universal::ForwardRendererData* New_ctor();

  constexpr bool const& __cordl_internal_get_m_AccurateGbufferNormals() const;

  constexpr bool& __cordl_internal_get_m_AccurateGbufferNormals();

  constexpr bool const& __cordl_internal_get_m_ClusteredRendering() const;

  constexpr bool& __cordl_internal_get_m_ClusteredRendering();

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::StencilStateData*> const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_OpaqueLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_OpaqueLayerMask();

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get_m_RenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get_m_RenderingMode();

  constexpr bool const& __cordl_internal_get_m_ShadowTransparentReceive() const;

  constexpr bool& __cordl_internal_get_m_ShadowTransparentReceive();

  constexpr ::UnityEngine::Rendering::Universal::TileSize const& __cordl_internal_get_m_TileSize() const;

  constexpr ::UnityEngine::Rendering::Universal::TileSize& __cordl_internal_get_m_TileSize();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_TransparentLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_TransparentLayerMask();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_postProcessData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_postProcessData();

  constexpr ::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources*& __cordl_internal_get_shaders();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources*> const& __cordl_internal_get_shaders() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& __cordl_internal_get_xrSystemData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& __cordl_internal_get_xrSystemData();

  constexpr void __cordl_internal_set_m_AccurateGbufferNormals(bool value);

  constexpr void __cordl_internal_set_m_ClusteredRendering(bool value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set_m_ShadowTransparentReceive(bool value);

  constexpr void __cordl_internal_set_m_TileSize(::UnityEngine::Rendering::Universal::TileSize value);

  constexpr void __cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources* value);

  constexpr void __cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value);

  /// @brief Method .ctor, addr 0x2e275a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_accurateGbufferNormals, addr 0x2e27504, size 0x50, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_defaultStencilState, addr 0x2e27324, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState();

  /// @brief Method get_opaqueLayerMask, addr 0x2e271e4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// @brief Method get_renderingMode, addr 0x2e27464, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  /// @brief Method get_shadowTransparentReceive, addr 0x2e273c4, size 0x50, virtual false, abstract: false, final false
  inline bool get_shadowTransparentReceive();

  /// @brief Method get_transparentLayerMask, addr 0x2e27284, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// @brief Method set_accurateGbufferNormals, addr 0x2e27554, size 0x50, virtual false, abstract: false, final false
  inline void set_accurateGbufferNormals(bool value);

  /// @brief Method set_defaultStencilState, addr 0x2e27374, size 0x50, virtual false, abstract: false, final false
  inline void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  /// @brief Method set_opaqueLayerMask, addr 0x2e27234, size 0x50, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_renderingMode, addr 0x2e274b4, size 0x50, virtual false, abstract: false, final false
  inline void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  /// @brief Method set_shadowTransparentReceive, addr 0x2e27414, size 0x50, virtual false, abstract: false, final false
  inline void set_shadowTransparentReceive(bool value);

  /// @brief Method set_transparentLayerMask, addr 0x2e272d4, size 0x50, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardRendererData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardRendererData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardRendererData(ForwardRendererData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardRendererData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardRendererData(ForwardRendererData const&) = delete;

  /// @brief Field shaders, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources* ___shaders;

  /// @brief Field postProcessData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___postProcessData;

  /// @brief Field xrSystemData, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> ___xrSystemData;

  /// @brief Field m_OpaqueLayerMask, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_OpaqueLayerMask;

  /// @brief Field m_TransparentLayerMask, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_TransparentLayerMask;

  /// @brief Field m_DefaultStencilState, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilStateData* ___m_DefaultStencilState;

  /// @brief Field m_ShadowTransparentReceive, offset: 0x68, size: 0x1, def value: None
  bool ___m_ShadowTransparentReceive;

  /// @brief Field m_RenderingMode, offset: 0x6c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_AccurateGbufferNormals, offset: 0x74, size: 0x1, def value: None
  bool ___m_AccurateGbufferNormals;

  /// @brief Field m_ClusteredRendering, offset: 0x75, size: 0x1, def value: None
  bool ___m_ClusteredRendering;

  /// @brief Field m_TileSize, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::TileSize ___m_TileSize;

  /// @brief Field k_ErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ErrorMessage{ u"ForwardRendererData has been deprecated. Use UniversalRendererData instead" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ForwardRendererData, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___shaders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___postProcessData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___xrSystemData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_OpaqueLayerMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_TransparentLayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_DefaultStencilState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_ShadowTransparentReceive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_RenderingMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_DepthPrimingMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_AccurateGbufferNormals) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_ClusteredRendering) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ForwardRendererData, ___m_TileSize) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ForwardRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ForwardRendererData*, "UnityEngine.Rendering.Universal", "ForwardRendererData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ForwardRendererData__ShaderResources*, "UnityEngine.Rendering.Universal", "ForwardRendererData/ShaderResources");
