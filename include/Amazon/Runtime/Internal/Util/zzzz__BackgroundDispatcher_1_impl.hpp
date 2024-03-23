#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__BackgroundDispatcher_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr bool& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
template <typename T> constexpr bool const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDisposed = value;
}
template <typename T> constexpr ::System::Action_1<T>*& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_action(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::Thread*& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_backgroundThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundThread;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_backgroundThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundThread;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_backgroundThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backgroundThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Threading::AutoResetEvent*& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_resetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetEvent;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::AutoResetEvent*> const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_resetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetEvent;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_resetEvent(::System::Threading::AutoResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resetEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_shouldStop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldStop;
}
template <typename T> constexpr bool const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get_shouldStop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldStop;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set_shouldStop(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldStop = value;
}
template <typename T> constexpr bool& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get__IsRunning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsRunning_k__BackingField;
}
template <typename T> constexpr bool const& Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_get__IsRunning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsRunning_k__BackingField;
}
template <typename T> constexpr void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::__cordl_internal_set__IsRunning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsRunning_k__BackingField = value;
}
template <typename T> inline bool Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::get_IsRunning() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "get_IsRunning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::set_IsRunning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "set_IsRunning",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>* Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::New_ctor(::System::Action_1<T>* action) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>(action));
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::_ctor(::System::Action_1<T>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Dispatch(T data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "Dispatch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Stop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "Stop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::Run() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "Run",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::HandleInvoked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>*>::get(), "HandleInvoked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<T>::BackgroundDispatcher_1() {}
