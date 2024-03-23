#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientConfig)
namespace Amazon::Runtime {
class HttpClientFactory;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
struct RequestRetryMode;
}
namespace Amazon::Runtime {
struct SigningAlgorithm;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime {
class ClientConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ClientConfig);
// Type: Amazon.Runtime::ClientConfig
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ClientConfig*
class CORDL_TYPE ClientConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllowAutoRedirect, put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(get = get_AuthenticationRegion, put = set_AuthenticationRegion))::StringW AuthenticationRegion;

  __declspec(property(get = get_AuthenticationServiceName, put = set_AuthenticationServiceName))::StringW AuthenticationServiceName;

  __declspec(property(get = get_BufferSize, put = set_BufferSize)) int32_t BufferSize;

  __declspec(property(get = get_CacheHttpClient, put = set_CacheHttpClient)) bool CacheHttpClient;

  __declspec(property(get = get_ClockOffset))::System::TimeSpan ClockOffset;

  __declspec(property(get = get_CorrectedUtcNow))::System::DateTime CorrectedUtcNow;

  __declspec(property(get = get_DisableHostPrefixInjection, put = set_DisableHostPrefixInjection)) bool DisableHostPrefixInjection;

  __declspec(property(get = get_DisableLogging, put = set_DisableLogging)) bool DisableLogging;

  __declspec(property(get = get_EndpointDiscoveryCacheLimit, put = set_EndpointDiscoveryCacheLimit)) int32_t EndpointDiscoveryCacheLimit;

  __declspec(property(get = get_EndpointDiscoveryEnabled, put = set_EndpointDiscoveryEnabled)) bool EndpointDiscoveryEnabled;

  __declspec(property(get = get_FastFailRequests, put = set_FastFailRequests)) bool FastFailRequests;

  __declspec(property(get = get_HttpClientCacheSize, put = set_HttpClientCacheSize)) int32_t HttpClientCacheSize;

  __declspec(property(get = get_HttpClientFactory, put = set_HttpClientFactory))::Amazon::Runtime::HttpClientFactory* HttpClientFactory;

  /// @brief Field InfiniteTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InfiniteTimeout, put = setStaticF_InfiniteTimeout))::System::TimeSpan InfiniteTimeout;

  __declspec(property(get = get_IsMaxErrorRetrySet)) bool IsMaxErrorRetrySet;

  __declspec(property(get = get_LogMetrics, put = set_LogMetrics)) bool LogMetrics;

  __declspec(property(get = get_LogResponse, put = set_LogResponse)) bool LogResponse;

  __declspec(property(get = get_MaxConnectionsPerServer, put = set_MaxConnectionsPerServer))::System::Nullable_1<int32_t> MaxConnectionsPerServer;

  __declspec(property(get = get_MaxErrorRetry, put = set_MaxErrorRetry)) int32_t MaxErrorRetry;

  /// @brief Field MaxTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaxTimeout, put = setStaticF_MaxTimeout))::System::TimeSpan MaxTimeout;

  __declspec(property(get = get_ProgressUpdateInterval, put = set_ProgressUpdateInterval)) int64_t ProgressUpdateInterval;

  __declspec(property(get = get_ProxyCredentials, put = set_ProxyCredentials))::System::Net::ICredentials* ProxyCredentials;

  __declspec(property(get = get_ProxyHost, put = set_ProxyHost))::StringW ProxyHost;

  __declspec(property(get = get_ProxyPort, put = set_ProxyPort)) int32_t ProxyPort;

  __declspec(property(get = get_ReadEntireResponse, put = set_ReadEntireResponse)) bool ReadEntireResponse;

  __declspec(property(get = get_ReadWriteTimeout, put = set_ReadWriteTimeout))::System::Nullable_1<::System::TimeSpan> ReadWriteTimeout;

  __declspec(property(get = get_RegionEndpoint, put = set_RegionEndpoint))::Amazon::RegionEndpoint* RegionEndpoint;

  __declspec(property(get = get_RegionEndpointServiceName))::StringW RegionEndpointServiceName;

  __declspec(property(get = get_ResignRetries, put = set_ResignRetries)) bool ResignRetries;

  __declspec(property(get = get_RetryMode, put = set_RetryMode))::Amazon::Runtime::RequestRetryMode RetryMode;

  __declspec(property(get = get_ServiceURL, put = set_ServiceURL))::StringW ServiceURL;

  __declspec(property(get = get_ServiceVersion))::StringW ServiceVersion;

  __declspec(property(get = get_SignatureMethod, put = set_SignatureMethod))::Amazon::Runtime::SigningAlgorithm SignatureMethod;

  __declspec(property(get = get_SignatureVersion, put = set_SignatureVersion))::StringW SignatureVersion;

  __declspec(property(get = get_ThrottleRetries, put = set_ThrottleRetries)) bool ThrottleRetries;

  __declspec(property(get = get_Timeout, put = set_Timeout))::System::Nullable_1<::System::TimeSpan> Timeout;

  __declspec(property(get = get_UseAlternateUserAgentHeader, put = set_UseAlternateUserAgentHeader)) bool UseAlternateUserAgentHeader;

  __declspec(property(get = get_UseDualstackEndpoint, put = set_UseDualstackEndpoint)) bool UseDualstackEndpoint;

  __declspec(property(get = get_UseHttp, put = set_UseHttp)) bool UseHttp;

  __declspec(property(get = get_UserAgent))::StringW UserAgent;

  /// @brief Field <CacheHttpClient>k__BackingField, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get__CacheHttpClient_k__BackingField, put = __cordl_internal_set__CacheHttpClient_k__BackingField)) bool _CacheHttpClient_k__BackingField;

  /// @brief Field <FastFailRequests>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__FastFailRequests_k__BackingField, put = __cordl_internal_set__FastFailRequests_k__BackingField)) bool _FastFailRequests_k__BackingField;

  /// @brief Field <HttpClientFactory>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__HttpClientFactory_k__BackingField,
                      put = __cordl_internal_set__HttpClientFactory_k__BackingField))::Amazon::Runtime::HttpClientFactory* _HttpClientFactory_k__BackingField;

  /// @brief Field <MaxConnectionsPerServer>k__BackingField, offset 0xd4, size 0x8
  __declspec(property(get = __cordl_internal_get__MaxConnectionsPerServer_k__BackingField,
                      put = __cordl_internal_set__MaxConnectionsPerServer_k__BackingField))::System::Nullable_1<int32_t> _MaxConnectionsPerServer_k__BackingField;

  /// @brief Field _httpClientCacheSize, offset 0xb4, size 0x8
  __declspec(property(get = __cordl_internal_get__httpClientCacheSize, put = __cordl_internal_set__httpClientCacheSize))::System::Nullable_1<int32_t> _httpClientCacheSize;

  /// @brief Field allowAutoRedirect, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_allowAutoRedirect, put = __cordl_internal_set_allowAutoRedirect)) bool allowAutoRedirect;

  /// @brief Field authRegion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authRegion, put = __cordl_internal_set_authRegion))::StringW authRegion;

  /// @brief Field authServiceName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_authServiceName, put = __cordl_internal_set_authServiceName))::StringW authServiceName;

  /// @brief Field bufferSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferSize, put = __cordl_internal_set_bufferSize)) int32_t bufferSize;

  /// @brief Field disableHostPrefixInjection, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_disableHostPrefixInjection, put = __cordl_internal_set_disableHostPrefixInjection)) bool disableHostPrefixInjection;

  /// @brief Field disableLogging, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_disableLogging, put = __cordl_internal_set_disableLogging)) bool disableLogging;

  /// @brief Field endpointDiscoveryCacheLimit, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_endpointDiscoveryCacheLimit, put = __cordl_internal_set_endpointDiscoveryCacheLimit)) int32_t endpointDiscoveryCacheLimit;

  /// @brief Field endpointDiscoveryEnabled, offset 0x99, size 0x2
  __declspec(property(get = __cordl_internal_get_endpointDiscoveryEnabled, put = __cordl_internal_set_endpointDiscoveryEnabled))::System::Nullable_1<bool> endpointDiscoveryEnabled;

  /// @brief Field logMetrics, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_logMetrics, put = __cordl_internal_set_logMetrics)) bool logMetrics;

  /// @brief Field logResponse, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_logResponse, put = __cordl_internal_set_logResponse)) bool logResponse;

  /// @brief Field maxRetries, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_maxRetries, put = __cordl_internal_set_maxRetries))::System::Nullable_1<int32_t> maxRetries;

  /// @brief Field probeForRegionEndpoint, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_probeForRegionEndpoint, put = __cordl_internal_set_probeForRegionEndpoint)) bool probeForRegionEndpoint;

  /// @brief Field progressUpdateInterval, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_progressUpdateInterval, put = __cordl_internal_set_progressUpdateInterval)) int64_t progressUpdateInterval;

  /// @brief Field proxy, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_proxy, put = __cordl_internal_set_proxy))::System::Net::IWebProxy* proxy;

  /// @brief Field proxyCredentials, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_proxyCredentials, put = __cordl_internal_set_proxyCredentials))::System::Net::ICredentials* proxyCredentials;

  /// @brief Field proxyHost, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_proxyHost, put = __cordl_internal_set_proxyHost))::StringW proxyHost;

  /// @brief Field proxyPort, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_proxyPort, put = __cordl_internal_set_proxyPort)) int32_t proxyPort;

  /// @brief Field readEntireResponse, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_readEntireResponse, put = __cordl_internal_set_readEntireResponse)) bool readEntireResponse;

  /// @brief Field readWriteTimeout, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_readWriteTimeout, put = __cordl_internal_set_readWriteTimeout))::System::Nullable_1<::System::TimeSpan> readWriteTimeout;

  /// @brief Field regionEndpoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_regionEndpoint, put = __cordl_internal_set_regionEndpoint))::Amazon::RegionEndpoint* regionEndpoint;

  /// @brief Field resignRetries, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_resignRetries, put = __cordl_internal_set_resignRetries)) bool resignRetries;

  /// @brief Field retryMode, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_retryMode, put = __cordl_internal_set_retryMode))::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> retryMode;

  /// @brief Field serviceURL, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serviceURL, put = __cordl_internal_set_serviceURL))::StringW serviceURL;

  /// @brief Field signatureMethod, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_signatureMethod, put = __cordl_internal_set_signatureMethod))::Amazon::Runtime::SigningAlgorithm signatureMethod;

  /// @brief Field signatureVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureVersion, put = __cordl_internal_set_signatureVersion))::StringW signatureVersion;

  /// @brief Field throttleRetries, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_throttleRetries, put = __cordl_internal_set_throttleRetries)) bool throttleRetries;

  /// @brief Field timeout, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_timeout, put = __cordl_internal_set_timeout))::System::Nullable_1<::System::TimeSpan> timeout;

  /// @brief Field useAlternateUserAgentHeader, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_useAlternateUserAgentHeader, put = __cordl_internal_set_useAlternateUserAgentHeader)) bool useAlternateUserAgentHeader;

  /// @brief Field useDualstackEndpoint, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_useDualstackEndpoint, put = __cordl_internal_set_useDualstackEndpoint)) bool useDualstackEndpoint;

  /// @brief Field useHttp, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_useHttp, put = __cordl_internal_set_useHttp)) bool useHttp;

  /// @brief Convert operator to "::Amazon::Runtime::IClientConfig"
  constexpr operator ::Amazon::Runtime::IClientConfig*() noexcept;

  /// @brief Method CacheHttpClients, addr 0x1fe2c4c, size 0x16c, virtual false, abstract: false, final false
  static inline bool CacheHttpClients(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method CreateConfigUniqueString, addr 0x1fe2f30, size 0x5c0, virtual false, abstract: false, final false
  static inline ::StringW CreateConfigUniqueString(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method DetermineServiceURL, addr 0x1fe164c, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW DetermineServiceURL();

  /// @brief Method DisposeHttpClients, addr 0x1fe2db8, size 0x178, virtual false, abstract: false, final false
  static inline bool DisposeHttpClients(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method GetDefaultRegionEndpoint, addr 0x1fe15d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetDefaultRegionEndpoint();

  /// @brief Method GetTimeoutValue, addr 0x1fe28b4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> GetTimeoutValue(::System::Nullable_1<::System::TimeSpan> clientTimeout, ::System::Nullable_1<::System::TimeSpan> requestTimeout);

  /// @brief Method GetUrl, addr 0x1fe1704, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW GetUrl(::Amazon::RegionEndpoint* regionEndpoint, ::StringW regionEndpointServiceName, bool useHttp, bool useDualStack);

  /// @brief Method GetWebProxy, addr 0x1fe2b28, size 0x8, virtual true, abstract: false, final true
  inline ::System::Net::IWebProxy* GetWebProxy();

  /// @brief Method Initialize, addr 0x1fe1da0, size 0x4, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::Amazon::Runtime::ClientConfig* New_ctor();

  /// @brief Method SetUseNagleIfAvailable, addr 0x1fe201c, size 0x4, virtual false, abstract: false, final false
  inline void SetUseNagleIfAvailable(bool useNagle);

  /// @brief Method SetWebProxy, addr 0x1fe2b30, size 0x8, virtual false, abstract: false, final false
  inline void SetWebProxy(::System::Net::IWebProxy* proxy);

  /// @brief Method UseGlobalHttpClientCache, addr 0x1fe34f0, size 0x1e4, virtual false, abstract: false, final false
  static inline bool UseGlobalHttpClientCache(::Amazon::Runtime::IClientConfig* clientConfig);

  /// @brief Method Validate, addr 0x1fe2020, size 0x70, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method ValidateTimeout, addr 0x1fe1e20, size 0x1d4, virtual false, abstract: false, final false
  static inline void ValidateTimeout(::System::Nullable_1<::System::TimeSpan> timeout);

  constexpr bool const& __cordl_internal_get__CacheHttpClient_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CacheHttpClient_k__BackingField();

  constexpr bool const& __cordl_internal_get__FastFailRequests_k__BackingField() const;

  constexpr bool& __cordl_internal_get__FastFailRequests_k__BackingField();

  constexpr ::Amazon::Runtime::HttpClientFactory*& __cordl_internal_get__HttpClientFactory_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::HttpClientFactory*> const& __cordl_internal_get__HttpClientFactory_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MaxConnectionsPerServer_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MaxConnectionsPerServer_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__httpClientCacheSize() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__httpClientCacheSize();

  constexpr bool const& __cordl_internal_get_allowAutoRedirect() const;

  constexpr bool& __cordl_internal_get_allowAutoRedirect();

  constexpr ::StringW const& __cordl_internal_get_authRegion() const;

  constexpr ::StringW& __cordl_internal_get_authRegion();

  constexpr ::StringW const& __cordl_internal_get_authServiceName() const;

  constexpr ::StringW& __cordl_internal_get_authServiceName();

  constexpr int32_t const& __cordl_internal_get_bufferSize() const;

  constexpr int32_t& __cordl_internal_get_bufferSize();

  constexpr bool const& __cordl_internal_get_disableHostPrefixInjection() const;

  constexpr bool& __cordl_internal_get_disableHostPrefixInjection();

  constexpr bool const& __cordl_internal_get_disableLogging() const;

  constexpr bool& __cordl_internal_get_disableLogging();

  constexpr int32_t const& __cordl_internal_get_endpointDiscoveryCacheLimit() const;

  constexpr int32_t& __cordl_internal_get_endpointDiscoveryCacheLimit();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_endpointDiscoveryEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_endpointDiscoveryEnabled();

  constexpr bool const& __cordl_internal_get_logMetrics() const;

  constexpr bool& __cordl_internal_get_logMetrics();

  constexpr bool const& __cordl_internal_get_logResponse() const;

  constexpr bool& __cordl_internal_get_logResponse();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_maxRetries() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_maxRetries();

  constexpr bool const& __cordl_internal_get_probeForRegionEndpoint() const;

  constexpr bool& __cordl_internal_get_probeForRegionEndpoint();

  constexpr int64_t const& __cordl_internal_get_progressUpdateInterval() const;

  constexpr int64_t& __cordl_internal_get_progressUpdateInterval();

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get_proxy();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& __cordl_internal_get_proxy() const;

  constexpr ::System::Net::ICredentials*& __cordl_internal_get_proxyCredentials();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& __cordl_internal_get_proxyCredentials() const;

  constexpr ::StringW const& __cordl_internal_get_proxyHost() const;

  constexpr ::StringW& __cordl_internal_get_proxyHost();

  constexpr int32_t const& __cordl_internal_get_proxyPort() const;

  constexpr int32_t& __cordl_internal_get_proxyPort();

  constexpr bool const& __cordl_internal_get_readEntireResponse() const;

  constexpr bool& __cordl_internal_get_readEntireResponse();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get_readWriteTimeout() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get_readWriteTimeout();

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get_regionEndpoint();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get_regionEndpoint() const;

  constexpr bool const& __cordl_internal_get_resignRetries() const;

  constexpr bool& __cordl_internal_get_resignRetries();

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> const& __cordl_internal_get_retryMode() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>& __cordl_internal_get_retryMode();

  constexpr ::StringW const& __cordl_internal_get_serviceURL() const;

  constexpr ::StringW& __cordl_internal_get_serviceURL();

  constexpr ::Amazon::Runtime::SigningAlgorithm const& __cordl_internal_get_signatureMethod() const;

  constexpr ::Amazon::Runtime::SigningAlgorithm& __cordl_internal_get_signatureMethod();

  constexpr ::StringW const& __cordl_internal_get_signatureVersion() const;

  constexpr ::StringW& __cordl_internal_get_signatureVersion();

  constexpr bool const& __cordl_internal_get_throttleRetries() const;

  constexpr bool& __cordl_internal_get_throttleRetries();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get_timeout() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get_timeout();

  constexpr bool const& __cordl_internal_get_useAlternateUserAgentHeader() const;

  constexpr bool& __cordl_internal_get_useAlternateUserAgentHeader();

  constexpr bool const& __cordl_internal_get_useDualstackEndpoint() const;

  constexpr bool& __cordl_internal_get_useDualstackEndpoint();

  constexpr bool const& __cordl_internal_get_useHttp() const;

  constexpr bool& __cordl_internal_get_useHttp();

  constexpr void __cordl_internal_set__CacheHttpClient_k__BackingField(bool value);

  constexpr void __cordl_internal_set__FastFailRequests_k__BackingField(bool value);

  constexpr void __cordl_internal_set__HttpClientFactory_k__BackingField(::Amazon::Runtime::HttpClientFactory* value);

  constexpr void __cordl_internal_set__MaxConnectionsPerServer_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__httpClientCacheSize(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set_allowAutoRedirect(bool value);

  constexpr void __cordl_internal_set_authRegion(::StringW value);

  constexpr void __cordl_internal_set_authServiceName(::StringW value);

  constexpr void __cordl_internal_set_bufferSize(int32_t value);

  constexpr void __cordl_internal_set_disableHostPrefixInjection(bool value);

  constexpr void __cordl_internal_set_disableLogging(bool value);

  constexpr void __cordl_internal_set_endpointDiscoveryCacheLimit(int32_t value);

  constexpr void __cordl_internal_set_endpointDiscoveryEnabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_logMetrics(bool value);

  constexpr void __cordl_internal_set_logResponse(bool value);

  constexpr void __cordl_internal_set_maxRetries(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set_probeForRegionEndpoint(bool value);

  constexpr void __cordl_internal_set_progressUpdateInterval(int64_t value);

  constexpr void __cordl_internal_set_proxy(::System::Net::IWebProxy* value);

  constexpr void __cordl_internal_set_proxyCredentials(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set_proxyHost(::StringW value);

  constexpr void __cordl_internal_set_proxyPort(int32_t value);

  constexpr void __cordl_internal_set_readEntireResponse(bool value);

  constexpr void __cordl_internal_set_readWriteTimeout(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set_regionEndpoint(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set_resignRetries(bool value);

  constexpr void __cordl_internal_set_retryMode(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value);

  constexpr void __cordl_internal_set_serviceURL(::StringW value);

  constexpr void __cordl_internal_set_signatureMethod(::Amazon::Runtime::SigningAlgorithm value);

  constexpr void __cordl_internal_set_signatureVersion(::StringW value);

  constexpr void __cordl_internal_set_throttleRetries(bool value);

  constexpr void __cordl_internal_set_timeout(::System::Nullable_1<::System::TimeSpan> value);

  constexpr void __cordl_internal_set_useAlternateUserAgentHeader(bool value);

  constexpr void __cordl_internal_set_useDualstackEndpoint(bool value);

  constexpr void __cordl_internal_set_useHttp(bool value);

  /// @brief Method .ctor, addr 0x1fe1c6c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::TimeSpan getStaticF_InfiniteTimeout();

  static inline ::System::TimeSpan getStaticF_MaxTimeout();

  /// @brief Method get_AllowAutoRedirect, addr 0x1fe1af0, size 0x8, virtual true, abstract: false, final true
  inline bool get_AllowAutoRedirect();

  /// @brief Method get_AuthenticationRegion, addr 0x1fe1830, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationRegion();

  /// @brief Method get_AuthenticationServiceName, addr 0x1fe1840, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationServiceName();

  /// @brief Method get_BufferSize, addr 0x1fe1abc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_BufferSize();

  /// @brief Method get_CacheHttpClient, addr 0x1fe291c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CacheHttpClient();

  /// @brief Method get_ClockOffset, addr 0x1fe23d4, size 0x108, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_ClockOffset();

  /// @brief Method get_CorrectedUtcNow, addr 0x1fe2090, size 0x70, virtual true, abstract: false, final true
  inline ::System::DateTime get_CorrectedUtcNow();

  /// @brief Method get_DisableHostPrefixInjection, addr 0x1fe2700, size 0x8, virtual true, abstract: false, final true
  inline bool get_DisableHostPrefixInjection();

  /// @brief Method get_DisableLogging, addr 0x1fe1b18, size 0x8, virtual true, abstract: false, final true
  inline bool get_DisableLogging();

  /// @brief Method get_EndpointDiscoveryCacheLimit, addr 0x1fe2828, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_EndpointDiscoveryCacheLimit();

  /// @brief Method get_EndpointDiscoveryEnabled, addr 0x1fe2714, size 0xac, virtual true, abstract: false, final true
  inline bool get_EndpointDiscoveryEnabled();

  /// @brief Method get_FastFailRequests, addr 0x1fe28a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_FastFailRequests();

  /// @brief Method get_HttpClientCacheSize, addr 0x1fe2930, size 0x114, virtual true, abstract: false, final true
  inline int32_t get_HttpClientCacheSize();

  /// @brief Method get_HttpClientFactory, addr 0x1fe2c3c, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::HttpClientFactory* get_HttpClientFactory();

  /// @brief Method get_IsMaxErrorRetrySet, addr 0x1fe1a58, size 0x3c, virtual true, abstract: false, final true
  inline bool get_IsMaxErrorRetrySet();

  /// @brief Method get_LogMetrics, addr 0x1fe1b04, size 0x8, virtual true, abstract: false, final true
  inline bool get_LogMetrics();

  /// @brief Method get_LogResponse, addr 0x1fe1a94, size 0x8, virtual true, abstract: false, final true
  inline bool get_LogResponse();

  /// @brief Method get_MaxConnectionsPerServer, addr 0x1fe2c2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Nullable_1<int32_t> get_MaxConnectionsPerServer();

  /// @brief Method get_MaxErrorRetry, addr 0x1fe1850, size 0xfc, virtual true, abstract: false, final true
  inline int32_t get_MaxErrorRetry();

  /// @brief Method get_ProgressUpdateInterval, addr 0x1fe1acc, size 0x8, virtual true, abstract: false, final true
  inline int64_t get_ProgressUpdateInterval();

  /// @brief Method get_ProxyCredentials, addr 0x1fe1b2c, size 0x138, virtual true, abstract: false, final true
  inline ::System::Net::ICredentials* get_ProxyCredentials();

  /// @brief Method get_ProxyHost, addr 0x1fe2b38, size 0x78, virtual true, abstract: false, final true
  inline ::StringW get_ProxyHost();

  /// @brief Method get_ProxyPort, addr 0x1fe2bb0, size 0x7c, virtual true, abstract: false, final true
  inline int32_t get_ProxyPort();

  /// @brief Method get_ReadEntireResponse, addr 0x1fe1aa8, size 0x8, virtual true, abstract: false, final true
  inline bool get_ReadEntireResponse();

  /// @brief Method get_ReadWriteTimeout, addr 0x1fe2aac, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_ReadWriteTimeout();

  /// @brief Method get_RegionEndpoint, addr 0x1fe1564, size 0x70, virtual true, abstract: false, final true
  inline ::Amazon::RegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_RegionEndpointServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RegionEndpointServiceName();

  /// @brief Method get_ResignRetries, addr 0x1fe1adc, size 0x8, virtual true, abstract: false, final true
  inline bool get_ResignRetries();

  /// @brief Method get_RetryMode, addr 0x1fe194c, size 0xa4, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::RequestRetryMode get_RetryMode();

  /// @brief Method get_ServiceURL, addr 0x1fe1620, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ServiceURL();

  /// @brief Method get_ServiceVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ServiceVersion();

  /// @brief Method get_SignatureMethod, addr 0x1fe1530, size 0x8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::SigningAlgorithm get_SignatureMethod();

  /// @brief Method get_SignatureVersion, addr 0x1fe1540, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_SignatureVersion();

  /// @brief Method get_ThrottleRetries, addr 0x1fe2008, size 0x8, virtual true, abstract: false, final true
  inline bool get_ThrottleRetries();

  /// @brief Method get_Timeout, addr 0x1fe1da4, size 0xc, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::System::TimeSpan> get_Timeout();

  /// @brief Method get_UseAlternateUserAgentHeader, addr 0x1fe1550, size 0x8, virtual true, abstract: false, final true
  inline bool get_UseAlternateUserAgentHeader();

  /// @brief Method get_UseDualstackEndpoint, addr 0x1fe1ff4, size 0x8, virtual true, abstract: false, final true
  inline bool get_UseDualstackEndpoint();

  /// @brief Method get_UseHttp, addr 0x1fe1638, size 0x8, virtual true, abstract: false, final true
  inline bool get_UseHttp();

  /// @brief Method get_UserAgent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_UserAgent();

  /// @brief Convert to "::Amazon::Runtime::IClientConfig"
  constexpr ::Amazon::Runtime::IClientConfig* i___Amazon__Runtime__IClientConfig() noexcept;

  static inline void setStaticF_InfiniteTimeout(::System::TimeSpan value);

  static inline void setStaticF_MaxTimeout(::System::TimeSpan value);

  /// @brief Method set_AllowAutoRedirect, addr 0x1fe1af8, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method set_AuthenticationRegion, addr 0x1fe1838, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthenticationRegion(::StringW value);

  /// @brief Method set_AuthenticationServiceName, addr 0x1fe1848, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthenticationServiceName(::StringW value);

  /// @brief Method set_BufferSize, addr 0x1fe1ac4, size 0x8, virtual false, abstract: false, final false
  inline void set_BufferSize(int32_t value);

  /// @brief Method set_CacheHttpClient, addr 0x1fe2924, size 0xc, virtual false, abstract: false, final false
  inline void set_CacheHttpClient(bool value);

  /// @brief Method set_DisableHostPrefixInjection, addr 0x1fe2708, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableHostPrefixInjection(bool value);

  /// @brief Method set_DisableLogging, addr 0x1fe1b20, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableLogging(bool value);

  /// @brief Method set_EndpointDiscoveryCacheLimit, addr 0x1fe2830, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointDiscoveryCacheLimit(int32_t value);

  /// @brief Method set_EndpointDiscoveryEnabled, addr 0x1fe27c0, size 0x68, virtual false, abstract: false, final false
  inline void set_EndpointDiscoveryEnabled(bool value);

  /// @brief Method set_FastFailRequests, addr 0x1fe28a8, size 0xc, virtual false, abstract: false, final false
  inline void set_FastFailRequests(bool value);

  /// @brief Method set_HttpClientCacheSize, addr 0x1fe2a44, size 0x68, virtual false, abstract: false, final false
  inline void set_HttpClientCacheSize(int32_t value);

  /// @brief Method set_HttpClientFactory, addr 0x1fe2c44, size 0x8, virtual false, abstract: false, final false
  inline void set_HttpClientFactory(::Amazon::Runtime::HttpClientFactory* value);

  /// @brief Method set_LogMetrics, addr 0x1fe1b0c, size 0xc, virtual false, abstract: false, final false
  inline void set_LogMetrics(bool value);

  /// @brief Method set_LogResponse, addr 0x1fe1a9c, size 0xc, virtual false, abstract: false, final false
  inline void set_LogResponse(bool value);

  /// @brief Method set_MaxConnectionsPerServer, addr 0x1fe2c34, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxConnectionsPerServer(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MaxErrorRetry, addr 0x1fe19f0, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxErrorRetry(int32_t value);

  /// @brief Method set_ProgressUpdateInterval, addr 0x1fe1ad4, size 0x8, virtual false, abstract: false, final false
  inline void set_ProgressUpdateInterval(int64_t value);

  /// @brief Method set_ProxyCredentials, addr 0x1fe1c64, size 0x8, virtual false, abstract: false, final false
  inline void set_ProxyCredentials(::System::Net::ICredentials* value);

  /// @brief Method set_ProxyHost, addr 0x1fde674, size 0xa4, virtual false, abstract: false, final false
  inline void set_ProxyHost(::StringW value);

  /// @brief Method set_ProxyPort, addr 0x1fde718, size 0xa0, virtual false, abstract: false, final false
  inline void set_ProxyPort(int32_t value);

  /// @brief Method set_ReadEntireResponse, addr 0x1fe1ab0, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadEntireResponse(bool value);

  /// @brief Method set_ReadWriteTimeout, addr 0x1fe2ab8, size 0x70, virtual false, abstract: false, final false
  inline void set_ReadWriteTimeout(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_RegionEndpoint, addr 0x1fde65c, size 0x18, virtual false, abstract: false, final false
  inline void set_RegionEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_ResignRetries, addr 0x1fe1ae4, size 0xc, virtual false, abstract: false, final false
  inline void set_ResignRetries(bool value);

  /// @brief Method set_RetryMode, addr 0x1fe2838, size 0x68, virtual false, abstract: false, final false
  inline void set_RetryMode(::Amazon::Runtime::RequestRetryMode value);

  /// @brief Method set_ServiceURL, addr 0x1fe1628, size 0x10, virtual false, abstract: false, final false
  inline void set_ServiceURL(::StringW value);

  /// @brief Method set_SignatureMethod, addr 0x1fe1538, size 0x8, virtual false, abstract: false, final false
  inline void set_SignatureMethod(::Amazon::Runtime::SigningAlgorithm value);

  /// @brief Method set_SignatureVersion, addr 0x1fe1548, size 0x8, virtual false, abstract: false, final false
  inline void set_SignatureVersion(::StringW value);

  /// @brief Method set_ThrottleRetries, addr 0x1fe2010, size 0xc, virtual false, abstract: false, final false
  inline void set_ThrottleRetries(bool value);

  /// @brief Method set_Timeout, addr 0x1fe1db0, size 0x70, virtual false, abstract: false, final false
  inline void set_Timeout(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_UseAlternateUserAgentHeader, addr 0x1fe1558, size 0xc, virtual false, abstract: false, final false
  inline void set_UseAlternateUserAgentHeader(bool value);

  /// @brief Method set_UseDualstackEndpoint, addr 0x1fe1ffc, size 0xc, virtual false, abstract: false, final false
  inline void set_UseDualstackEndpoint(bool value);

  /// @brief Method set_UseHttp, addr 0x1fe1640, size 0xc, virtual false, abstract: false, final false
  inline void set_UseHttp(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientConfig(ClientConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientConfig(ClientConfig const&) = delete;

  /// @brief Field regionEndpoint, offset: 0x10, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ___regionEndpoint;

  /// @brief Field probeForRegionEndpoint, offset: 0x18, size: 0x1, def value: None
  bool ___probeForRegionEndpoint;

  /// @brief Field throttleRetries, offset: 0x19, size: 0x1, def value: None
  bool ___throttleRetries;

  /// @brief Field useHttp, offset: 0x1a, size: 0x1, def value: None
  bool ___useHttp;

  /// @brief Field useAlternateUserAgentHeader, offset: 0x1b, size: 0x1, def value: None
  bool ___useAlternateUserAgentHeader;

  /// @brief Field serviceURL, offset: 0x20, size: 0x8, def value: None
  ::StringW ___serviceURL;

  /// @brief Field authRegion, offset: 0x28, size: 0x8, def value: None
  ::StringW ___authRegion;

  /// @brief Field authServiceName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___authServiceName;

  /// @brief Field signatureVersion, offset: 0x38, size: 0x8, def value: None
  ::StringW ___signatureVersion;

  /// @brief Field signatureMethod, offset: 0x40, size: 0x4, def value: None
  ::Amazon::Runtime::SigningAlgorithm ___signatureMethod;

  /// @brief Field readEntireResponse, offset: 0x44, size: 0x1, def value: None
  bool ___readEntireResponse;

  /// @brief Field logResponse, offset: 0x45, size: 0x1, def value: None
  bool ___logResponse;

  /// @brief Field bufferSize, offset: 0x48, size: 0x4, def value: None
  int32_t ___bufferSize;

  /// @brief Field progressUpdateInterval, offset: 0x50, size: 0x8, def value: None
  int64_t ___progressUpdateInterval;

  /// @brief Field resignRetries, offset: 0x58, size: 0x1, def value: None
  bool ___resignRetries;

  /// @brief Field proxyCredentials, offset: 0x60, size: 0x8, def value: None
  ::System::Net::ICredentials* ___proxyCredentials;

  /// @brief Field logMetrics, offset: 0x68, size: 0x1, def value: None
  bool ___logMetrics;

  /// @brief Field disableLogging, offset: 0x69, size: 0x1, def value: None
  bool ___disableLogging;

  /// @brief Field timeout, offset: 0x70, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ___timeout;

  /// @brief Field allowAutoRedirect, offset: 0x80, size: 0x1, def value: None
  bool ___allowAutoRedirect;

  /// @brief Field useDualstackEndpoint, offset: 0x81, size: 0x1, def value: None
  bool ___useDualstackEndpoint;

  /// @brief Field readWriteTimeout, offset: 0x88, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ___readWriteTimeout;

  /// @brief Field disableHostPrefixInjection, offset: 0x98, size: 0x1, def value: None
  bool ___disableHostPrefixInjection;

  /// @brief Field endpointDiscoveryEnabled, offset: 0x99, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___endpointDiscoveryEnabled;

  /// @brief Field endpointDiscoveryCacheLimit, offset: 0x9c, size: 0x4, def value: None
  int32_t ___endpointDiscoveryCacheLimit;

  /// @brief Field retryMode, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> ___retryMode;

  /// @brief Field maxRetries, offset: 0xa8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ___maxRetries;

  /// @brief Field <FastFailRequests>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____FastFailRequests_k__BackingField;

  /// @brief Field <CacheHttpClient>k__BackingField, offset: 0xb1, size: 0x1, def value: None
  bool ____CacheHttpClient_k__BackingField;

  /// @brief Field _httpClientCacheSize, offset: 0xb4, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____httpClientCacheSize;

  /// @brief Field proxy, offset: 0xc0, size: 0x8, def value: None
  ::System::Net::IWebProxy* ___proxy;

  /// @brief Field proxyHost, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___proxyHost;

  /// @brief Field proxyPort, offset: 0xd0, size: 0x4, def value: None
  int32_t ___proxyPort;

  /// @brief Field <MaxConnectionsPerServer>k__BackingField, offset: 0xd4, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaxConnectionsPerServer_k__BackingField;

  /// @brief Field <HttpClientFactory>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::Amazon::Runtime::HttpClientFactory* ____HttpClientFactory_k__BackingField;

  /// @brief Field MaxRetriesDefault offset 0xffffffff size 0x4
  static constexpr int32_t MaxRetriesDefault{ static_cast<int32_t>(0x2) };

  /// @brief Field MaxRetriesLegacyDefault offset 0xffffffff size 0x4
  static constexpr int32_t MaxRetriesLegacyDefault{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ClientConfig, 0xe8>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___regionEndpoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___probeForRegionEndpoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___throttleRetries) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___useHttp) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___useAlternateUserAgentHeader) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___serviceURL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___authRegion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___authServiceName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___signatureVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___signatureMethod) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___readEntireResponse) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___logResponse) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___bufferSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___progressUpdateInterval) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___resignRetries) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___proxyCredentials) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___logMetrics) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___disableLogging) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___timeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___allowAutoRedirect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___useDualstackEndpoint) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___readWriteTimeout) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___disableHostPrefixInjection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___endpointDiscoveryEnabled) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___endpointDiscoveryCacheLimit) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___retryMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___maxRetries) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ____FastFailRequests_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ____CacheHttpClient_k__BackingField) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ____httpClientCacheSize) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___proxy) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___proxyHost) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ___proxyPort) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ____MaxConnectionsPerServer_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::ClientConfig, ____HttpClientFactory_k__BackingField) == 0xe0, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ClientConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ClientConfig*, "Amazon.Runtime", "ClientConfig");
