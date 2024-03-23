#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRendererData)
namespace UnityEngine::Rendering::Universal {
struct CopyDepthMode;
}
namespace UnityEngine::Rendering::Universal {
struct DepthPrimingMode;
}
namespace UnityEngine::Rendering::Universal {
struct IntermediateTextureMode;
}
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
struct TileSize;
}
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRendererData__ShaderResources;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRendererData__ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRendererData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources);
// Type: ::ShaderResources
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UniversalRendererData::ShaderResources*
class CORDL_TYPE __UniversalRendererData__ShaderResources : public ::System::Object {
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

  static inline ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* New_ctor();

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

  /// @brief Method .ctor, addr 0x2882dac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRendererData__ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRendererData__ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRendererData__ShaderResources(__UniversalRendererData__ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRendererData__ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRendererData__ShaderResources(__UniversalRendererData__ShaderResources const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___blitPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___copyDepthPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___screenSpaceShadowPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___samplingPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___stencilDeferredPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___fallbackErrorPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___materialErrorPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___coreBlitPS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___coreBlitColorAndDepthPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___cameraMotionVector) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources, ___objectMotionVector) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::UniversalRendererData
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::UniversalRendererData*
class CORDL_TYPE UniversalRendererData : public ::UnityEngine::Rendering::Universal::ScriptableRendererData {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources;

  __declspec(property(get = get_accurateGbufferNormals, put = set_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_clusteredRendering, put = set_clusteredRendering)) bool clusteredRendering;

  __declspec(property(get = get_copyDepthMode, put = set_copyDepthMode))::UnityEngine::Rendering::Universal::CopyDepthMode copyDepthMode;

  __declspec(property(get = get_defaultStencilState, put = set_defaultStencilState))::UnityEngine::Rendering::Universal::StencilStateData* defaultStencilState;

  __declspec(property(get = get_depthPrimingMode, put = set_depthPrimingMode))::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode;

  __declspec(property(get = get_intermediateTextureMode, put = set_intermediateTextureMode))::UnityEngine::Rendering::Universal::IntermediateTextureMode intermediateTextureMode;

  /// @brief Field m_AccurateGbufferNormals, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AccurateGbufferNormals, put = __cordl_internal_set_m_AccurateGbufferNormals)) bool m_AccurateGbufferNormals;

  /// @brief Field m_AssetVersion, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AssetVersion, put = __cordl_internal_set_m_AssetVersion)) int32_t m_AssetVersion;

  /// @brief Field m_ClusteredRendering, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClusteredRendering, put = __cordl_internal_set_m_ClusteredRendering)) bool m_ClusteredRendering;

  /// @brief Field m_CopyDepthMode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMode, put = __cordl_internal_set_m_CopyDepthMode))::UnityEngine::Rendering::Universal::CopyDepthMode m_CopyDepthMode;

  /// @brief Field m_DefaultStencilState, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState))::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState;

