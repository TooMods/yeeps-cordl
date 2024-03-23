#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpRequestMessageFactory)
namespace Amazon::Runtime {
class HttpClientCache;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequestFactory_1;
}
namespace Amazon::Runtime {
template <typename TRequestContent> class IHttpRequest_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class HttpRequestMessageFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::HttpRequestMessageFactory);
// Type: Amazon.Runtime::HttpRequestMessageFactory
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::HttpRequestMessageFactory*
class CORDL_TYPE HttpRequestMessageFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _clientConfig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__clientConfig, put = __cordl_internal_set__clientConfig))::Amazon::Runtime::IClientConfig* _clientConfig;

  /// @brief Field _httpClientCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__httpClientCache, put = __cordl_internal_set__httpClientCache))::Amazon::Runtime::HttpClientCache* _httpClientCache;

  /// @brief Field _httpClientCacheRWLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__httpClientCacheRWLock, put = setStaticF__httpClientCacheRWLock))::System::Threading::ReaderWriterLockSlim* _httpClientCacheRWLock;

  /// @brief Field _httpClientCaches, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__httpClientCaches,
                             put = setStaticF__httpClientCaches))::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>* _httpClientCaches;

  /// @brief Field _useGlobalHttpClientCache, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__useGlobalHttpClientCache, put = __cordl_internal_set__useGlobalHttpClientCache)) bool _useGlobalHttpClientCache;

  /// @brief Convert operator to "::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>"
  constexpr operator ::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateHttpClient, addr 0x201acb0, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpClient* CreateHttpClient(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method CreateHttpClientCache, addr 0x201aa5c, size 0x19c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::HttpClientCache* CreateHttpClientCache(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method CreateHttpRequest, addr 0x201a44c, size 0x610, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::IHttpRequest_1<::System::Net::Http::HttpContent*>* CreateHttpRequest(::System::Uri* requestUri);

  /// @brief Method CreateManagedHttpClient, addr 0x201afac, size 0x7c8, virtual false, abstract: false, final false
  static inline ::System::Net::Http::HttpClient* CreateManagedHttpClient(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method Dispose, addr 0x201ae90, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x201aefc, size 0x1c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::HttpRequestMessageFactory* New_ctor(::Amazon::Runtime::IClientConfig* clientConfig);

  constexpr ::Amazon::Runtime::IClientConfig*& __cordl_internal_get__clientConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::IClientConfig*> const& __cordl_internal_get__clientConfig() const;

  constexpr ::Amazon::Runtime::HttpClientCache*& __cordl_internal_get__httpClientCache();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::HttpClientCache*> const& __cordl_internal_get__httpClientCache() const;

  constexpr bool const& __cordl_internal_get__useGlobalHttpClientCache() const;

  constexpr bool& __cordl_internal_get__useGlobalHttpClientCache();

  constexpr void __cordl_internal_set__clientConfig(::Amazon::Runtime::IClientConfig* value);

  constexpr void __cordl_internal_set__httpClientCache(::Amazon::Runtime::HttpClientCache* value);

  constexpr void __cordl_internal_set__useGlobalHttpClientCache(bool value);

  /// @brief Method .ctor, addr 0x201a424, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* clientConfig);

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF__httpClientCacheRWLock();

  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>* getStaticF__httpClientCaches();

  /// @brief Convert to "::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>"
  constexpr ::Amazon::Runtime::IHttpRequestFactory_1<::System::Net::Http::HttpContent*>* i___Amazon__Runtime__IHttpRequestFactory_1___System__Net__Http__HttpContent__() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__httpClientCacheRWLock(::System::Threading::ReaderWriterLockSlim* value);

  static inline void setStaticF__httpClientCaches(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Runtime::HttpClientCache*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestMessageFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessageFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestMessageFactory(HttpRequestMessageFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestMessageFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestMessageFactory(HttpRequestMessageFactory const&) = delete;

  /// @brief Field _httpClientCache, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::HttpClientCache* ____httpClientCache;

  /// @brief Field _useGlobalHttpClientCache, offset: 0x18, size: 0x1, def value: None
  bool ____useGlobalHttpClientCache;

  /// @brief Field _clientConfig, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::IClientConfig* ____clientConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::HttpRequestMessageFactory, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpRequestMessageFactory, ____httpClientCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpRequestMessageFactory, ____useGlobalHttpClientCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::HttpRequestMessageFactory, ____clientConfig) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::HttpRequestMessageFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::HttpRequestMessageFactory*, "Amazon.Runtime", "HttpRequestMessageFactory");
