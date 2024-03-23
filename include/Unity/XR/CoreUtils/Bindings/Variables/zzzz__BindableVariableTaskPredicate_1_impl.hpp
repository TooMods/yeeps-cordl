#pragma once
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableTaskPredicate_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>::get(),
                                               "get_Task", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::_ctor(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* bindableVariable,
                                                                                                 ::System::Func_2<T, bool>* awaitPredicate, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindableVariable, awaitPredicate, cancellationToken);
}
template <typename T> inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::Cancelled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>::get(),
                                               "Cancelled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::Await(T state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>>::get(), "Await",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters [CppParam { name: "m_Tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_AwaitPredicate", ty:
// "::System::Func_2<T,bool>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_BindableVariable", ty: "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*",
// modifiers: "", def_value: Some("nullptr") }]
template <typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::BindableVariableTaskPredicate_1(
    ::System::Threading::Tasks::TaskCompletionSource_1<T>* m_Tcs, ::System::Func_2<T, bool>* m_AwaitPredicate,
    ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* m_BindableVariable) noexcept {
  this->m_Tcs = m_Tcs;
  this->m_AwaitPredicate = m_AwaitPredicate;
  this->m_BindableVariable = m_BindableVariable;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1<T>::BindableVariableTaskPredicate_1() {}
