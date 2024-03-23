#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStream_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EnumerableEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EnumerableEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEnumerableEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamDecoder_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamEventReceivedArgs_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename TE>
constexpr ::System::Collections::Generic::Queue_1<T>*& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::__cordl_internal_get_events() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___events;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const&
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::__cordl_internal_get_events() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___events;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::__cordl_internal_set_events(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*>());
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE>
inline void
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::_GetEnumerator_b__0(::System::Object* sender,
                                                                                                                     ::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*>::get(), "<GetEnumerator>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, args);
}
// Ctor Parameters []
template <typename T, typename TE> constexpr ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>::__EnumerableEventStream_2____c__DisplayClass7_0() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T, typename TE>
constexpr Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T, typename TE>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T, typename TE>
constexpr ::System::Collections::IEnumerator* Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename TE> constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T, typename TE> constexpr int32_t& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename TE> constexpr int32_t const& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T, typename TE> constexpr T& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename TE> constexpr T const& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*&
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*> const&
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_set___4__this(
    ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*&
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>*> const&
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_set___8__1(
    ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2____c__DisplayClass7_0<T, TE>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get__buffer_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename T, typename TE>
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_get__buffer_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__cordl_internal_set__buffer_5__2(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*
Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>(__1__state));
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE> inline bool Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T, typename TE> inline T Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE>
inline ::System::Object* Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T, typename TE> constexpr ::Amazon::Runtime::EventStreams::Internal::__EnumerableEventStream_2___GetEnumerator_d__7<T, TE>::__EnumerableEventStream_2___GetEnumerator_d__7() {}
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::operator ::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::i___Amazon__Runtime__EventStreams__Internal__IEnumerableEventStream_2_T_TE_() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename TE> constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T, typename TE>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T, typename TE>
constexpr ::System::Collections::IEnumerable* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename T, typename TE> constexpr bool& Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::__cordl_internal_get__IsEnumerated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEnumerated_k__BackingField;
}
template <typename T, typename TE> constexpr bool const& Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::__cordl_internal_get__IsEnumerated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEnumerated_k__BackingField;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::__cordl_internal_set__IsEnumerated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsEnumerated_k__BackingField = value;
}
template <typename T, typename TE> inline bool Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::get_IsEnumerated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(),
                                               "get_IsEnumerated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::set_IsEnumerated(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(), "set_IsEnumerated",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>(stream));
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::New_ctor(::System::IO::Stream* stream, ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>(stream, eventStreamDecoder));
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::_ctor(::System::IO::Stream* stream,
                                                                                           ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, eventStreamDecoder);
}
template <typename T, typename TE> inline ::System::Collections::Generic::IEnumerator_1<T>* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(),
                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T, typename TE> inline ::System::Collections::IEnumerator* Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::StartProcessing() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T, typename TE> constexpr ::Amazon::Runtime::EventStreams::Internal::EnumerableEventStream_2<T, TE>::EnumerableEventStream_2() {}
