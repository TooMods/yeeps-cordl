#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PreTile_def.hpp"
#include "UnityEngine/zzzz__FrustumPlanes_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeferredTiler)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__ClipResult;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__PrePunctualLight;
}
namespace UnityEngine::Rendering::Universal {
struct PreTile;
}
namespace UnityEngine {
struct FrustumPlanes;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__ClipResult;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct DeferredTiler;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__PrePunctualLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::DeferredTiler);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight);
// Type: ::PrePunctualLight
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 46, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredTiler::PrePunctualLight
struct CORDL_TYPE __DeferredTiler__PrePunctualLight {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredTiler__PrePunctualLight();

  // Ctor Parameters [CppParam { name: "posVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "minDist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "screenPos", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name:
  // "visLightIndex", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr __DeferredTiler__PrePunctualLight(::Unity::Mathematics::float3 posVS, float_t radius, float_t minDist, ::Unity::Mathematics::float2 screenPos, uint16_t visLightIndex) noexcept;

  /// @brief Field posVS, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 posVS;

  /// @brief Field radius, offset: 0xc, size: 0x4, def value: None
  float_t radius;

  /// @brief Field minDist, offset: 0x10, size: 0x4, def value: None
  float_t minDist;

  /// @brief Field screenPos, offset: 0x14, size: 0x8, def value: None
  ::Unity::Mathematics::float2 screenPos;

  /// @brief Field visLightIndex, offset: 0x1c, size: 0x2, def value: None
  uint16_t visLightIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, posVS) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, minDist) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, screenPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, visLightIndex) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: ::ClipResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::DeferredTiler::ClipResult
