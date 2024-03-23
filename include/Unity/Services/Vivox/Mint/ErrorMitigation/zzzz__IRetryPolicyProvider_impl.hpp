#pragma once
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicyProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicy_1_def.hpp"
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider::ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, operation);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider::ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicyProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, operation);
}
