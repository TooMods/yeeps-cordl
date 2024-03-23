#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AutoConstructedList_1_def.hpp"
template <typename T> inline ::Amazon::Runtime::Internal::AutoConstructedList_1<T>* Amazon::Runtime::Internal::AutoConstructedList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AutoConstructedList_1<T>*>());
}
template <typename T> inline void Amazon::Runtime::Internal::AutoConstructedList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AutoConstructedList_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::AutoConstructedList_1<T>::AutoConstructedList_1() {}
