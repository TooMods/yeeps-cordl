#pragma once
#include "System/Collections/Generic/zzzz__IAsyncEnumerator_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
/// @brief Convert operator to "::System::IAsyncDisposable"
template <typename T> constexpr System::Collections::Generic::IAsyncEnumerator_1<T>::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
template <typename T> constexpr ::System::IAsyncDisposable* System::Collections::Generic::IAsyncEnumerator_1<T>::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
template <typename T> inline ::System::Threading::Tasks::ValueTask_1<bool> System::Collections::Generic::IAsyncEnumerator_1<T>::MoveNextAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IAsyncEnumerator_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<bool>, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::IAsyncEnumerator_1<T>::get_Current() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IAsyncEnumerator_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
