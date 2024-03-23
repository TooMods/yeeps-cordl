#pragma once
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredCancelableAsyncEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredCancelableAsyncEnumerable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template <typename T>
inline void System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::_ctor(::System::Collections::Generic::IAsyncEnumerator_1<T>* enumerator,
                                                                                                             bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IAsyncEnumerator_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerator, continueOnCapturedContext);
}
template <typename T>
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<bool> System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::MoveNextAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>>::get(),
                                  "MoveNextAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1<bool>, false>(this, ___internal_method);
}
template <typename T> inline T System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>>::get(),
                                  "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::DisposeAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>>::get(),
                                  "DisposeAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerator", ty: "::System::Collections::Generic::IAsyncEnumerator_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::__ConfiguredCancelableAsyncEnumerable_1__Enumerator(
    ::System::Collections::Generic::IAsyncEnumerator_1<T>* _enumerator, bool _continueOnCapturedContext) noexcept {
  this->_enumerator = _enumerator;
  this->_continueOnCapturedContext = _continueOnCapturedContext;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>::__ConfiguredCancelableAsyncEnumerable_1__Enumerator() {}
template <typename T>
inline void System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>::_ctor(::System::Collections::Generic::IAsyncEnumerable_1<T>* enumerable, bool continueOnCapturedContext,
                                                                                               ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IAsyncEnumerable_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable, continueOnCapturedContext, cancellationToken);
}
template <typename T>
inline ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>
System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>::ConfigureAwait(bool continueOnCapturedContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>>::get(), "ConfigureAwait",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>, false>(this, ___internal_method, continueOnCapturedContext);
}
template <typename T>
inline ::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T> System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>::GetAsyncEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>>::get(),
                                               "GetAsyncEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::__ConfiguredCancelableAsyncEnumerable_1__Enumerator<T>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>::ConfiguredCancelableAsyncEnumerable_1(::System::Collections::Generic::IAsyncEnumerable_1<T>* _enumerable,
                                                                                                                               ::System::Threading::CancellationToken _cancellationToken,
                                                                                                                               bool _continueOnCapturedContext) noexcept {
  this->_enumerable = _enumerable;
  this->_cancellationToken = _cancellationToken;
  this->_continueOnCapturedContext = _continueOnCapturedContext;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T>::ConfiguredCancelableAsyncEnumerable_1() {}
