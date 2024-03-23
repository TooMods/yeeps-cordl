#pragma once
#include "Amazon/Runtime/zzzz__IHttpRequestFactory_1_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequest_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename TRequestContent> constexpr Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TRequestContent> constexpr ::System::IDisposable* Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TRequestContent> inline ::Amazon::Runtime::IHttpRequest_1<TRequestContent>* Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>::CreateHttpRequest(::System::Uri* requestUri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::IHttpRequestFactory_1<TRequestContent>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IHttpRequest_1<TRequestContent>*, false>(this, ___internal_method, requestUri);
}
