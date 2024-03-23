#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncIteratorMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredCancelableAsyncEnumerable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_impl.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__PaginatedResultKeyResponse_2_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginatedEnumerable_1_def.hpp"
#include "Amazon/Runtime/zzzz__IPaginator_1_def.hpp"
#include "Amazon/Runtime/zzzz__PaginatedResultKeyResponse_2_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::operator ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::i___System__Collections__Generic__IAsyncEnumerator_1_TResultKey_() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IAsyncDisposable"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::operator ::System::IAsyncDisposable*() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncDisposable"
template <typename TResponse, typename TResultKey>
constexpr ::System::IAsyncDisposable* Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::i___System__IAsyncDisposable() noexcept {
  return static_cast<::System::IAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>"
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::i___System__Threading__Tasks__Sources__IValueTaskSource_1_bool_() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource*
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::i___System__Runtime__CompilerServices__IAsyncStateMachine() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(this));
}
template <typename TResponse, typename TResultKey>
constexpr int32_t& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResponse, typename TResultKey>
constexpr int32_t const& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___t__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____t__builder;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___t__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____t__builder;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___t__builder(
    ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____t__builder = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool>&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___v__promiseOfValueOrEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____v__promiseOfValueOrEnd;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___v__promiseOfValueOrEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____v__promiseOfValueOrEnd;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___v__promiseOfValueOrEnd(
    ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____v__promiseOfValueOrEnd = value;
}
template <typename TResponse, typename TResultKey>
constexpr TResultKey& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResponse, typename TResultKey>
constexpr TResultKey const& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___2__current(TResultKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
constexpr bool& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___w__disposeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____w__disposeMode;
}
template <typename TResponse, typename TResultKey>
constexpr bool const& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___w__disposeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____w__disposeMode;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___w__disposeMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____w__disposeMode = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TResponse, typename TResultKey>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___4__this(
    ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::CancellationToken& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Threading::CancellationToken const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse>&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___7__wrap1(
    ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<TResponse> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Object*& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TResponse, typename TResultKey>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___7__wrap2(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
constexpr int32_t& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
template <typename TResponse, typename TResultKey>
constexpr int32_t const& Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___7__wrap3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Collections::Generic::IEnumerator_1<TResultKey>*&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
template <typename TResponse, typename TResultKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TResultKey>*> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___7__wrap4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap4;
}
template <typename TResponse, typename TResultKey>
constexpr void
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___7__wrap4(::System::Collections::Generic::IEnumerator_1<TResultKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool>&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___u__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__1;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___u__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__1;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___u__1(
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____u__1 = value;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___u__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__2;
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const&
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_get___u__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____u__2;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__cordl_internal_set___u__2(
    ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____u__2 = value;
}
template <typename TResponse, typename TResultKey>
inline ::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>(__1__state));
}
template <typename TResponse, typename TResultKey> inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TResponse, typename TResultKey> inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResponse, typename TResultKey>
inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
template <typename TResponse, typename TResultKey>
inline ::System::Threading::Tasks::ValueTask_1<bool>
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Collections_Generic_IAsyncEnumerator_TResultKey__MoveNextAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Collections.Generic.IAsyncEnumerator<TResultKey>.MoveNextAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<bool>, false>(this, ___internal_method);
}
template <typename TResponse, typename TResultKey>
inline TResultKey Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Collections_Generic_IAsyncEnumerator_TResultKey__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Collections.Generic.IAsyncEnumerator<TResultKey>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResultKey, false>(this, ___internal_method);
}
template <typename TResponse, typename TResultKey>
inline bool Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetResult(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, token);
}
template <typename TResponse, typename TResultKey>
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__GetStatus(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
template <typename TResponse, typename TResultKey>
inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_System_Boolean__OnCompleted(
    ::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
      "System.Threading.Tasks.Sources.IValueTaskSource<System.Boolean>.OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
template <typename TResponse, typename TResultKey>
inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
template <typename TResponse, typename TResultKey>
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus
Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.Threading.Tasks.Sources.IValueTaskSource.GetStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
template <typename TResponse, typename TResultKey>
inline void Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_Threading_Tasks_Sources_IValueTaskSource_OnCompleted(
    ::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
      "System.Threading.Tasks.Sources.IValueTaskSource.OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
template <typename TResponse, typename TResultKey>
inline ::System::Threading::Tasks::ValueTask Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::System_IAsyncDisposable_DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>*>::get(),
                                  "System.IAsyncDisposable.DisposeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResponse, typename TResultKey>
constexpr ::Amazon::Runtime::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3<TResponse, TResultKey>::__PaginatedResultKeyResponse_2___GetAsyncEnumerator_d__3() {}
/// @brief Convert operator to "::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::operator ::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>*() noexcept {
  return static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr ::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>*
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::i___Amazon__Runtime__IPaginatedEnumerable_1_TResultKey_() noexcept {
  return static_cast<::Amazon::Runtime::IPaginatedEnumerable_1<TResultKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::operator ::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>"
template <typename TResponse, typename TResultKey>
constexpr ::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>*
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::i___System__Collections__Generic__IAsyncEnumerable_1_TResultKey_() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<TResultKey>*>(static_cast<void*>(this));
}
template <typename TResponse, typename TResultKey>
constexpr ::Amazon::Runtime::IPaginator_1<TResponse>*& Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_get__paginator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paginator;
}
template <typename TResponse, typename TResultKey>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IPaginator_1<TResponse>*> const&
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_get__paginator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paginator;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_set__paginator(::Amazon::Runtime::IPaginator_1<TResponse>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paginator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
constexpr ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>*&
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_get__resultKeySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultKeySelector;
}
template <typename TResponse, typename TResultKey>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>*> const&
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_get__resultKeySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultKeySelector;
}
template <typename TResponse, typename TResultKey>
constexpr void Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::__cordl_internal_set__resultKeySelector(
    ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultKeySelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResponse, typename TResultKey>
inline ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::New_ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator,
                                                                               ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* resultKeySelector) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*>(paginator, resultKeySelector));
}
template <typename TResponse, typename TResultKey>
inline void Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::_ctor(::Amazon::Runtime::IPaginator_1<TResponse>* paginator,
                                                                                        ::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>* resultKeySelector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IPaginator_1<TResponse>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResponse, ::System::Collections::Generic::IEnumerable_1<TResultKey>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paginator, resultKeySelector);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template <typename TResponse, typename TResultKey>
inline ::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*
Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::GetAsyncEnumerator(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>*>::get(), "GetAsyncEnumerator",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IAsyncEnumerator_1<TResultKey>*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
template <typename TResponse, typename TResultKey> constexpr ::Amazon::Runtime::PaginatedResultKeyResponse_2<TResponse, TResultKey>::PaginatedResultKeyResponse_2() {}
