#pragma once
#include "Amazon/Runtime/zzzz__IHttpRequest_1_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
#include "Amazon/Runtime/zzzz__StreamTransferProgressArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename TRequestContent> constexpr Amazon::Runtime::IHttpRequest_1<TRequestContent>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TRequestContent> constexpr ::System::IDisposable* Amazon::Runtime::IHttpRequest_1<TRequestContent>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TRequestContent> inline ::StringW Amazon::Runtime::IHttpRequest_1<TRequestContent>::get_Method() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TRequestContent> inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::set_Method(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TRequestContent> inline ::System::Uri* Amazon::Runtime::IHttpRequest_1<TRequestContent>::get_RequestUri() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
template <typename TRequestContent> inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::ConfigureRequest(::Amazon::Runtime::IRequestContext* requestContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContext);
}
template <typename TRequestContent> inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::SetRequestHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headers);
}
template <typename TRequestContent> inline TRequestContent Amazon::Runtime::IHttpRequest_1<TRequestContent>::GetRequestContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<TRequestContent, false>(this, ___internal_method);
}
template <typename TRequestContent> inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* Amazon::Runtime::IHttpRequest_1<TRequestContent>::GetResponse() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IWebResponseData*, false>(this, ___internal_method);
}
template <typename TRequestContent>
inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::WriteToRequestBody(TRequestContent requestContent, ::System::IO::Stream* contentStream,
                                                                                 ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders,
                                                                                 ::Amazon::Runtime::IRequestContext* requestContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContent, contentStream, contentHeaders, requestContext);
}
template <typename TRequestContent>
inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::WriteToRequestBody(TRequestContent requestContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> content,
                                                                                 ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* contentHeaders) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContent, content, contentHeaders);
}
template <typename TRequestContent>
inline ::System::IO::Stream* Amazon::Runtime::IHttpRequest_1<TRequestContent>::SetupProgressListeners(::System::IO::Stream* originalStream, int64_t progressUpdateInterval, ::System::Object* sender,
                                                                                                      ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, originalStream, progressUpdateInterval, sender, callback);
}
template <typename TRequestContent> inline void Amazon::Runtime::IHttpRequest_1<TRequestContent>::Abort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TRequestContent> inline ::System::Threading::Tasks::Task_1<TRequestContent>* Amazon::Runtime::IHttpRequest_1<TRequestContent>::GetRequestContentAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TRequestContent>*, false>(this, ___internal_method);
}
template <typename TRequestContent>
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>*
Amazon::Runtime::IHttpRequest_1<TRequestContent>::GetResponseAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::Internal::Transform::IWebResponseData*>*, false>(this, ___internal_method, cancellationToken);
}
