#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliceCullingJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Cone;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Plane;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Sphere;
}
namespace UnityEngine {
struct LightType;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct SliceCullingJob;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Cone;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Plane;
}
namespace UnityEngine::Rendering::Universal {
struct __SliceCullingJob__Sphere;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::SliceCullingJob);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere);
// Type: ::Cone
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::SliceCullingJob::Cone
struct CORDL_TYPE __SliceCullingJob__Cone {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliceCullingJob__Cone();

  // Ctor Parameters [CppParam { name: "tip", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __SliceCullingJob__Cone(::Unity::Mathematics::float3 tip, ::Unity::Mathematics::float3 direction, float_t height, float_t radius) noexcept;

  /// @brief Field tip, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 tip;

  /// @brief Field direction, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 direction;

  /// @brief Field height, offset: 0x18, size: 0x4, def value: None
  float_t height;

  /// @brief Field radius, offset: 0x1c, size: 0x4, def value: None
  float_t radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, tip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, direction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, height) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, radius) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::Sphere
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::SliceCullingJob::Sphere
struct CORDL_TYPE __SliceCullingJob__Sphere {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliceCullingJob__Sphere();

  // Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __SliceCullingJob__Sphere(::Unity::Mathematics::float3 center, float_t radius) noexcept;

  /// @brief Field center, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 center;

  /// @brief Field radius, offset: 0xc, size: 0x4, def value: None
  float_t radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere, radius) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::Plane
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::SliceCullingJob::Plane
struct CORDL_TYPE __SliceCullingJob__Plane {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliceCullingJob__Plane();

  // Ctor Parameters [CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "distanceToOrigin", ty: "float_t", modifiers: "", def_value:
  // None }]
  constexpr __SliceCullingJob__Plane(::Unity::Mathematics::float3 normal, float_t distanceToOrigin) noexcept;

  /// @brief Field normal, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 normal;

  /// @brief Field distanceToOrigin, offset: 0xc, size: 0x4, def value: None
  float_t distanceToOrigin;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, distanceToOrigin) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::SliceCullingJob
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::SliceCullingJob
struct CORDL_TYPE SliceCullingJob {
public:
  // Declarations
  using Cone = ::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone;

  using Plane = ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane;

  using Sphere = ::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere;

  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method ComputePlane, addr 0x2733278, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane ComputePlane(::Unity::Mathematics::float3 p0, ::Unity::Mathematics::float3 p1, ::Unity::Mathematics::float3 p2);

  /// @brief Method ConeBehindPlane, addr 0x27333b8, size 0x134, virtual false, abstract: false, final false
  static inline bool ConeBehindPlane(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone cone, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane);

  /// @brief Method ContainsLight, addr 0x27330c0, size 0x1b8, virtual false, abstract: false, final false
  inline bool ContainsLight(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane leftPlane, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane rightPlane, int32_t lightIndex);

  /// @brief Method Execute, addr 0x2732e7c, size 0x244, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Method PointBehindPlane, addr 0x2733394, size 0x24, virtual false, abstract: false, final false
  static inline bool PointBehindPlane(::Unity::Mathematics::float3 p, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane);

  /// @brief Method SphereBehindPlane, addr 0x273336c, size 0x28, virtual false, abstract: false, final false
  static inline bool SphereBehindPlane(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere sphere, ::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane plane);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliceCullingJob();

  // Ctor Parameters [CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "viewOrigin", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None },
  // CppParam { name: "viewForward", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "viewRight", ty: "::Unity::Mathematics::float3", modifiers: "", def_value:
  // None }, CppParam { name: "viewUp", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "lightTypes", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::LightType>", modifiers: "", def_value: None }, CppParam { name: "radiuses", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "",
  // def_value: None }, CppParam { name: "directions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "positions", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "coneRadiuses", ty: "::Unity::Collections::NativeArray_1<float_t>",
  // modifiers: "", def_value: None }, CppParam { name: "lightsPerTile", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sliceLightMasks", ty:
  // "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }]
  constexpr SliceCullingJob(float_t scale, ::Unity::Mathematics::float3 viewOrigin, ::Unity::Mathematics::float3 viewForward, ::Unity::Mathematics::float3 viewRight,
                            ::Unity::Mathematics::float3 viewUp, ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes, ::Unity::Collections::NativeArray_1<float_t> radiuses,
                            ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions,
                            ::Unity::Collections::NativeArray_1<float_t> coneRadiuses, int32_t lightsPerTile, ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasks) noexcept;

  /// @brief Field scale, offset: 0x0, size: 0x4, def value: None
  float_t scale;

  /// @brief Field viewOrigin, offset: 0x4, size: 0xc, def value: None
  ::Unity::Mathematics::float3 viewOrigin;

  /// @brief Field viewForward, offset: 0x10, size: 0xc, def value: None
  ::Unity::Mathematics::float3 viewForward;

  /// @brief Field viewRight, offset: 0x1c, size: 0xc, def value: None
  ::Unity::Mathematics::float3 viewRight;

  /// @brief Field viewUp, offset: 0x28, size: 0xc, def value: None
  ::Unity::Mathematics::float3 viewUp;

  /// @brief Field lightTypes, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes;

  /// @brief Field radiuses, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> radiuses;

  /// @brief Field directions, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions;

  /// @brief Field positions, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions;

  /// @brief Field coneRadiuses, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> coneRadiuses;

  /// @brief Field lightsPerTile, offset: 0x88, size: 0x4, def value: None
  int32_t lightsPerTile;

  /// @brief Field sliceLightMasks, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SliceCullingJob, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, scale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, viewOrigin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, viewForward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, viewRight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, viewUp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, lightTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, radiuses) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, directions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, positions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, coneRadiuses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, lightsPerTile) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCullingJob, sliceLightMasks) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SliceCullingJob, "UnityEngine.Rendering.Universal", "SliceCullingJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__SliceCullingJob__Cone, "UnityEngine.Rendering.Universal", "SliceCullingJob/Cone");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__SliceCullingJob__Plane, "UnityEngine.Rendering.Universal", "SliceCullingJob/Plane");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__SliceCullingJob__Sphere, "UnityEngine.Rendering.Universal", "SliceCullingJob/Sphere");
