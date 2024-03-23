#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__HttpRequestMessageFactory_def.hpp"
#include "Amazon/Runtime/zzzz__HttpClientCache_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequestFactory_1_def.hpp"
#include "Amazon/Runtime/zzzz__IHttpRequest_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpRequestMessageFactory::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpRequestMessageFactory::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x201a424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.CreateHttpRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>* (
    ::Amazon::Runtime::HttpRequestMessageFactory::*)(::System::Uri*)>(&::Amazon::Runtime::HttpRequestMessageFactory::CreateHttpRequest)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x201a44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpRequest",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpRequestMessageFactory::*)()>(&::Amazon::Runtime::HttpRequestMessageFactory::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x201ae90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpRequestMessageFactory::*)(bool)>(
    &::Amazon::Runtime::HttpRequestMessageFactory::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x201aefc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.CreateHttpClientCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::HttpClientCache* (*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpRequestMessageFactory::CreateHttpClientCache)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x201aa5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpClientCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.CreateHttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpClient* (*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpRequestMessageFactory::CreateHttpClient)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x201acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpClient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpRequestMessageFactory.CreateManagedHttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpClient* (*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpRequestMessageFactory::CreateManagedHttpClient)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x201afac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateManagedHttpClient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>"
constexpr Amazon::Runtime::HttpRequestMessageFactory::operator ::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>*() noexcept {
  return static_cast<::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>"
constexpr ::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>*
Amazon::Runtime::HttpRequestMessageFactory::i___Amazon__Runtime__IHttpRequestFactory_1___System__Net__Http__HttpContent__() noexcept {
  return static_cast<::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::HttpRequestMessageFactory::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::HttpRequestMessageFactory::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::HttpClientCache*& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__httpClientCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClientCache;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::HttpClientCache*> const& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__httpClientCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____httpClientCache;
}
constexpr void Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_set__httpClientCache(::Amazon::Runtime::HttpClientCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____httpClientCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__useGlobalHttpClientCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalHttpClientCache;
}
constexpr bool const& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__useGlobalHttpClientCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalHttpClientCache;
}
constexpr void Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_set__useGlobalHttpClientCache(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useGlobalHttpClientCache = value;
}
constexpr ::Amazon::Runtime::IClientConfig*& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__clientConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_get__clientConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientConfig;
}
constexpr void Amazon::Runtime::HttpRequestMessageFactory::__cordl_internal_set__clientConfig(::Amazon::Runtime::IClientConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::HttpRequestMessageFactory::setStaticF__httpClientCacheRWLock(::System::Threading::ReaderWriterLockSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterLockSlim*, "_httpClientCacheRWLock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get>(
      std::forward<::System::Threading::ReaderWriterLockSlim*>(value));
}
inline ::System::Threading::ReaderWriterLockSlim* Amazon::Runtime::HttpRequestMessageFactory::getStaticF__httpClientCacheRWLock() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterLockSlim*, "_httpClientCacheRWLock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get>();
}
inline void Amazon::Runtime::HttpRequestMessageFactory::setStaticF__httpClientCaches(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>*, "_httpClientCaches",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get>(
      std::forward<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>* Amazon::Runtime::HttpRequestMessageFactory::getStaticF__httpClientCaches() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>*, "_httpClientCaches",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get>();
}
inline ::Amazon::Runtime::HttpRequestMessageFactory* Amazon::Runtime::HttpRequestMessageFactory::New_ctor(::Amazon::Runtime::IClientConfig* clientConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::HttpRequestMessageFactory*>(clientConfig));
}
inline void Amazon::Runtime::HttpRequestMessageFactory::_ctor(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientConfig);
}
inline ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>* Amazon::Runtime::HttpRequestMessageFactory::CreateHttpRequest(::System::Uri* requestUri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpRequest",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>*, false>(this, ___internal_method, requestUri);
}
inline void Amazon::Runtime::HttpRequestMessageFactory::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::HttpRequestMessageFactory::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Amazon::Runtime::HttpClientCache* Amazon::Runtime::HttpRequestMessageFactory::CreateHttpClientCache(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpClientCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::HttpClientCache*, false>(nullptr, ___internal_method, clientConfig);
}
inline ::System::Net::Http::HttpClient* Amazon::Runtime::HttpRequestMessageFactory::CreateHttpClient(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateHttpClient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*, false>(nullptr, ___internal_method, clientConfig);
}
inline ::System::Net::Http::HttpClient* Amazon::Runtime::HttpRequestMessageFactory::CreateManagedHttpClient(::Amazon::Runtime::IClientConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpRequestMessageFactory*>::get(), "CreateManagedHttpClient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*, false>(nullptr, ___internal_method, clientConfig);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::HttpRequestMessageFactory::HttpRequestMessageFactory() {}
