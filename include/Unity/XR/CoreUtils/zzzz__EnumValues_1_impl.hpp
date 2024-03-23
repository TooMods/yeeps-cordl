#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__EnumValues_1_def.hpp"
template <typename T> inline void Unity::XR::CoreUtils::EnumValues_1<T>::setStaticF_Values(::ArrayW<T, ::Array<T>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<T, ::Array<T>*>, "Values", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::EnumValues_1<T>*>::get>(
      std::forward<::ArrayW<T, ::Array<T>*>>(value));
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Unity::XR::CoreUtils::EnumValues_1<T>::getStaticF_Values() {
  return ::cordl_internals::getStaticField<::ArrayW<T, ::Array<T>*>, "Values", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::EnumValues_1<T>*>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::EnumValues_1<T>::EnumValues_1() {}
