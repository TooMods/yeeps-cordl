#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteDictionary_3_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Unity/Services/Vivox/zzzz__KeyEventArg_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ValueEventArg_2_def.hpp"
/// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyDictionary_2<TK,TI>"
template <typename TK, typename TI, typename T> constexpr Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::operator ::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IReadOnlyDictionary_2<TK,TI>"
template <typename TK, typename TI, typename T>
constexpr ::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::i___Unity__Services__Vivox__IReadOnlyDictionary_2_TK_TI_() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, TI>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TI>"
template <typename TK, typename TI, typename T> constexpr Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::operator ::System::Collections::Generic::IEnumerable_1<TI>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TI>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TI>"
template <typename TK, typename TI, typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<TI>* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::i___System__Collections__Generic__IEnumerable_1_TI_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TI>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TK, typename TI, typename T> constexpr Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TK, typename TI, typename T>
constexpr ::System::Collections::IEnumerable* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TK, typename TI, typename T>
constexpr ::System::Collections::Generic::Dictionary_2<TK, TI>*& Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TK, typename TI, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TK, TI>*> const&
Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename TK, typename TI, typename T>
constexpr void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<TK, TI>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TI, typename T>
constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*& Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_AfterKeyAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterKeyAdded;
}
template <typename TK, typename TI, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*> const&
Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_AfterKeyAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterKeyAdded;
}
template <typename TK, typename TI, typename T>
constexpr void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_set_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AfterKeyAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TI, typename T>
constexpr ::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*& Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_AfterValueUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterValueUpdated;
}
template <typename TK, typename TI, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*> const&
Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_AfterValueUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterValueUpdated;
}
template <typename TK, typename TI, typename T>
constexpr void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_set_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AfterValueUpdated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TI, typename T>
constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*& Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_BeforeKeyRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BeforeKeyRemoved;
}
template <typename TK, typename TI, typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*> const&
Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_get_BeforeKeyRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BeforeKeyRemoved;
}
template <typename TK, typename TI, typename T>
constexpr void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::__cordl_internal_set_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BeforeKeyRemoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TK, typename TI, typename T> inline TI Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::get_Item(TK key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<TI, false>(this, ___internal_method, key);
}
template <typename TK, typename TI, typename T> inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::set_Item(TK key, TI value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TI>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::Value_PropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "Value_PropertyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyChangedEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
template <typename TK, typename TI, typename T> inline ::System::Collections::Generic::ICollection_1<TK>* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                                                             "get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TK>*, false>(this, ___internal_method);
}
template <typename TK, typename TI, typename T> inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TK, typename TI, typename T> inline bool Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::ContainsKey(TK key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "ContainsKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TK, typename TI, typename T> inline bool Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::Remove(TK key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "add_AfterKeyAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "remove_AfterKeyAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::add_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "add_AfterValueUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::remove_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "remove_AfterValueUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, TI>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "add_BeforeKeyRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T>
inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "remove_BeforeKeyRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename TI, typename T> inline int32_t Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TK, typename TI, typename T> inline T Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::At(TK key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "At",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TK>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, key);
}
template <typename TK, typename TI, typename T> inline bool Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::ContainsValue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(), "ContainsValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TK, typename TI, typename T> inline ::System::Collections::Generic::IEnumerator_1<TI>* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TI>*, false>(this, ___internal_method);
}
template <typename TK, typename TI, typename T> inline ::System::Collections::IEnumerator* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TK, typename TI, typename T> inline ::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>* Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>());
}
template <typename TK, typename TI, typename T> inline void Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TK, typename TI, typename T> constexpr ::Unity::Services::Vivox::ReadWriteDictionary_3<TK, TI, T>::ReadWriteDictionary_3() {}
