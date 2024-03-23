#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererLighting)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
namespace UnityEngine::Rendering::Universal {
class IRenderPass2D;
}
namespace UnityEngine::Rendering::Universal {
struct LayerBatch;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
struct LightStats;
}
namespace UnityEngine::Rendering::Universal {
class Renderer2DData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
struct BlendMode;
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
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RendererLighting;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RendererLighting);
// Type: UnityEngine.Rendering.Universal::RendererLighting
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::RendererLighting*
class CORDL_TYPE RendererLighting : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_BlendFactorsPropIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_BlendFactorsPropIDs, put = setStaticF_k_BlendFactorsPropIDs))::ArrayW<int32_t, ::Array<int32_t>*> k_BlendFactorsPropIDs;

  /// @brief Field k_CookieTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_CookieTexID, put = setStaticF_k_CookieTexID)) int32_t k_CookieTexID;

  /// @brief Field k_DstBlendID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DstBlendID, put = setStaticF_k_DstBlendID)) int32_t k_DstBlendID;

  /// @brief Field k_FalloffDistanceID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_FalloffDistanceID, put = setStaticF_k_FalloffDistanceID)) int32_t k_FalloffDistanceID;

  /// @brief Field k_FalloffIntensityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_FalloffIntensityID, put = setStaticF_k_FalloffIntensityID)) int32_t k_FalloffIntensityID;

  /// @brief Field k_FalloffLookupID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_FalloffLookupID, put = setStaticF_k_FalloffLookupID)) int32_t k_FalloffLookupID;

  /// @brief Field k_InnerAngleMultID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_InnerAngleMultID, put = setStaticF_k_InnerAngleMultID)) int32_t k_InnerAngleMultID;

  /// @brief Field k_InnerRadiusMultID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_InnerRadiusMultID, put = setStaticF_k_InnerRadiusMultID)) int32_t k_InnerRadiusMultID;

  /// @brief Field k_InvertedFilterPropIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_InvertedFilterPropIDs, put = setStaticF_k_InvertedFilterPropIDs))::ArrayW<int32_t, ::Array<int32_t>*> k_InvertedFilterPropIDs;

  /// @brief Field k_IsFullSpotlightID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_IsFullSpotlightID, put = setStaticF_k_IsFullSpotlightID)) int32_t k_IsFullSpotlightID;

  /// @brief Field k_LightColorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightColorID, put = setStaticF_k_LightColorID)) int32_t k_LightColorID;

  /// @brief Field k_LightInvMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightInvMatrixID, put = setStaticF_k_LightInvMatrixID)) int32_t k_LightInvMatrixID;

  /// @brief Field k_LightLookupID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightLookupID, put = setStaticF_k_LightLookupID)) int32_t k_LightLookupID;

  /// @brief Field k_LightPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightPositionID, put = setStaticF_k_LightPositionID)) int32_t k_LightPositionID;

  /// @brief Field k_LightQualityFastKeyword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_LightQualityFastKeyword, put = setStaticF_k_LightQualityFastKeyword))::StringW k_LightQualityFastKeyword;

  /// @brief Field k_LightZDistanceID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_LightZDistanceID, put = setStaticF_k_LightZDistanceID)) int32_t k_LightZDistanceID;

  /// @brief Field k_MaskFilterPropIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_MaskFilterPropIDs, put = setStaticF_k_MaskFilterPropIDs))::ArrayW<int32_t, ::Array<int32_t>*> k_MaskFilterPropIDs;

  /// @brief Field k_NormalClearColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_k_NormalClearColor, put = setStaticF_k_NormalClearColor))::UnityEngine::Color k_NormalClearColor;

  /// @brief Field k_NormalsRenderingPassName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_NormalsRenderingPassName, put = setStaticF_k_NormalsRenderingPassName))::UnityEngine::Rendering::ShaderTagId k_NormalsRenderingPassName;

  /// @brief Field k_OuterAngleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_OuterAngleID, put = setStaticF_k_OuterAngleID)) int32_t k_OuterAngleID;

  /// @brief Field k_PointLightCookieTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_PointLightCookieTexID, put = setStaticF_k_PointLightCookieTexID)) int32_t k_PointLightCookieTexID;

  /// @brief Field k_SpriteLightKeyword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SpriteLightKeyword, put = setStaticF_k_SpriteLightKeyword))::StringW k_SpriteLightKeyword;

  /// @brief Field k_SrcBlendID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_SrcBlendID, put = setStaticF_k_SrcBlendID)) int32_t k_SrcBlendID;

  /// @brief Field k_UseAdditiveBlendingKeyword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UseAdditiveBlendingKeyword, put = setStaticF_k_UseAdditiveBlendingKeyword))::StringW k_UseAdditiveBlendingKeyword;

  /// @brief Field k_UseBlendStyleKeywords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UseBlendStyleKeywords, put = setStaticF_k_UseBlendStyleKeywords))::ArrayW<::StringW, ::Array<::StringW>*> k_UseBlendStyleKeywords;

  /// @brief Field k_UseNormalMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UseNormalMap, put = setStaticF_k_UseNormalMap))::StringW k_UseNormalMap;

  /// @brief Field k_UsePointLightCookiesKeyword, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UsePointLightCookiesKeyword, put = setStaticF_k_UsePointLightCookiesKeyword))::StringW k_UsePointLightCookiesKeyword;

  /// @brief Field k_VolumeOpacityID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_VolumeOpacityID, put = setStaticF_k_VolumeOpacityID)) int32_t k_VolumeOpacityID;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field s_HasSetupRenderTextureFormatToUse, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_HasSetupRenderTextureFormatToUse, put = setStaticF_s_HasSetupRenderTextureFormatToUse)) bool s_HasSetupRenderTextureFormatToUse;

  /// @brief Field s_RenderTextureFormatToUse, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_RenderTextureFormatToUse,
                             put = setStaticF_s_RenderTextureFormatToUse))::UnityEngine::Experimental::Rendering::GraphicsFormat s_RenderTextureFormatToUse;

  /// @brief Method CanCastShadows, addr 0x2f3da6c, size 0x34, virtual false, abstract: false, final false
  static inline bool CanCastShadows(::UnityEngine::Rendering::Universal::Light2D* light, int32_t layerToRender);

  /// @brief Method CanCastVolumetricShadows, addr 0x2f3daa0, size 0x50, virtual false, abstract: false, final false
  static inline bool CanCastVolumetricShadows(::UnityEngine::Rendering::Universal::Light2D* light, int32_t endLayerValue);

  /// @brief Method ClearDirtyLighting, addr 0x2f3eb18, size 0x2dc, virtual false, abstract: false, final false
  static inline void ClearDirtyLighting(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd, uint32_t blendStylesUsed);

  /// @brief Method CreateCameraSortingLayerRenderTexture, addr 0x2f38328, size 0x1e0, virtual false, abstract: false, final false
  static inline void CreateCameraSortingLayerRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                           ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod);

  /// @brief Method CreateLightMaterial, addr 0x2f3efe8, size 0x2bc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, ::UnityEngine::Rendering::Universal::Light2D* light,
                                                                      bool isVolume);

  /// @brief Method CreateNormalMapRenderTexture, addr 0x2f3d508, size 0x440, virtual false, abstract: false, final false
  static inline void CreateNormalMapRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                                  ::UnityEngine::Rendering::CommandBuffer* cmd, float_t renderScale);

  /// @brief Method DisableAllKeywords, addr 0x2f3c1e0, size 0xb4, virtual false, abstract: false, final false
  static inline void DisableAllKeywords(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method DrawPointLight, addr 0x2f3d948, size 0x124, virtual false, abstract: false, final false
  static inline void DrawPointLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Light2D* light, ::UnityEngine::Mesh* lightMesh,
                                    ::UnityEngine::Material* material);

  /// @brief Method EnableBlendStyle, addr 0x2f3a6a0, size 0xac, virtual false, abstract: false, final false
  static inline void EnableBlendStyle(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t blendStyleIndex, bool enabled);

  /// @brief Method GetBlendStyleRenderTextureDesc, addr 0x2f3bdc8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor GetBlendStyleRenderTextureDesc(::UnityEngine::Rendering::Universal::IRenderPass2D* pass,
                                                                                      ::UnityEngine::Rendering::Universal::RenderingData renderingData);

  /// @brief Method GetLightMaterial, addr 0x2f3e37c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* rendererData, ::UnityEngine::Rendering::Universal::Light2D* light,
                                                                   bool isVolume);

  /// @brief Method GetLightMaterialIndex, addr 0x2f3ee90, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t GetLightMaterialIndex(::UnityEngine::Rendering::Universal::Light2D* light, bool isVolume);

  /// @brief Method GetNormalizedAngle, addr 0x2f3e9b0, size 0x10, virtual false, abstract: false, final false
  static inline float_t GetNormalizedAngle(float_t angle);

  /// @brief Method GetNormalizedInnerRadius, addr 0x2f3e994, size 0x1c, virtual false, abstract: false, final false
  static inline float_t GetNormalizedInnerRadius(::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method GetRenderTextureFormat, addr 0x2f3d400, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetRenderTextureFormat();

  /// @brief Method GetScaledLightInvMatrix, addr 0x2f3e9c0, size 0x158, virtual false, abstract: false, final false
  static inline void GetScaledLightInvMatrix(::UnityEngine::Rendering::Universal::Light2D* light, ByRef<::UnityEngine::Matrix4x4> retMatrix);

  /// @brief Method ReleaseRenderTextures, addr 0x2f3c294, size 0x250, virtual false, abstract: false, final false
  static inline void ReleaseRenderTextures(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RenderLightSet, addr 0x2f3dba0, size 0x7dc, virtual false, abstract: false, final false
  static inline void RenderLightSet(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData, int32_t blendStyleIndex,
                                    ::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture,
                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* lights);

  /// @brief Method RenderLightVolumes, addr 0x2f3a74c, size 0x808, virtual false, abstract: false, final false
  static inline void RenderLightVolumes(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                        ::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, int32_t endLayerValue, ::UnityEngine::Rendering::RenderTargetIdentifier renderTexture,
                                        ::UnityEngine::Rendering::RenderTargetIdentifier depthTexture, ::UnityEngine::Rendering::RenderBufferStoreAction intermediateStoreAction,
                                        ::UnityEngine::Rendering::RenderBufferStoreAction finalStoreAction, bool requiresRTInit,
                                        ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* lights);

  /// @brief Method RenderLights, addr 0x2f3a070, size 0x560, virtual false, abstract: false, final false
  static inline void RenderLights(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::Universal::RenderingData renderingData,
                                  ::UnityEngine::Rendering::CommandBuffer* cmd, int32_t layerToRender, ByRef<::UnityEngine::Rendering::Universal::LayerBatch> layerBatch,
                                  ByRef<::UnityEngine::RenderTextureDescriptor> rtDesc);

  /// @brief Method RenderNormals, addr 0x2f39a98, size 0x5d8, virtual false, abstract: false, final false
  static inline void RenderNormals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                   ::UnityEngine::Rendering::Universal::RenderingData renderingData, ::UnityEngine::Rendering::DrawingSettings drawSettings,
                                   ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget,
                                   ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::LightStats lightStats);

  /// @brief Method SetBlendModes, addr 0x2f3edf4, size 0x9c, virtual false, abstract: false, final false
  static inline void SetBlendModes(::UnityEngine::Material* material, ::UnityEngine::Rendering::BlendMode src, ::UnityEngine::Rendering::BlendMode dst);

  /// @brief Method SetGeneralLightShaderGlobals, addr 0x2f3e484, size 0x10c, virtual false, abstract: false, final false
  static inline void SetGeneralLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                  ::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method SetPointLightShaderGlobals, addr 0x2f3e590, size 0x404, virtual false, abstract: false, final false
  static inline void SetPointLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                ::UnityEngine::Rendering::Universal::Light2D* light);

  /// @brief Method SetShapeLightShaderGlobals, addr 0x2f3ba28, size 0x3a0, virtual false, abstract: false, final false
  static inline void SetShapeLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* pass, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method ShouldRenderLight, addr 0x2f3daf0, size 0xb0, virtual false, abstract: false, final false
  static inline bool ShouldRenderLight(::UnityEngine::Rendering::Universal::Light2D* light, int32_t blendStyleIndex, int32_t layerToRender);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_BlendFactorsPropIDs();

  static inline int32_t getStaticF_k_CookieTexID();

  static inline int32_t getStaticF_k_DstBlendID();

  static inline int32_t getStaticF_k_FalloffDistanceID();

  static inline int32_t getStaticF_k_FalloffIntensityID();

  static inline int32_t getStaticF_k_FalloffLookupID();

  static inline int32_t getStaticF_k_InnerAngleMultID();

  static inline int32_t getStaticF_k_InnerRadiusMultID();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_InvertedFilterPropIDs();

  static inline int32_t getStaticF_k_IsFullSpotlightID();

  static inline int32_t getStaticF_k_LightColorID();

  static inline int32_t getStaticF_k_LightInvMatrixID();

  static inline int32_t getStaticF_k_LightLookupID();

  static inline int32_t getStaticF_k_LightPositionID();

  static inline ::StringW getStaticF_k_LightQualityFastKeyword();

  static inline int32_t getStaticF_k_LightZDistanceID();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_MaskFilterPropIDs();

  static inline ::UnityEngine::Color getStaticF_k_NormalClearColor();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_NormalsRenderingPassName();

  static inline int32_t getStaticF_k_OuterAngleID();

  static inline int32_t getStaticF_k_PointLightCookieTexID();

  static inline ::StringW getStaticF_k_SpriteLightKeyword();

  static inline int32_t getStaticF_k_SrcBlendID();

  static inline ::StringW getStaticF_k_UseAdditiveBlendingKeyword();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_UseBlendStyleKeywords();

  static inline ::StringW getStaticF_k_UseNormalMap();

  static inline ::StringW getStaticF_k_UsePointLightCookiesKeyword();

  static inline int32_t getStaticF_k_VolumeOpacityID();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline bool getStaticF_s_HasSetupRenderTextureFormatToUse();

  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat getStaticF_s_RenderTextureFormatToUse();

  static inline void setStaticF_k_BlendFactorsPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_CookieTexID(int32_t value);

  static inline void setStaticF_k_DstBlendID(int32_t value);

  static inline void setStaticF_k_FalloffDistanceID(int32_t value);

  static inline void setStaticF_k_FalloffIntensityID(int32_t value);

  static inline void setStaticF_k_FalloffLookupID(int32_t value);

  static inline void setStaticF_k_InnerAngleMultID(int32_t value);

  static inline void setStaticF_k_InnerRadiusMultID(int32_t value);

  static inline void setStaticF_k_InvertedFilterPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_IsFullSpotlightID(int32_t value);

  static inline void setStaticF_k_LightColorID(int32_t value);

  static inline void setStaticF_k_LightInvMatrixID(int32_t value);

  static inline void setStaticF_k_LightLookupID(int32_t value);

  static inline void setStaticF_k_LightPositionID(int32_t value);

  static inline void setStaticF_k_LightQualityFastKeyword(::StringW value);

  static inline void setStaticF_k_LightZDistanceID(int32_t value);

  static inline void setStaticF_k_MaskFilterPropIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_NormalClearColor(::UnityEngine::Color value);

  static inline void setStaticF_k_NormalsRenderingPassName(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_k_OuterAngleID(int32_t value);

  static inline void setStaticF_k_PointLightCookieTexID(int32_t value);

  static inline void setStaticF_k_SpriteLightKeyword(::StringW value);

  static inline void setStaticF_k_SrcBlendID(int32_t value);

  static inline void setStaticF_k_UseAdditiveBlendingKeyword(::StringW value);

  static inline void setStaticF_k_UseBlendStyleKeywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_k_UseNormalMap(::StringW value);

  static inline void setStaticF_k_UsePointLightCookiesKeyword(::StringW value);

  static inline void setStaticF_k_VolumeOpacityID(int32_t value);

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_HasSetupRenderTextureFormatToUse(bool value);

  static inline void setStaticF_s_RenderTextureFormatToUse(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererLighting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RendererLighting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RendererLighting(RendererLighting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RendererLighting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RendererLighting(RendererLighting const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RendererLighting, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RendererLighting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RendererLighting*, "UnityEngine.Rendering.Universal", "RendererLighting");
