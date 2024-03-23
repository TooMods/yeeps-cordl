#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskAsyncEnumerableExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredCancelableAsyncEnumerable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template <typename T>
inline ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>
System::Threading::Tasks::TaskAsyncEnumerableExtensions::WithCancellation(::System::Collections::Generic::IAsyncEnumerable_1<T>* source, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskAsyncEnumerableExtensions*>::get(), "WithCancellation",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IAsyncEnumerable_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>, false>(nullptr, ___internal_method, source, cancellationToken);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskAsyncEnumerableExtensions::TaskAsyncEnumerableExtensions() {}
