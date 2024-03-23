#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightExtractionJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
struct LightType;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightExtractionJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightExtractionJob);
// Type: UnityEngine.Rendering.Universal::LightExtractionJob
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightExtractionJob
struct CORDL_TYPE LightExtractionJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x2732518, size 0x184, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightExtractionJob();

  // Ctor Parameters [CppParam { name: "lights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None }, CppParam { name: "lightTypes", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::LightType>", modifiers: "", def_value: None }, CppParam { name: "radiuses", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "",
  // def_value: None }, CppParam { name: "directions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "positions", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "coneRadiuses", ty: "::Unity::Collections::NativeArray_1<float_t>",
  // modifiers: "", def_value: None }]
  constexpr LightExtractionJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes,
                               ::Unity::Collections::NativeArray_1<float_t> radiuses, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions,
                               ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions, ::Unity::Collections::NativeArray_1<float_t> coneRadiuses) noexcept;

  /// @brief Field lights, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights;

  /// @brief Field lightTypes, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes;

  /// @brief Field radiuses, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> radiuses;

  /// @brief Field directions, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions;

  /// @brief Field positions, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions;

  /// @brief Field coneRadiuses, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> coneRadiuses;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightExtractionJob, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, lights) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, lightTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, radiuses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, directions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, positions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightExtractionJob, coneRadiuses) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightExtractionJob, "UnityEngine.Rendering.Universal", "LightExtractionJob");
