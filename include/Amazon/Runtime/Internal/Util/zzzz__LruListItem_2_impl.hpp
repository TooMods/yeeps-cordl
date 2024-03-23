#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruListItem_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
template <typename TKey, typename TValue> constexpr TValue& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename TKey, typename TValue> constexpr TValue const& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_set__Value_k__BackingField(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr TKey& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TKey, typename TValue> constexpr TKey const& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_set__Key_k__BackingField(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::DateTime& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__LastTouchedTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTouchedTimestamp_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::System::DateTime const& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__LastTouchedTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTouchedTimestamp_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_set__LastTouchedTimestamp_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastTouchedTimestamp_k__BackingField = value;
}
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Next_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const&
Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Next_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_set__Next_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Next_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*& Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Previous_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Previous_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*> const&
Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_get__Previous_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Previous_k__BackingField;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::__cordl_internal_set__Previous_k__BackingField(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Previous_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::set_Value(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "set_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline TKey Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "get_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::set_Key(TKey value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "set_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::DateTime Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::get_LastTouchedTimestamp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(),
                                               "get_LastTouchedTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::set_LastTouchedTimestamp(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "set_LastTouchedTimestamp",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::get_Next() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "get_Next",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::set_Next(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::get_Previous() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "get_Previous",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::set_Previous(::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), "set_Previous", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::New_ctor(TKey key, TValue value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>(key, value));
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>::LruListItem_2() {}
