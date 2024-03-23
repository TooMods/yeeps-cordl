#pragma once
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_impl.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableAlloc_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
/// @param initialValue: T (default: nullptr)
/// @param checkEquality: bool (default: true)
/// @param equalityMethod: ::System::Func_3<T,T,bool>* (default: nullptr)
/// @param startInitialized: bool (default: false)
template <typename T>
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*
Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>::New_ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod, bool startInitialized) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*>(initialValue, checkEquality, equalityMethod, startInitialized));
}
/// @param initialValue: T (default: nullptr)
/// @param checkEquality: bool (default: true)
/// @param equalityMethod: ::System::Func_3<T,T,bool>* (default: nullptr)
/// @param startInitialized: bool (default: false)
template <typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>::_ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod, bool startInitialized) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<T, T, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialValue, checkEquality, equalityMethod, startInitialized);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>::BindableVariableAlloc_1() {}
