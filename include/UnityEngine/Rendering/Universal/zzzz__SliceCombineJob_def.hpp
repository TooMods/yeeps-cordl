#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliceCombineJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct int2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct SliceCombineJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::SliceCombineJob);
// Type: UnityEngine.Rendering.Universal::SliceCombineJob
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::SliceCombineJob
struct CORDL_TYPE SliceCombineJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x2732dfc, size 0x80, virtual true, abstract: false, final true
  inline void Execute(int32_t idY);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliceCombineJob();

  // Ctor Parameters [CppParam { name: "tileResolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "wordsPerTile", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "sliceLightMasksH", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "sliceLightMasksV", ty:
  // "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "lightMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value:
  // None }]
  constexpr SliceCombineJob(::Unity::Mathematics::int2 tileResolution, int32_t wordsPerTile, ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksH,
                            ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksV, ::Unity::Collections::NativeArray_1<uint32_t> lightMasks) noexcept;

  /// @brief Field tileResolution, offset: 0x0, size: 0x8, def value: None
  ::Unity::Mathematics::int2 tileResolution;

  /// @brief Field wordsPerTile, offset: 0x8, size: 0x4, def value: None
  int32_t wordsPerTile;

  /// @brief Field sliceLightMasksH, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksH;

  /// @brief Field sliceLightMasksV, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksV;

  /// @brief Field lightMasks, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> lightMasks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SliceCombineJob, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCombineJob, tileResolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCombineJob, wordsPerTile) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCombineJob, sliceLightMasksH) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCombineJob, sliceLightMasksV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SliceCombineJob, lightMasks) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SliceCombineJob, "UnityEngine.Rendering.Universal", "SliceCombineJob");
