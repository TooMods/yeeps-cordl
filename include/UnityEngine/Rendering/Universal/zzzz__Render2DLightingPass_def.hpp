#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Render2DLightingPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class IRenderPass2D;
}
namespace UnityEngine::Rendering::Universal {
struct LayerBatch;
}
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DrawFunction;
}
namespace UnityEngine::Rendering::Universal {
class __Render2DLightingPass____c;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Render2DLightingPass;
}
namespace UnityEngine::Rendering::Universal {
class __Render2DLightingPass____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Render2DLightingPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__Render2DLightingPass____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::Render2DLightingPass::<>c*
class CORDL_TYPE __Render2DLightingPass____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* __9__26_0;

  static inline ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* New_ctor();

  /// @brief Method <Render>b__26_0, addr 0x2f3ca94, size 0x20, virtual false, abstract: false, final false
  inline void _Render_b__26_0(::UnityEngine::Rendering::ScriptableRenderContext ctx, ByRef<::UnityEngine::Rendering::Universal::RenderingData> data,
                              ByRef<::UnityEngine::Rendering::DrawingSettings> ds, ByRef<::UnityEngine::Rendering::FilteringSettings> fs, ByRef<::UnityEngine::Rendering::RenderStateBlock> rsb);

  /// @brief Method .ctor, addr 0x2f3ca8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* getStaticF___9();

