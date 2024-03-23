#pragma once
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__AutoConstructedDictionary_2_def.hpp"
template <typename K, typename V> inline ::Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>* Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>*>());
}
template <typename K, typename V> inline void Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::Amazon::Runtime::Internal::AutoConstructedDictionary_2<K, V>::AutoConstructedDictionary_2() {}
