#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperation_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_1_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperation_1<T>::operator ::Unity::Services::Core::Internal::IAsyncOperation_1<T>*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
template <typename T>
constexpr ::Unity::Services::Core::Internal::IAsyncOperation_1<T>* Unity::Services::Core::Internal::AsyncOperation_1<T>::i___Unity__Services__Core__Internal__IAsyncOperation_1_T_() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperation_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Services::Core::Internal::AsyncOperation_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename T> constexpr bool& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__IsDone_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDone_k__BackingField;
}
template <typename T> constexpr bool const& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__IsDone_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDone_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_set__IsDone_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDone_k__BackingField = value;
}
template <typename T> constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
template <typename T>
constexpr ::Unity::Services::Core::Internal::AsyncOperationStatus const& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_set__Status_k__BackingField(::Unity::Services::Core::Internal::AsyncOperationStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Status_k__BackingField = value;
}
template <typename T> constexpr ::System::Exception*& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Exception_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exception_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Exception_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exception_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_set__Exception_k__BackingField(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Exception_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Result_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
template <typename T> constexpr T const& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get__Result_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_set__Result_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Result_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*& Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get_m_CompletedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletedCallback;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*> const&
Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_get_m_CompletedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletedCallback;
}
template <typename T>
constexpr void Unity::Services::Core::Internal::AsyncOperation_1<T>::__cordl_internal_set_m_CompletedCallback(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompletedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperation_1<T>::get_IsDone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "get_IsDone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::set_IsDone(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "set_IsDone",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperation_1<T>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "get_Status", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::set_Status(::Unity::Services::Core::Internal::AsyncOperationStatus value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "set_Status", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::AsyncOperationStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "add_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "remove_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Exception* Unity::Services::Core::Internal::AsyncOperation_1<T>::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "get_Exception", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::set_Exception(::System::Exception* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "set_Exception",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T Unity::Services::Core::Internal::AsyncOperation_1<T>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "get_Result", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::set_Result(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "set_Result",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::SetInProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "SetInProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::Succeed(T result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "Succeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::Fail(::System::Exception* reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(), "Fail",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             "Cancel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperation_1<T>::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                               "System.Collections.IEnumerator.MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Services::Core::Internal::AsyncOperation_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperation_1<T>* Unity::Services::Core::Internal::AsyncOperation_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperation_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperation_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::AsyncOperation_1<T>::AsyncOperation_1() {}
