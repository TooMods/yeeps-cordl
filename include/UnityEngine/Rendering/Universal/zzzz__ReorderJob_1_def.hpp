#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReorderJob_1)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
template <typename T> struct ReorderJob_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::ReorderJob_1);
// Type: UnityEngine.Rendering.Universal::ReorderJob`1
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ReorderJob`1<T>
struct CORDL_TYPE ReorderJob_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReorderJob_1();

  // Ctor Parameters [CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "input", ty:
  // "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }, CppParam { name: "output", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }]
  constexpr ReorderJob_1(::Unity::Collections::NativeArray_1<int32_t> indices, ::Unity::Collections::NativeArray_1<T> input, ::Unity::Collections::NativeArray_1<T> output) noexcept;

  /// @brief Field indices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  /// @brief Field input, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> input;

  /// @brief Field output, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> output;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::ReorderJob_1, "UnityEngine.Rendering.Universal", "ReorderJob`1");
