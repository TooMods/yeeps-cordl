#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__HttpResponseMessageBody_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IHttpResponseBody_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::*)(
    ::System::Net::Http::HttpResponseMessage*, ::System::Net::Http::HttpClient*, bool)>(&::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x244f6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody.OpenResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::OpenResponse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2450148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "OpenResponse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody.OpenResponseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (
    ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::*)()>(&::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::OpenResponseAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2450200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "OpenResponseAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2450278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::*)(bool)>(
    &::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24502e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), 7));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IHttpResponseBody"
constexpr Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::operator ::Amazon::Runtime::Internal::Transform::IHttpResponseBody*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IHttpResponseBody*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IHttpResponseBody"
constexpr ::Amazon::Runtime::Internal::Transform::IHttpResponseBody*
Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::i___Amazon__Runtime__Internal__Transform__IHttpResponseBody() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IHttpResponseBody*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Http::HttpClient*& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__httpClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClient;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__httpClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClient;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_set__httpClient(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____httpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpResponseMessage*& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____response;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpResponseMessage*> const& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____response;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_set__response(::System::Net::Http::HttpResponseMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__disposeClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeClient;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__disposeClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeClient;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_set__disposeClient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeClient = value;
}
constexpr bool& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
inline ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*
Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::New_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>(response, httpClient, disposeClient));
}
inline void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response, httpClient, disposeClient);
}
inline ::System::IO::Stream* Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::OpenResponse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "OpenResponse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::OpenResponseAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "OpenResponseAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody::HttpResponseMessageBody() {}
