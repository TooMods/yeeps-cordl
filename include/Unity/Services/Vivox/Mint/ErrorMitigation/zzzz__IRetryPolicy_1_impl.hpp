#pragma once
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicy_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicyConfig_def.hpp"
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::WithJitterMagnitude(float_t magnitude) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, magnitude);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::WithDelayScale(float_t scale) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, scale);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::WithMaxDelayTime(float_t time) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, time);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::WithRetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* shouldRetry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, shouldRetry);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::UptoMaximumRetries(uint32_t amount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, amount);
}
template <typename T>
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::HandleException() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method);
}
template <typename T>
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::HandleException(::System::Func_2<TException, bool>* condition) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, condition);
}
/// @param retryPolicyConfig: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* (default: nullptr)
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>::RunAsync(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, retryPolicyConfig);
}
