#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPaginator_1)
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::Runtime {
template <typename TResponse> class IPaginator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::IPaginator_1);
// Type: Amazon.Runtime::IPaginator`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// cpp template
template <typename TResponse>
// Is value type: false
// CS Name: ::Amazon.Runtime::IPaginator`1<TResponse>*
class CORDL_TYPE IPaginator_1 {
public:
  // Declarations
  /// @brief Method PaginateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IAsyncEnumerable_1<TResponse>* PaginateAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IPaginator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPaginator_1(IPaginator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPaginator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPaginator_1(IPaginator_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::IPaginator_1, "Amazon.Runtime", "IPaginator`1");
