#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperationAwaiter_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_1_def.hpp"
template <typename T> constexpr ::System::Action*& Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T> constexpr void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>* Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::_OnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>*>::get(),
                                  "<OnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass2_0<T>::__AsyncOperationAwaiter_1____c__DisplayClass2_0() {}
template <typename T> constexpr ::System::Action*& Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T> constexpr void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>* Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::_UnsafeOnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>*>::get(),
                                  "<UnsafeOnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::__AsyncOperationAwaiter_1____c__DisplayClass3_0<T>::__AsyncOperationAwaiter_1____c__DisplayClass3_0() {}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::operator ::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*() {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>"
template <typename T>
constexpr ::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*
Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::i___Unity__Services__Core__Internal__IAsyncOperationAwaiter_1_T_() {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperationAwaiter_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template <typename T>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::_ctor(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* asyncOperation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOperation);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>>::get(), "OnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>>::get(), "UnsafeOnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>>::get(), "get_IsCompleted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::GetResult() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>>::get(), "GetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Operation", ty: "::Unity::Services::Core::Internal::IAsyncOperation_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::AsyncOperationAwaiter_1(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* m_Operation) noexcept {
  this->m_Operation = m_Operation;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>::AsyncOperationAwaiter_1() {}
