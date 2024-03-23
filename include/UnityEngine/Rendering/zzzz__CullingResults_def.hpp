#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingResults)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct CullingAllocationInfo;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingResults;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingResults);
// Type: UnityEngine.Rendering::CullingResults
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::CullingResults
struct CORDL_TYPE CullingResults {
public:
  // Declarations
  __declspec(property(get = get_lightAndReflectionProbeIndexCount)) int32_t lightAndReflectionProbeIndexCount;

  __declspec(property(get = get_visibleLights))::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*();

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives, addr 0x2a962b4, size 0x8, virtual false, abstract: false, final false
  inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, ::UnityEngine::Vector3 splitRatio, int32_t shadowResolution,
                                                                   float_t shadowNearPlaneOffset, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                   ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives, addr 0x2a962bc, size 0xb8, virtual false, abstract: false, final false
  static inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives(void* cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, ::UnityEngine::Vector3 splitRatio,
                                                                          int32_t shadowResolution, float_t shadowNearPlaneOffset, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                          ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected, addr 0x2a963ec, size 0xac, virtual false, abstract: false, final false
  static inline bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(void* cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount,
                                                                                   ByRef<::UnityEngine::Vector3> splitRatio, int32_t shadowResolution, float_t shadowNearPlaneOffset,
                                                                                   ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                                   ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputePointShadowMatricesAndCullingPrimitives, addr 0x2a961ac, size 0x84, virtual false, abstract: false, final false
  inline bool ComputePointShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float_t fovBias, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                             ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputePointShadowMatricesAndCullingPrimitives, addr 0x2a96230, size 0x84, virtual false, abstract: false, final false
  static inline bool ComputePointShadowMatricesAndCullingPrimitives(void* cullingResultsPtr, int32_t activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float_t fovBias,
                                                                    ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                                    ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeSpotShadowMatricesAndCullingPrimitives, addr 0x2a960d4, size 0x6c, virtual false, abstract: false, final false
  inline bool ComputeSpotShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix,
                                                            ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method ComputeSpotShadowMatricesAndCullingPrimitives, addr 0x2a96140, size 0x6c, virtual false, abstract: false, final false
  static inline bool ComputeSpotShadowMatricesAndCullingPrimitives(void* cullingResultsPtr, int32_t activeLightIndex, ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                   ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);

  /// @brief Method Equals, addr 0x2a96374, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a93840, size 0x90, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::CullingResults other);

  /// @brief Method FillLightAndReflectionProbeIndices, addr 0x2a95d18, size 0x44, virtual false, abstract: false, final false
  inline void FillLightAndReflectionProbeIndices(::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method FillLightAndReflectionProbeIndices, addr 0x2a95d5c, size 0x44, virtual false, abstract: false, final false
  static inline void FillLightAndReflectionProbeIndices(void* cullingResultsPtr, ::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method FillLightIndexMap, addr 0x2a95ee8, size 0x54, virtual false, abstract: false, final false
  static inline void FillLightIndexMap(void* cullingResultsPtr, void* indexMapPtr, int32_t indexMapSize);

  /// @brief Method GetHashCode, addr 0x2a93b24, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLightIndexCount, addr 0x2a95ca0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLightIndexCount(void* cullingResultsPtr);

  /// @brief Method GetLightIndexMap, addr 0x2a95da0, size 0x10c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> GetLightIndexMap(::Unity::Collections::Allocator allocator);

  /// @brief Method GetLightIndexMapSize, addr 0x2a95eac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLightIndexMapSize(void* cullingResultsPtr);

  /// @brief Method GetNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetNativeArray(::cordl_internals::Ptr<void> dataPointer, int32_t length);

  /// @brief Method GetReflectionProbeIndexCount, addr 0x2a95cdc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetReflectionProbeIndexCount(void* cullingResultsPtr);

  /// @brief Method GetShadowCasterBounds, addr 0x2a96080, size 0x54, virtual false, abstract: false, final false
  static inline bool GetShadowCasterBounds(void* cullingResultsPtr, int32_t lightIndex, ByRef<::UnityEngine::Bounds> bounds);

  /// @brief Method GetShadowCasterBounds, addr 0x2a9602c, size 0x54, virtual false, abstract: false, final false
  inline bool GetShadowCasterBounds(int32_t lightIndex, ByRef<::UnityEngine::Bounds> outBounds);

  /// @brief Method SetLightIndexMap, addr 0x2a95fd8, size 0x54, virtual false, abstract: false, final false
  static inline void SetLightIndexMap(void* cullingResultsPtr, void* indexMapPtr, int32_t indexMapSize);

  /// @brief Method SetLightIndexMap, addr 0x2a95f3c, size 0x9c, virtual false, abstract: false, final false
  inline void SetLightIndexMap(::Unity::Collections::NativeArray_1<int32_t> lightIndexMap);

  /// @brief Method get_lightAndReflectionProbeIndexCount, addr 0x2a95c28, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_lightAndReflectionProbeIndexCount();

  /// @brief Method get_visibleLights, addr 0x2a95bcc, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> get_visibleLights();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>* i___System__IEquatable_1___UnityEngine__Rendering__CullingResults_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingResults();

  // Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllocationInfo", ty:
  // "::cordl_internals::Ptr<::UnityEngine::Rendering::CullingAllocationInfo>", modifiers: "", def_value: None }]
  constexpr CullingResults(void* ptr, ::cordl_internals::Ptr<::UnityEngine::Rendering::CullingAllocationInfo> m_AllocationInfo) noexcept;

  /// @brief Field ptr, offset: 0x0, size: 0x8, def value: None
  void* ptr;

  /// @brief Field m_AllocationInfo, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::Rendering::CullingAllocationInfo> m_AllocationInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullingResults, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingResults, ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingResults, m_AllocationInfo) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingResults, "UnityEngine.Rendering", "CullingResults");
