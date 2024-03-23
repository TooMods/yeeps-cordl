#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__PipelineHandler_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpHandler_1_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__TimingEvent_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpHandler_1_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IRequest_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequestFactory_1_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequest_1_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequestContent, typename T>
constexpr Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequestContent, typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TRequestContent, typename T> inline void Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequestContent, typename T>
inline void Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "_httpRequest_5__2", ty: "::Amazon::Runtime::IHttpRequest_1<TRequestContent>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty:
// "::Amazon::Runtime::Internal::Util::TimingEvent*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_edi_5__4", ty: "::System::Runtime::ExceptionServices::ExceptionDispatchInfo*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TRequestContent>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "__u__3", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value:
// Some("{}") }]
template <typename TRequestContent, typename T>
constexpr ::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::__HttpHandler_1___InvokeAsync_d__9_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Amazon::Runtime::IExecutionContext* executionContext,
    ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>* __4__this, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* _httpRequest_5__2,
    ::Amazon::Runtime::Internal::Util::TimingEvent* __7__wrap2, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _edi_5__4,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TRequestContent> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->executionContext = executionContext;
  this->__4__this = __4__this;
  this->_httpRequest_5__2 = _httpRequest_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_edi_5__4 = _edi_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
template <typename TRequestContent, typename T> constexpr ::Amazon::Runtime::Internal::__HttpHandler_1___InvokeAsync_d__9_1<TRequestContent, T>::__HttpHandler_1___InvokeAsync_d__9_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequestContent>
constexpr Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TRequestContent>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequestContent>
inline void Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "httpRequest", ty: "::Amazon::Runtime::IHttpRequest_1<TRequestContent>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_iwrd_5__2", ty: "::Amazon::Runtime::Internal::Transform::IWebResponseData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*>", modifiers: "", def_value: Some("{}") }]
template <typename TRequestContent>
constexpr ::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::__HttpHandler_1___CompleteFailedRequest_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest,
    ::Amazon::Runtime::IExecutionContext* executionContext, ::Amazon::Runtime::Internal::Transform::IWebResponseData* _iwrd_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::Internal::Transform::IWebResponseData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->httpRequest = httpRequest;
  this->executionContext = executionContext;
  this->_iwrd_5__2 = _iwrd_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TRequestContent> constexpr ::Amazon::Runtime::Internal::__HttpHandler_1___CompleteFailedRequest_d__10<TRequestContent>::__HttpHandler_1___CompleteFailedRequest_d__10() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename TRequestContent> constexpr Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TRequestContent> constexpr ::System::IDisposable* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TRequestContent> constexpr bool& Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
template <typename TRequestContent> constexpr bool const& Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
template <typename TRequestContent> constexpr void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
template <typename TRequestContent>
constexpr ::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*& Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__requestFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestFactory;
}
template <typename TRequestContent>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*> const&
Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__requestFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestFactory;
}
template <typename TRequestContent>
constexpr void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_set__requestFactory(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TRequestContent> constexpr ::System::Object*& Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__CallbackSender_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CallbackSender_k__BackingField;
}
template <typename TRequestContent>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_get__CallbackSender_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CallbackSender_k__BackingField;
}
template <typename TRequestContent> constexpr void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::__cordl_internal_set__CallbackSender_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CallbackSender_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TRequestContent> inline ::System::Object* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::get_CallbackSender() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "get_CallbackSender",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::set_CallbackSender(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "set_CallbackSender",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TRequestContent>
inline ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*
Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::New_ctor(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* requestFactory, ::System::Object* callbackSender) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>(requestFactory, callbackSender));
}
template <typename TRequestContent>
inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::_ctor(::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>* requestFactory, ::System::Object* callbackSender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestFactory, callbackSender);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::InvokeSync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::CompleteFailedRequest(::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "CompleteFailedRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, httpRequest);
}
template <typename TRequestContent>
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::InvokeAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, executionContext);
}
template <typename TRequestContent>
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::CompleteFailedRequest(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                                                          ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "CompleteFailedRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, executionContext, httpRequest);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::SetMetrics(::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "SetMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestContext);
}
template <typename TRequestContent>
inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::WriteContentToRequestBody(TRequestContent requestContent, ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* httpRequest,
                                                                                                 ::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "WriteContentToRequestBody",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequestContent>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContent, httpRequest, requestContext);
}
template <typename TRequestContent>
inline ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::CreateWebRequest(::Amazon::Runtime::IRequestContext* requestContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*, false>(this, ___internal_method, requestContext);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequestContent> inline void Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TRequestContent>
inline ::System::IO::Stream* Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::GetInputStream(::Amazon::Runtime::IRequestContext* requestContext, ::System::IO::Stream* originalStream,
                                                                                                       ::Amazon::Runtime::Internal::IRequest* wrappedRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>*>::get(), "GetInputStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::IRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, requestContext, originalStream, wrappedRequest);
}
// Ctor Parameters []
template <typename TRequestContent> constexpr ::Amazon::Runtime::Internal::HttpHandler_1<TRequestContent>::HttpHandler_1() {}
