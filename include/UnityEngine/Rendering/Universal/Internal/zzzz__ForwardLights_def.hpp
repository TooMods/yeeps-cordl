#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBin_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ForwardLights)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __ForwardLights__InitParams;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __ForwardLights__LightConstantBuffer;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
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
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __ForwardLights__LightConstantBuffer;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __ForwardLights__InitParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ForwardLights);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams);
// Type: ::LightConstantBuffer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::ForwardLights::LightConstantBuffer*
class CORDL_TYPE __ForwardLights__LightConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AdditionalLightOcclusionProbeChannel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightOcclusionProbeChannel, put = setStaticF__AdditionalLightOcclusionProbeChannel)) int32_t _AdditionalLightOcclusionProbeChannel;

  /// @brief Field _AdditionalLightsAttenuation, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsAttenuation, put = setStaticF__AdditionalLightsAttenuation)) int32_t _AdditionalLightsAttenuation;

  /// @brief Field _AdditionalLightsColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsColor, put = setStaticF__AdditionalLightsColor)) int32_t _AdditionalLightsColor;

  /// @brief Field _AdditionalLightsCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsCount, put = setStaticF__AdditionalLightsCount)) int32_t _AdditionalLightsCount;

  /// @brief Field _AdditionalLightsLayerMasks, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsLayerMasks, put = setStaticF__AdditionalLightsLayerMasks)) int32_t _AdditionalLightsLayerMasks;

  /// @brief Field _AdditionalLightsPosition, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsPosition, put = setStaticF__AdditionalLightsPosition)) int32_t _AdditionalLightsPosition;

  /// @brief Field _AdditionalLightsSpotDir, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__AdditionalLightsSpotDir, put = setStaticF__AdditionalLightsSpotDir)) int32_t _AdditionalLightsSpotDir;

  /// @brief Field _MainLightColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightColor, put = setStaticF__MainLightColor)) int32_t _MainLightColor;

  /// @brief Field _MainLightLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightLayerMask, put = setStaticF__MainLightLayerMask)) int32_t _MainLightLayerMask;

  /// @brief Field _MainLightOcclusionProbesChannel, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightOcclusionProbesChannel, put = setStaticF__MainLightOcclusionProbesChannel)) int32_t _MainLightOcclusionProbesChannel;

  /// @brief Field _MainLightPosition, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MainLightPosition, put = setStaticF__MainLightPosition)) int32_t _MainLightPosition;

  static inline int32_t getStaticF__AdditionalLightOcclusionProbeChannel();

  static inline int32_t getStaticF__AdditionalLightsAttenuation();

  static inline int32_t getStaticF__AdditionalLightsColor();

  static inline int32_t getStaticF__AdditionalLightsCount();

  static inline int32_t getStaticF__AdditionalLightsLayerMasks();

  static inline int32_t getStaticF__AdditionalLightsPosition();

  static inline int32_t getStaticF__AdditionalLightsSpotDir();

  static inline int32_t getStaticF__MainLightColor();

  static inline int32_t getStaticF__MainLightLayerMask();

  static inline int32_t getStaticF__MainLightOcclusionProbesChannel();

  static inline int32_t getStaticF__MainLightPosition();

  static inline void setStaticF__AdditionalLightOcclusionProbeChannel(int32_t value);

  static inline void setStaticF__AdditionalLightsAttenuation(int32_t value);

  static inline void setStaticF__AdditionalLightsColor(int32_t value);

  static inline void setStaticF__AdditionalLightsCount(int32_t value);

  static inline void setStaticF__AdditionalLightsLayerMasks(int32_t value);

  static inline void setStaticF__AdditionalLightsPosition(int32_t value);

  static inline void setStaticF__AdditionalLightsSpotDir(int32_t value);

  static inline void setStaticF__MainLightColor(int32_t value);

  static inline void setStaticF__MainLightLayerMask(int32_t value);

  static inline void setStaticF__MainLightOcclusionProbesChannel(int32_t value);

  static inline void setStaticF__MainLightPosition(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ForwardLights__LightConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ForwardLights__LightConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ForwardLights__LightConstantBuffer(__ForwardLights__LightConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ForwardLights__LightConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ForwardLights__LightConstantBuffer(__ForwardLights__LightConstantBuffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::InitParams
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::ForwardLights::InitParams
struct CORDL_TYPE __ForwardLights__InitParams {
public:
  // Declarations
  /// @brief Method GetDefault, addr 0x29ae920, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams GetDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ForwardLights__InitParams();

  // Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: None }, CppParam { name: "clusteredRendering",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ForwardLights__InitParams(::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager, bool clusteredRendering, int32_t tileSize) noexcept;

  /// @brief Field lightCookieManager, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager;

  /// @brief Field clusteredRendering, offset: 0x8, size: 0x1, def value: None
  bool clusteredRendering;

  /// @brief Field tileSize, offset: 0xc, size: 0x4, def value: None
  int32_t tileSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, lightCookieManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, clusteredRendering) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, tileSize) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::ForwardLights
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::ForwardLights*
class CORDL_TYPE ForwardLights : public ::System::Object {
public:
  // Declarations
  using InitParams = ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams;

  using LightConstantBuffer = ::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer;

  /// @brief Field m_ActualTileWidth, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActualTileWidth, put = __cordl_internal_set_m_ActualTileWidth)) int32_t m_ActualTileWidth;

  /// @brief Field m_AdditionalLightAttenuations, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightAttenuations,
                      put = __cordl_internal_set_m_AdditionalLightAttenuations))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightAttenuations;

  /// @brief Field m_AdditionalLightColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightColors,
                      put = __cordl_internal_set_m_AdditionalLightColors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightColors;

  /// @brief Field m_AdditionalLightOcclusionProbeChannels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels,
                      put = __cordl_internal_set_m_AdditionalLightOcclusionProbeChannels))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightOcclusionProbeChannels;

  /// @brief Field m_AdditionalLightPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightPositions,
                      put = __cordl_internal_set_m_AdditionalLightPositions))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightPositions;

  /// @brief Field m_AdditionalLightSpotDirections, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightSpotDirections,
                      put = __cordl_internal_set_m_AdditionalLightSpotDirections))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_AdditionalLightSpotDirections;

  /// @brief Field m_AdditionalLightsBufferId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsBufferId, put = __cordl_internal_set_m_AdditionalLightsBufferId)) int32_t m_AdditionalLightsBufferId;

  /// @brief Field m_AdditionalLightsIndicesId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsIndicesId, put = __cordl_internal_set_m_AdditionalLightsIndicesId)) int32_t m_AdditionalLightsIndicesId;

  /// @brief Field m_AdditionalLightsLayerMasks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsLayerMasks,
                      put = __cordl_internal_set_m_AdditionalLightsLayerMasks))::ArrayW<float_t, ::Array<float_t>*> m_AdditionalLightsLayerMasks;

  /// @brief Field m_CullingHandle, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CullingHandle, put = __cordl_internal_set_m_CullingHandle))::Unity::Jobs::JobHandle m_CullingHandle;

  /// @brief Field m_DirectionalLightCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DirectionalLightCount, put = __cordl_internal_set_m_DirectionalLightCount)) int32_t m_DirectionalLightCount;

  /// @brief Field m_LightCookieManager, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager))::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_MixedLightingSetup, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MixedLightingSetup, put = __cordl_internal_set_m_MixedLightingSetup))::UnityEngine::Rendering::Universal::MixedLightingSetup m_MixedLightingSetup;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_RequestedTileWidth, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RequestedTileWidth, put = __cordl_internal_set_m_RequestedTileWidth)) int32_t m_RequestedTileWidth;

  /// @brief Field m_TileBuffer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileBuffer, put = __cordl_internal_set_m_TileBuffer))::UnityEngine::ComputeBuffer* m_TileBuffer;

  /// @brief Field m_TileLightMasks, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TileLightMasks, put = __cordl_internal_set_m_TileLightMasks))::Unity::Collections::NativeArray_1<uint32_t> m_TileLightMasks;

  /// @brief Field m_TileResolution, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TileResolution, put = __cordl_internal_set_m_TileResolution))::Unity::Mathematics::int2 m_TileResolution;

  /// @brief Field m_UseClusteredRendering, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseClusteredRendering, put = __cordl_internal_set_m_UseClusteredRendering)) bool m_UseClusteredRendering;

  /// @brief Field m_UseStructuredBuffer, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStructuredBuffer, put = __cordl_internal_set_m_UseStructuredBuffer)) bool m_UseStructuredBuffer;

  /// @brief Field m_ZBinBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ZBinBuffer, put = __cordl_internal_set_m_ZBinBuffer))::UnityEngine::ComputeBuffer* m_ZBinBuffer;

  /// @brief Field m_ZBinFactor, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ZBinFactor, put = __cordl_internal_set_m_ZBinFactor)) float_t m_ZBinFactor;

  /// @brief Field m_ZBinOffset, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ZBinOffset, put = __cordl_internal_set_m_ZBinOffset)) int32_t m_ZBinOffset;

  /// @brief Field m_ZBins, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ZBins, put = __cordl_internal_set_m_ZBins))::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> m_ZBins;

  /// @brief Method Cleanup, addr 0x29b0c24, size 0x40, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method InitializeLightConstants, addr 0x29b0c64, size 0x1dc, virtual false, abstract: false, final false
  inline void InitializeLightConstants(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, ByRef<::UnityEngine::Vector4> lightPos,
                                       ByRef<::UnityEngine::Vector4> lightColor, ByRef<::UnityEngine::Vector4> lightAttenuation, ByRef<::UnityEngine::Vector4> lightSpotDir,
                                       ByRef<::UnityEngine::Vector4> lightOcclusionProbeChannel, ByRef<uint32_t> lightLayerMask);

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* New_ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* New_ctor(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams initParams);

  /// @brief Method ProcessLights, addr 0x29aeed8, size 0x15a4, virtual false, abstract: false, final false
  inline void ProcessLights(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x29b047c, size 0x770, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupAdditionalLightConstants, addr 0x29b0f60, size 0x4c4, virtual false, abstract: false, final false
  inline void SetupAdditionalLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupMainLightConstants, addr 0x29b0e40, size 0x120, virtual false, abstract: false, final false
  inline void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method SetupPerObjectLightIndices, addr 0x29b1424, size 0x1c0, virtual false, abstract: false, final false
  inline int32_t SetupPerObjectLightIndices(::UnityEngine::Rendering::CullingResults cullResults, ByRef<::UnityEngine::Rendering::Universal::LightData> lightData);

  /// @brief Method SetupShaderLightConstants, addr 0x29b0bec, size 0x38, virtual false, abstract: false, final false
  inline void SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  constexpr int32_t const& __cordl_internal_get_m_ActualTileWidth() const;

  constexpr int32_t& __cordl_internal_get_m_ActualTileWidth();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightAttenuations() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightAttenuations();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightOcclusionProbeChannels();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightPositions();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_AdditionalLightSpotDirections() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_AdditionalLightSpotDirections();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsBufferId() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsBufferId();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsIndicesId() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsIndicesId();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_AdditionalLightsLayerMasks() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_AdditionalLightsLayerMasks();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_m_CullingHandle() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_m_CullingHandle();

  constexpr int32_t const& __cordl_internal_get_m_DirectionalLightCount() const;

  constexpr int32_t& __cordl_internal_get_m_DirectionalLightCount();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LightCookieManager*> const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& __cordl_internal_get_m_MixedLightingSetup() const;

  constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& __cordl_internal_get_m_MixedLightingSetup();

  constexpr int32_t const& __cordl_internal_get_m_RequestedTileWidth() const;

  constexpr int32_t& __cordl_internal_get_m_RequestedTileWidth();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_TileBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_TileBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __cordl_internal_get_m_TileLightMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __cordl_internal_get_m_TileLightMasks();

  constexpr ::Unity::Mathematics::int2 const& __cordl_internal_get_m_TileResolution() const;

  constexpr ::Unity::Mathematics::int2& __cordl_internal_get_m_TileResolution();

  constexpr bool const& __cordl_internal_get_m_UseClusteredRendering() const;

  constexpr bool& __cordl_internal_get_m_UseClusteredRendering();

  constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseStructuredBuffer();

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ZBinBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ComputeBuffer*> const& __cordl_internal_get_m_ZBinBuffer() const;

  constexpr float_t const& __cordl_internal_get_m_ZBinFactor() const;

  constexpr float_t& __cordl_internal_get_m_ZBinFactor();

  constexpr int32_t const& __cordl_internal_get_m_ZBinOffset() const;

  constexpr int32_t& __cordl_internal_get_m_ZBinOffset();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> const& __cordl_internal_get_m_ZBins() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin>& __cordl_internal_get_m_ZBins();

  constexpr void __cordl_internal_set_m_ActualTileWidth(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightAttenuations(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightOcclusionProbeChannels(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightSpotDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AdditionalLightsBufferId(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsIndicesId(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsLayerMasks(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_CullingHandle(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set_m_DirectionalLightCount(int32_t value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value);

  constexpr void __cordl_internal_set_m_RequestedTileWidth(int32_t value);

  constexpr void __cordl_internal_set_m_TileBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_TileLightMasks(::Unity::Collections::NativeArray_1<uint32_t> value);

  constexpr void __cordl_internal_set_m_TileResolution(::Unity::Mathematics::int2 value);

  constexpr void __cordl_internal_set_m_UseClusteredRendering(bool value);

  constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool value);

  constexpr void __cordl_internal_set_m_ZBinBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_ZBinFactor(float_t value);

  constexpr void __cordl_internal_set_m_ZBinOffset(int32_t value);

  constexpr void __cordl_internal_set_m_ZBins(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> value);

  /// @brief Method .ctor, addr 0x29ae8f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x29aea40, size 0x498, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams initParams);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardLights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardLights(ForwardLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardLights(ForwardLights const&) = delete;

  /// @brief Field m_AdditionalLightsBufferId, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsBufferId;

  /// @brief Field m_AdditionalLightsIndicesId, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsIndicesId;

  /// @brief Field m_MixedLightingSetup, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MixedLightingSetup ___m_MixedLightingSetup;

  /// @brief Field m_AdditionalLightPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightPositions;

  /// @brief Field m_AdditionalLightColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightColors;

  /// @brief Field m_AdditionalLightAttenuations, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightAttenuations;

  /// @brief Field m_AdditionalLightSpotDirections, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightSpotDirections;

  /// @brief Field m_AdditionalLightOcclusionProbeChannels, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_AdditionalLightOcclusionProbeChannels;

  /// @brief Field m_AdditionalLightsLayerMasks, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_AdditionalLightsLayerMasks;

  /// @brief Field m_UseStructuredBuffer, offset: 0x50, size: 0x1, def value: None
  bool ___m_UseStructuredBuffer;

  /// @brief Field m_UseClusteredRendering, offset: 0x51, size: 0x1, def value: None
  bool ___m_UseClusteredRendering;

  /// @brief Field m_DirectionalLightCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_DirectionalLightCount;

  /// @brief Field m_ActualTileWidth, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_ActualTileWidth;

  /// @brief Field m_TileResolution, offset: 0x5c, size: 0x8, def value: None
  ::Unity::Mathematics::int2 ___m_TileResolution;

  /// @brief Field m_RequestedTileWidth, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_RequestedTileWidth;

  /// @brief Field m_ZBinFactor, offset: 0x68, size: 0x4, def value: None
  float_t ___m_ZBinFactor;

  /// @brief Field m_ZBinOffset, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_ZBinOffset;

  /// @brief Field m_CullingHandle, offset: 0x70, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ___m_CullingHandle;

  /// @brief Field m_ZBins, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> ___m_ZBins;

  /// @brief Field m_TileLightMasks, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> ___m_TileLightMasks;

  /// @brief Field m_ZBinBuffer, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_ZBinBuffer;

  /// @brief Field m_TileBuffer, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_TileBuffer;

  /// @brief Field m_LightCookieManager, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  /// @brief Field k_SetupLightConstants offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SetupLightConstants{ u"Setup Light Constants" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ForwardLights, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsBufferId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsIndicesId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_MixedLightingSetup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightAttenuations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightSpotDirections) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightOcclusionProbeChannels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_AdditionalLightsLayerMasks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_UseStructuredBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_UseClusteredRendering) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_DirectionalLightCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ActualTileWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileResolution) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_RequestedTileWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinFactor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_CullingHandle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBins) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileLightMasks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_ZBinBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_TileBuffer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ForwardLights, ___m_LightCookieManager) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ForwardLights);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ForwardLights*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__LightConstantBuffer*, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/LightConstantBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__ForwardLights__InitParams, "UnityEngine.Rendering.Universal.Internal", "ForwardLights/InitParams");
