#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Linq/zzzz__Buffer_1_impl.hpp"
#include "System/Linq/zzzz__Enumerable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Enumerable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__Enumerable_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable__Iterator_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable__Iterator_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable__Iterator_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_threadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_threadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_set_threadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threadId = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__cordl_internal_set_current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__Iterator_1<TSource>*>());
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable__Iterator_1<TSource>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__Iterator_1<TSource>::MoveNext() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__Iterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__Iterator_1<TSource>::__Enumerable__Iterator_1() {}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*
System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>(source, predicate));
}
template <typename TSource>
inline void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__Enumerable__WhereEnumerableIterator_1() {}
template <typename TSource> constexpr ::ArrayW<TSource, ::Array<TSource>*>& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr ::ArrayW<TSource, ::Array<TSource>*> const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_set_source(::ArrayW<TSource, ::Array<TSource>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::New_ctor(::ArrayW<TSource, ::Array<TSource>*> source,
                                                                                                                                        ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>(source, predicate));
}
template <typename TSource> inline void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TSource, ::Array<TSource>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__Enumerable__WhereArrayIterator_1() {}
template <typename TSource> constexpr ::System::Collections::Generic::List_1<TSource>*& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TSource>*> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_set_source(::System::Collections::Generic::List_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource>& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource>
constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__cordl_internal_set_enumerator(::System::Collections::Generic::__List_1__Enumerator<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereListIterator_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::New_ctor(::System::Collections::Generic::List_1<TSource>* source,
                                                                                                                                      ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>(source, predicate));
}
template <typename TSource>
inline void System::Linq::__Enumerable__WhereListIterator_1<TSource>::_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereListIterator_1<TSource>::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereListIterator_1<TSource>::__Enumerable__WhereListIterator_1() {}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                        ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                 ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Clone() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::MoveNext() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__Enumerable__WhereSelectEnumerableIterator_2() {}
template <typename TSource, typename TResult> constexpr ::ArrayW<TSource, ::Array<TSource>*>& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::ArrayW<TSource, ::Array<TSource>*> const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_set_source(::ArrayW<TSource, ::Array<TSource>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const&
System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const&
System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::New_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate,
                                                                                   ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate,
                                                                                            ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TSource, ::Array<TSource>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__Enumerable__WhereSelectArrayIterator_2() {}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::List_1<TSource>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TSource>*> const&
System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_set_source(::System::Collections::Generic::List_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const&
System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource>& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__cordl_internal_set_enumerator(::System::Collections::Generic::__List_1__Enumerator<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::New_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                  ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                           ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__Enumerable__WhereSelectListIterator_2() {}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_get_predicate1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_get_predicate1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate1;
}
template <typename TSource> constexpr void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_set_predicate1(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_get_predicate2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_get_predicate2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__cordl_internal_set_predicate2(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>* System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>());
}
template <typename TSource> inline void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::_CombinePredicates_b__0(TSource x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>::get(), "<CombinePredicates>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__Enumerable____c__DisplayClass6_0_1() {}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::System::Func_2<TMiddle, TResult>*& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_get_selector2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector2;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TMiddle, TResult>*> const&
System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_get_selector2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector2;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_set_selector2(::System::Func_2<TMiddle, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::System::Func_2<TSource, TMiddle>*& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_get_selector1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector1;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TMiddle>*> const&
System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_get_selector1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector1;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__cordl_internal_set_selector1(::System::Func_2<TSource, TMiddle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TMiddle, typename TResult>
inline ::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>* System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>());
}
template <typename TSource, typename TMiddle, typename TResult> inline void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TMiddle, typename TResult> inline TResult System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::_CombineSelectors_b__0(TSource x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>::get(), "<CombineSelectors>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename TSource, typename TMiddle, typename TResult> constexpr ::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__Enumerable____c__DisplayClass7_0_3() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TSource, typename TResult>
constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>*
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource, typename TResult>
constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TSource, typename TResult>
constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource, typename TResult> constexpr ::System::IDisposable* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource, typename TResult>
constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource, typename TResult> constexpr TResult& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource, typename TResult> constexpr TResult const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr void
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set_selector(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___3__selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___3__selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__selector;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___3__selector(
    ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TResult>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>(__1__state));
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "<>m__Finally2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline TResult System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline ::System::Object* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>*
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__Enumerable___SelectManyIterator_d__17_2() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__count = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__Enumerable___TakeIterator_d__25_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__Enumerable___ConcatIterator_d__59_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__Enumerable___DistinctIterator_d__68_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__Enumerable___UnionIterator_d__71_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__Enumerable___IntersectIterator_d__74_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__Enumerable___ExceptIterator_d__77_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Buffer_1<TSource>& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get__buffer_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename TSource> constexpr ::System::Linq::Buffer_1<TSource> const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get__buffer_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set__buffer_5__2(::System::Linq::Buffer_1<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer_5__2 = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
template <typename TSource> inline ::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__Enumerable___ReverseIterator_d__79_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TResult> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TResult> constexpr ::System::IDisposable* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TResult> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TResult> constexpr TResult& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr TResult const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set_source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set___3__source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerator*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline ::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>(__1__state));
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__Enumerable___OfTypeIterator_d__97_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TResult> constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TResult> constexpr ::System::IDisposable* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TResult> constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TResult> constexpr TResult& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr TResult const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set_source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set___3__source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerator*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline ::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>(__1__state));
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__Enumerable___CastIterator_d__99_1() {}
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)(int32_t)>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d22334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d229b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d229bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_Generic_IEnumerator_System_Int32__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerator_System_Int32__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d22a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d22a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d22a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d22ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d22b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* System::Linq::__Enumerable___RangeIterator_d__115::i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Linq::__Enumerable___RangeIterator_d__115::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* System::Linq::__Enumerable___RangeIterator_d__115::i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Linq::__Enumerable___RangeIterator_d__115::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Linq::__Enumerable___RangeIterator_d__115::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set___2__current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___3__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__start;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___3__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__start;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set___3__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__start = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__count;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__count = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
inline ::System::Linq::__Enumerable___RangeIterator_d__115* System::Linq::__Enumerable___RangeIterator_d__115::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::__Enumerable___RangeIterator_d__115*>(__1__state));
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Linq::__Enumerable___RangeIterator_d__115::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerator_System_Int32__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::__Enumerable___RangeIterator_d__115::__Enumerable___RangeIterator_d__115() {}
//  Writing Method size for method: ::System::Linq::Enumerable.Range
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (*)(int32_t, int32_t)>(&::System::Linq::Enumerable::Range)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d22260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Range", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.RangeIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (*)(int32_t, int32_t)>(
    &::System::Linq::Enumerable::RangeIterator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d222ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "RangeIterator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Min)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2d22368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Max)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2d22690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Where(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                               ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Where",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Select(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Select",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource>
inline ::System::Func_2<TSource, bool>* System::Linq::Enumerable::CombinePredicates(::System::Func_2<TSource, bool>* predicate1, ::System::Func_2<TSource, bool>* predicate2) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CombinePredicates",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<TSource, bool>*, false>(nullptr, ___internal_method, predicate1, predicate2);
}
template <typename TSource, typename TMiddle, typename TResult>
inline ::System::Func_2<TSource, TResult>* System::Linq::Enumerable::CombineSelectors(::System::Func_2<TSource, TMiddle>* selector1, ::System::Func_2<TMiddle, TResult>* selector2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CombineSelectors",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMiddle>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TMiddle>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TMiddle, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMiddle>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<TSource, TResult>*, false>(nullptr, ___internal_method, selector1, selector2);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::SelectMany(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                    ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SelectMany",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>*
System::Linq::Enumerable::SelectManyIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                             ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SelectManyIterator",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Take(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Take",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::TakeIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "TakeIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::OrderBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OrderBy",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::OrderBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                                        ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OrderBy",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector, comparer);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::ThenBy(::System::Linq::IOrderedEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ThenBy",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IOrderedEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource, typename TKey>
inline ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TSource>*>* System::Linq::Enumerable::GroupBy(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                                                     ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "GroupBy",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TSource>*>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Concat(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Concat",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ConcatIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ConcatIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Distinct(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Distinct",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Distinct(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                  ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Distinct",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::DistinctIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                          ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "DistinctIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Union(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                               ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Union",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::UnionIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                       ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                       ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "UnionIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Intersect(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                   ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Intersect",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::IntersectIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "IntersectIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Except(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Except",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ExceptIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                        ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ExceptIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Reverse(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Reverse",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ReverseIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ReverseIterator",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource>
inline bool System::Linq::Enumerable::SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SequenceEqual",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline bool System::Linq::Enumerable::SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                    ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SequenceEqual",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource> inline ::ArrayW<TSource, ::Array<TSource>*> System::Linq::Enumerable::ToArray(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToArray",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TSource, ::Array<TSource>*>, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline ::System::Collections::Generic::List_1<TSource>* System::Linq::Enumerable::ToList(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToList",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>* System::Linq::Enumerable::ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                            ::System::Func_2<TSource, TKey>* keySelector,
                                                                                                            ::System::Func_2<TSource, TElement>* elementSelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToDictionary",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TElement>*, false>(nullptr, ___internal_method, source, keySelector, elementSelector);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>*
System::Linq::Enumerable::ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                       ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToDictionary",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TElement>*, false>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::OfType(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OfType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::OfTypeIterator(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OfTypeIterator",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Cast(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Cast",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::CastIterator(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CastIterator",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::First(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "First",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::First(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "First",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "FirstOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "FirstOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Last(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Last",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "LastOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "LastOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Single(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Single",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Single(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Single",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SingleOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SingleOrDefault",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::ElementAt(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ElementAt",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, index);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* System::Linq::Enumerable::Range(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Range", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(nullptr, ___internal_method, start, count);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* System::Linq::Enumerable::RangeIterator(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "RangeIterator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(nullptr, ___internal_method, start, count);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Empty() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Empty",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method);
}
template <typename TSource> inline bool System::Linq::Enumerable::Any(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Any",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline bool System::Linq::Enumerable::Any(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Any",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline bool System::Linq::Enumerable::All(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "All",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Count(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Count",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Count(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Count",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline bool System::Linq::Enumerable::Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Contains",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value);
}
template <typename TSource>
inline bool System::Linq::Enumerable::Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Contains",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value, comparer);
}
inline int32_t System::Linq::Enumerable::Min(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
inline int32_t System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::Linq::Enumerable::Enumerable() {}
