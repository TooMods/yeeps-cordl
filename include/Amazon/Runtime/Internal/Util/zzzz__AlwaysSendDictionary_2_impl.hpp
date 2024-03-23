#pragma once
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__AlwaysSendDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template <typename TKey, typename TValue>
inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>* Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*
Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue>
inline void Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue>
inline ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*
Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline void Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Amazon::Runtime::Internal::Util::AlwaysSendDictionary_2<TKey, TValue>::AlwaysSendDictionary_2() {}
