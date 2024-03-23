#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxZJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine::Rendering::Universal {
struct LightMinMaxZ;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct MinMaxZJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::MinMaxZJob);
// Type: UnityEngine.Rendering.Universal::MinMaxZJob
// SizeInfo { instance_size: 112, native_size: 112, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::MinMaxZJob
struct CORDL_TYPE MinMaxZJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x273269c, size 0x5c0, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxZJob();

  // Ctor Parameters [CppParam { name: "worldToViewMatrix", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: None }, CppParam { name: "lights", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None }, CppParam { name: "minMaxZs", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ>", modifiers: "", def_value: None }, CppParam { name: "meanZs", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }]
  constexpr MinMaxZJob(::Unity::Mathematics::float4x4 worldToViewMatrix, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights,
                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs, ::Unity::Collections::NativeArray_1<float_t> meanZs) noexcept;

  /// @brief Field worldToViewMatrix, offset: 0x0, size: 0x40, def value: None
  ::Unity::Mathematics::float4x4 worldToViewMatrix;

  /// @brief Field lights, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights;

  /// @brief Field minMaxZs, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs;

  /// @brief Field meanZs, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> meanZs;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MinMaxZJob, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MinMaxZJob, worldToViewMatrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MinMaxZJob, lights) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MinMaxZJob, minMaxZs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MinMaxZJob, meanZs) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MinMaxZJob, "UnityEngine.Rendering.Universal", "MinMaxZJob");
