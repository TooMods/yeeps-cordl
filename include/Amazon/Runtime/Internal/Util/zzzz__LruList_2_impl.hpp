#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruList_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruListItem_2_def.hpp"
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_get__Head_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Head_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const&
Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_get__Head_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Head_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_set__Head_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Head_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_get__Tail_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tail_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const&
Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_get__Tail_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tail_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::__cordl_internal_set__Tail_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Tail_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::get_Head() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(),
                                                                             "get_Head", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::set_Head(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(), "set_Head", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::get_Tail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(),
                                                                             "get_Tail", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::set_Tail(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(), "set_Tail", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::Add(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::Remove(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::Touch(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(), "Touch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline TKey Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::EvictOldest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(),
                                                                             "EvictOldest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>::LruList_2() {}
