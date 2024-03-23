#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__AsyncResult_1_def.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::IAsyncResult"
template <typename T> constexpr Unity::Services::Vivox::AsyncResult_1<T>::operator ::System::IAsyncResult*() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
template <typename T> constexpr ::System::IAsyncResult* Unity::Services::Vivox::AsyncResult_1<T>::i___System__IAsyncResult() noexcept {
  return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Services::Vivox::AsyncResult_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Services::Vivox::AsyncResult_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Threading::EventWaitHandle*& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitHandle;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitHandle;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__waitHandle(::System::Threading::EventWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Exception*& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
template <typename T> constexpr T const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__result(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::AsyncCallback*& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__Callback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callback_k__BackingField;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__Callback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Callback_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__Callback_k__BackingField(::System::AsyncCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Callback_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Object*& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__AsyncState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AsyncState_k__BackingField;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__AsyncState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AsyncState_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__AsyncState_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AsyncState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__CompletedSynchronously_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CompletedSynchronously_k__BackingField;
}
template <typename T> constexpr bool const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__CompletedSynchronously_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CompletedSynchronously_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__CompletedSynchronously_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CompletedSynchronously_k__BackingField = value;
}
template <typename T> constexpr bool& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__IsCompleted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
template <typename T> constexpr bool const& Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_get__IsCompleted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::AsyncResult_1<T>::__cordl_internal_set__IsCompleted_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsCompleted_k__BackingField = value;
}
template <typename T> inline ::Unity::Services::Vivox::AsyncResult_1<T>* Unity::Services::Vivox::AsyncResult_1<T>::New_ctor(::System::AsyncCallback* callback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::AsyncResult_1<T>*>(callback));
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::_ctor(::System::AsyncCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template <typename T> inline T Unity::Services::Vivox::AsyncResult_1<T>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "get_Result",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::set_Result(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "set_Result",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::AsyncCallback* Unity::Services::Vivox::AsyncResult_1<T>::get_Callback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "get_Callback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::AsyncCallback*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::set_Callback(::System::AsyncCallback* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "set_Callback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* Unity::Services::Vivox::AsyncResult_1<T>::get_AsyncState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(),
                                                                             "get_AsyncState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::set_AsyncState(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "set_AsyncState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Threading::WaitHandle* Unity::Services::Vivox::AsyncResult_1<T>::get_AsyncWaitHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(),
                                                                             "get_AsyncWaitHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Vivox::AsyncResult_1<T>::get_CompletedSynchronously() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(),
                                                                             "get_CompletedSynchronously", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::set_CompletedSynchronously(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "set_CompletedSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool Unity::Services::Vivox::AsyncResult_1<T>::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::set_IsCompleted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "set_IsCompleted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::SetComplete(T result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "SetComplete",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::SetComplete(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "SetComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::SetCompletedSynchronously(T result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "SetCompletedSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename T> inline void Unity::Services::Vivox::AsyncResult_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::AsyncResult_1<T>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::AsyncResult_1<T>::AsyncResult_1() {}
