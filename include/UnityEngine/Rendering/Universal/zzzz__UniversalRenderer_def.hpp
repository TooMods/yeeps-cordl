#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MotionVectorRenderPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class PostProcessPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class RenderTargetBufferSystem;
}
namespace UnityEngine::Rendering::Universal::Internal {
class TileDepthRangePass;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass;
}
namespace UnityEngine::Rendering::Universal {
struct DepthPrimingMode;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class TransparentSettingsPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderer__Profiling;
}
namespace UnityEngine::Rendering::Universal {
struct __UniversalRenderer__RenderPassInputSummary;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderer____c;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderer__Profiling;
}
namespace UnityEngine::Rendering::Universal {
class __UniversalRenderer____c;
}
namespace UnityEngine::Rendering::Universal {
struct __UniversalRenderer__RenderPassInputSummary;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__UniversalRenderer____c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary);
// Type: ::Profiling
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UniversalRenderer::Profiling*
class CORDL_TYPE __UniversalRenderer__Profiling : public ::System::Object {
public:
  // Declarations
  /// @brief Field createCameraRenderTarget, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_createCameraRenderTarget, put = setStaticF_createCameraRenderTarget))::UnityEngine::Rendering::ProfilingSampler* createCameraRenderTarget;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_createCameraRenderTarget();

