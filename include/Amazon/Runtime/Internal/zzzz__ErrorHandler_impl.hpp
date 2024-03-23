#pragma once
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorHandler_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ErrorHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IExceptionHandler_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::ErrorHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::__ErrorHandler___InvokeAsync_d__5_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::Internal::ErrorHandler* __4__this,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Object* __7__wrap1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<T> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->executionContext = executionContext;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::Internal::__ErrorHandler___InvokeAsync_d__5_1<T>::__ErrorHandler___InvokeAsync_d__5_1() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::*)()>(
    &::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x23dde20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23de5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::ErrorHandler*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty:
// "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::__ErrorHandler___ProcessExceptionAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::Internal::ErrorHandler* __4__this, ::System::Exception* exception,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->exception = exception;
  this->executionContext = executionContext;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__ErrorHandler___ProcessExceptionAsync_d__8::__ErrorHandler___ProcessExceptionAsync_d__8() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler.get_ExceptionHandlers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* (
    ::Amazon::Runtime::Internal::ErrorHandler::*)()>(&::Amazon::Runtime::Internal::ErrorHandler::get_ExceptionHandlers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(),
                                                                               "get_ExceptionHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ErrorHandler::*)(::Amazon::Runtime::Internal::Util::ILogger*)>(
    &::Amazon::Runtime::Internal::ErrorHandler::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23dd0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler.InvokeSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ErrorHandler::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::ErrorHandler::InvokeSync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23dd2b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler.DisposeReponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::IResponseContext*)>(&::Amazon::Runtime::Internal::ErrorHandler::DisposeReponse)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x23dd4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "DisposeReponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler.ProcessException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::ErrorHandler::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(
    &::Amazon::Runtime::Internal::ErrorHandler::ProcessException)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x23dd790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "ProcessException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ErrorHandler.ProcessExceptionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::Internal::ErrorHandler::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::ErrorHandler::ProcessExceptionAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23ddce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "ProcessExceptionAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>*& Amazon::Runtime::Internal::ErrorHandler::__cordl_internal_get__exceptionHandlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionHandlers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>*> const&
Amazon::Runtime::Internal::ErrorHandler::__cordl_internal_get__exceptionHandlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionHandlers;
}
constexpr void
Amazon::Runtime::Internal::ErrorHandler::__cordl_internal_set__exceptionHandlers(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionHandlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>* Amazon::Runtime::Internal::ErrorHandler::get_ExceptionHandlers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(),
                                                                             "get_ExceptionHandlers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Runtime::IExceptionHandler*>*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::Internal::ErrorHandler* Amazon::Runtime::Internal::ErrorHandler::New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ErrorHandler*>(logger));
}
inline void Amazon::Runtime::Internal::ErrorHandler::_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline void Amazon::Runtime::Internal::ErrorHandler::InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::ErrorHandler::InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::Internal::ErrorHandler::DisposeReponse(::Amazon::Runtime::IResponseContext* responseContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "DisposeReponse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IResponseContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, responseContext);
}
inline bool Amazon::Runtime::Internal::ErrorHandler::ProcessException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "ProcessException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::ErrorHandler::ProcessExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                                                ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "ProcessExceptionAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::ErrorHandler::__n__0(::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ErrorHandler*>::get(), "<>n__0",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ErrorHandler::ErrorHandler() {}
