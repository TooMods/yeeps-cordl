#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RadixSortJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RadixSortJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RadixSortJob);
// Type: UnityEngine.Rendering.Universal::RadixSortJob
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::RadixSortJob
struct CORDL_TYPE RadixSortJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x2732c5c, size 0x1a0, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RadixSortJob();

  // Ctor Parameters [CppParam { name: "keys", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "indices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr RadixSortJob(::Unity::Collections::NativeArray_1<uint32_t> keys, ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept;

  /// @brief Field keys, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> keys;

  /// @brief Field indices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RadixSortJob, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RadixSortJob, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RadixSortJob, indices) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RadixSortJob, "UnityEngine.Rendering.Universal", "RadixSortJob");
