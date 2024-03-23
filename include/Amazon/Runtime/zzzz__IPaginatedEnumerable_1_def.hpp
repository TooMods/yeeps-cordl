#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPaginatedEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
// Forward declare root types
namespace Amazon::Runtime {
template <typename TResult> class IPaginatedEnumerable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::IPaginatedEnumerable_1);
// Type: Amazon.Runtime::IPaginatedEnumerable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: ::Amazon.Runtime::IPaginatedEnumerable`1<TResult>*
class CORDL_TYPE IPaginatedEnumerable_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<TResult>"
  constexpr operator ::System::Collections::Generic::IAsyncEnumerable_1<TResult>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<TResult>"
  constexpr ::System::Collections::Generic::IAsyncEnumerable_1<TResult>* i___System__Collections__Generic__IAsyncEnumerable_1_TResult_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPaginatedEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPaginatedEnumerable_1(IPaginatedEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPaginatedEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPaginatedEnumerable_1(IPaginatedEnumerable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::IPaginatedEnumerable_1, "Amazon.Runtime", "IPaginatedEnumerable`1");
