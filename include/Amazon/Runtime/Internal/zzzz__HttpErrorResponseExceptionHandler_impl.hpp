#pragma once
#include "Amazon/Runtime/Internal/zzzz__ExceptionHandler_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseException_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseExceptionHandler_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IHttpResponseBody_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ILogger_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseExceptionHandler_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseException_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::*)()>(
    &::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x23dfefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23e04e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "exception", ty: "::Amazon::Runtime::Internal::HttpErrorResponseException*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__4__this", ty: "::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_requestContext_5__2", ty:
// "::Amazon::Runtime::IRequestContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_httpErrorResponse_5__3", ty: "::Amazon::Runtime::Internal::Transform::IWebResponseData*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap3", ty: "::Amazon::Runtime::Internal::Transform::IHttpResponseBody*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::IExecutionContext* executionContext,
    ::Amazon::Runtime::Internal::HttpErrorResponseException* exception, ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler* __4__this,
    ::Amazon::Runtime::IRequestContext* _requestContext_5__2, ::Amazon::Runtime::Internal::Transform::IWebResponseData* _httpErrorResponse_5__3,
    ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* __7__wrap3,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->executionContext = executionContext;
  this->exception = exception;
  this->__4__this = __4__this;
  this->_requestContext_5__2 = _requestContext_5__2;
  this->_httpErrorResponse_5__3 = _httpErrorResponse_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2::__HttpErrorResponseExceptionHandler___HandleExceptionAsync_d__2() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::*)(
    ::Amazon::Runtime::Internal::Util::ILogger*)>(&::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23dd260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler.HandleException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::*)(
    ::Amazon::Runtime::IExecutionContext*, ::Amazon::Runtime::Internal::HttpErrorResponseException*)>(&::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleException)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x23de610;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler.HandleExceptionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::*)(::Amazon::Runtime::IExecutionContext*, ::Amazon::Runtime::Internal::HttpErrorResponseException*)>(
    &::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleExceptionAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23dfdc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler.HandleExceptionStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::*)(
    ::Amazon::Runtime::IRequestContext*, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, ::Amazon::Runtime::Internal::HttpErrorResponseException*, ::System::IO::Stream*)>(
    &::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleExceptionStream)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x23df470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), "HandleExceptionStream",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler.HandleSuppressed404
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::*)(
    ::Amazon::Runtime::IExecutionContext*, ::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(&::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleSuppressed404)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x23de980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), "HandleSuppressed404", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler* Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::New_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>(logger));
}
inline void Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::_ctor(::Amazon::Runtime::Internal::Util::ILogger* logger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline bool Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleException(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                          ::Amazon::Runtime::Internal::HttpErrorResponseException* exception) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task_1<bool>*
Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                   ::Amazon::Runtime::Internal::HttpErrorResponseException* exception) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleExceptionStream(::Amazon::Runtime::IRequestContext* requestContext,
                                                                                                ::Amazon::Runtime::Internal::Transform::IWebResponseData* httpErrorResponse,
                                                                                                ::Amazon::Runtime::Internal::HttpErrorResponseException* exception,
                                                                                                ::System::IO::Stream* responseStream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), "HandleExceptionStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requestContext, httpErrorResponse, exception, responseStream);
}
inline bool Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HandleSuppressed404(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                              ::Amazon::Runtime::Internal::Transform::IWebResponseData* httpErrorResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler*>::get(), "HandleSuppressed404", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, httpErrorResponse);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::HttpErrorResponseExceptionHandler::HttpErrorResponseExceptionHandler() {}
