#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QuickList_1_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QuickList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get_numberOfItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfItems;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get_numberOfItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfItems;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set_numberOfItems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberOfItems = value;
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___3__numberOfItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__numberOfItems;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___3__numberOfItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__numberOfItems;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set___3__numberOfItems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__numberOfItems = value;
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*> const&
Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get__boundedNumberOfItems_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedNumberOfItems_5__2;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get__boundedNumberOfItems_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundedNumberOfItems_5__2;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set__boundedNumberOfItems_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundedNumberOfItems_5__2 = value;
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>(__1__state));
}
template <typename T> inline void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DocumentModel::__QuickList_1___RemoveFromHead_d__6<T>::__QuickList_1___RemoveFromHead_d__6() {}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_get_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___List;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_get_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___List;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_set_List(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___List)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_get_StartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_get_StartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
template <typename T> constexpr void Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::__cordl_internal_set_StartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartIndex = value;
}
template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>* Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* items) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>(items));
}
template <typename T> inline void Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* items) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template <typename T> inline void Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::Add(::System::Collections::Generic::IEnumerable_1<T>* items) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template <typename T> inline int32_t Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::RemoveFromHead(int32_t numberOfItems) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>::get(), "RemoveFromHead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method, numberOfItems);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::GetItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>*>::get(),
                                                                             "GetItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::DocumentModel::QuickList_1<T>::QuickList_1() {}
