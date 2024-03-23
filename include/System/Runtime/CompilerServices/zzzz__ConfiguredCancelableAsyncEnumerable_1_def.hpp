#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredCancelableAsyncEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerator_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
template <typename T> struct __ConfiguredCancelableAsyncEnumerable_1__Enumerator;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename T> struct ConfiguredCancelableAsyncEnumerable_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> struct __ConfiguredCancelableAsyncEnumerable_1__Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1);
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 16, native_size: 25, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ConfiguredCancelableAsyncEnumerable`1::Enumerator<T>
struct CORDL_TYPE __ConfiguredCancelableAsyncEnumerable_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  /// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable DisposeAsync();

  /// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<bool> MoveNextAsync();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IAsyncEnumerator_1<T>* enumerator, bool continueOnCapturedContext);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConfiguredCancelableAsyncEnumerable_1__Enumerator();

  // Ctor Parameters [CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IAsyncEnumerator_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr __ConfiguredCancelableAsyncEnumerable_1__Enumerator(::System::Collections::Generic::IAsyncEnumerator_1<T>* _enumerator, bool _continueOnCapturedContext) noexcept;

  /// @brief Field _enumerator, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IAsyncEnumerator_1<T>* _enumerator;

  /// @brief Field _continueOnCapturedContext, offset: 0x8, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredCancelableAsyncEnumerable`1
// SizeInfo { instance_size: 24, native_size: 33, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::ConfiguredCancelableAsyncEnumerable`1<T>
struct CORDL_TYPE ConfiguredCancelableAsyncEnumerable_1 {
public:
  // Declarations
  using Enumerator = ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>;

  /// @brief Method ConfigureAwait, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T> ConfigureAwait(bool continueOnCapturedContext);

  /// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T> GetAsyncEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IAsyncEnumerable_1<T>* enumerable, bool continueOnCapturedContext, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredCancelableAsyncEnumerable_1();

  // Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IAsyncEnumerable_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
  constexpr ConfiguredCancelableAsyncEnumerable_1(::System::Collections::Generic::IAsyncEnumerable_1<T>* _enumerable, ::System::Threading::CancellationToken _cancellationToken,
                                                  bool _continueOnCapturedContext) noexcept;

  /// @brief Field _enumerable, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IAsyncEnumerable_1<T>* _enumerable;

  /// @brief Field _cancellationToken, offset: 0x8, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken;

  /// @brief Field _continueOnCapturedContext, offset: 0x10, size: 0x1, def value: None
  bool _continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1, "System.Runtime.CompilerServices", "ConfiguredCancelableAsyncEnumerable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator, "System.Runtime.CompilerServices",
                                      "ConfiguredCancelableAsyncEnumerable`1/Enumerator");
