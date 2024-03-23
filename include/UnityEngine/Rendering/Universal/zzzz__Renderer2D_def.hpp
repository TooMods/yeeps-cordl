#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Renderer2D)
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class PostProcessPass;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class Light2DCullResult;
}
namespace UnityEngine::Rendering::Universal {
class PixelPerfectBackgroundPass;
}
namespace UnityEngine::Rendering::Universal {
class Render2DLightingPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class __Renderer2D____c;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Renderer2D;
}
namespace UnityEngine::Rendering::Universal {
class __Renderer2D____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Renderer2D);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__Renderer2D____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::Renderer2D::<>c*
class CORDL_TYPE __Renderer2D____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__Renderer2D____c* __9;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0))::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__34_0;

  static inline ::UnityEngine::Rendering::Universal::__Renderer2D____c* New_ctor();

  /// @brief Method <Setup>b__34_0, addr 0x2f41c40, size 0x20, virtual false, abstract: false, final false
  inline bool _Setup_b__34_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method .ctor, addr 0x2f41c38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__Renderer2D____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__34_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__Renderer2D____c* value);

  static inline void setStaticF___9__34_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Renderer2D____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Renderer2D____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Renderer2D____c(__Renderer2D____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Renderer2D____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Renderer2D____c(__Renderer2D____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Renderer2D____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Renderer2D
// SizeInfo { instance_size: 704, native_size: -1, calculated_instance_size: 704, calculated_native_size: 704, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Renderer2D*
class CORDL_TYPE Renderer2D : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::__Renderer2D____c;

  __declspec(property(get = get_afterPostProcessColorHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle afterPostProcessColorHandle;

  __declspec(property(get = get_colorGradingLutHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle colorGradingLutHandle;

  __declspec(property(get = get_colorGradingLutPass))::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* colorGradingLutPass;

  __declspec(property(get = get_createColorTexture)) bool createColorTexture;

  __declspec(property(get = get_createDepthTexture)) bool createDepthTexture;

  __declspec(property(get = get_finalPostProcessPass))::UnityEngine::Rendering::Universal::Internal::PostProcessPass* finalPostProcessPass;

  /// @brief Field k_ColorTextureHandle, offset 0x1b8, size 0x30
  __declspec(property(get = __cordl_internal_get_k_ColorTextureHandle, put = __cordl_internal_set_k_ColorTextureHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle k_ColorTextureHandle;

  /// @brief Field k_DepthTextureHandle, offset 0x1e8, size 0x30
  __declspec(property(get = __cordl_internal_get_k_DepthTextureHandle, put = __cordl_internal_set_k_DepthTextureHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle k_DepthTextureHandle;

  /// @brief Field m_BlitMaterial, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial))::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_CreateColorTexture, offset 0x1b1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateColorTexture, put = __cordl_internal_set_m_CreateColorTexture)) bool m_CreateColorTexture;

  /// @brief Field m_CreateDepthTexture, offset 0x1b2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateDepthTexture, put = __cordl_internal_set_m_CreateDepthTexture)) bool m_CreateDepthTexture;

  /// @brief Field m_FinalBlitPass, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalBlitPass, put = __cordl_internal_set_m_FinalBlitPass))::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;

  /// @brief Field m_LightCullResult, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCullResult, put = __cordl_internal_set_m_LightCullResult))::UnityEngine::Rendering::Universal::Light2DCullResult* m_LightCullResult;

  /// @brief Field m_PixelPerfectBackgroundPass, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PixelPerfectBackgroundPass,
                      put = __cordl_internal_set_m_PixelPerfectBackgroundPass))::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* m_PixelPerfectBackgroundPass;

  /// @brief Field m_PostProcessPasses, offset 0x230, size 0x90
  __declspec(property(get = __cordl_internal_get_m_PostProcessPasses, put = __cordl_internal_set_m_PostProcessPasses))::UnityEngine::Rendering::Universal::PostProcessPasses m_PostProcessPasses;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Render2DLightingPass, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Render2DLightingPass,
                      put = __cordl_internal_set_m_Render2DLightingPass))::UnityEngine::Rendering::Universal::Render2DLightingPass* m_Render2DLightingPass;

  /// @brief Field m_Renderer2DData, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer2DData, put = __cordl_internal_set_m_Renderer2DData))::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> m_Renderer2DData;

  /// @brief Field m_SamplingMaterial, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial))::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Field m_UseDepthStencilBuffer, offset 0x1b0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseDepthStencilBuffer, put = __cordl_internal_set_m_UseDepthStencilBuffer)) bool m_UseDepthStencilBuffer;

  __declspec(property(get = get_postProcessPass))::UnityEngine::Rendering::Universal::Internal::PostProcessPass* postProcessPass;

  /// @brief Method CreateRenderTextures, addr 0x2f40dc4, size 0x3b0, virtual false, abstract: false, final false
  inline void CreateRenderTextures(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool forceCreateColorTexture, ::UnityEngine::FilterMode colorTextureFilterMode,
                                   ::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> colorTargetHandle,
                                   ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> depthTargetHandle);

  /// @brief Method Dispose, addr 0x2f40db0, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method FinishRendering, addr 0x2f41ae4, size 0x60, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetRenderer2DData, addr 0x2f40dbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> GetRenderer2DData();

  static inline ::UnityEngine::Rendering::Universal::Renderer2D* New_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* data);

  /// @brief Method Setup, addr 0x2f41174, size 0x8fc, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x2f41a70, size 0x74, virtual true, abstract: false, final false
  inline void SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SupportedCameraStackingTypes, addr 0x2f40b1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_k_ColorTextureHandle() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_k_ColorTextureHandle();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_k_DepthTextureHandle() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_k_DepthTextureHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr bool const& __cordl_internal_get_m_CreateColorTexture() const;

  constexpr bool& __cordl_internal_get_m_CreateColorTexture();

  constexpr bool const& __cordl_internal_get_m_CreateDepthTexture() const;

  constexpr bool& __cordl_internal_get_m_CreateDepthTexture();

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& __cordl_internal_get_m_FinalBlitPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*> const& __cordl_internal_get_m_FinalBlitPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Light2DCullResult*& __cordl_internal_get_m_LightCullResult();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Light2DCullResult*> const& __cordl_internal_get_m_LightCullResult() const;

  constexpr ::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*& __cordl_internal_get_m_PixelPerfectBackgroundPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*> const& __cordl_internal_get_m_PixelPerfectBackgroundPass() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& __cordl_internal_get_m_PostProcessPasses() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& __cordl_internal_get_m_PostProcessPasses();

  constexpr ::UnityEngine::Rendering::Universal::Render2DLightingPass*& __cordl_internal_get_m_Render2DLightingPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Render2DLightingPass*> const& __cordl_internal_get_m_Render2DLightingPass() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> const& __cordl_internal_get_m_Renderer2DData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>& __cordl_internal_get_m_Renderer2DData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr bool const& __cordl_internal_get_m_UseDepthStencilBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseDepthStencilBuffer();

  constexpr void __cordl_internal_set_k_ColorTextureHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_k_DepthTextureHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CreateColorTexture(bool value);

  constexpr void __cordl_internal_set_m_CreateDepthTexture(bool value);

  constexpr void __cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value);

  constexpr void __cordl_internal_set_m_LightCullResult(::UnityEngine::Rendering::Universal::Light2DCullResult* value);

  constexpr void __cordl_internal_set_m_PixelPerfectBackgroundPass(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* value);

  constexpr void __cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value);

  constexpr void __cordl_internal_set_m_Render2DLightingPass(::UnityEngine::Rendering::Universal::Render2DLightingPass* value);

  constexpr void __cordl_internal_set_m_Renderer2DData(::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_UseDepthStencilBuffer(bool value);

  /// @brief Method .ctor, addr 0x2f40b24, size 0x28c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Renderer2DData* data);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  /// @brief Method get_afterPostProcessColorHandle, addr 0x2f40ad4, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_afterPostProcessColorHandle();

  /// @brief Method get_colorGradingLutHandle, addr 0x2f40af8, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_colorGradingLutHandle();

  /// @brief Method get_colorGradingLutPass, addr 0x2f40abc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass();

  /// @brief Method get_createColorTexture, addr 0x2f40aac, size 0x8, virtual false, abstract: false, final false
  inline bool get_createColorTexture();

  /// @brief Method get_createDepthTexture, addr 0x2f40ab4, size 0x8, virtual false, abstract: false, final false
  inline bool get_createDepthTexture();

  /// @brief Method get_finalPostProcessPass, addr 0x2f40acc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_finalPostProcessPass();

  /// @brief Method get_postProcessPass, addr 0x2f40ac4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_postProcessPass();

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Renderer2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Renderer2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Renderer2D(Renderer2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Renderer2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Renderer2D(Renderer2D const&) = delete;

  /// @brief Field m_Render2DLightingPass, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Render2DLightingPass* ___m_Render2DLightingPass;

  /// @brief Field m_PixelPerfectBackgroundPass, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* ___m_PixelPerfectBackgroundPass;

  /// @brief Field m_FinalBlitPass, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* ___m_FinalBlitPass;

  /// @brief Field m_LightCullResult, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Light2DCullResult* ___m_LightCullResult;

  /// @brief Field m_UseDepthStencilBuffer, offset: 0x1b0, size: 0x1, def value: None
  bool ___m_UseDepthStencilBuffer;

  /// @brief Field m_CreateColorTexture, offset: 0x1b1, size: 0x1, def value: None
  bool ___m_CreateColorTexture;

  /// @brief Field m_CreateDepthTexture, offset: 0x1b2, size: 0x1, def value: None
  bool ___m_CreateDepthTexture;

  /// @brief Field k_ColorTextureHandle, offset: 0x1b8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___k_ColorTextureHandle;

  /// @brief Field k_DepthTextureHandle, offset: 0x1e8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___k_DepthTextureHandle;

  /// @brief Field m_BlitMaterial, offset: 0x218, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_SamplingMaterial, offset: 0x220, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_Renderer2DData, offset: 0x228, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> ___m_Renderer2DData;

  /// @brief Field m_PostProcessPasses, offset: 0x230, size: 0x90, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPasses ___m_PostProcessPasses;

  /// @brief Field k_DepthBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_DepthBufferBits{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Renderer2D, 0x2c0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_Render2DLightingPass) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_PixelPerfectBackgroundPass) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_FinalBlitPass) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_LightCullResult) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_UseDepthStencilBuffer) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_CreateColorTexture) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_CreateDepthTexture) == 0x1b2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___k_ColorTextureHandle) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___k_DepthTextureHandle) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_BlitMaterial) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_SamplingMaterial) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_Renderer2DData) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Renderer2D, ___m_PostProcessPasses) == 0x230, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Renderer2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Renderer2D*, "UnityEngine.Rendering.Universal", "Renderer2D");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__Renderer2D____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Renderer2D____c*, "UnityEngine.Rendering.Universal", "Renderer2D/<>c");
