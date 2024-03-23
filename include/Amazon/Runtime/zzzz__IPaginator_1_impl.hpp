#pragma once
#include "Amazon/Runtime/zzzz__IPaginator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename TResponse>
inline ::System::Collections::Generic::IAsyncEnumerable_1<TResponse>* Amazon::Runtime::IPaginator_1<TResponse>::PaginateAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IPaginator_1<TResponse>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IAsyncEnumerable_1<TResponse>*, false>(this, ___internal_method, cancellationToken);
}