  static inline void setStaticF_createCameraRenderTarget(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderer__Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderer__Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderer__Profiling(__UniversalRenderer__Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderer__Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderer__Profiling(__UniversalRenderer__Profiling const&) = delete;

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"UniversalRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::RenderPassInputSummary
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UniversalRenderer::RenderPassInputSummary
struct CORDL_TYPE __UniversalRenderer__RenderPassInputSummary {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderer__RenderPassInputSummary();

  // Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "requiresColorTextureCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None }, CppParam { name: "requiresDepthTextureEarliestEvent", ty:
  // "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None }]
  constexpr __UniversalRenderer__RenderPassInputSummary(bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresColorTextureCreated,
                                                        bool requiresMotionVectors, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent,
                                                        ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept;

  /// @brief Field requiresDepthTexture, offset: 0x0, size: 0x1, def value: None
  bool requiresDepthTexture;

  /// @brief Field requiresDepthPrepass, offset: 0x1, size: 0x1, def value: None
  bool requiresDepthPrepass;

  /// @brief Field requiresNormalsTexture, offset: 0x2, size: 0x1, def value: None
  bool requiresNormalsTexture;

  /// @brief Field requiresColorTexture, offset: 0x3, size: 0x1, def value: None
  bool requiresColorTexture;

  /// @brief Field requiresColorTextureCreated, offset: 0x4, size: 0x1, def value: None
  bool requiresColorTextureCreated;

  /// @brief Field requiresMotionVectors, offset: 0x5, size: 0x1, def value: None
  bool requiresMotionVectors;

  /// @brief Field requiresDepthNormalAtEvent, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent;

  /// @brief Field requiresDepthTextureEarliestEvent, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresDepthTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresDepthPrepass) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresNormalsTexture) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresColorTexture) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresColorTextureCreated) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresMotionVectors) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresDepthNormalAtEvent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, requiresDepthTextureEarliestEvent) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UniversalRenderer::<>c*
class CORDL_TYPE __UniversalRenderer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__UniversalRenderer____c* __9;

  /// @brief Field <>9__80_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__80_0, put = setStaticF___9__80_0))::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__80_0;

  static inline ::UnityEngine::Rendering::Universal::__UniversalRenderer____c* New_ctor();

  /// @brief Method <Setup>b__80_0, addr 0x28829f4, size 0x20, virtual false, abstract: false, final false
  inline bool _Setup_b__80_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method .ctor, addr 0x28829ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__UniversalRenderer____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__80_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__UniversalRenderer____c* value);

  static inline void setStaticF___9__80_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UniversalRenderer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UniversalRenderer____c(__UniversalRenderer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UniversalRenderer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UniversalRenderer____c(__UniversalRenderer____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__UniversalRenderer____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::UniversalRenderer
// SizeInfo { instance_size: 1296, native_size: -1, calculated_instance_size: 1296, calculated_native_size: 1296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::UniversalRenderer*
class CORDL_TYPE UniversalRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
  // Declarations
  using Profiling = ::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling;

  using RenderPassInputSummary = ::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary;

  using __c = ::UnityEngine::Rendering::Universal::__UniversalRenderer____c;

  __declspec(property(get = get_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_actualRenderingMode))::UnityEngine::Rendering::Universal::RenderingMode actualRenderingMode;

  __declspec(property(get = get_colorGradingLut))::UnityEngine::Rendering::Universal::RenderTargetHandle colorGradingLut;

  __declspec(property(get = get_colorGradingLutPass))::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* colorGradingLutPass;

  __declspec(property(get = get_deferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  __declspec(property(get = get_depthPrimingMode, put = set_depthPrimingMode))::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode;

  /// @brief Field displaySubsystemList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_displaySubsystemList, put = setStaticF_displaySubsystemList))::System::Collections::Generic::List_1<Il2CppObject*>* displaySubsystemList;

  __declspec(property(get = get_finalPostProcessPass))::UnityEngine::Rendering::Universal::Internal::PostProcessPass* finalPostProcessPass;

  /// @brief Field k_DepthNormalsOnly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DepthNormalsOnly,
                             put = setStaticF_k_DepthNormalsOnly))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* k_DepthNormalsOnly;

  /// @brief Field m_ActiveCameraColorAttachment, offset 0x250, size 0x30
  __declspec(property(get = __cordl_internal_get_m_ActiveCameraColorAttachment,
                      put = __cordl_internal_set_m_ActiveCameraColorAttachment))::UnityEngine::Rendering::Universal::RenderTargetHandle m_ActiveCameraColorAttachment;

  /// @brief Field m_ActiveCameraDepthAttachment, offset 0x2b0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_ActiveCameraDepthAttachment,
                      put = __cordl_internal_set_m_ActiveCameraDepthAttachment))::UnityEngine::Rendering::Universal::RenderTargetHandle m_ActiveCameraDepthAttachment;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset 0x1b8, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_AdditionalLightsShadowCasterPass,
               put = __cordl_internal_set_m_AdditionalLightsShadowCasterPass))::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_BlitMaterial, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial))::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_CameraDepthAttachment, offset 0x2e0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_CameraDepthAttachment,
                      put = __cordl_internal_set_m_CameraDepthAttachment))::UnityEngine::Rendering::Universal::RenderTargetHandle m_CameraDepthAttachment;

  /// @brief Field m_CameraMotionVecMaterial, offset 0x470, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraMotionVecMaterial, put = __cordl_internal_set_m_CameraMotionVecMaterial))::UnityW<::UnityEngine::Material> m_CameraMotionVecMaterial;

  /// @brief Field m_CapturePass, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CapturePass, put = __cordl_internal_set_m_CapturePass))::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass;

  /// @brief Field m_ColorBufferSystem, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorBufferSystem,
                      put = __cordl_internal_set_m_ColorBufferSystem))::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* m_ColorBufferSystem;

  /// @brief Field m_ColorFrontBuffer, offset 0x280, size 0x30
  __declspec(property(get = __cordl_internal_get_m_ColorFrontBuffer, put = __cordl_internal_set_m_ColorFrontBuffer))::UnityEngine::Rendering::Universal::RenderTargetHandle m_ColorFrontBuffer;

  /// @brief Field m_CopyColorPass, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorPass, put = __cordl_internal_set_m_CopyColorPass))::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_CopyColorPass;

  /// @brief Field m_CopyDepthMaterial, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMaterial, put = __cordl_internal_set_m_CopyDepthMaterial))::UnityW<::UnityEngine::Material> m_CopyDepthMaterial;

  /// @brief Field m_CopyDepthMode, offset 0x418, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMode, put = __cordl_internal_set_m_CopyDepthMode))::UnityEngine::Rendering::Universal::CopyDepthMode m_CopyDepthMode;

  /// @brief Field m_CopyDepthPass, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthPass, put = __cordl_internal_set_m_CopyDepthPass))::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass;

  /// @brief Field m_DefaultStencilState, offset 0x41d, size 0xc
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState))::UnityEngine::Rendering::StencilState m_DefaultStencilState;

  /// @brief Field m_DeferredLights, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DeferredPass, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredPass, put = __cordl_internal_set_m_DeferredPass))::UnityEngine::Rendering::Universal::Internal::DeferredPass* m_DeferredPass;

  /// @brief Field m_DepthInfoTexture, offset 0x3a0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_DepthInfoTexture, put = __cordl_internal_set_m_DepthInfoTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle m_DepthInfoTexture;

  /// @brief Field m_DepthNormalPrepass, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthNormalPrepass,
                      put = __cordl_internal_set_m_DepthNormalPrepass))::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* m_DepthNormalPrepass;

  /// @brief Field m_DepthPrepass, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthPrepass, put = __cordl_internal_set_m_DepthPrepass))::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* m_DepthPrepass;

  /// @brief Field m_DepthPrimingMode, offset 0x414, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode))::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_DepthPrimingRecommended, offset 0x41c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingRecommended, put = __cordl_internal_set_m_DepthPrimingRecommended)) bool m_DepthPrimingRecommended;

  /// @brief Field m_DepthTexture, offset 0x310, size 0x30
  __declspec(property(get = __cordl_internal_get_m_DepthTexture, put = __cordl_internal_set_m_DepthTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle m_DepthTexture;

  /// @brief Field m_DrawSkyboxPass, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSkyboxPass, put = __cordl_internal_set_m_DrawSkyboxPass))::UnityEngine::Rendering::Universal::DrawSkyboxPass* m_DrawSkyboxPass;

  /// @brief Field m_FinalBlitPass, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalBlitPass, put = __cordl_internal_set_m_FinalBlitPass))::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;

  /// @brief Field m_ForwardLights, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ForwardLights, put = __cordl_internal_set_m_ForwardLights))::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights;

  /// @brief Field m_GBufferCopyDepthPass, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferCopyDepthPass,
                      put = __cordl_internal_set_m_GBufferCopyDepthPass))::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_GBufferCopyDepthPass;

  /// @brief Field m_GBufferPass, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferPass, put = __cordl_internal_set_m_GBufferPass))::UnityEngine::Rendering::Universal::Internal::GBufferPass* m_GBufferPass;

  /// @brief Field m_IntermediateTextureMode, offset 0x438, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntermediateTextureMode,
                      put = __cordl_internal_set_m_IntermediateTextureMode))::UnityEngine::Rendering::Universal::IntermediateTextureMode m_IntermediateTextureMode;

  /// @brief Field m_LightCookieManager, offset 0x430, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager))::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_MainLightShadowCasterPass, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowCasterPass,
                      put = __cordl_internal_set_m_MainLightShadowCasterPass))::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* m_MainLightShadowCasterPass;

  /// @brief Field m_MotionVectorPass, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorPass,
                      put = __cordl_internal_set_m_MotionVectorPass))::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* m_MotionVectorPass;

  /// @brief Field m_NormalsTexture, offset 0x340, size 0x30
  __declspec(property(get = __cordl_internal_get_m_NormalsTexture, put = __cordl_internal_set_m_NormalsTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle m_NormalsTexture;

  /// @brief Field m_ObjectMotionVecMaterial, offset 0x478, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectMotionVecMaterial, put = __cordl_internal_set_m_ObjectMotionVecMaterial))::UnityW<::UnityEngine::Material> m_ObjectMotionVecMaterial;

  /// @brief Field m_OnRenderObjectCallbackPass, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnRenderObjectCallbackPass,
                      put = __cordl_internal_set_m_OnRenderObjectCallbackPass))::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass;

  /// @brief Field m_OpaqueColor, offset 0x370, size 0x30
  __declspec(property(get = __cordl_internal_get_m_OpaqueColor, put = __cordl_internal_set_m_OpaqueColor))::UnityEngine::Rendering::Universal::RenderTargetHandle m_OpaqueColor;

  /// @brief Field m_PostProcessPasses, offset 0x480, size 0x90
  __declspec(property(get = __cordl_internal_get_m_PostProcessPasses, put = __cordl_internal_set_m_PostProcessPasses))::UnityEngine::Rendering::Universal::PostProcessPasses m_PostProcessPasses;

  /// @brief Field m_PrimedDepthCopyPass, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimedDepthCopyPass,
                      put = __cordl_internal_set_m_PrimedDepthCopyPass))::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_PrimedDepthCopyPass;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardOnlyPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardOnlyPass))::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardPass))::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardPass;

  /// @brief Field m_RenderTransparentForwardPass, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTransparentForwardPass,
                      put = __cordl_internal_set_m_RenderTransparentForwardPass))::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderTransparentForwardPass;

  /// @brief Field m_RenderingMode, offset 0x410, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode))::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_SamplingMaterial, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial))::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset 0x468, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredMaterial, put = __cordl_internal_set_m_StencilDeferredMaterial))::UnityW<::UnityEngine::Material> m_StencilDeferredMaterial;

  /// @brief Field m_TileDeferredMaterial, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDeferredMaterial, put = __cordl_internal_set_m_TileDeferredMaterial))::UnityW<::UnityEngine::Material> m_TileDeferredMaterial;

  /// @brief Field m_TileDepthInfoMaterial, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDepthInfoMaterial, put = __cordl_internal_set_m_TileDepthInfoMaterial))::UnityW<::UnityEngine::Material> m_TileDepthInfoMaterial;

  /// @brief Field m_TileDepthInfoTexture, offset 0x3d0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_TileDepthInfoTexture,
                      put = __cordl_internal_set_m_TileDepthInfoTexture))::UnityEngine::Rendering::Universal::RenderTargetHandle m_TileDepthInfoTexture;

  /// @brief Field m_TileDepthRangeExtraPass, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDepthRangeExtraPass,
                      put = __cordl_internal_set_m_TileDepthRangeExtraPass))::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangeExtraPass;

  /// @brief Field m_TileDepthRangePass, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileDepthRangePass,
                      put = __cordl_internal_set_m_TileDepthRangePass))::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangePass;

  /// @brief Field m_TransparentSettingsPass, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransparentSettingsPass,
                      put = __cordl_internal_set_m_TransparentSettingsPass))::UnityEngine::Rendering::Universal::TransparentSettingsPass* m_TransparentSettingsPass;

  /// @brief Field m_XRCopyDepthPass, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRCopyDepthPass, put = __cordl_internal_set_m_XRCopyDepthPass))::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_XRCopyDepthPass;

  /// @brief Field m_XROcclusionMeshPass, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROcclusionMeshPass,
                      put = __cordl_internal_set_m_XROcclusionMeshPass))::UnityEngine::Rendering::Universal::XROcclusionMeshPass* m_XROcclusionMeshPass;

  __declspec(property(get = get_postProcessPass))::UnityEngine::Rendering::Universal::Internal::PostProcessPass* postProcessPass;

  __declspec(property(get = get_renderingMode))::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  /// @brief Method CanCopyDepth, addr 0x2736214, size 0xe0, virtual false, abstract: false, final false
  inline bool CanCopyDepth(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method CreateCameraRenderTarget, addr 0x2737fa4, size 0x684, virtual false, abstract: false, final false
  inline void CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, bool primedDepth);

  /// @brief Method Dispose, addr 0x2735e44, size 0x12c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableSwapBufferMSAA, addr 0x2738fe8, size 0x20, virtual true, abstract: false, final false
  inline void EnableSwapBufferMSAA(bool enable);

  /// @brief Method EnqueueDeferred, addr 0x2738628, size 0x2c8, virtual false, abstract: false, final false
  inline void EnqueueDeferred(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool hasDepthPrepass, bool hasNormalPrepass, bool applyMainShadow, bool applyAdditionalShadow);

  /// @brief Method FinishRendering, addr 0x2738b2c, size 0x18c, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraColorFrontBuffer, addr 0x2738f98, size 0x50, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetRenderPassInputs, addr 0x2737c28, size 0x1d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary GetRenderPassInputs(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method IsDepthPrimingEnabled, addr 0x2736184, size 0x90, virtual false, abstract: false, final false
  inline bool IsDepthPrimingEnabled(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method IsGLESDevice, addr 0x2738cb8, size 0x34, virtual false, abstract: false, final false
  inline bool IsGLESDevice();

  /// @brief Method IsRunningXRMobile, addr 0x2734ef8, size 0x14c, virtual false, abstract: false, final false
  static inline bool IsRunningXRMobile();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer* New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  /// @brief Method PlatformRequiresExplicitMsaaResolve, addr 0x2738cec, size 0x3c, virtual false, abstract: false, final false
  inline bool PlatformRequiresExplicitMsaaResolve();

  /// @brief Method RequiresIntermediateColorTexture, addr 0x2737df8, size 0x1ac, virtual false, abstract: false, final false
  inline bool RequiresIntermediateColorTexture(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method Setup, addr 0x27362f4, size 0x1934, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x2738954, size 0x1d8, virtual true, abstract: false, final false
  inline void SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupFinalPassDebug, addr 0x2735f70, size 0x214, virtual false, abstract: false, final false
  inline void SetupFinalPassDebug(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupLights, addr 0x27388f0, size 0x64, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SupportedCameraStackingTypes, addr 0x2734e60, size 0x1c, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SwapColorBuffer, addr 0x2738d28, size 0x270, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_ActiveCameraColorAttachment() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_ActiveCameraColorAttachment();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_ActiveCameraDepthAttachment() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_ActiveCameraDepthAttachment();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*> const&
  __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_CameraDepthAttachment() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_CameraDepthAttachment();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMotionVecMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMotionVecMaterial();

  constexpr ::UnityEngine::Rendering::Universal::CapturePass*& __cordl_internal_get_m_CapturePass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::CapturePass*> const& __cordl_internal_get_m_CapturePass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*& __cordl_internal_get_m_ColorBufferSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*> const& __cordl_internal_get_m_ColorBufferSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_ColorFrontBuffer() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_ColorFrontBuffer();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_CopyColorPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyColorPass*> const& __cordl_internal_get_m_CopyColorPass() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyDepthMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyDepthMaterial();

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_CopyDepthPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const& __cordl_internal_get_m_CopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::StencilState const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::UnityEngine::Rendering::StencilState& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass*& __cordl_internal_get_m_DeferredPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredPass*> const& __cordl_internal_get_m_DeferredPass() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_DepthInfoTexture() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_DepthInfoTexture();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*& __cordl_internal_get_m_DepthNormalPrepass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*> const& __cordl_internal_get_m_DepthNormalPrepass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*& __cordl_internal_get_m_DepthPrepass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*> const& __cordl_internal_get_m_DepthPrepass() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode();

  constexpr bool const& __cordl_internal_get_m_DepthPrimingRecommended() const;

  constexpr bool& __cordl_internal_get_m_DepthPrimingRecommended();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_DepthTexture() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_DepthTexture();

  constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass*& __cordl_internal_get_m_DrawSkyboxPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DrawSkyboxPass*> const& __cordl_internal_get_m_DrawSkyboxPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& __cordl_internal_get_m_FinalBlitPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*> const& __cordl_internal_get_m_FinalBlitPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& __cordl_internal_get_m_ForwardLights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::ForwardLights*> const& __cordl_internal_get_m_ForwardLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_GBufferCopyDepthPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const& __cordl_internal_get_m_GBufferCopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass*& __cordl_internal_get_m_GBufferPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::GBufferPass*> const& __cordl_internal_get_m_GBufferPass() const;

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& __cordl_internal_get_m_IntermediateTextureMode() const;

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& __cordl_internal_get_m_IntermediateTextureMode();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& __cordl_internal_get_m_MainLightShadowCasterPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*> const& __cordl_internal_get_m_MainLightShadowCasterPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass*& __cordl_internal_get_m_MotionVectorPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass*> const& __cordl_internal_get_m_MotionVectorPass() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_NormalsTexture() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_NormalsTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ObjectMotionVecMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ObjectMotionVecMaterial();

  constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& __cordl_internal_get_m_OnRenderObjectCallbackPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*> const& __cordl_internal_get_m_OnRenderObjectCallbackPass() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_OpaqueColor() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_OpaqueColor();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& __cordl_internal_get_m_PostProcessPasses() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& __cordl_internal_get_m_PostProcessPasses();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_PrimedDepthCopyPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const& __cordl_internal_get_m_PrimedDepthCopyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const& __cordl_internal_get_m_RenderOpaqueForwardPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderTransparentForwardPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*> const& __cordl_internal_get_m_RenderTransparentForwardPass() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get_m_RenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get_m_RenderingMode();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_TileDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_TileDeferredMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_TileDepthInfoMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_TileDepthInfoMaterial();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_TileDepthInfoTexture() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_TileDepthInfoTexture();

  constexpr ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*& __cordl_internal_get_m_TileDepthRangeExtraPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*> const& __cordl_internal_get_m_TileDepthRangeExtraPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*& __cordl_internal_get_m_TileDepthRangePass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*> const& __cordl_internal_get_m_TileDepthRangePass() const;

  constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& __cordl_internal_get_m_TransparentSettingsPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TransparentSettingsPass*> const& __cordl_internal_get_m_TransparentSettingsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_XRCopyDepthPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*> const& __cordl_internal_get_m_XRCopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& __cordl_internal_get_m_XROcclusionMeshPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*> const& __cordl_internal_get_m_XROcclusionMeshPass() const;

  constexpr void __cordl_internal_set_m_ActiveCameraColorAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_ActiveCameraDepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CameraDepthAttachment(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass* value);

  constexpr void __cordl_internal_set_m_ColorBufferSystem(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* value);

  constexpr void __cordl_internal_set_m_ColorFrontBuffer(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value);

  constexpr void __cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  constexpr void __cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState value);

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass* value);

  constexpr void __cordl_internal_set_m_DepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_DepthPrimingRecommended(bool value);

  constexpr void __cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass* value);

  constexpr void __cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value);

  constexpr void __cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value);

  constexpr void __cordl_internal_set_m_GBufferCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass* value);

  constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* value);

  constexpr void __cordl_internal_set_m_NormalsTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_ObjectMotionVecMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* value);

  constexpr void __cordl_internal_set_m_OpaqueColor(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value);

  constexpr void __cordl_internal_set_m_PrimedDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_RenderOpaqueForwardOnlyPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderOpaqueForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderTransparentForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TileDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TileDepthInfoMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TileDepthInfoTexture(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_TileDepthRangeExtraPass(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* value);

  constexpr void __cordl_internal_set_m_TileDepthRangePass(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* value);

  constexpr void __cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass* value);

  constexpr void __cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass* value);

  /// @brief Method .ctor, addr 0x2735044, size 0xe00, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_displaySubsystemList();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_DepthNormalsOnly();

  /// @brief Method get_accurateGbufferNormals, addr 0x2734e84, size 0x20, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_actualRenderingMode, addr 0x272a3c4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_actualRenderingMode();

  /// @brief Method get_colorGradingLut, addr 0x2734ecc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_colorGradingLut();

  /// @brief Method get_colorGradingLutPass, addr 0x2734eb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass();

  /// @brief Method get_deferredLights, addr 0x2734ef0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights();

  /// @brief Method get_depthPrimingMode, addr 0x2734ea4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode();

  /// @brief Method get_finalPostProcessPass, addr 0x2734ec4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_finalPostProcessPass();

  /// @brief Method get_postProcessPass, addr 0x2734ebc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_postProcessPass();

  /// @brief Method get_renderingMode, addr 0x2734e7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  static inline void setStaticF_displaySubsystemList(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_k_DepthNormalsOnly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method set_depthPrimingMode, addr 0x2734eac, size 0x8, virtual false, abstract: false, final false
  inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer(UniversalRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer(UniversalRenderer const&) = delete;

  /// @brief Field m_DepthPrepass, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* ___m_DepthPrepass;

  /// @brief Field m_DepthNormalPrepass, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* ___m_DepthNormalPrepass;

  /// @brief Field m_PrimedDepthCopyPass, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_PrimedDepthCopyPass;

  /// @brief Field m_MotionVectorPass, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* ___m_MotionVectorPass;

  /// @brief Field m_MainLightShadowCasterPass, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* ___m_MainLightShadowCasterPass;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_GBufferPass, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::GBufferPass* ___m_GBufferPass;

  /// @brief Field m_GBufferCopyDepthPass, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_GBufferCopyDepthPass;

  /// @brief Field m_TileDepthRangePass, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* ___m_TileDepthRangePass;

  /// @brief Field m_TileDepthRangeExtraPass, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* ___m_TileDepthRangeExtraPass;

  /// @brief Field m_DeferredPass, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredPass* ___m_DeferredPass;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardPass;

  /// @brief Field m_DrawSkyboxPass, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawSkyboxPass* ___m_DrawSkyboxPass;

  /// @brief Field m_CopyDepthPass, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_CopyDepthPass;

  /// @brief Field m_CopyColorPass, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* ___m_CopyColorPass;

  /// @brief Field m_TransparentSettingsPass, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TransparentSettingsPass* ___m_TransparentSettingsPass;

  /// @brief Field m_RenderTransparentForwardPass, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderTransparentForwardPass;

  /// @brief Field m_OnRenderObjectCallbackPass, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* ___m_OnRenderObjectCallbackPass;

  /// @brief Field m_FinalBlitPass, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* ___m_FinalBlitPass;

  /// @brief Field m_CapturePass, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::CapturePass* ___m_CapturePass;

  /// @brief Field m_XROcclusionMeshPass, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* ___m_XROcclusionMeshPass;

  /// @brief Field m_XRCopyDepthPass, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_XRCopyDepthPass;

  /// @brief Field m_ColorBufferSystem, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* ___m_ColorBufferSystem;

  /// @brief Field m_ActiveCameraColorAttachment, offset: 0x250, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_ActiveCameraColorAttachment;

  /// @brief Field m_ColorFrontBuffer, offset: 0x280, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_ColorFrontBuffer;

  /// @brief Field m_ActiveCameraDepthAttachment, offset: 0x2b0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_ActiveCameraDepthAttachment;

  /// @brief Field m_CameraDepthAttachment, offset: 0x2e0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_CameraDepthAttachment;

  /// @brief Field m_DepthTexture, offset: 0x310, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_DepthTexture;

  /// @brief Field m_NormalsTexture, offset: 0x340, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_NormalsTexture;

  /// @brief Field m_OpaqueColor, offset: 0x370, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_OpaqueColor;

  /// @brief Field m_DepthInfoTexture, offset: 0x3a0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_DepthInfoTexture;

  /// @brief Field m_TileDepthInfoTexture, offset: 0x3d0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_TileDepthInfoTexture;

  /// @brief Field m_ForwardLights, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ForwardLights* ___m_ForwardLights;

  /// @brief Field m_DeferredLights, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_RenderingMode, offset: 0x410, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x414, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_CopyDepthMode, offset: 0x418, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CopyDepthMode ___m_CopyDepthMode;

  /// @brief Field m_DepthPrimingRecommended, offset: 0x41c, size: 0x1, def value: None
  bool ___m_DepthPrimingRecommended;

  /// @brief Field m_DefaultStencilState, offset: 0x41d, size: 0xc, def value: None
  ::UnityEngine::Rendering::StencilState ___m_DefaultStencilState;

  /// @brief Field m_LightCookieManager, offset: 0x430, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  /// @brief Field m_IntermediateTextureMode, offset: 0x438, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::IntermediateTextureMode ___m_IntermediateTextureMode;

  /// @brief Field m_BlitMaterial, offset: 0x440, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_CopyDepthMaterial, offset: 0x448, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyDepthMaterial;

  /// @brief Field m_SamplingMaterial, offset: 0x450, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_TileDepthInfoMaterial, offset: 0x458, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_TileDepthInfoMaterial;

  /// @brief Field m_TileDeferredMaterial, offset: 0x460, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_TileDeferredMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset: 0x468, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_StencilDeferredMaterial;

  /// @brief Field m_CameraMotionVecMaterial, offset: 0x470, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CameraMotionVecMaterial;

  /// @brief Field m_ObjectMotionVecMaterial, offset: 0x478, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ObjectMotionVecMaterial;

  /// @brief Field m_PostProcessPasses, offset: 0x480, size: 0x90, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPasses ___m_PostProcessPasses;

  /// @brief Field k_DepthStencilBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_DepthStencilBufferBits{ static_cast<int32_t>(0x18) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer, 0x510>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrepass) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthNormalPrepass) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PrimedDepthCopyPass) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorPass) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MainLightShadowCasterPass) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_AdditionalLightsShadowCasterPass) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferPass) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferCopyDepthPass) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TileDepthRangePass) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TileDepthRangeExtraPass) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredPass) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardOnlyPass) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardPass) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawSkyboxPass) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthPass) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyColorPass) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TransparentSettingsPass) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderTransparentForwardPass) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OnRenderObjectCallbackPass) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_FinalBlitPass) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CapturePass) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XROcclusionMeshPass) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRCopyDepthPass) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorBufferSystem) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraColorAttachment) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorFrontBuffer) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraDepthAttachment) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachment) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthTexture) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_NormalsTexture) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OpaqueColor) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthInfoTexture) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TileDepthInfoTexture) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ForwardLights) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredLights) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingMode) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingMode) == 0x414, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthMode) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingRecommended) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DefaultStencilState) == 0x41d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_LightCookieManager) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IntermediateTextureMode) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitMaterial) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthMaterial) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_SamplingMaterial) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TileDepthInfoMaterial) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TileDeferredMaterial) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilDeferredMaterial) == 0x468, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraMotionVecMaterial) == 0x470, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ObjectMotionVecMaterial) == 0x478, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PostProcessPasses) == 0x480, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer*, "UnityEngine.Rendering.Universal", "UniversalRenderer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRenderer__Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderer/Profiling");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__UniversalRenderer____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRenderer____c*, "UnityEngine.Rendering.Universal", "UniversalRenderer/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__UniversalRenderer__RenderPassInputSummary, "UnityEngine.Rendering.Universal", "UniversalRenderer/RenderPassInputSummary");