  /// @brief Field m_DepthPrimingMode, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode))::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_IntermediateTextureMode, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntermediateTextureMode,
                      put = __cordl_internal_set_m_IntermediateTextureMode))::UnityEngine::Rendering::Universal::IntermediateTextureMode m_IntermediateTextureMode;

  /// @brief Field m_OpaqueLayerMask, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpaqueLayerMask, put = __cordl_internal_set_m_OpaqueLayerMask))::UnityEngine::LayerMask m_OpaqueLayerMask;

  /// @brief Field m_RenderingMode, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode))::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_ShadowTransparentReceive, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShadowTransparentReceive, put = __cordl_internal_set_m_ShadowTransparentReceive)) bool m_ShadowTransparentReceive;

  /// @brief Field m_TileSize, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TileSize, put = __cordl_internal_set_m_TileSize))::UnityEngine::Rendering::Universal::TileSize m_TileSize;

  /// @brief Field m_TransparentLayerMask, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransparentLayerMask, put = __cordl_internal_set_m_TransparentLayerMask))::UnityEngine::LayerMask m_TransparentLayerMask;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask))::UnityEngine::LayerMask opaqueLayerMask;

  /// @brief Field postProcessData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_postProcessData, put = __cordl_internal_set_postProcessData))::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> postProcessData;

  __declspec(property(get = get_renderingMode, put = set_renderingMode))::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  /// @brief Field shaders, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders))::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* shaders;

  __declspec(property(get = get_shadowTransparentReceive, put = set_shadowTransparentReceive)) bool shadowTransparentReceive;

  __declspec(property(get = get_tileSize, put = set_tileSize))::UnityEngine::Rendering::Universal::TileSize tileSize;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask))::UnityEngine::LayerMask transparentLayerMask;

  /// @brief Field xrSystemData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xrSystemData, put = __cordl_internal_set_xrSystemData))::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> xrSystemData;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Create, addr 0x2882a14, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  static inline ::UnityEngine::Rendering::Universal::UniversalRendererData* New_ctor();

  /// @brief Method OnEnable, addr 0x2882cc4, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x2882c94, size 0x30, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ReloadAllNullProperties, addr 0x2882a80, size 0x4, virtual false, abstract: false, final false
  inline void ReloadAllNullProperties();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2882cd8, size 0x30, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2882ccc, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_m_AccurateGbufferNormals() const;

  constexpr bool& __cordl_internal_get_m_AccurateGbufferNormals();

  constexpr int32_t const& __cordl_internal_get_m_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_m_AssetVersion();

  constexpr bool const& __cordl_internal_get_m_ClusteredRendering() const;

  constexpr bool& __cordl_internal_get_m_ClusteredRendering();

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode();

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::StencilStateData*> const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode();

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& __cordl_internal_get_m_IntermediateTextureMode() const;

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& __cordl_internal_get_m_IntermediateTextureMode();

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

  constexpr ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*& __cordl_internal_get_shaders();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*> const& __cordl_internal_get_shaders() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& __cordl_internal_get_xrSystemData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& __cordl_internal_get_xrSystemData();

  constexpr void __cordl_internal_set_m_AccurateGbufferNormals(bool value);

  constexpr void __cordl_internal_set_m_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_m_ClusteredRendering(bool value);

  constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  constexpr void __cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set_m_ShadowTransparentReceive(bool value);

  constexpr void __cordl_internal_set_m_TileSize(::UnityEngine::Rendering::Universal::TileSize value);

  constexpr void __cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* value);

  constexpr void __cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value);

  /// @brief Method .ctor, addr 0x2882d08, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_accurateGbufferNormals, addr 0x2882bd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_clusteredRendering, addr 0x2882c04, size 0x8, virtual false, abstract: false, final false
  inline bool get_clusteredRendering();

  /// @brief Method get_copyDepthMode, addr 0x2882ba4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::CopyDepthMode get_copyDepthMode();

  /// @brief Method get_defaultStencilState, addr 0x2882ae4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState();

  /// @brief Method get_depthPrimingMode, addr 0x2882b74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode();

  /// @brief Method get_intermediateTextureMode, addr 0x2882c64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::IntermediateTextureMode get_intermediateTextureMode();

  /// @brief Method get_opaqueLayerMask, addr 0x2882a84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// @brief Method get_renderingMode, addr 0x2882b44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  /// @brief Method get_shadowTransparentReceive, addr 0x2882b14, size 0x8, virtual false, abstract: false, final false
  inline bool get_shadowTransparentReceive();

  /// @brief Method get_tileSize, addr 0x2882c34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TileSize get_tileSize();

  /// @brief Method get_transparentLayerMask, addr 0x2882ab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_accurateGbufferNormals, addr 0x2882bdc, size 0x28, virtual false, abstract: false, final false
  inline void set_accurateGbufferNormals(bool value);

  /// @brief Method set_clusteredRendering, addr 0x2882c0c, size 0x28, virtual false, abstract: false, final false
  inline void set_clusteredRendering(bool value);

  /// @brief Method set_copyDepthMode, addr 0x2882bac, size 0x28, virtual false, abstract: false, final false
  inline void set_copyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  /// @brief Method set_defaultStencilState, addr 0x2882aec, size 0x28, virtual false, abstract: false, final false
  inline void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  /// @brief Method set_depthPrimingMode, addr 0x2882b7c, size 0x28, virtual false, abstract: false, final false
  inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  /// @brief Method set_intermediateTextureMode, addr 0x2882c6c, size 0x28, virtual false, abstract: false, final false
  inline void set_intermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  /// @brief Method set_opaqueLayerMask, addr 0x2882a8c, size 0x28, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_renderingMode, addr 0x2882b4c, size 0x28, virtual false, abstract: false, final false
  inline void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  /// @brief Method set_shadowTransparentReceive, addr 0x2882b1c, size 0x28, virtual false, abstract: false, final false
  inline void set_shadowTransparentReceive(bool value);

  /// @brief Method set_tileSize, addr 0x2882c3c, size 0x28, virtual false, abstract: false, final false
  inline void set_tileSize(::UnityEngine::Rendering::Universal::TileSize value);

  /// @brief Method set_transparentLayerMask, addr 0x2882abc, size 0x28, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRendererData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRendererData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRendererData(UniversalRendererData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRendererData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRendererData(UniversalRendererData const&) = delete;

  /// @brief Field postProcessData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___postProcessData;

  /// @brief Field xrSystemData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> ___xrSystemData;

  /// @brief Field shaders, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources* ___shaders;

  /// @brief Field m_AssetVersion, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_AssetVersion;

  /// @brief Field m_OpaqueLayerMask, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_OpaqueLayerMask;

  /// @brief Field m_TransparentLayerMask, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_TransparentLayerMask;

  /// @brief Field m_DefaultStencilState, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilStateData* ___m_DefaultStencilState;

  /// @brief Field m_ShadowTransparentReceive, offset: 0x70, size: 0x1, def value: None
  bool ___m_ShadowTransparentReceive;

  /// @brief Field m_RenderingMode, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_CopyDepthMode, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CopyDepthMode ___m_CopyDepthMode;

  /// @brief Field m_AccurateGbufferNormals, offset: 0x80, size: 0x1, def value: None
  bool ___m_AccurateGbufferNormals;

  /// @brief Field m_ClusteredRendering, offset: 0x81, size: 0x1, def value: None
  bool ___m_ClusteredRendering;

  /// @brief Field m_TileSize, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::TileSize ___m_TileSize;

  /// @brief Field m_IntermediateTextureMode, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::IntermediateTextureMode ___m_IntermediateTextureMode;

  /// @brief Field k_DefaultTileSize value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::Universal::TileSize const k_DefaultTileSize;

  /// @brief Field k_LatestAssetVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestAssetVersion{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRendererData, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___postProcessData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___xrSystemData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___shaders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_AssetVersion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_OpaqueLayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_TransparentLayerMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DefaultStencilState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_ShadowTransparentReceive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_RenderingMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DepthPrimingMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_CopyDepthMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_AccurateGbufferNormals) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_ClusteredRendering) == 0x81, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_TileSize) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_IntermediateTextureMode) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRendererData*, "UnityEngine.Rendering.Universal", "UniversalRendererData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRendererData__ShaderResources*, "UnityEngine.Rendering.Universal", "UniversalRendererData/ShaderResources");
