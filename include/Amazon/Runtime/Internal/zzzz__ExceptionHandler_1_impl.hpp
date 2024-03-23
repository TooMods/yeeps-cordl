#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ExceptionHandler_1_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ExceptionHandler_1_def.hpp"
#include "Amazon/Runtime/zzzz__IExceptionHandler_1_def.hpp"
#include "Amazon/Runtime/zzzz__IExceptionHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Amazon::Runtime::Internal::ExceptionHandler_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::__ExceptionHandler_1___HandleAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::Internal::ExceptionHandler_1<T>* __4__this,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->executionContext = executionContext;
  this->exception = exception;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::__ExceptionHandler_1___HandleAsync_d__6<T>::__ExceptionHandler_1___HandleAsync_d__6() {}
/// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler_1<T>"
template <typename T> constexpr Amazon::Runtime::Internal::ExceptionHandler_1<T>::operator ::Amazon::Runtime::IExceptionHandler_1<T>*() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IExceptionHandler_1<T>"
template <typename T> constexpr ::Amazon::Runtime::IExceptionHandler_1<T>* Amazon::Runtime::Internal::ExceptionHandler_1<T>::i___Amazon__Runtime__IExceptionHandler_1_T_() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::IExceptionHandler"
template <typename T> constexpr Amazon::Runtime::Internal::ExceptionHandler_1<T>::operator ::Amazon::Runtime::IExceptionHandler*() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IExceptionHandler"
template <typename T> constexpr ::Amazon::Runtime::IExceptionHandler* Amazon::Runtime::Internal::ExceptionHandler_1<T>::i___Amazon__Runtime__IExceptionHandler() noexcept {
  return static_cast<::Amazon::Runtime::IExceptionHandler*>(static_cast<void*>(this));
}
template <typename T> constexpr ::Amazon::Runtime::Internal::Util::ILogger*& Amazon::Runtime::Internal::ExceptionHandler_1<T>::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& Amazon::Runtime::Internal::ExceptionHandler_1<T>::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
template <typename T> constexpr void Amazon::Runtime::Internal::ExceptionHandler_1<T>::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Amazon::Runtime::Internal::Util::ILogger* Amazon::Runtime::Internal::ExceptionHandler_1<T>::get_Logger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(),
                                                                             "get_Logger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::ILogger*, false>(this, ___internal_method);
}
template <typename T> inline ::Amazon::Runtime::Internal::ExceptionHandler_1<T>* Amazon::Runtime::Internal::ExceptionHandler_1<T>::New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>(logger));
}
template <typename T> inline void Amazon::Runtime::Internal::ExceptionHandler_1<T>::_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
template <typename T> inline bool Amazon::Runtime::Internal::ExceptionHandler_1<T>::Handle(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(), "Handle", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
template <typename T> inline bool Amazon::Runtime::Internal::ExceptionHandler_1<T>::HandleException(::Amazon::Runtime::IExecutionContext* executionContext, T exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::ExceptionHandler_1<T>::HandleAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(), "HandleAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::ExceptionHandler_1<T>::HandleExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, T exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ExceptionHandler_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::ExceptionHandler_1<T>::ExceptionHandler_1() {}
