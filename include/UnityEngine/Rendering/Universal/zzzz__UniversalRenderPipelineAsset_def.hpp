#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieResolution_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightRenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MsaaQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PipelineDebugLevel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderVariantLogLevel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCascadesOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowResolution_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineAsset)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct ColorGradingMode;
}
namespace UnityEngine::Rendering::Universal {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
namespace UnityEngine::Rendering::Universal {
struct LightRenderingMode;
}
namespace UnityEngine::Rendering::Universal {
struct PipelineDebugLevel;
}
namespace UnityEngine::Rendering::Universal {
struct RendererType;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderVariantLogLevel;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowCascadesOption;
}
namespace UnityEngine::Rendering::Universal {
struct StoreActionsOptimization;
}
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
namespace UnityEngine::Rendering::Universal {
struct VolumeFrameworkUpdateMode;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset);
// Type: UnityEngine.Rendering.Universal::UniversalRenderPipelineAsset
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 276, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::UniversalRenderPipelineAsset*
class CORDL_TYPE UniversalRenderPipelineAsset : public ::UnityEngine::Rendering::RenderPipelineAsset {
public:
  // Declarations
  /// @brief Field AdditionalLightsDefaultShadowResolutionTierHigh, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierHigh,
                             put = setStaticF_AdditionalLightsDefaultShadowResolutionTierHigh)) int32_t AdditionalLightsDefaultShadowResolutionTierHigh;

  /// @brief Field AdditionalLightsDefaultShadowResolutionTierLow, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierLow,
                             put = setStaticF_AdditionalLightsDefaultShadowResolutionTierLow)) int32_t AdditionalLightsDefaultShadowResolutionTierLow;

  /// @brief Field AdditionalLightsDefaultShadowResolutionTierMedium, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierMedium,
                             put = setStaticF_AdditionalLightsDefaultShadowResolutionTierMedium)) int32_t AdditionalLightsDefaultShadowResolutionTierMedium;

  __declspec(property(get = get_additionalLightsCookieFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat additionalLightsCookieFormat;

  __declspec(property(get = get_additionalLightsCookieResolution))::UnityEngine::Vector2Int additionalLightsCookieResolution;

  __declspec(property(get = get_additionalLightsRenderingMode, put = set_additionalLightsRenderingMode))::UnityEngine::Rendering::Universal::LightRenderingMode additionalLightsRenderingMode;

  __declspec(property(get = get_additionalLightsShadowResolutionTierHigh, put = set_additionalLightsShadowResolutionTierHigh)) int32_t additionalLightsShadowResolutionTierHigh;

  __declspec(property(get = get_additionalLightsShadowResolutionTierLow, put = set_additionalLightsShadowResolutionTierLow)) int32_t additionalLightsShadowResolutionTierLow;

  __declspec(property(get = get_additionalLightsShadowResolutionTierMedium, put = set_additionalLightsShadowResolutionTierMedium)) int32_t additionalLightsShadowResolutionTierMedium;

  __declspec(property(get = get_additionalLightsShadowmapResolution, put = set_additionalLightsShadowmapResolution)) int32_t additionalLightsShadowmapResolution;

  __declspec(property(get = get_cascade2Split, put = set_cascade2Split)) float_t cascade2Split;

  __declspec(property(get = get_cascade3Split, put = set_cascade3Split))::UnityEngine::Vector2 cascade3Split;

  __declspec(property(get = get_cascade4Split, put = set_cascade4Split))::UnityEngine::Vector3 cascade4Split;

  __declspec(property(get = get_cascadeBorder, put = set_cascadeBorder)) float_t cascadeBorder;

  __declspec(property(get = get_colorGradingLutSize, put = set_colorGradingLutSize)) int32_t colorGradingLutSize;

  __declspec(property(get = get_colorGradingMode, put = set_colorGradingMode))::UnityEngine::Rendering::Universal::ColorGradingMode colorGradingMode;

  __declspec(property(get = get_conservativeEnclosingSphere, put = set_conservativeEnclosingSphere)) bool conservativeEnclosingSphere;

  __declspec(property(get = get_debugLevel))::UnityEngine::Rendering::Universal::PipelineDebugLevel debugLevel;

  __declspec(property(get = get_decalMaterial))::UnityW<::UnityEngine::Material> decalMaterial;

  __declspec(property(get = get_default2DMaskMaterial))::UnityW<::UnityEngine::Material> default2DMaskMaterial;

  __declspec(property(get = get_default2DMaterial))::UnityW<::UnityEngine::Material> default2DMaterial;

  __declspec(property(get = get_defaultLineMaterial))::UnityW<::UnityEngine::Material> defaultLineMaterial;

  __declspec(property(get = get_defaultMaterial))::UnityW<::UnityEngine::Material> defaultMaterial;

  __declspec(property(get = get_defaultParticleMaterial))::UnityW<::UnityEngine::Material> defaultParticleMaterial;

  __declspec(property(get = get_defaultShader))::UnityW<::UnityEngine::Shader> defaultShader;

  __declspec(property(get = get_defaultTerrainMaterial))::UnityW<::UnityEngine::Material> defaultTerrainMaterial;

  __declspec(property(get = get_defaultUIETC1SupportedMaterial))::UnityW<::UnityEngine::Material> defaultUIETC1SupportedMaterial;

  __declspec(property(get = get_defaultUIMaterial))::UnityW<::UnityEngine::Material> defaultUIMaterial;

  __declspec(property(get = get_defaultUIOverdrawMaterial))::UnityW<::UnityEngine::Material> defaultUIOverdrawMaterial;

  __declspec(property(get = get_fsrOverrideSharpness, put = set_fsrOverrideSharpness)) bool fsrOverrideSharpness;

  __declspec(property(get = get_fsrSharpness, put = set_fsrSharpness)) float_t fsrSharpness;

  /// @brief Field k_AssetPreviousVersion, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AssetPreviousVersion, put = __cordl_internal_set_k_AssetPreviousVersion)) int32_t k_AssetPreviousVersion;

  /// @brief Field k_AssetVersion, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AssetVersion, put = __cordl_internal_set_k_AssetVersion)) int32_t k_AssetVersion;

  __declspec(property(get = get_lightLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> lightLayerMaskNames;

  /// @brief Field m_AdditionalLightShadowsSupported, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowsSupported, put = __cordl_internal_set_m_AdditionalLightShadowsSupported)) bool m_AdditionalLightShadowsSupported;

  /// @brief Field m_AdditionalLightsCookieFormat, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieFormat,
                      put = __cordl_internal_set_m_AdditionalLightsCookieFormat))::UnityEngine::Rendering::Universal::LightCookieFormat m_AdditionalLightsCookieFormat;

  /// @brief Field m_AdditionalLightsCookieResolution, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieResolution,
                      put = __cordl_internal_set_m_AdditionalLightsCookieResolution))::UnityEngine::Rendering::Universal::LightCookieResolution m_AdditionalLightsCookieResolution;

  /// @brief Field m_AdditionalLightsPerObjectLimit, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsPerObjectLimit, put = __cordl_internal_set_m_AdditionalLightsPerObjectLimit)) int32_t m_AdditionalLightsPerObjectLimit;

  /// @brief Field m_AdditionalLightsRenderingMode, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsRenderingMode,
                      put = __cordl_internal_set_m_AdditionalLightsRenderingMode))::UnityEngine::Rendering::Universal::LightRenderingMode m_AdditionalLightsRenderingMode;

  /// @brief Field m_AdditionalLightsShadowResolutionTierHigh, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierHigh)) int32_t m_AdditionalLightsShadowResolutionTierHigh;

  /// @brief Field m_AdditionalLightsShadowResolutionTierLow, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierLow)) int32_t m_AdditionalLightsShadowResolutionTierLow;

  /// @brief Field m_AdditionalLightsShadowResolutionTierMedium, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierMedium)) int32_t m_AdditionalLightsShadowResolutionTierMedium;

  /// @brief Field m_AdditionalLightsShadowmapResolution, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowmapResolution,
                      put = __cordl_internal_set_m_AdditionalLightsShadowmapResolution))::UnityEngine::Rendering::Universal::ShadowResolution m_AdditionalLightsShadowmapResolution;

  /// @brief Field m_Cascade2Split, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Cascade2Split, put = __cordl_internal_set_m_Cascade2Split)) float_t m_Cascade2Split;

  /// @brief Field m_Cascade3Split, offset 0xac, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cascade3Split, put = __cordl_internal_set_m_Cascade3Split))::UnityEngine::Vector2 m_Cascade3Split;

  /// @brief Field m_Cascade4Split, offset 0xb4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Cascade4Split, put = __cordl_internal_set_m_Cascade4Split))::UnityEngine::Vector3 m_Cascade4Split;

  /// @brief Field m_CascadeBorder, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_ColorGradingLutSize, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorGradingLutSize, put = __cordl_internal_set_m_ColorGradingLutSize)) int32_t m_ColorGradingLutSize;

  /// @brief Field m_ColorGradingMode, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorGradingMode, put = __cordl_internal_set_m_ColorGradingMode))::UnityEngine::Rendering::Universal::ColorGradingMode m_ColorGradingMode;

  /// @brief Field m_ConservativeEnclosingSphere, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ConservativeEnclosingSphere, put = __cordl_internal_set_m_ConservativeEnclosingSphere)) bool m_ConservativeEnclosingSphere;

  /// @brief Field m_DebugLevel, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DebugLevel, put = __cordl_internal_set_m_DebugLevel))::UnityEngine::Rendering::Universal::PipelineDebugLevel m_DebugLevel;

  /// @brief Field m_DefaultRendererIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultRendererIndex, put = __cordl_internal_set_m_DefaultRendererIndex)) int32_t m_DefaultRendererIndex;

  /// @brief Field m_DefaultShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultShader, put = __cordl_internal_set_m_DefaultShader))::UnityW<::UnityEngine::Shader> m_DefaultShader;

  /// @brief Field m_FsrOverrideSharpness, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FsrOverrideSharpness, put = __cordl_internal_set_m_FsrOverrideSharpness)) bool m_FsrOverrideSharpness;

  /// @brief Field m_FsrSharpness, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FsrSharpness, put = __cordl_internal_set_m_FsrSharpness)) float_t m_FsrSharpness;

  /// @brief Field m_LocalShadowsAtlasResolution, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalShadowsAtlasResolution,
                      put = __cordl_internal_set_m_LocalShadowsAtlasResolution))::UnityEngine::Rendering::Universal::ShadowResolution m_LocalShadowsAtlasResolution;

  /// @brief Field m_LocalShadowsSupported, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LocalShadowsSupported, put = __cordl_internal_set_m_LocalShadowsSupported)) bool m_LocalShadowsSupported;

  /// @brief Field m_MSAA, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MSAA, put = __cordl_internal_set_m_MSAA))::UnityEngine::Rendering::Universal::MsaaQuality m_MSAA;

  /// @brief Field m_MainLightRenderingMode, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MainLightRenderingMode,
                      put = __cordl_internal_set_m_MainLightRenderingMode))::UnityEngine::Rendering::Universal::LightRenderingMode m_MainLightRenderingMode;

  /// @brief Field m_MainLightShadowmapResolution, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowmapResolution,
                      put = __cordl_internal_set_m_MainLightShadowmapResolution))::UnityEngine::Rendering::Universal::ShadowResolution m_MainLightShadowmapResolution;

  /// @brief Field m_MainLightShadowsSupported, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowsSupported, put = __cordl_internal_set_m_MainLightShadowsSupported)) bool m_MainLightShadowsSupported;

  /// @brief Field m_MaxPixelLights, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxPixelLights, put = __cordl_internal_set_m_MaxPixelLights)) int32_t m_MaxPixelLights;

  /// @brief Field m_MixedLightingSupported, offset 0xde, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MixedLightingSupported, put = __cordl_internal_set_m_MixedLightingSupported)) bool m_MixedLightingSupported;

  /// @brief Field m_NumIterationsEnclosingSphere, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumIterationsEnclosingSphere, put = __cordl_internal_set_m_NumIterationsEnclosingSphere)) int32_t m_NumIterationsEnclosingSphere;

  /// @brief Field m_OpaqueDownsampling, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpaqueDownsampling, put = __cordl_internal_set_m_OpaqueDownsampling))::UnityEngine::Rendering::Universal::Downsampling m_OpaqueDownsampling;

  /// @brief Field m_ReflectionProbeBlending, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReflectionProbeBlending, put = __cordl_internal_set_m_ReflectionProbeBlending)) bool m_ReflectionProbeBlending;

  /// @brief Field m_ReflectionProbeBoxProjection, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReflectionProbeBoxProjection, put = __cordl_internal_set_m_ReflectionProbeBoxProjection)) bool m_ReflectionProbeBoxProjection;

  /// @brief Field m_RenderScale, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderScale, put = __cordl_internal_set_m_RenderScale)) float_t m_RenderScale;

  /// @brief Field m_RendererData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererData, put = __cordl_internal_set_m_RendererData))::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> m_RendererData;

  /// @brief Field m_RendererDataList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererDataList,
                      put = __cordl_internal_set_m_RendererDataList))::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>,
                                                                              ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> m_RendererDataList;

  /// @brief Field m_RendererType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RendererType, put = __cordl_internal_set_m_RendererType))::UnityEngine::Rendering::Universal::RendererType m_RendererType;

  /// @brief Field m_Renderers, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Renderers,
      put = __cordl_internal_set_m_Renderers))::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> m_Renderers;

  /// @brief Field m_RequireDepthTexture, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequireDepthTexture, put = __cordl_internal_set_m_RequireDepthTexture)) bool m_RequireDepthTexture;

  /// @brief Field m_RequireOpaqueTexture, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequireOpaqueTexture, put = __cordl_internal_set_m_RequireOpaqueTexture)) bool m_RequireOpaqueTexture;

  /// @brief Field m_ShaderVariantLogLevel, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShaderVariantLogLevel,
                      put = __cordl_internal_set_m_ShaderVariantLogLevel))::UnityEngine::Rendering::Universal::ShaderVariantLogLevel m_ShaderVariantLogLevel;

  /// @brief Field m_ShadowAtlasResolution, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowAtlasResolution,
                      put = __cordl_internal_set_m_ShadowAtlasResolution))::UnityEngine::Rendering::Universal::ShadowResolution m_ShadowAtlasResolution;

  /// @brief Field m_ShadowCascadeCount, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCascadeCount, put = __cordl_internal_set_m_ShadowCascadeCount)) int32_t m_ShadowCascadeCount;

  /// @brief Field m_ShadowCascades, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCascades, put = __cordl_internal_set_m_ShadowCascades))::UnityEngine::Rendering::Universal::ShadowCascadesOption m_ShadowCascades;

  /// @brief Field m_ShadowDepthBias, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowDepthBias, put = __cordl_internal_set_m_ShadowDepthBias)) float_t m_ShadowDepthBias;

  /// @brief Field m_ShadowDistance, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowDistance, put = __cordl_internal_set_m_ShadowDistance)) float_t m_ShadowDistance;

  /// @brief Field m_ShadowNormalBias, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowNormalBias, put = __cordl_internal_set_m_ShadowNormalBias)) float_t m_ShadowNormalBias;

  /// @brief Field m_ShadowType, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowType, put = __cordl_internal_set_m_ShadowType))::UnityEngine::Rendering::Universal::ShadowQuality m_ShadowType;

  /// @brief Field m_SoftShadowsSupported, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SoftShadowsSupported, put = __cordl_internal_set_m_SoftShadowsSupported)) bool m_SoftShadowsSupported;

  /// @brief Field m_StoreActionsOptimization, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StoreActionsOptimization,
                      put = __cordl_internal_set_m_StoreActionsOptimization))::UnityEngine::Rendering::Universal::StoreActionsOptimization m_StoreActionsOptimization;

  /// @brief Field m_SupportsDynamicBatching, offset 0xdd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsDynamicBatching, put = __cordl_internal_set_m_SupportsDynamicBatching)) bool m_SupportsDynamicBatching;

  /// @brief Field m_SupportsHDR, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsHDR, put = __cordl_internal_set_m_SupportsHDR)) bool m_SupportsHDR;

  /// @brief Field m_SupportsLightLayers, offset 0xdf, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsLightLayers, put = __cordl_internal_set_m_SupportsLightLayers)) bool m_SupportsLightLayers;

  /// @brief Field m_SupportsTerrainHoles, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsTerrainHoles, put = __cordl_internal_set_m_SupportsTerrainHoles)) bool m_SupportsTerrainHoles;

  /// @brief Field m_UpscalingFilter, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpscalingFilter, put = __cordl_internal_set_m_UpscalingFilter))::UnityEngine::Rendering::Universal::UpscalingFilterSelection m_UpscalingFilter;

  /// @brief Field m_UseAdaptivePerformance, offset 0xe4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseAdaptivePerformance, put = __cordl_internal_set_m_UseAdaptivePerformance)) bool m_UseAdaptivePerformance;

  /// @brief Field m_UseFastSRGBLinearConversion, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFastSRGBLinearConversion, put = __cordl_internal_set_m_UseFastSRGBLinearConversion)) bool m_UseFastSRGBLinearConversion;

  /// @brief Field m_UseSRPBatcher, offset 0xdc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSRPBatcher, put = __cordl_internal_set_m_UseSRPBatcher)) bool m_UseSRPBatcher;

  /// @brief Field m_VolumeFrameworkUpdateMode, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VolumeFrameworkUpdateMode,
                      put = __cordl_internal_set_m_VolumeFrameworkUpdateMode))::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode m_VolumeFrameworkUpdateMode;

  __declspec(property(get = get_mainLightRenderingMode, put = set_mainLightRenderingMode))::UnityEngine::Rendering::Universal::LightRenderingMode mainLightRenderingMode;

  __declspec(property(get = get_mainLightShadowmapResolution, put = set_mainLightShadowmapResolution)) int32_t mainLightShadowmapResolution;

  __declspec(property(get = get_maxAdditionalLightsCount, put = set_maxAdditionalLightsCount)) int32_t maxAdditionalLightsCount;

  __declspec(property(get = get_msaaSampleCount, put = set_msaaSampleCount)) int32_t msaaSampleCount;

  __declspec(property(get = get_numIterationsEnclosingSphere, put = set_numIterationsEnclosingSphere)) int32_t numIterationsEnclosingSphere;

  __declspec(property(get = get_opaqueDownsampling))::UnityEngine::Rendering::Universal::Downsampling opaqueDownsampling;

  __declspec(property(get = get_prefixedRenderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_reflectionProbeBlending, put = set_reflectionProbeBlending)) bool reflectionProbeBlending;

  __declspec(property(get = get_reflectionProbeBoxProjection, put = set_reflectionProbeBoxProjection)) bool reflectionProbeBoxProjection;

  __declspec(property(get = get_renderScale, put = set_renderScale)) float_t renderScale;

  __declspec(property(get = get_rendererIndexList))::ArrayW<int32_t, ::Array<int32_t>*> rendererIndexList;

  __declspec(property(get = get_renderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerMaskNames;

  /// @brief Field s_LightCookieFormatList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LightCookieFormatList, put = setStaticF_s_LightCookieFormatList))::ArrayW<
      ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
      ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*> s_LightCookieFormatList;

  __declspec(property(get = get_scriptableRenderer))::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer;

  __declspec(property(get = get_scriptableRendererData))::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> scriptableRendererData;

  __declspec(property(get = get_shaderVariantLogLevel, put = set_shaderVariantLogLevel))::UnityEngine::Rendering::Universal::ShaderVariantLogLevel shaderVariantLogLevel;

  __declspec(property(get = get_shadowCascadeCount, put = set_shadowCascadeCount)) int32_t shadowCascadeCount;

  __declspec(property(get = get_shadowCascadeOption, put = set_shadowCascadeOption))::UnityEngine::Rendering::Universal::ShadowCascadesOption shadowCascadeOption;

  __declspec(property(get = get_shadowDepthBias, put = set_shadowDepthBias)) float_t shadowDepthBias;

  __declspec(property(get = get_shadowDistance, put = set_shadowDistance)) float_t shadowDistance;

  __declspec(property(get = get_shadowNormalBias, put = set_shadowNormalBias)) float_t shadowNormalBias;

  __declspec(property(get = get_storeActionsOptimization, put = set_storeActionsOptimization))::UnityEngine::Rendering::Universal::StoreActionsOptimization storeActionsOptimization;

  __declspec(property(get = get_supportsAdditionalLightShadows, put = set_supportsAdditionalLightShadows)) bool supportsAdditionalLightShadows;

  __declspec(property(get = get_supportsCameraDepthTexture, put = set_supportsCameraDepthTexture)) bool supportsCameraDepthTexture;

  __declspec(property(get = get_supportsCameraOpaqueTexture, put = set_supportsCameraOpaqueTexture)) bool supportsCameraOpaqueTexture;

  __declspec(property(get = get_supportsDynamicBatching, put = set_supportsDynamicBatching)) bool supportsDynamicBatching;

  __declspec(property(get = get_supportsHDR, put = set_supportsHDR)) bool supportsHDR;

  __declspec(property(get = get_supportsLightLayers)) bool supportsLightLayers;

  __declspec(property(get = get_supportsMainLightShadows, put = set_supportsMainLightShadows)) bool supportsMainLightShadows;

  __declspec(property(get = get_supportsMixedLighting)) bool supportsMixedLighting;

  __declspec(property(get = get_supportsSoftShadows, put = set_supportsSoftShadows)) bool supportsSoftShadows;

  __declspec(property(get = get_supportsTerrainHoles)) bool supportsTerrainHoles;

  __declspec(property(get = get_upscalingFilter, put = set_upscalingFilter))::UnityEngine::Rendering::Universal::UpscalingFilterSelection upscalingFilter;

  __declspec(property(get = get_useAdaptivePerformance, put = set_useAdaptivePerformance)) bool useAdaptivePerformance;

  __declspec(property(get = get_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  __declspec(property(get = get_useSRPBatcher, put = set_useSRPBatcher)) bool useSRPBatcher;

  __declspec(property(get = get_volumeFrameworkUpdateMode))::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode volumeFrameworkUpdateMode;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method CreatePipeline, addr 0x2c59d44, size 0x1f8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderPipeline* CreatePipeline();

  /// @brief Method CreateRenderers, addr 0x2c59f3c, size 0x168, virtual false, abstract: false, final false
  inline void CreateRenderers();

  /// @brief Method DestroyRenderer, addr 0x2c5a108, size 0x24, virtual false, abstract: false, final false
  inline void DestroyRenderer(ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer);

  /// @brief Method DestroyRenderers, addr 0x2c5a0a4, size 0x64, virtual false, abstract: false, final false
  inline void DestroyRenderers();

  /// @brief Method GetAdditionalLightsShadowResolution, addr 0x2c5ac78, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetAdditionalLightsShadowResolution(int32_t additionalLightsShadowResolutionTier);

  /// @brief Method GetMaterial, addr 0x2c5a164, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Rendering::Universal::DefaultMaterialType materialType);

  /// @brief Method GetRenderer, addr 0x2c5a458, size 0x2b4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRenderer(int32_t index);

  /// @brief Method LoadBuiltinRendererData, addr 0x2c59d08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> LoadBuiltinRendererData(::UnityEngine::Rendering::Universal::RendererType type);

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x2c5b26c, size 0x240, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2c5b268, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDisable, addr 0x2c5a148, size 0x1c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x2c5a12c, size 0x1c, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ValidatePerObjectLights, addr 0x2c5ab84, size 0xa0, virtual false, abstract: false, final false
  inline int32_t ValidatePerObjectLights(int32_t value);

  /// @brief Method ValidateRenderScale, addr 0x2c5aa70, size 0x7c, virtual false, abstract: false, final false
  inline float_t ValidateRenderScale(float_t value);

  /// @brief Method ValidateRendererData, addr 0x2c5b52c, size 0xa4, virtual false, abstract: false, final false
  inline bool ValidateRendererData(int32_t index);

  /// @brief Method ValidateRendererDataList, addr 0x2c5b4ac, size 0x80, virtual false, abstract: false, final false
  inline bool ValidateRendererDataList(bool partial);

  /// @brief Method ValidateShadowBias, addr 0x2c5aed8, size 0x70, virtual false, abstract: false, final false
  inline float_t ValidateShadowBias(float_t value);

  constexpr int32_t const& __cordl_internal_get_k_AssetPreviousVersion() const;

  constexpr int32_t& __cordl_internal_get_k_AssetPreviousVersion();

  constexpr int32_t const& __cordl_internal_get_k_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_k_AssetVersion();

  constexpr bool const& __cordl_internal_get_m_AdditionalLightShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_AdditionalLightShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat const& __cordl_internal_get_m_AdditionalLightsCookieFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat& __cordl_internal_get_m_AdditionalLightsCookieFormat();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution const& __cordl_internal_get_m_AdditionalLightsCookieResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution& __cordl_internal_get_m_AdditionalLightsCookieResolution();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsPerObjectLimit() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsPerObjectLimit();

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& __cordl_internal_get_m_AdditionalLightsRenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& __cordl_internal_get_m_AdditionalLightsRenderingMode();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_AdditionalLightsShadowmapResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_AdditionalLightsShadowmapResolution();

  constexpr float_t const& __cordl_internal_get_m_Cascade2Split() const;

  constexpr float_t& __cordl_internal_get_m_Cascade2Split();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Cascade3Split() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Cascade3Split();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Cascade4Split() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Cascade4Split();

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr int32_t const& __cordl_internal_get_m_ColorGradingLutSize() const;

  constexpr int32_t& __cordl_internal_get_m_ColorGradingLutSize();

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& __cordl_internal_get_m_ColorGradingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& __cordl_internal_get_m_ColorGradingMode();

  constexpr bool const& __cordl_internal_get_m_ConservativeEnclosingSphere() const;

  constexpr bool& __cordl_internal_get_m_ConservativeEnclosingSphere();

  constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel const& __cordl_internal_get_m_DebugLevel() const;

  constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel& __cordl_internal_get_m_DebugLevel();

  constexpr int32_t const& __cordl_internal_get_m_DefaultRendererIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DefaultRendererIndex();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultShader();

  constexpr bool const& __cordl_internal_get_m_FsrOverrideSharpness() const;

  constexpr bool& __cordl_internal_get_m_FsrOverrideSharpness();

  constexpr float_t const& __cordl_internal_get_m_FsrSharpness() const;

  constexpr float_t& __cordl_internal_get_m_FsrSharpness();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_LocalShadowsAtlasResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_LocalShadowsAtlasResolution();

  constexpr bool const& __cordl_internal_get_m_LocalShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_LocalShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::MsaaQuality const& __cordl_internal_get_m_MSAA() const;

  constexpr ::UnityEngine::Rendering::Universal::MsaaQuality& __cordl_internal_get_m_MSAA();

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& __cordl_internal_get_m_MainLightRenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& __cordl_internal_get_m_MainLightRenderingMode();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_MainLightShadowmapResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_MainLightShadowmapResolution();

  constexpr bool const& __cordl_internal_get_m_MainLightShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_MainLightShadowsSupported();

  constexpr int32_t const& __cordl_internal_get_m_MaxPixelLights() const;

  constexpr int32_t& __cordl_internal_get_m_MaxPixelLights();

  constexpr bool const& __cordl_internal_get_m_MixedLightingSupported() const;

  constexpr bool& __cordl_internal_get_m_MixedLightingSupported();

  constexpr int32_t const& __cordl_internal_get_m_NumIterationsEnclosingSphere() const;

  constexpr int32_t& __cordl_internal_get_m_NumIterationsEnclosingSphere();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_OpaqueDownsampling() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_OpaqueDownsampling();

  constexpr bool const& __cordl_internal_get_m_ReflectionProbeBlending() const;

  constexpr bool& __cordl_internal_get_m_ReflectionProbeBlending();

  constexpr bool const& __cordl_internal_get_m_ReflectionProbeBoxProjection() const;

  constexpr bool& __cordl_internal_get_m_ReflectionProbeBoxProjection();

  constexpr float_t const& __cordl_internal_get_m_RenderScale() const;

  constexpr float_t& __cordl_internal_get_m_RenderScale();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> const& __cordl_internal_get_m_RendererData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>& __cordl_internal_get_m_RendererData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> const&
  __cordl_internal_get_m_RendererDataList() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*>&
  __cordl_internal_get_m_RendererDataList();

  constexpr ::UnityEngine::Rendering::Universal::RendererType const& __cordl_internal_get_m_RendererType() const;

  constexpr ::UnityEngine::Rendering::Universal::RendererType& __cordl_internal_get_m_RendererType();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> const& __cordl_internal_get_m_Renderers() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*>& __cordl_internal_get_m_Renderers();

  constexpr bool const& __cordl_internal_get_m_RequireDepthTexture() const;

  constexpr bool& __cordl_internal_get_m_RequireDepthTexture();

  constexpr bool const& __cordl_internal_get_m_RequireOpaqueTexture() const;

  constexpr bool& __cordl_internal_get_m_RequireOpaqueTexture();

  constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel const& __cordl_internal_get_m_ShaderVariantLogLevel() const;

  constexpr ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel& __cordl_internal_get_m_ShaderVariantLogLevel();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_ShadowAtlasResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_ShadowAtlasResolution();

  constexpr int32_t const& __cordl_internal_get_m_ShadowCascadeCount() const;

  constexpr int32_t& __cordl_internal_get_m_ShadowCascadeCount();

  constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption const& __cordl_internal_get_m_ShadowCascades() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption& __cordl_internal_get_m_ShadowCascades();

  constexpr float_t const& __cordl_internal_get_m_ShadowDepthBias() const;

  constexpr float_t& __cordl_internal_get_m_ShadowDepthBias();

  constexpr float_t const& __cordl_internal_get_m_ShadowDistance() const;

  constexpr float_t& __cordl_internal_get_m_ShadowDistance();

  constexpr float_t const& __cordl_internal_get_m_ShadowNormalBias() const;

  constexpr float_t& __cordl_internal_get_m_ShadowNormalBias();

  constexpr ::UnityEngine::Rendering::Universal::ShadowQuality const& __cordl_internal_get_m_ShadowType() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowQuality& __cordl_internal_get_m_ShadowType();

  constexpr bool const& __cordl_internal_get_m_SoftShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_SoftShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimization() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimization();

  constexpr bool const& __cordl_internal_get_m_SupportsDynamicBatching() const;

  constexpr bool& __cordl_internal_get_m_SupportsDynamicBatching();

  constexpr bool const& __cordl_internal_get_m_SupportsHDR() const;

  constexpr bool& __cordl_internal_get_m_SupportsHDR();

  constexpr bool const& __cordl_internal_get_m_SupportsLightLayers() const;

  constexpr bool& __cordl_internal_get_m_SupportsLightLayers();

  constexpr bool const& __cordl_internal_get_m_SupportsTerrainHoles() const;

  constexpr bool& __cordl_internal_get_m_SupportsTerrainHoles();

  constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const& __cordl_internal_get_m_UpscalingFilter() const;

  constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection& __cordl_internal_get_m_UpscalingFilter();

  constexpr bool const& __cordl_internal_get_m_UseAdaptivePerformance() const;

  constexpr bool& __cordl_internal_get_m_UseAdaptivePerformance();

  constexpr bool const& __cordl_internal_get_m_UseFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_m_UseFastSRGBLinearConversion();

  constexpr bool const& __cordl_internal_get_m_UseSRPBatcher() const;

  constexpr bool& __cordl_internal_get_m_UseSRPBatcher();

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const& __cordl_internal_get_m_VolumeFrameworkUpdateMode() const;

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& __cordl_internal_get_m_VolumeFrameworkUpdateMode();

  constexpr void __cordl_internal_set_k_AssetPreviousVersion(int32_t value);

  constexpr void __cordl_internal_set_k_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieFormat(::UnityEngine::Rendering::Universal::LightCookieFormat value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieResolution(::UnityEngine::Rendering::Universal::LightCookieResolution value);

  constexpr void __cordl_internal_set_m_AdditionalLightsPerObjectLimit(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierHigh(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierLow(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierMedium(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_Cascade2Split(float_t value);

  constexpr void __cordl_internal_set_m_Cascade3Split(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Cascade4Split(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_ColorGradingLutSize(int32_t value);

  constexpr void __cordl_internal_set_m_ColorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value);

  constexpr void __cordl_internal_set_m_ConservativeEnclosingSphere(bool value);

  constexpr void __cordl_internal_set_m_DebugLevel(::UnityEngine::Rendering::Universal::PipelineDebugLevel value);

  constexpr void __cordl_internal_set_m_DefaultRendererIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_FsrOverrideSharpness(bool value);

  constexpr void __cordl_internal_set_m_FsrSharpness(float_t value);

  constexpr void __cordl_internal_set_m_LocalShadowsAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_LocalShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_MSAA(::UnityEngine::Rendering::Universal::MsaaQuality value);

  constexpr void __cordl_internal_set_m_MainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  constexpr void __cordl_internal_set_m_MainLightShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_MainLightShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_MaxPixelLights(int32_t value);

  constexpr void __cordl_internal_set_m_MixedLightingSupported(bool value);

  constexpr void __cordl_internal_set_m_NumIterationsEnclosingSphere(int32_t value);

  constexpr void __cordl_internal_set_m_OpaqueDownsampling(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_ReflectionProbeBlending(bool value);

  constexpr void __cordl_internal_set_m_ReflectionProbeBoxProjection(bool value);

  constexpr void __cordl_internal_set_m_RenderScale(float_t value);

  constexpr void __cordl_internal_set_m_RendererData(::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> value);

  constexpr void __cordl_internal_set_m_RendererDataList(
      ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> value);

  constexpr void __cordl_internal_set_m_RendererType(::UnityEngine::Rendering::Universal::RendererType value);

  constexpr void __cordl_internal_set_m_Renderers(::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> value);

  constexpr void __cordl_internal_set_m_RequireDepthTexture(bool value);

  constexpr void __cordl_internal_set_m_RequireOpaqueTexture(bool value);

  constexpr void __cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value);

  constexpr void __cordl_internal_set_m_ShadowAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_ShadowCascadeCount(int32_t value);

  constexpr void __cordl_internal_set_m_ShadowCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);

  constexpr void __cordl_internal_set_m_ShadowDepthBias(float_t value);

  constexpr void __cordl_internal_set_m_ShadowDistance(float_t value);

  constexpr void __cordl_internal_set_m_ShadowNormalBias(float_t value);

  constexpr void __cordl_internal_set_m_ShadowType(::UnityEngine::Rendering::Universal::ShadowQuality value);

  constexpr void __cordl_internal_set_m_SoftShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_StoreActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  constexpr void __cordl_internal_set_m_SupportsDynamicBatching(bool value);

  constexpr void __cordl_internal_set_m_SupportsHDR(bool value);

  constexpr void __cordl_internal_set_m_SupportsLightLayers(bool value);

  constexpr void __cordl_internal_set_m_SupportsTerrainHoles(bool value);

  constexpr void __cordl_internal_set_m_UpscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);

  constexpr void __cordl_internal_set_m_UseAdaptivePerformance(bool value);

  constexpr void __cordl_internal_set_m_UseFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_m_UseSRPBatcher(bool value);

  constexpr void __cordl_internal_set_m_VolumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);

  /// @brief Method .ctor, addr 0x2c5b6c8, size 0x184, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierHigh();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierLow();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierMedium();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                         ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
  getStaticF_s_LightCookieFormatList();

  /// @brief Method get_additionalLightsCookieFormat, addr 0x2c5a70c, size 0x230, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_additionalLightsCookieFormat();

  /// @brief Method get_additionalLightsCookieResolution, addr 0x2c5a93c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_additionalLightsCookieResolution();

  /// @brief Method get_additionalLightsRenderingMode, addr 0x2c5ab54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightRenderingMode get_additionalLightsRenderingMode();

  /// @brief Method get_additionalLightsShadowResolutionTierHigh, addr 0x2c5ac68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierHigh();

  /// @brief Method get_additionalLightsShadowResolutionTierLow, addr 0x2c5ac48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierLow();

  /// @brief Method get_additionalLightsShadowResolutionTierMedium, addr 0x2c5ac58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierMedium();

  /// @brief Method get_additionalLightsShadowmapResolution, addr 0x2c5ac38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowmapResolution();

  /// @brief Method get_cascade2Split, addr 0x2c5ae70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cascade2Split();

  /// @brief Method get_cascade3Split, addr 0x2c5ae80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cascade3Split();

  /// @brief Method get_cascade4Split, addr 0x2c5ae90, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cascade4Split();

  /// @brief Method get_cascadeBorder, addr 0x2c5aea8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cascadeBorder();

  /// @brief Method get_colorGradingLutSize, addr 0x2c5afe4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorGradingLutSize();

  /// @brief Method get_colorGradingMode, addr 0x2c5afd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ColorGradingMode get_colorGradingMode();

  /// @brief Method get_conservativeEnclosingSphere, addr 0x2c5b028, size 0x8, virtual false, abstract: false, final false
  inline bool get_conservativeEnclosingSphere();

  /// @brief Method get_debugLevel, addr 0x2c5afb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PipelineDebugLevel get_debugLevel();

  /// @brief Method get_decalMaterial, addr 0x2c5b094, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_decalMaterial();

  /// @brief Method get_default2DMaskMaterial, addr 0x2c5b08c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaskMaterial();

  /// @brief Method get_default2DMaterial, addr 0x2c5b084, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaterial();

  /// @brief Method get_defaultLineMaterial, addr 0x2c5b05c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultLineMaterial();

  /// @brief Method get_defaultMaterial, addr 0x2c5b04c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_defaultParticleMaterial, addr 0x2c5b054, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultParticleMaterial();

  /// @brief Method get_defaultShader, addr 0x2c5b09c, size 0xac, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultShader();

  /// @brief Method get_defaultTerrainMaterial, addr 0x2c5b064, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultTerrainMaterial();

  /// @brief Method get_defaultUIETC1SupportedMaterial, addr 0x2c5b07c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIETC1SupportedMaterial();

  /// @brief Method get_defaultUIMaterial, addr 0x2c5b06c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIMaterial();

  /// @brief Method get_defaultUIOverdrawMaterial, addr 0x2c5b074, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIOverdrawMaterial();

  /// @brief Method get_fsrOverrideSharpness, addr 0x2c5aafc, size 0x8, virtual false, abstract: false, final false
  inline bool get_fsrOverrideSharpness();

  /// @brief Method get_fsrSharpness, addr 0x2c5ab10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fsrSharpness();

  /// @brief Method get_lightLayerMaskNames, addr 0x2c5b208, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_lightLayerMaskNames();

  /// @brief Method get_mainLightRenderingMode, addr 0x2c5ab20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightRenderingMode get_mainLightRenderingMode();

  /// @brief Method get_mainLightShadowmapResolution, addr 0x2c5ab44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mainLightShadowmapResolution();

  /// @brief Method get_maxAdditionalLightsCount, addr 0x2c5ab64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxAdditionalLightsCount();

  /// @brief Method get_msaaSampleCount, addr 0x2c5aa40, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_msaaSampleCount();

  /// @brief Method get_numIterationsEnclosingSphere, addr 0x2c5b03c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numIterationsEnclosingSphere();

  /// @brief Method get_opaqueDownsampling, addr 0x2c5aa0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Downsampling get_opaqueDownsampling();

  /// @brief Method get_prefixedRenderingLayerMaskNames, addr 0x2c5b1a8, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_reflectionProbeBlending, addr 0x2c5ad40, size 0x8, virtual false, abstract: false, final false
  inline bool get_reflectionProbeBlending();

  /// @brief Method get_reflectionProbeBoxProjection, addr 0x2c5ad54, size 0x8, virtual false, abstract: false, final false
  inline bool get_reflectionProbeBoxProjection();

  /// @brief Method get_renderScale, addr 0x2c5aa50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_renderScale();

  /// @brief Method get_rendererIndexList, addr 0x2c5a948, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_rendererIndexList();

  /// @brief Method get_renderingLayerMaskNames, addr 0x2c5b148, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerMaskNames();

  /// @brief Method get_scriptableRenderer, addr 0x2c5a16c, size 0x22c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer();

  /// @brief Method get_scriptableRendererData, addr 0x2c5a398, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> get_scriptableRendererData();

  /// @brief Method get_shaderVariantLogLevel, addr 0x2c5afa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel get_shaderVariantLogLevel();

  /// @brief Method get_shadowCascadeCount, addr 0x2c5ad80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_shadowCascadeCount();

  /// @brief Method get_shadowCascadeOption, addr 0x2c5b5d0, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShadowCascadesOption get_shadowCascadeOption();

  /// @brief Method get_shadowDepthBias, addr 0x2c5aeb8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowDepthBias();

  /// @brief Method get_shadowDistance, addr 0x2c5ad68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method get_shadowNormalBias, addr 0x2c5af48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowNormalBias();

  /// @brief Method get_storeActionsOptimization, addr 0x2c5aa1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::StoreActionsOptimization get_storeActionsOptimization();

  /// @brief Method get_supportsAdditionalLightShadows, addr 0x2c5ac24, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsAdditionalLightShadows();

  /// @brief Method get_supportsCameraDepthTexture, addr 0x2c5a9e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsCameraDepthTexture();

  /// @brief Method get_supportsCameraOpaqueTexture, addr 0x2c5a9f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsCameraOpaqueTexture();

  /// @brief Method get_supportsDynamicBatching, addr 0x2c5af7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsDynamicBatching();

  /// @brief Method get_supportsHDR, addr 0x2c5aa2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsHDR();

  /// @brief Method get_supportsLightLayers, addr 0x2c5af98, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsLightLayers();

  /// @brief Method get_supportsMainLightShadows, addr 0x2c5ab30, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsMainLightShadows();

  /// @brief Method get_supportsMixedLighting, addr 0x2c5af90, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsMixedLighting();

  /// @brief Method get_supportsSoftShadows, addr 0x2c5af68, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsSoftShadows();

  /// @brief Method get_supportsTerrainHoles, addr 0x2c5aa14, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsTerrainHoles();

  /// @brief Method get_upscalingFilter, addr 0x2c5aaec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UpscalingFilterSelection get_upscalingFilter();

  /// @brief Method get_useAdaptivePerformance, addr 0x2c5b014, size 0x8, virtual false, abstract: false, final false
  inline bool get_useAdaptivePerformance();

  /// @brief Method get_useFastSRGBLinearConversion, addr 0x2c5b00c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFastSRGBLinearConversion();

  /// @brief Method get_useSRPBatcher, addr 0x2c5afc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_useSRPBatcher();

  /// @brief Method get_volumeFrameworkUpdateMode, addr 0x2c5afb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode get_volumeFrameworkUpdateMode();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierHigh(int32_t value);

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierLow(int32_t value);

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierMedium(int32_t value);

  static inline void
  setStaticF_s_LightCookieFormatList(::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                                              ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
                                         value);

  /// @brief Method set_additionalLightsRenderingMode, addr 0x2c5ab5c, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  /// @brief Method set_additionalLightsShadowResolutionTierHigh, addr 0x2c5ac70, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierHigh(int32_t value);

  /// @brief Method set_additionalLightsShadowResolutionTierLow, addr 0x2c5ac50, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierLow(int32_t value);

  /// @brief Method set_additionalLightsShadowResolutionTierMedium, addr 0x2c5ac60, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierMedium(int32_t value);

  /// @brief Method set_additionalLightsShadowmapResolution, addr 0x2c5ac40, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowmapResolution(int32_t value);

  /// @brief Method set_cascade2Split, addr 0x2c5ae78, size 0x8, virtual false, abstract: false, final false
  inline void set_cascade2Split(float_t value);

  /// @brief Method set_cascade3Split, addr 0x2c5ae88, size 0x8, virtual false, abstract: false, final false
  inline void set_cascade3Split(::UnityEngine::Vector2 value);

  /// @brief Method set_cascade4Split, addr 0x2c5ae9c, size 0xc, virtual false, abstract: false, final false
  inline void set_cascade4Split(::UnityEngine::Vector3 value);

  /// @brief Method set_cascadeBorder, addr 0x2c5aeb0, size 0x8, virtual false, abstract: false, final false
  inline void set_cascadeBorder(float_t value);

  /// @brief Method set_colorGradingLutSize, addr 0x2c5afec, size 0x20, virtual false, abstract: false, final false
  inline void set_colorGradingLutSize(int32_t value);

  /// @brief Method set_colorGradingMode, addr 0x2c5afdc, size 0x8, virtual false, abstract: false, final false
  inline void set_colorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value);

  /// @brief Method set_conservativeEnclosingSphere, addr 0x2c5b030, size 0xc, virtual false, abstract: false, final false
  inline void set_conservativeEnclosingSphere(bool value);

  /// @brief Method set_fsrOverrideSharpness, addr 0x2c5ab04, size 0xc, virtual false, abstract: false, final false
  inline void set_fsrOverrideSharpness(bool value);

  /// @brief Method set_fsrSharpness, addr 0x2c5ab18, size 0x8, virtual false, abstract: false, final false
  inline void set_fsrSharpness(float_t value);

  /// @brief Method set_mainLightRenderingMode, addr 0x2c5ab28, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  /// @brief Method set_mainLightShadowmapResolution, addr 0x2c5ab4c, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightShadowmapResolution(int32_t value);

  /// @brief Method set_maxAdditionalLightsCount, addr 0x2c5ab6c, size 0x18, virtual false, abstract: false, final false
  inline void set_maxAdditionalLightsCount(int32_t value);

  /// @brief Method set_msaaSampleCount, addr 0x2c5aa48, size 0x8, virtual false, abstract: false, final false
  inline void set_msaaSampleCount(int32_t value);

  /// @brief Method set_numIterationsEnclosingSphere, addr 0x2c5b044, size 0x8, virtual false, abstract: false, final false
  inline void set_numIterationsEnclosingSphere(int32_t value);

  /// @brief Method set_reflectionProbeBlending, addr 0x2c5ad48, size 0xc, virtual false, abstract: false, final false
  inline void set_reflectionProbeBlending(bool value);

  /// @brief Method set_reflectionProbeBoxProjection, addr 0x2c5ad5c, size 0xc, virtual false, abstract: false, final false
  inline void set_reflectionProbeBoxProjection(bool value);

  /// @brief Method set_renderScale, addr 0x2c5aa58, size 0x18, virtual false, abstract: false, final false
  inline void set_renderScale(float_t value);

  /// @brief Method set_shaderVariantLogLevel, addr 0x2c5afa8, size 0x8, virtual false, abstract: false, final false
  inline void set_shaderVariantLogLevel(::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value);

  /// @brief Method set_shadowCascadeCount, addr 0x2c5ad88, size 0xe8, virtual false, abstract: false, final false
  inline void set_shadowCascadeCount(int32_t value);

  /// @brief Method set_shadowCascadeOption, addr 0x2c5b658, size 0x70, virtual false, abstract: false, final false
  inline void set_shadowCascadeOption(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);

  /// @brief Method set_shadowDepthBias, addr 0x2c5aec0, size 0x18, virtual false, abstract: false, final false
  inline void set_shadowDepthBias(float_t value);

  /// @brief Method set_shadowDistance, addr 0x2c5ad70, size 0x10, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_shadowNormalBias, addr 0x2c5af50, size 0x18, virtual false, abstract: false, final false
  inline void set_shadowNormalBias(float_t value);

  /// @brief Method set_storeActionsOptimization, addr 0x2c5aa24, size 0x8, virtual false, abstract: false, final false
  inline void set_storeActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  /// @brief Method set_supportsAdditionalLightShadows, addr 0x2c5ac2c, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsAdditionalLightShadows(bool value);

  /// @brief Method set_supportsCameraDepthTexture, addr 0x2c5a9ec, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsCameraDepthTexture(bool value);

  /// @brief Method set_supportsCameraOpaqueTexture, addr 0x2c5aa00, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsCameraOpaqueTexture(bool value);

  /// @brief Method set_supportsDynamicBatching, addr 0x2c5af84, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsDynamicBatching(bool value);

  /// @brief Method set_supportsHDR, addr 0x2c5aa34, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsHDR(bool value);

  /// @brief Method set_supportsMainLightShadows, addr 0x2c5ab38, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsMainLightShadows(bool value);

  /// @brief Method set_supportsSoftShadows, addr 0x2c5af70, size 0xc, virtual false, abstract: false, final false
  inline void set_supportsSoftShadows(bool value);

  /// @brief Method set_upscalingFilter, addr 0x2c5aaf4, size 0x8, virtual false, abstract: false, final false
  inline void set_upscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);

  /// @brief Method set_useAdaptivePerformance, addr 0x2c5b01c, size 0xc, virtual false, abstract: false, final false
  inline void set_useAdaptivePerformance(bool value);

  /// @brief Method set_useSRPBatcher, addr 0x2c5afc8, size 0xc, virtual false, abstract: false, final false
  inline void set_useSRPBatcher(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineAsset(UniversalRenderPipelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineAsset(UniversalRenderPipelineAsset const&) = delete;

  /// @brief Field m_DefaultShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultShader;

  /// @brief Field m_Renderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> ___m_Renderers;

  /// @brief Field k_AssetVersion, offset: 0x28, size: 0x4, def value: None
  int32_t ___k_AssetVersion;

  /// @brief Field k_AssetPreviousVersion, offset: 0x2c, size: 0x4, def value: None
  int32_t ___k_AssetPreviousVersion;

  /// @brief Field m_RendererType, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RendererType ___m_RendererType;

  /// @brief Field m_RendererData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> ___m_RendererData;

  /// @brief Field m_RendererDataList, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> ___m_RendererDataList;

  /// @brief Field m_DefaultRendererIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_DefaultRendererIndex;

  /// @brief Field m_RequireDepthTexture, offset: 0x4c, size: 0x1, def value: None
  bool ___m_RequireDepthTexture;

  /// @brief Field m_RequireOpaqueTexture, offset: 0x4d, size: 0x1, def value: None
  bool ___m_RequireOpaqueTexture;

  /// @brief Field m_OpaqueDownsampling, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_OpaqueDownsampling;

  /// @brief Field m_SupportsTerrainHoles, offset: 0x54, size: 0x1, def value: None
  bool ___m_SupportsTerrainHoles;

  /// @brief Field m_StoreActionsOptimization, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::StoreActionsOptimization ___m_StoreActionsOptimization;

  /// @brief Field m_SupportsHDR, offset: 0x5c, size: 0x1, def value: None
  bool ___m_SupportsHDR;

  /// @brief Field m_MSAA, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MsaaQuality ___m_MSAA;

  /// @brief Field m_RenderScale, offset: 0x64, size: 0x4, def value: None
  float_t ___m_RenderScale;

  /// @brief Field m_UpscalingFilter, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UpscalingFilterSelection ___m_UpscalingFilter;

  /// @brief Field m_FsrOverrideSharpness, offset: 0x6c, size: 0x1, def value: None
  bool ___m_FsrOverrideSharpness;

  /// @brief Field m_FsrSharpness, offset: 0x70, size: 0x4, def value: None
  float_t ___m_FsrSharpness;

  /// @brief Field m_MainLightRenderingMode, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightRenderingMode ___m_MainLightRenderingMode;

  /// @brief Field m_MainLightShadowsSupported, offset: 0x78, size: 0x1, def value: None
  bool ___m_MainLightShadowsSupported;

  /// @brief Field m_MainLightShadowmapResolution, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_MainLightShadowmapResolution;

  /// @brief Field m_AdditionalLightsRenderingMode, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightRenderingMode ___m_AdditionalLightsRenderingMode;

  /// @brief Field m_AdditionalLightsPerObjectLimit, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsPerObjectLimit;

  /// @brief Field m_AdditionalLightShadowsSupported, offset: 0x88, size: 0x1, def value: None
  bool ___m_AdditionalLightShadowsSupported;

  /// @brief Field m_AdditionalLightsShadowmapResolution, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_AdditionalLightsShadowmapResolution;

  /// @brief Field m_AdditionalLightsShadowResolutionTierLow, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierLow;

  /// @brief Field m_AdditionalLightsShadowResolutionTierMedium, offset: 0x94, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierMedium;

  /// @brief Field m_AdditionalLightsShadowResolutionTierHigh, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierHigh;

  /// @brief Field m_ReflectionProbeBlending, offset: 0x9c, size: 0x1, def value: None
  bool ___m_ReflectionProbeBlending;

  /// @brief Field m_ReflectionProbeBoxProjection, offset: 0x9d, size: 0x1, def value: None
  bool ___m_ReflectionProbeBoxProjection;

  /// @brief Field m_ShadowDistance, offset: 0xa0, size: 0x4, def value: None
  float_t ___m_ShadowDistance;

  /// @brief Field m_ShadowCascadeCount, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_ShadowCascadeCount;

  /// @brief Field m_Cascade2Split, offset: 0xa8, size: 0x4, def value: None
  float_t ___m_Cascade2Split;

  /// @brief Field m_Cascade3Split, offset: 0xac, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Cascade3Split;

  /// @brief Field m_Cascade4Split, offset: 0xb4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Cascade4Split;

  /// @brief Field m_CascadeBorder, offset: 0xc0, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_ShadowDepthBias, offset: 0xc4, size: 0x4, def value: None
  float_t ___m_ShadowDepthBias;

  /// @brief Field m_ShadowNormalBias, offset: 0xc8, size: 0x4, def value: None
  float_t ___m_ShadowNormalBias;

  /// @brief Field m_SoftShadowsSupported, offset: 0xcc, size: 0x1, def value: None
  bool ___m_SoftShadowsSupported;

  /// @brief Field m_ConservativeEnclosingSphere, offset: 0xcd, size: 0x1, def value: None
  bool ___m_ConservativeEnclosingSphere;

  /// @brief Field m_NumIterationsEnclosingSphere, offset: 0xd0, size: 0x4, def value: None
  int32_t ___m_NumIterationsEnclosingSphere;

  /// @brief Field m_AdditionalLightsCookieResolution, offset: 0xd4, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieResolution ___m_AdditionalLightsCookieResolution;

  /// @brief Field m_AdditionalLightsCookieFormat, offset: 0xd8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieFormat ___m_AdditionalLightsCookieFormat;

  /// @brief Field m_UseSRPBatcher, offset: 0xdc, size: 0x1, def value: None
  bool ___m_UseSRPBatcher;

  /// @brief Field m_SupportsDynamicBatching, offset: 0xdd, size: 0x1, def value: None
  bool ___m_SupportsDynamicBatching;

  /// @brief Field m_MixedLightingSupported, offset: 0xde, size: 0x1, def value: None
  bool ___m_MixedLightingSupported;

  /// @brief Field m_SupportsLightLayers, offset: 0xdf, size: 0x1, def value: None
  bool ___m_SupportsLightLayers;

  /// @brief Field m_DebugLevel, offset: 0xe0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PipelineDebugLevel ___m_DebugLevel;

  /// @brief Field m_UseAdaptivePerformance, offset: 0xe4, size: 0x1, def value: None
  bool ___m_UseAdaptivePerformance;

  /// @brief Field m_ColorGradingMode, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ColorGradingMode ___m_ColorGradingMode;

  /// @brief Field m_ColorGradingLutSize, offset: 0xec, size: 0x4, def value: None
  int32_t ___m_ColorGradingLutSize;

  /// @brief Field m_UseFastSRGBLinearConversion, offset: 0xf0, size: 0x1, def value: None
  bool ___m_UseFastSRGBLinearConversion;

  /// @brief Field m_ShadowType, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowQuality ___m_ShadowType;

  /// @brief Field m_LocalShadowsSupported, offset: 0xf8, size: 0x1, def value: None
  bool ___m_LocalShadowsSupported;

  /// @brief Field m_LocalShadowsAtlasResolution, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_LocalShadowsAtlasResolution;

  /// @brief Field m_MaxPixelLights, offset: 0x100, size: 0x4, def value: None
  int32_t ___m_MaxPixelLights;

  /// @brief Field m_ShadowAtlasResolution, offset: 0x104, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_ShadowAtlasResolution;

  /// @brief Field m_ShaderVariantLogLevel, offset: 0x108, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel ___m_ShaderVariantLogLevel;

  /// @brief Field m_VolumeFrameworkUpdateMode, offset: 0x10c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode ___m_VolumeFrameworkUpdateMode;

  /// @brief Field m_ShadowCascades, offset: 0x110, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowCascadesOption ___m_ShadowCascades;

  /// @brief Field k_MaxLutSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxLutSize{ static_cast<int32_t>(0x41) };

  /// @brief Field k_MinLutSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MinLutSize{ static_cast<int32_t>(0x10) };

  /// @brief Field k_ShadowCascadeMaxCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowCascadeMaxCount{ static_cast<int32_t>(0x4) };

  /// @brief Field k_ShadowCascadeMinCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowCascadeMinCount{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DefaultShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___k_AssetVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___k_AssetPreviousVersion) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererDataList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DefaultRendererIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RequireDepthTexture) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RequireOpaqueTexture) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_OpaqueDownsampling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsTerrainHoles) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_StoreActionsOptimization) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsHDR) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MSAA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RenderScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UpscalingFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_FsrOverrideSharpness) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_FsrSharpness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightRenderingMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightShadowsSupported) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightShadowmapResolution) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsRenderingMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsPerObjectLimit) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightShadowsSupported) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowmapResolution) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierLow) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierMedium) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierHigh) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ReflectionProbeBlending) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ReflectionProbeBoxProjection) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowDistance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowCascadeCount) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade2Split) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade3Split) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade4Split) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_CascadeBorder) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowDepthBias) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowNormalBias) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SoftShadowsSupported) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ConservativeEnclosingSphere) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_NumIterationsEnclosingSphere) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsCookieResolution) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsCookieFormat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseSRPBatcher) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsDynamicBatching) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MixedLightingSupported) == 0xde, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsLightLayers) == 0xdf, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DebugLevel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseAdaptivePerformance) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ColorGradingMode) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ColorGradingLutSize) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseFastSRGBLinearConversion) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowType) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LocalShadowsSupported) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LocalShadowsAtlasResolution) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MaxPixelLights) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowAtlasResolution) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShaderVariantLogLevel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_VolumeFrameworkUpdateMode) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowCascades) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineAsset");
