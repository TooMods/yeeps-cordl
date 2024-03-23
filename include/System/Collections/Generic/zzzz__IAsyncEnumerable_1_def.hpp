#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerator_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IAsyncEnumerable_1);
// Type: System.Collections.Generic::IAsyncEnumerable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Generic::IAsyncEnumerable`1<T>*
class CORDL_TYPE IAsyncEnumerable_1 {
public:
  // Declarations
  /// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncEnumerable_1(IAsyncEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncEnumerable_1(IAsyncEnumerable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IAsyncEnumerable_1, "System.Collections.Generic", "IAsyncEnumerable`1");