struct CORDL_TYPE __DeferredTiler__ClipResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeferredTiler__ClipResult_Unwrapped
  enum struct ____DeferredTiler__ClipResult_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_In = static_cast<int32_t>(0x1),
    __E_Out = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeferredTiler__ClipResult_Unwrapped() const noexcept {
    return static_cast<____DeferredTiler__ClipResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeferredTiler__ClipResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeferredTiler__ClipResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field In value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult const In;

  /// @brief Field Out value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult const Out;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::DeferredTiler
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DeferredTiler
struct CORDL_TYPE DeferredTiler {
public:
  // Declarations
  using ClipResult = ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult;

  using PrePunctualLight = ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight;

  __declspec(property(get = get_MaxLightPerTile)) int32_t MaxLightPerTile;

  __declspec(property(get = get_TileDataCapacity)) int32_t TileDataCapacity;

  __declspec(property(get = get_TileHeaderSize)) int32_t TileHeaderSize;

  __declspec(property(get = get_TileHeaders))::Unity::Collections::NativeArray_1<uint32_t> TileHeaders;

  __declspec(property(get = get_TilePixelHeight)) int32_t TilePixelHeight;

  __declspec(property(get = get_TilePixelWidth)) int32_t TilePixelWidth;

  __declspec(property(get = get_TileXCount)) int32_t TileXCount;

  __declspec(property(get = get_TileYCount)) int32_t TileYCount;

  __declspec(property(get = get_TilerLevel)) int32_t TilerLevel;

  __declspec(property(get = get_Tiles))::Unity::Collections::NativeArray_1<uint16_t> Tiles;

  /// @brief Method AddTileData, addr 0x2adfef8, size 0xe4, virtual false, abstract: false, final false
  inline int32_t AddTileData(::cordl_internals::Ptr<uint16_t> lightData, ByRef<int32_t> size);

  /// @brief Method Align, addr 0x2ae07c8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Align(int32_t s, int32_t alignment);

  /// @brief Method Clip, addr 0x2ae011c, size 0x340, virtual false, abstract: false, final false
  static inline bool Clip(ByRef<::UnityEngine::Rendering::Universal::PreTile> tile, ::Unity::Mathematics::float3 posVS, float_t radius);

  /// @brief Method ClipPartial, addr 0x2ae045c, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult ClipPartial(::Unity::Mathematics::float4 plane, ::Unity::Mathematics::float4 sidePlaneA,
                                                                                                       ::Unity::Mathematics::float4 sidePlaneB, ::Unity::Mathematics::float3 posVS, float_t radius,
                                                                                                       float_t radiusSq, ByRef<int32_t> insideCount);

  /// @brief Method CullFinalLights, addr 0x2ad6d1c, size 0x930, virtual false, abstract: false, final false
  inline void CullFinalLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> punctualLights,
                              ByRef<::Unity::Collections::NativeArray_1<uint16_t>> lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart,
                              int32_t jend);

  /// @brief Method CullIntermediateLights, addr 0x2adf810, size 0x640, virtual false, abstract: false, final false
  inline void CullIntermediateLights(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>> punctualLights,
                                     ByRef<::Unity::Collections::NativeArray_1<uint16_t>> lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart,
                                     int32_t jend);

  /// @brief Method DistanceToPlane, addr 0x2ae06f8, size 0x1c, virtual false, abstract: false, final false
  static inline float_t DistanceToPlane(::Unity::Mathematics::float4 plane, ::Unity::Mathematics::float3 p);

  /// @brief Method GetTileHeaderOffset, addr 0x2adfee4, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetTileHeaderOffset(int32_t i, int32_t j);

  /// @brief Method GetTileOffsetAndCount, addr 0x2adfeb8, size 0x2c, virtual false, abstract: false, final false
  inline void GetTileOffsetAndCount(int32_t i, int32_t j, ByRef<int32_t> offset, ByRef<int32_t> count);

  /// @brief Method IntersectionLineSphere, addr 0x2adffdc, size 0x140, virtual false, abstract: false, final false
  static inline bool IntersectionLineSphere(::Unity::Mathematics::float3 centre, float_t radius, ::Unity::Mathematics::float3 raySource, ::Unity::Mathematics::float3 rayDirection, ByRef<float_t> t0,
                                            ByRef<float_t> t1);

  /// @brief Method MakePlane, addr 0x2ae0600, size 0xf8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 MakePlane(::Unity::Mathematics::float3 pa, ::Unity::Mathematics::float3 pb, ::Unity::Mathematics::float3 pc);

  /// @brief Method MakePlane, addr 0x2ae0550, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float4 MakePlane(::Unity::Mathematics::float3 pb, ::Unity::Mathematics::float3 pc);

  /// @brief Method OnCameraCleanup, addr 0x2ad83e4, size 0x10c, virtual false, abstract: false, final false
  inline void OnCameraCleanup();

  /// @brief Method PrecomputeTiles, addr 0x2ad5934, size 0x94c, virtual false, abstract: false, final false
  inline void PrecomputeTiles(::UnityEngine::Matrix4x4 proj, bool isOrthographic, int32_t renderWidth, int32_t renderHeight);

  /// @brief Method Setup, addr 0x2ad6280, size 0x118, virtual false, abstract: false, final false
  inline void Setup(int32_t tileDataCapacity);

  /// @brief Method SignedSq, addr 0x2ae0714, size 0x1c, virtual false, abstract: false, final false
  static inline float_t SignedSq(float_t f);

  /// @brief Method .ctor, addr 0x2ad4afc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(int32_t tilePixelWidth, int32_t tilePixelHeight, int32_t avgLightPerTile, int32_t tilerLevel);

  /// @brief Method _f32tof16, addr 0x2ae0768, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t _f32tof16(float_t x);

  /// @brief Method get_MaxLightPerTile, addr 0x2adbe20, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_MaxLightPerTile();

  /// @brief Method get_TileDataCapacity, addr 0x2ad8380, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_TileDataCapacity();

  /// @brief Method get_TileHeaderSize, addr 0x2adfe98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TileHeaderSize();

  /// @brief Method get_TileHeaders, addr 0x2adfeac, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint32_t> get_TileHeaders();

  /// @brief Method get_TilePixelHeight, addr 0x2adfe90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TilePixelHeight();

  /// @brief Method get_TilePixelWidth, addr 0x2adfe88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TilePixelWidth();

  /// @brief Method get_TileXCount, addr 0x2adfe78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TileXCount();

  /// @brief Method get_TileYCount, addr 0x2adfe80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TileYCount();

  /// @brief Method get_TilerLevel, addr 0x2adfe70, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TilerLevel();

  /// @brief Method get_Tiles, addr 0x2adfea0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint16_t> get_Tiles();

  /// @brief Method max2, addr 0x2ae073c, size 0xc, virtual false, abstract: false, final false
  static inline float_t max2(float_t a, float_t b);

  /// @brief Method max3, addr 0x2ae0748, size 0x20, virtual false, abstract: false, final false
  static inline float_t max3(float_t a, float_t b, float_t c);

  /// @brief Method min2, addr 0x2ae0730, size 0xc, virtual false, abstract: false, final false
  static inline float_t min2(float_t a, float_t b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredTiler();

  // Ctor Parameters [CppParam { name: "m_TilePixelWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TilePixelHeight", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_TileXCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TileYCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_TileHeaderSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AvgLightPerTile", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TilerLevel", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FrustumPlanes", ty: "::UnityEngine::FrustumPlanes", modifiers: "", def_value: None }, CppParam { name: "m_IsOrthographic", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "m_Counters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TileData", ty:
  // "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_TileHeaders", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "m_PreTiles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile>", modifiers: "", def_value: None }]
  constexpr DeferredTiler(int32_t m_TilePixelWidth, int32_t m_TilePixelHeight, int32_t m_TileXCount, int32_t m_TileYCount, int32_t m_TileHeaderSize, int32_t m_AvgLightPerTile, int32_t m_TilerLevel,
                          ::UnityEngine::FrustumPlanes m_FrustumPlanes, bool m_IsOrthographic, ::Unity::Collections::NativeArray_1<int32_t> m_Counters,
                          ::Unity::Collections::NativeArray_1<uint16_t> m_TileData, ::Unity::Collections::NativeArray_1<uint32_t> m_TileHeaders,
                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile> m_PreTiles) noexcept;

  /// @brief Field m_TilePixelWidth, offset: 0x0, size: 0x4, def value: None
  int32_t m_TilePixelWidth;

  /// @brief Field m_TilePixelHeight, offset: 0x4, size: 0x4, def value: None
  int32_t m_TilePixelHeight;

  /// @brief Field m_TileXCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_TileXCount;

  /// @brief Field m_TileYCount, offset: 0xc, size: 0x4, def value: None
  int32_t m_TileYCount;

  /// @brief Field m_TileHeaderSize, offset: 0x10, size: 0x4, def value: None
  int32_t m_TileHeaderSize;

  /// @brief Field m_AvgLightPerTile, offset: 0x14, size: 0x4, def value: None
  int32_t m_AvgLightPerTile;

  /// @brief Field m_TilerLevel, offset: 0x18, size: 0x4, def value: None
  int32_t m_TilerLevel;

  /// @brief Field m_FrustumPlanes, offset: 0x1c, size: 0x18, def value: None
  ::UnityEngine::FrustumPlanes m_FrustumPlanes;

  /// @brief Field m_IsOrthographic, offset: 0x34, size: 0x1, def value: None
  bool m_IsOrthographic;

  /// @brief Field m_Counters, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_Counters;

  /// @brief Field m_TileData, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> m_TileData;

  /// @brief Field m_TileHeaders, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> m_TileHeaders;

  /// @brief Field m_PreTiles, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::PreTile> m_PreTiles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredTiler, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TilePixelWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TilePixelHeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TileXCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TileYCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TileHeaderSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_AvgLightPerTile) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TilerLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_FrustumPlanes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_IsOrthographic) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_Counters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TileData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_TileHeaders) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, m_PreTiles) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__ClipResult, "UnityEngine.Rendering.Universal.Internal", "DeferredTiler/ClipResult");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredTiler, "UnityEngine.Rendering.Universal.Internal", "DeferredTiler");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight, "UnityEngine.Rendering.Universal.Internal", "DeferredTiler/PrePunctualLight");
