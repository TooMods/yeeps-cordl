#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationStatus_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_1_def.hpp"
template <typename T> constexpr ::System::Action*& Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
template <typename T> constexpr void Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>* Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::_OnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>*>::get(),
                                  "<OnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::__AsyncOperationBase_1____c__DisplayClass19_0<T>::__AsyncOperationBase_1____c__DisplayClass19_0() {}
/// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationBase_1<T>::operator ::Unity::Services::Core::Internal::IAsyncOperation_1<T>*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperation_1<T>"
template <typename T>
constexpr ::Unity::Services::Core::Internal::IAsyncOperation_1<T>* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::i___Unity__Services__Core__Internal__IAsyncOperation_1_T_() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationBase_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T> constexpr Unity::Services::Core::Internal::AsyncOperationBase_1<T>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template <typename T>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
template <typename T>
constexpr ::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*& Unity::Services::Core::Internal::AsyncOperationBase_1<T>::__cordl_internal_get_m_CompletedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletedCallback;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*> const&
Unity::Services::Core::Internal::AsyncOperationBase_1<T>::__cordl_internal_get_m_CompletedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompletedCallback;
}
template <typename T>
constexpr void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::__cordl_internal_set_m_CompletedCallback(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompletedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_keepWaiting() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_IsCompleted() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_IsDone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(),
                                                                             "get_IsDone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationStatus Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_Status() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationStatus, false>(this, ___internal_method);
}
template <typename T> inline ::System::Exception* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_Exception() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::AsyncOperationBase_1<T>::get_Result() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Core::Internal::AsyncOperationBase_1<T>::GetResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::GetAwaiter() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::add_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), "add_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::remove_Completed(::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), "remove_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::DidComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(),
                                                                             "DidComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::OnCompleted(::System::Action* continuation) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template <typename T> inline ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>* Unity::Services::Core::Internal::AsyncOperationBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::AsyncOperationBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::AsyncOperationBase_1<T>::AsyncOperationBase_1() {}
