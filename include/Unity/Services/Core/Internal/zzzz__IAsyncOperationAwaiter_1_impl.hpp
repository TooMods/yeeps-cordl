#pragma once
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperationAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename T> constexpr Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename T>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T> constexpr Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
template <typename T> inline bool Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::get_IsCompleted() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>::GetResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
