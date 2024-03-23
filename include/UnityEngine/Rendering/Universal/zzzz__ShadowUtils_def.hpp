#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowUtils)
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowSliceData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowUtils);
// Type: UnityEngine.Rendering.Universal::ShadowUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowUtils*
class CORDL_TYPE ShadowUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ForceShadowPointSampling, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_ForceShadowPointSampling, put = setStaticF_m_ForceShadowPointSampling)) bool m_ForceShadowPointSampling;

  /// @brief Method ApplySliceTransform, addr 0x27318b8, size 0x13c, virtual false, abstract: false, final false
  static inline void ApplySliceTransform(ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData, int32_t atlasWidth, int32_t atlasHeight);

  /// @brief Method ExtractDirectionalLightMatrix, addr 0x2731574, size 0x1c8, virtual false, abstract: false, final false
  static inline bool ExtractDirectionalLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData,
                                                   int32_t shadowLightIndex, int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution, float_t shadowNearPlane,
                                                   ByRef<::UnityEngine::Vector4> cascadeSplitDistance, ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData);

  /// @brief Method ExtractDirectionalLightMatrix, addr 0x2731444, size 0x130, virtual false, abstract: false, final false
  static inline bool ExtractDirectionalLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData,
                                                   int32_t shadowLightIndex, int32_t cascadeIndex, int32_t shadowmapWidth, int32_t shadowmapHeight, int32_t shadowResolution, float_t shadowNearPlane,
                                                   ByRef<::UnityEngine::Vector4> cascadeSplitDistance, ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData,
                                                   ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix);

  /// @brief Method ExtractPointLightMatrix, addr 0x2731b04, size 0x160, virtual false, abstract: false, final false
  static inline bool ExtractPointLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                             ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ByRef<::UnityEngine::Matrix4x4> shadowMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                             ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> splitData);

  /// @brief Method ExtractSpotLightMatrix, addr 0x27319f4, size 0x110, virtual false, abstract: false, final false
  static inline bool ExtractSpotLightMatrix(ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, int32_t shadowLightIndex,
                                            ByRef<::UnityEngine::Matrix4x4> shadowMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                            ByRef<::UnityEngine::Rendering::ShadowSplitData> splitData);

  /// @brief Method GetMaxTileResolutionInAtlas, addr 0x2731e6c, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t GetMaxTileResolutionInAtlas(int32_t atlasWidth, int32_t atlasHeight, int32_t tileCount);

  /// @brief Method GetScaleAndBiasForLinearDistanceFade, addr 0x27321d4, size 0x54, virtual false, abstract: false, final false
  static inline void GetScaleAndBiasForLinearDistanceFade(float_t fadeDistance, float_t border, ByRef<float_t> scale, ByRef<float_t> bias);

  /// @brief Method GetShadowBias, addr 0x2731e98, size 0x33c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetShadowBias(ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight, int32_t shadowLightIndex,
                                                     ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, ::UnityEngine::Matrix4x4 lightProjectionMatrix, float_t shadowResolution);

  /// @brief Method GetShadowTransform, addr 0x273173c, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetShadowTransform(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view);

  /// @brief Method GetTemporaryShadowTexture, addr 0x273239c, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryShadowTexture(int32_t width, int32_t height, int32_t bits);

  /// @brief Method RenderShadowSlice, addr 0x2731d98, size 0xd4, virtual false, abstract: false, final false
  static inline void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                       ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData, ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings);

  /// @brief Method RenderShadowSlice, addr 0x2731c64, size 0x134, virtual false, abstract: false, final false
  static inline void RenderShadowSlice(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context,
                                       ByRef<::UnityEngine::Rendering::Universal::ShadowSliceData> shadowSliceData, ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings,
                                       ::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view);

  /// @brief Method SetupShadowCasterConstantBuffer, addr 0x2732228, size 0x174, virtual false, abstract: false, final false
  static inline void SetupShadowCasterConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight, ::UnityEngine::Vector4 shadowBias);

  static inline bool getStaticF_m_ForceShadowPointSampling();

  static inline void setStaticF_m_ForceShadowPointSampling(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowUtils(ShadowUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowUtils(ShadowUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowUtils*, "UnityEngine.Rendering.Universal", "ShadowUtils");
