#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowCasterPass)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __AdditionalLightsShadowCasterPass__ShadowResolutionRequest;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
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
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __AdditionalLightsShadowCasterPass__ShadowResolutionRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest);
// Type: ::AdditionalShadowsConstantBuffer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::AdditionalLightsShadowCasterPass::AdditionalShadowsConstantBuffer*
class CORDL_TYPE __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AdditionalLightsWorldToShadow, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsWorldToShadow, put = setStaticF__AdditionalLightsWorldToShadow)) int32_t _AdditionalLightsWorldToShadow;

  /// @brief Field _AdditionalShadowFadeParams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowFadeParams, put = setStaticF__AdditionalShadowFadeParams)) int32_t _AdditionalShadowFadeParams;

  /// @brief Field _AdditionalShadowOffset0, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowOffset0, put = setStaticF__AdditionalShadowOffset0)) int32_t _AdditionalShadowOffset0;

  /// @brief Field _AdditionalShadowOffset1, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowOffset1, put = setStaticF__AdditionalShadowOffset1)) int32_t _AdditionalShadowOffset1;

  /// @brief Field _AdditionalShadowOffset2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowOffset2, put = setStaticF__AdditionalShadowOffset2)) int32_t _AdditionalShadowOffset2;

  /// @brief Field _AdditionalShadowOffset3, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowOffset3, put = setStaticF__AdditionalShadowOffset3)) int32_t _AdditionalShadowOffset3;

  /// @brief Field _AdditionalShadowParams, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowParams, put = setStaticF__AdditionalShadowParams)) int32_t _AdditionalShadowParams;

  /// @brief Field _AdditionalShadowmapSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalShadowmapSize, put = setStaticF__AdditionalShadowmapSize)) int32_t _AdditionalShadowmapSize;

  static inline int32_t getStaticF__AdditionalLightsWorldToShadow();

  static inline int32_t getStaticF__AdditionalShadowFadeParams();

  static inline int32_t getStaticF__AdditionalShadowOffset0();

  static inline int32_t getStaticF__AdditionalShadowOffset1();

  static inline int32_t getStaticF__AdditionalShadowOffset2();

  static inline int32_t getStaticF__AdditionalShadowOffset3();

  static inline int32_t getStaticF__AdditionalShadowParams();

  static inline int32_t getStaticF__AdditionalShadowmapSize();

  static inline void setStaticF__AdditionalLightsWorldToShadow(int32_t value);

  static inline void setStaticF__AdditionalShadowFadeParams(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset0(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset1(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset2(int32_t value);

  static inline void setStaticF__AdditionalShadowOffset3(int32_t value);

  static inline void setStaticF__AdditionalShadowParams(int32_t value);

  static inline void setStaticF__AdditionalShadowmapSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer(__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer(__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::ShadowResolutionRequest
// SizeInfo { instance_size: 28, native_size: 32, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::AdditionalLightsShadowCasterPass::ShadowResolutionRequest
struct CORDL_TYPE __AdditionalLightsShadowCasterPass__ShadowResolutionRequest {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x29ae8d4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(int32_t _visibleLightIndex, int32_t _perLightShadowSliceIndex, int32_t _requestedResolution, bool _softShadow, bool _pointLightShadow);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AdditionalLightsShadowCasterPass__ShadowResolutionRequest();

  // Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "perLightShadowSliceIndex", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "requestedResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "softShadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "pointLightShadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "offsetX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offsetY", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "allocatedResolution", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AdditionalLightsShadowCasterPass__ShadowResolutionRequest(int32_t visibleLightIndex, int32_t perLightShadowSliceIndex, int32_t requestedResolution, bool softShadow,
                                                                        bool pointLightShadow, int32_t offsetX, int32_t offsetY, int32_t allocatedResolution) noexcept;

  /// @brief Field visibleLightIndex, offset: 0x0, size: 0x4, def value: None
  int32_t visibleLightIndex;

  /// @brief Field perLightShadowSliceIndex, offset: 0x4, size: 0x4, def value: None
  int32_t perLightShadowSliceIndex;

  /// @brief Field requestedResolution, offset: 0x8, size: 0x4, def value: None
  int32_t requestedResolution;

  /// @brief Field softShadow, offset: 0xc, size: 0x1, def value: None
  bool softShadow;

  /// @brief Field pointLightShadow, offset: 0xd, size: 0x1, def value: None
  bool pointLightShadow;

  /// @brief Field offsetX, offset: 0x10, size: 0x4, def value: None
  int32_t offsetX;

  /// @brief Field offsetY, offset: 0x14, size: 0x4, def value: None
  int32_t offsetY;

  /// @brief Field allocatedResolution, offset: 0x18, size: 0x4, def value: None
  int32_t allocatedResolution;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, perLightShadowSliceIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, requestedResolution) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, softShadow) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, pointLightShadow) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, offsetX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, offsetY) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, allocatedResolution) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::AdditionalLightsShadowCasterPass
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::AdditionalLightsShadowCasterPass*
class CORDL_TYPE AdditionalLightsShadowCasterPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using AdditionalShadowsConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer;

  using ShadowResolutionRequest = ::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest;

  /// @brief Field c_DefaultShadowParams, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_c_DefaultShadowParams, put = setStaticF_c_DefaultShadowParams))::UnityEngine::Vector4 c_DefaultShadowParams;

  /// @brief Field m_AdditionalLightIndexToShadowParams, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightIndexToShadowParams,
                      put = __cordl_internal_set_m_AdditionalLightIndexToShadowParams))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightIndexToShadowParams;

  /// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex,
                      put = __cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex))::ArrayW<int32_t, ::Array<int32_t>*> m_AdditionalLightIndexToVisibleLightIndex;

  /// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, put = __cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix))::ArrayW<
      ::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

  /// @brief Field m_AdditionalLightsShadowSlices, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowSlices,
                      put = __cordl_internal_set_m_AdditionalLightsShadowSlices))::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData,
                                                                                          ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> m_AdditionalLightsShadowSlices;

  /// @brief Field m_AdditionalLightsShadowmap, offset 0xe0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowmap,
                      put = __cordl_internal_set_m_AdditionalLightsShadowmap))::UnityEngine::Rendering::Universal::RenderTargetHandle m_AdditionalLightsShadowmap;

  /// @brief Field m_AdditionalLightsShadowmapTexture, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowmapTexture,
                      put = __cordl_internal_set_m_AdditionalLightsShadowmapTexture))::UnityW<::UnityEngine::RenderTexture> m_AdditionalLightsShadowmapTexture;

  /// @brief Field m_AdditionalLightsWorldToShadow_SSBO, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_AdditionalLightsWorldToShadow_SSBO, put = setStaticF_m_AdditionalLightsWorldToShadow_SSBO)) int32_t m_AdditionalLightsWorldToShadow_SSBO;

  /// @brief Field m_AdditionalShadowParams_SSBO, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_AdditionalShadowParams_SSBO, put = setStaticF_m_AdditionalShadowParams_SSBO)) int32_t m_AdditionalShadowParams_SSBO;

  /// @brief Field m_AdditionalShadowsBufferId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_AdditionalShadowsBufferId, put = setStaticF_m_AdditionalShadowsBufferId)) int32_t m_AdditionalShadowsBufferId;

  /// @brief Field m_AdditionalShadowsIndicesId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_AdditionalShadowsIndicesId, put = setStaticF_m_AdditionalShadowsIndicesId)) int32_t m_AdditionalShadowsIndicesId;

  /// @brief Field m_CascadeBorder, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_CreateEmptyShadowmap, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CreateEmptyShadowmap, put = __cordl_internal_set_m_CreateEmptyShadowmap)) bool m_CreateEmptyShadowmap;

  /// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset 0x140, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex,
               put = __cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex))::System::Collections::Generic::List_1<int32_t>* m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

  /// @brief Field m_MaxShadowDistanceSq, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxShadowDistanceSq, put = __cordl_internal_set_m_MaxShadowDistanceSq)) float_t m_MaxShadowDistanceSq;

  /// @brief Field m_ProfilingSetupSampler, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSetupSampler, put = __cordl_internal_set_m_ProfilingSetupSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSetupSampler;

  /// @brief Field m_ShadowRequestsHashes, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowRequestsHashes,
                      put = __cordl_internal_set_m_ShadowRequestsHashes))::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* m_ShadowRequestsHashes;

  /// @brief Field m_ShadowResolutionRequests, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowResolutionRequests, put = __cordl_internal_set_m_ShadowResolutionRequests))::System::Collections::Generic::List_1<
      ::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>* m_ShadowResolutionRequests;

  /// @brief Field m_ShadowSliceToAdditionalLightIndex, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex,
                      put = __cordl_internal_set_m_ShadowSliceToAdditionalLightIndex))::System::Collections::Generic::List_1<int32_t>* m_ShadowSliceToAdditionalLightIndex;

  /// @brief Field m_SortedShadowResolutionRequests, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedShadowResolutionRequests, put = __cordl_internal_set_m_SortedShadowResolutionRequests))::ArrayW<
      ::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
      ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*> m_SortedShadowResolutionRequests;

  /// @brief Field m_UnusedAtlasSquareAreas, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnusedAtlasSquareAreas,
                      put = __cordl_internal_set_m_UnusedAtlasSquareAreas))::System::Collections::Generic::List_1<::UnityEngine::RectInt>* m_UnusedAtlasSquareAreas;

  /// @brief Field m_UseStructuredBuffer, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex,
                      put = __cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex))::ArrayW<int32_t, ::Array<int32_t>*> m_VisibleLightIndexToAdditionalLightIndex;

  /// @brief Field m_VisibleLightIndexToCameraSquareDistance, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleLightIndexToCameraSquareDistance,
                      put = __cordl_internal_set_m_VisibleLightIndexToCameraSquareDistance))::ArrayW<float_t, ::Array<float_t>*> m_VisibleLightIndexToCameraSquareDistance;

  /// @brief Field m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, offset 0x170, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex,
      put = __cordl_internal_set_m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex))::ArrayW<int32_t,
                                                                                                              ::Array<int32_t>*> m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;

  /// @brief Method AtlasLayout, addr 0x2ae1310, size 0x340, virtual false, abstract: false, final false
  inline void AtlasLayout(int32_t atlasSize, int32_t totalShadowSlicesCount, int32_t estimatedScaleFactor);

  /// @brief Method CalcGuardAngle, addr 0x2ae0e38, size 0x70, virtual false, abstract: false, final false
  static inline float_t CalcGuardAngle(float_t frustumAngleInDegrees, float_t guardBandSizeInTexels, float_t sliceResolutionInTexels);

  /// @brief Method Clear, addr 0x2ae3354, size 0x68, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeShadowRequestHash, addr 0x2ae169c, size 0x298, virtual false, abstract: false, final false
  inline uint64_t ComputeShadowRequestHash(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Configure, addr 0x2ae34c8, size 0x98, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method EstimateScaleFactorNeededToFitAllShadowsInAtlas, addr 0x2ae1288, size 0x88, virtual false, abstract: false, final false
  inline int32_t EstimateScaleFactorNeededToFitAllShadowsInAtlas(ByRef<::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
                                                                                ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*>>
                                                                     shadowResolutionRequests,
                                                                 int32_t endIndex, int32_t atlasWidth);

  /// @brief Method Execute, addr 0x2ae3560, size 0x3c, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetPointLightShadowFrustumFovBiasInDegrees, addr 0x2ae0ebc, size 0x12c, virtual false, abstract: false, final false
  static inline float_t GetPointLightShadowFrustumFovBiasInDegrees(int32_t shadowSliceResolution, bool shadowFiltering);

  /// @brief Method GetPunctualLightShadowSlicesCount, addr 0x2ae0e18, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetPunctualLightShadowSlicesCount(ByRef<::UnityEngine::LightType> lightType);

  /// @brief Method GetShadowLightIndexFromLightIndex, addr 0x2add808, size 0x40, virtual false, abstract: false, final false
  inline int32_t GetShadowLightIndexFromLightIndex(int32_t visibleLightIndex);

  /// @brief Method InsertionSort, addr 0x2ae0fe8, size 0x2a0, virtual false, abstract: false, final false
  inline void InsertionSort(::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
                                     ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*>
                                array,
                            int32_t startIndex, int32_t lastIndex);

  /// @brief Method IsValidShadowCastingLight, addr 0x2ae1934, size 0x178, virtual false, abstract: false, final false
  inline bool IsValidShadowCastingLight(ByRef<::UnityEngine::Rendering::Universal::LightData> lightData, int32_t i);

  /// @brief Method MinimalPunctualLightShadowResolution, addr 0x2ae0ea8, size 0x14, virtual false, abstract: false, final false
  inline int32_t MinimalPunctualLightShadowResolution(bool softShadow);

  static inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method OnCameraCleanup, addr 0x2ae3f00, size 0xc8, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RenderAdditionalShadowmapAtlas, addr 0x2ae37bc, size 0x744, virtual false, abstract: false, final false
  inline void RenderAdditionalShadowmapAtlas(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context, ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                             ByRef<::UnityEngine::Rendering::Universal::LightData> lightData, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData);

  /// @brief Method ResolutionLog2ForHash, addr 0x2ae1650, size 0x4c, virtual false, abstract: false, final false
  inline uint64_t ResolutionLog2ForHash(int32_t resolution);

  /// @brief Method SetEmptyAdditionalShadowmapAtlas, addr 0x2ae359c, size 0x220, virtual false, abstract: false, final false
  inline void SetEmptyAdditionalShadowmapAtlas(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> context);

  /// @brief Method Setup, addr 0x2ae1aac, size 0x18a8, virtual false, abstract: false, final false
  inline bool Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupAdditionalLightsShadowReceiverConstants, addr 0x2ae3fc8, size 0x340, virtual false, abstract: false, final false
  inline void SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::ShadowData> shadowData, bool softShadows);

  /// @brief Method SetupForEmptyRendering, addr 0x2ae33bc, size 0x10c, virtual false, abstract: false, final false
  inline bool SetupForEmptyRendering(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightIndexToShadowParams() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightIndexToShadowParams();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const&
  __cordl_internal_get_m_AdditionalLightsShadowSlices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>& __cordl_internal_get_m_AdditionalLightsShadowSlices();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_AdditionalLightsShadowmap() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_AdditionalLightsShadowmap();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_AdditionalLightsShadowmapTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_AdditionalLightsShadowmapTexture();

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr bool const& __cordl_internal_get_m_CreateEmptyShadowmap() const;

  constexpr bool& __cordl_internal_get_m_CreateEmptyShadowmap();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() const;

  constexpr float_t const& __cordl_internal_get_m_MaxShadowDistanceSq() const;

  constexpr float_t& __cordl_internal_get_m_MaxShadowDistanceSq();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSetupSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSetupSampler() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>*& __cordl_internal_get_m_ShadowRequestsHashes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>*> const& __cordl_internal_get_m_ShadowRequestsHashes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*&
  __cordl_internal_get_m_ShadowResolutionRequests();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*> const&
  __cordl_internal_get_m_ShadowResolutionRequests() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
                     ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*> const&
  __cordl_internal_get_m_SortedShadowResolutionRequests() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
                     ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*>&
  __cordl_internal_get_m_SortedShadowResolutionRequests();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::RectInt>*& __cordl_internal_get_m_UnusedAtlasSquareAreas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RectInt>*> const& __cordl_internal_get_m_UnusedAtlasSquareAreas() const;

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_VisibleLightIndexToCameraSquareDistance() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_VisibleLightIndexToCameraSquareDistance();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex();

  constexpr void __cordl_internal_set_m_AdditionalLightIndexToShadowParams(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void
  __cordl_internal_set_m_AdditionalLightsShadowSlices(::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowmap(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowmapTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_CreateEmptyShadowmap(bool value);

  constexpr void __cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_MaxShadowDistanceSq(float_t value);

  constexpr void __cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ShadowRequestsHashes(::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* value);

  constexpr void __cordl_internal_set_m_ShadowResolutionRequests(
      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>* value);

  constexpr void __cordl_internal_set_m_ShadowSliceToAdditionalLightIndex(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_SortedShadowResolutionRequests(::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
                                                                                ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*>
                                                                           value);

  constexpr void __cordl_internal_set_m_UnusedAtlasSquareAreas(::System::Collections::Generic::List_1<::UnityEngine::RectInt>* value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToCameraSquareDistance(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2ae07dc, size 0x63c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  static inline ::UnityEngine::Vector4 getStaticF_c_DefaultShadowParams();

  static inline int32_t getStaticF_m_AdditionalLightsWorldToShadow_SSBO();

  static inline int32_t getStaticF_m_AdditionalShadowParams_SSBO();

  static inline int32_t getStaticF_m_AdditionalShadowsBufferId();

  static inline int32_t getStaticF_m_AdditionalShadowsIndicesId();

  static inline void setStaticF_c_DefaultShadowParams(::UnityEngine::Vector4 value);

  static inline void setStaticF_m_AdditionalLightsWorldToShadow_SSBO(int32_t value);

  static inline void setStaticF_m_AdditionalShadowParams_SSBO(int32_t value);

  static inline void setStaticF_m_AdditionalShadowsBufferId(int32_t value);

  static inline void setStaticF_m_AdditionalShadowsIndicesId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalLightsShadowCasterPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditionalLightsShadowCasterPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditionalLightsShadowCasterPass(AdditionalLightsShadowCasterPass const&) = delete;

  /// @brief Field m_UseStructuredBuffer, offset: 0xd8, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_AdditionalLightsShadowmap, offset: 0xe0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_AdditionalLightsShadowmap;

  /// @brief Field m_AdditionalLightsShadowmapTexture, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_AdditionalLightsShadowmapTexture;

  /// @brief Field m_MaxShadowDistanceSq, offset: 0x118, size: 0x4, def value: None
  float_t ___m_MaxShadowDistanceSq;

  /// @brief Field m_CascadeBorder, offset: 0x11c, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_AdditionalLightsShadowSlices, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> ___m_AdditionalLightsShadowSlices;

  /// @brief Field m_VisibleLightIndexToAdditionalLightIndex, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_VisibleLightIndexToAdditionalLightIndex;

  /// @brief Field m_AdditionalLightIndexToVisibleLightIndex, offset: 0x130, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_AdditionalLightIndexToVisibleLightIndex;

  /// @brief Field m_ShadowSliceToAdditionalLightIndex, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_ShadowSliceToAdditionalLightIndex;

  /// @brief Field m_GlobalShadowSliceIndexToPerLightShadowSliceIndex, offset: 0x140, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

  /// @brief Field m_AdditionalLightIndexToShadowParams, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightIndexToShadowParams;

  /// @brief Field m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

  /// @brief Field m_ShadowResolutionRequests, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>* ___m_ShadowResolutionRequests;

  /// @brief Field m_VisibleLightIndexToCameraSquareDistance, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_VisibleLightIndexToCameraSquareDistance;

  /// @brief Field m_SortedShadowResolutionRequests, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest,
           ::Array<::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest>*>
      ___m_SortedShadowResolutionRequests;

  /// @brief Field m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex, offset: 0x170, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex;

  /// @brief Field m_UnusedAtlasSquareAreas, offset: 0x178, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::RectInt>* ___m_UnusedAtlasSquareAreas;

  /// @brief Field m_CreateEmptyShadowmap, offset: 0x180, size: 0x1, def value: None
  bool ___m_CreateEmptyShadowmap;

  /// @brief Field m_ProfilingSetupSampler, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSetupSampler;

  /// @brief Field m_ShadowRequestsHashes, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* ___m_ShadowRequestsHashes;

  /// @brief Field LightTypeIdentifierInShadowParams_Point offset 0xffffffff size 0x4
  static constexpr float_t LightTypeIdentifierInShadowParams_Point{ 1.0 };

  /// @brief Field LightTypeIdentifierInShadowParams_Spot offset 0xffffffff size 0x4
  static constexpr float_t LightTypeIdentifierInShadowParams_Spot{ 0.0 };

  /// @brief Field kMinimumPunctualLightHardShadowResolution offset 0xffffffff size 0x4
  static constexpr int32_t kMinimumPunctualLightHardShadowResolution{ static_cast<int32_t>(0x8) };

  /// @brief Field kMinimumPunctualLightSoftShadowResolution offset 0xffffffff size 0x4
  static constexpr int32_t kMinimumPunctualLightSoftShadowResolution{ static_cast<int32_t>(0x10) };

  /// @brief Field k_ShadowmapBufferBits offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowmapBufferBits{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, 0x198>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_UseStructuredBuffer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowmap) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowmapTexture) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_MaxShadowDistanceSq) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CascadeBorder) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightsShadowSlices) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToAdditionalLightIndex) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToVisibleLightIndex) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowSliceToAdditionalLightIndex) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightIndexToShadowParams) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowResolutionRequests) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToCameraSquareDistance) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_SortedShadowResolutionRequests) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_VisibleLightIndexToSortedShadowResolutionRequestsFirstSliceIndex) == 0x170,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_UnusedAtlasSquareAreas) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_CreateEmptyShadowmap) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ProfilingSetupSampler) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass, ___m_ShadowRequestsHashes) == 0x190, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, "UnityEngine.Rendering.Universal.Internal", "AdditionalLightsShadowCasterPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__AdditionalShadowsConstantBuffer*, "UnityEngine.Rendering.Universal.Internal",
                       "AdditionalLightsShadowCasterPass/AdditionalShadowsConstantBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__AdditionalLightsShadowCasterPass__ShadowResolutionRequest, "UnityEngine.Rendering.Universal.Internal",
                       "AdditionalLightsShadowCasterPass/ShadowResolutionRequest");
