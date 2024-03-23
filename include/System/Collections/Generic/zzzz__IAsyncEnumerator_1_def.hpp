#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncEnumerator_1)
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System {
class IAsyncDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IAsyncEnumerator_1);
// Type: System.Collections.Generic::IAsyncEnumerator`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Generic::IAsyncEnumerator`1<T>*
class CORDL_TYPE IAsyncEnumerator_1 {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  /// @brief Convert operator to "::System::IAsyncDisposable"
  constexpr operator ::System::IAsyncDisposable*() noexcept;

  /// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::ValueTask_1<bool> MoveNextAsync();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Current();

  /// @brief Convert to "::System::IAsyncDisposable"
  constexpr ::System::IAsyncDisposable* i___System__IAsyncDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncEnumerator_1(IAsyncEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncEnumerator_1(IAsyncEnumerator_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IAsyncEnumerator_1, "System.Collections.Generic", "IAsyncEnumerator`1");
