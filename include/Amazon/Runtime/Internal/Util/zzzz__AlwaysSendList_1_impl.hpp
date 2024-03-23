#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__AlwaysSendList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline ::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>* Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>*>());
}
template <typename T> inline void Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>* Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>*>(collection));
}
template <typename T> inline void Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>::AlwaysSendList_1() {}