  static inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* getStaticF___9__26_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__Render2DLightingPass____c* value);

  static inline void setStaticF___9__26_0(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Render2DLightingPass____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Render2DLightingPass____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Render2DLightingPass____c(__Render2DLightingPass____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Render2DLightingPass____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Render2DLightingPass____c(__Render2DLightingPass____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Render2DLightingPass____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Render2DLightingPass
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 244, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Render2DLightingPass*
class CORDL_TYPE Render2DLightingPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::__Render2DLightingPass____c;

  __declspec(property(
      get = UnityEngine_Rendering_Universal_IRenderPass2D_get_rendererData))::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> UnityEngine_Rendering_Universal_IRenderPass2D_rendererData;

  /// @brief Field k_CameraSortingLayerTextureID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_CameraSortingLayerTextureID, put = setStaticF_k_CameraSortingLayerTextureID)) int32_t k_CameraSortingLayerTextureID;

  /// @brief Field k_CombinedRenderingPassName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_CombinedRenderingPassName, put = setStaticF_k_CombinedRenderingPassName))::UnityEngine::Rendering::ShaderTagId k_CombinedRenderingPassName;

  /// @brief Field k_HDREmulationScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_HDREmulationScaleID, put = setStaticF_k_HDREmulationScaleID)) int32_t k_HDREmulationScaleID;

  /// @brief Field k_InverseHDREmulationScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_InverseHDREmulationScaleID, put = setStaticF_k_InverseHDREmulationScaleID)) int32_t k_InverseHDREmulationScaleID;

  /// @brief Field k_LegacyPassName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LegacyPassName, put = setStaticF_k_LegacyPassName))::UnityEngine::Rendering::ShaderTagId k_LegacyPassName;

  /// @brief Field k_NormalsRenderingPassName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_NormalsRenderingPassName, put = setStaticF_k_NormalsRenderingPassName))::UnityEngine::Rendering::ShaderTagId k_NormalsRenderingPassName;

  /// @brief Field k_RendererColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_RendererColorID, put = setStaticF_k_RendererColorID)) int32_t k_RendererColorID;

  /// @brief Field k_ShaderTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ShaderTags, put = setStaticF_k_ShaderTags))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* k_ShaderTags;

  /// @brief Field k_ShapeLightTextureIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ShapeLightTextureIDs, put = setStaticF_k_ShapeLightTextureIDs))::ArrayW<int32_t, ::Array<int32_t>*> k_ShapeLightTextureIDs;

  /// @brief Field k_UseSceneLightingID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_UseSceneLightingID, put = setStaticF_k_UseSceneLightingID)) int32_t k_UseSceneLightingID;

  /// @brief Field m_BlitMaterial, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial))::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_CameraSortingLayerBoundsIndex, offset 0xf2, size 0x2
  __declspec(property(get = __cordl_internal_get_m_CameraSortingLayerBoundsIndex, put = __cordl_internal_set_m_CameraSortingLayerBoundsIndex)) int16_t m_CameraSortingLayerBoundsIndex;

  /// @brief Field m_NeedsDepth, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsDepth, put = __cordl_internal_set_m_NeedsDepth)) bool m_NeedsDepth;

  /// @brief Field m_ProfilingDrawLayerBatch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingDrawLayerBatch, put = setStaticF_m_ProfilingDrawLayerBatch))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLayerBatch;

  /// @brief Field m_ProfilingDrawLightTextures, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingDrawLightTextures, put = setStaticF_m_ProfilingDrawLightTextures))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLightTextures;

  /// @brief Field m_ProfilingDrawLights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingDrawLights, put = setStaticF_m_ProfilingDrawLights))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLights;

  /// @brief Field m_ProfilingDrawRenderers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingDrawRenderers, put = setStaticF_m_ProfilingDrawRenderers))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawRenderers;

  /// @brief Field m_ProfilingSamplerUnlit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSamplerUnlit, put = setStaticF_m_ProfilingSamplerUnlit))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerUnlit;

  /// @brief Field m_Renderer2DData, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer2DData, put = __cordl_internal_set_m_Renderer2DData))::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> m_Renderer2DData;

  /// @brief Field m_SamplingMaterial, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial))::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IRenderPass2D"
  constexpr operator ::UnityEngine::Rendering::Universal::IRenderPass2D*() noexcept;

  /// @brief Method CopyCameraSortingLayerRenderTexture, addr 0x2f38054, size 0x2d4, virtual false, abstract: false, final false
  inline void CopyCameraSortingLayerRenderTexture(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                  ::UnityEngine::Rendering::RenderBufferStoreAction mainTargetStoreAction);

  /// @brief Method DetermineWhenToResolve, addr 0x2f38508, size 0x294, virtual false, abstract: false, final false
  inline void DetermineWhenToResolve(int32_t startIndex, int32_t batchesDrawn, int32_t batchCount,
                                     ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> layerBatches,
                                     ByRef<int32_t> resolveDuringBatch, ByRef<bool> resolveIsAfterCopy);

  /// @brief Method DrawLayerBatches, addr 0x2f38944, size 0x1154, virtual false, abstract: false, final false
  inline int32_t DrawLayerBatches(::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> layerBatches, int32_t batchCount,
                                  int32_t startIndex, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                  ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ByRef<::UnityEngine::Rendering::FilteringSettings> filterSettings,
                                  ByRef<::UnityEngine::Rendering::DrawingSettings> normalsDrawSettings, ByRef<::UnityEngine::Rendering::DrawingSettings> drawSettings,
                                  ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method Execute, addr 0x2f3afb4, size 0xa20, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetCameraSortingLayerBoundsIndex, addr 0x2f37ec8, size 0xe0, virtual false, abstract: false, final false
  inline int16_t GetCameraSortingLayerBoundsIndex();

  /// @brief Method GetTransparencySortingMode, addr 0x2f37fb4, size 0xa0, virtual false, abstract: false, final false
  inline void GetTransparencySortingMode(::UnityEngine::Camera* camera, ByRef<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  static inline ::UnityEngine::Rendering::Universal::Render2DLightingPass* New_ctor(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, ::UnityEngine::Material* blitMaterial,
                                                                                    ::UnityEngine::Material* samplingMaterial);

  /// @brief Method Render, addr 0x2f3879c, size 0x1a8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                     ByRef<::UnityEngine::Rendering::FilteringSettings> filterSettings, ::UnityEngine::Rendering::DrawingSettings drawSettings);

  /// @brief Method Setup, addr 0x2f37fa8, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool useDepth);

  /// @brief Method UnityEngine.Rendering.Universal.IRenderPass2D.get_rendererData, addr 0x2f3c4e4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> UnityEngine_Rendering_Universal_IRenderPass2D_get_rendererData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr int16_t const& __cordl_internal_get_m_CameraSortingLayerBoundsIndex() const;

  constexpr int16_t& __cordl_internal_get_m_CameraSortingLayerBoundsIndex();

  constexpr bool const& __cordl_internal_get_m_NeedsDepth() const;

  constexpr bool& __cordl_internal_get_m_NeedsDepth();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> const& __cordl_internal_get_m_Renderer2DData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>& __cordl_internal_get_m_Renderer2DData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CameraSortingLayerBoundsIndex(int16_t value);

  constexpr void __cordl_internal_set_m_NeedsDepth(bool value);

  constexpr void __cordl_internal_set_m_Renderer2DData(::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x2f37e80, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, ::UnityEngine::Material* blitMaterial, ::UnityEngine::Material* samplingMaterial);

  static inline int32_t getStaticF_k_CameraSortingLayerTextureID();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_CombinedRenderingPassName();

  static inline int32_t getStaticF_k_HDREmulationScaleID();

  static inline int32_t getStaticF_k_InverseHDREmulationScaleID();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_LegacyPassName();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_NormalsRenderingPassName();

  static inline int32_t getStaticF_k_RendererColorID();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_ShaderTags();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_ShapeLightTextureIDs();

  static inline int32_t getStaticF_k_UseSceneLightingID();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDrawLayerBatch();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDrawLightTextures();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDrawLights();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingDrawRenderers();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSamplerUnlit();

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IRenderPass2D"
  constexpr ::UnityEngine::Rendering::Universal::IRenderPass2D* i___UnityEngine__Rendering__Universal__IRenderPass2D() noexcept;

  static inline void setStaticF_k_CameraSortingLayerTextureID(int32_t value);

  static inline void setStaticF_k_CombinedRenderingPassName(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_k_HDREmulationScaleID(int32_t value);

  static inline void setStaticF_k_InverseHDREmulationScaleID(int32_t value);

  static inline void setStaticF_k_LegacyPassName(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_k_NormalsRenderingPassName(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_k_RendererColorID(int32_t value);

  static inline void setStaticF_k_ShaderTags(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  static inline void setStaticF_k_ShapeLightTextureIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_UseSceneLightingID(int32_t value);

  static inline void setStaticF_m_ProfilingDrawLayerBatch(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingDrawLightTextures(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingDrawLights(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingDrawRenderers(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingSamplerUnlit(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Render2DLightingPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Render2DLightingPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Render2DLightingPass(Render2DLightingPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Render2DLightingPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Render2DLightingPass(Render2DLightingPass const&) = delete;

  /// @brief Field m_BlitMaterial, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_SamplingMaterial, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_Renderer2DData, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> ___m_Renderer2DData;

  /// @brief Field m_NeedsDepth, offset: 0xf0, size: 0x1, def value: None
  bool ___m_NeedsDepth;

  /// @brief Field m_CameraSortingLayerBoundsIndex, offset: 0xf2, size: 0x2, def value: None
  int16_t ___m_CameraSortingLayerBoundsIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Render2DLightingPass, 0xf8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Render2DLightingPass, ___m_BlitMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Render2DLightingPass, ___m_SamplingMaterial) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Render2DLightingPass, ___m_Renderer2DData) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Render2DLightingPass, ___m_NeedsDepth) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Render2DLightingPass, ___m_CameraSortingLayerBoundsIndex) == 0xf2, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Render2DLightingPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Render2DLightingPass*, "UnityEngine.Rendering.Universal", "Render2DLightingPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__Render2DLightingPass____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Render2DLightingPass____c*, "UnityEngine.Rendering.Universal", "Render2DLightingPass/<>c");
