#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IClientConfig)
namespace Amazon::Runtime {
class HttpClientFactory;
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
class IClientConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IClientConfig);
// Type: Amazon.Runtime::IClientConfig
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IClientConfig*
class CORDL_TYPE IClientConfig {
public:
  // Declarations
  __declspec(property(get = get_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(get = get_AuthenticationRegion))::StringW AuthenticationRegion;

  __declspec(property(get = get_AuthenticationServiceName))::StringW AuthenticationServiceName;

  __declspec(property(get = get_BufferSize)) int32_t BufferSize;

  __declspec(property(get = get_CacheHttpClient)) bool CacheHttpClient;

  __declspec(property(get = get_ClockOffset))::System::TimeSpan ClockOffset;

  __declspec(property(get = get_CorrectedUtcNow))::System::DateTime CorrectedUtcNow;

  __declspec(property(get = get_DisableHostPrefixInjection)) bool DisableHostPrefixInjection;

  __declspec(property(get = get_DisableLogging)) bool DisableLogging;

  __declspec(property(get = get_EndpointDiscoveryCacheLimit)) int32_t EndpointDiscoveryCacheLimit;

  __declspec(property(get = get_EndpointDiscoveryEnabled)) bool EndpointDiscoveryEnabled;

  __declspec(property(get = get_FastFailRequests)) bool FastFailRequests;

  __declspec(property(get = get_HttpClientCacheSize)) int32_t HttpClientCacheSize;

  __declspec(property(get = get_HttpClientFactory))::Amazon::Runtime::HttpClientFactory* HttpClientFactory;

  __declspec(property(get = get_IsMaxErrorRetrySet)) bool IsMaxErrorRetrySet;

  __declspec(property(get = get_LogMetrics)) bool LogMetrics;

  __declspec(property(get = get_LogResponse)) bool LogResponse;

  __declspec(property(get = get_MaxConnectionsPerServer))::System::Nullable_1<int32_t> MaxConnectionsPerServer;

  __declspec(property(get = get_MaxErrorRetry)) int32_t MaxErrorRetry;

  __declspec(property(get = get_ProgressUpdateInterval)) int64_t ProgressUpdateInterval;

  __declspec(property(get = get_ProxyCredentials))::System::Net::ICredentials* ProxyCredentials;

  __declspec(property(get = get_ProxyHost))::StringW ProxyHost;

  __declspec(property(get = get_ProxyPort)) int32_t ProxyPort;

  __declspec(property(get = get_ReadEntireResponse)) bool ReadEntireResponse;

  __declspec(property(get = get_RegionEndpoint))::Amazon::RegionEndpoint* RegionEndpoint;

  __declspec(property(get = get_RegionEndpointServiceName))::StringW RegionEndpointServiceName;

  __declspec(property(get = get_ResignRetries)) bool ResignRetries;

  __declspec(property(get = get_RetryMode))::Amazon::Runtime::RequestRetryMode RetryMode;

  __declspec(property(get = get_ServiceURL))::StringW ServiceURL;

  __declspec(property(get = get_ServiceVersion))::StringW ServiceVersion;

  __declspec(property(get = get_SignatureMethod))::Amazon::Runtime::SigningAlgorithm SignatureMethod;

  __declspec(property(get = get_SignatureVersion))::StringW SignatureVersion;

  __declspec(property(get = get_ThrottleRetries)) bool ThrottleRetries;

  __declspec(property(get = get_Timeout))::System::Nullable_1<::System::TimeSpan> Timeout;

  __declspec(property(get = get_UseAlternateUserAgentHeader)) bool UseAlternateUserAgentHeader;

  __declspec(property(get = get_UseDualstackEndpoint)) bool UseDualstackEndpoint;

  __declspec(property(get = get_UseHttp)) bool UseHttp;

  __declspec(property(get = get_UserAgent))::StringW UserAgent;

  /// @brief Method DetermineServiceURL, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW DetermineServiceURL();

  /// @brief Method GetWebProxy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::IWebProxy* GetWebProxy();

  /// @brief Method Validate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Validate();

  /// @brief Method get_AllowAutoRedirect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_AllowAutoRedirect();

  /// @brief Method get_AuthenticationRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AuthenticationRegion();

  /// @brief Method get_AuthenticationServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AuthenticationServiceName();

  /// @brief Method get_BufferSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_BufferSize();

  /// @brief Method get_CacheHttpClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CacheHttpClient();

  /// @brief Method get_ClockOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan get_ClockOffset();

  /// @brief Method get_CorrectedUtcNow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime get_CorrectedUtcNow();

  /// @brief Method get_DisableHostPrefixInjection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_DisableHostPrefixInjection();

  /// @brief Method get_DisableLogging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_DisableLogging();

  /// @brief Method get_EndpointDiscoveryCacheLimit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_EndpointDiscoveryCacheLimit();

  /// @brief Method get_EndpointDiscoveryEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_EndpointDiscoveryEnabled();

  /// @brief Method get_FastFailRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_FastFailRequests();

  /// @brief Method get_HttpClientCacheSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_HttpClientCacheSize();

  /// @brief Method get_HttpClientFactory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::HttpClientFactory* get_HttpClientFactory();

  /// @brief Method get_IsMaxErrorRetrySet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsMaxErrorRetrySet();

  /// @brief Method get_LogMetrics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_LogMetrics();

  /// @brief Method get_LogResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_LogResponse();

  /// @brief Method get_MaxConnectionsPerServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Nullable_1<int32_t> get_MaxConnectionsPerServer();

  /// @brief Method get_MaxErrorRetry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_MaxErrorRetry();

  /// @brief Method get_ProgressUpdateInterval, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_ProgressUpdateInterval();

  /// @brief Method get_ProxyCredentials, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Net::ICredentials* get_ProxyCredentials();

  /// @brief Method get_ProxyHost, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ProxyHost();

  /// @brief Method get_ProxyPort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ProxyPort();

  /// @brief Method get_ReadEntireResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ReadEntireResponse();

  /// @brief Method get_RegionEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::RegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_RegionEndpointServiceName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RegionEndpointServiceName();

  /// @brief Method get_ResignRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ResignRetries();

  /// @brief Method get_RetryMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::RequestRetryMode get_RetryMode();

  /// @brief Method get_ServiceURL, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ServiceURL();

  /// @brief Method get_ServiceVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ServiceVersion();

  /// @brief Method get_SignatureMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::SigningAlgorithm get_SignatureMethod();

  /// @brief Method get_SignatureVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_SignatureVersion();

  /// @brief Method get_ThrottleRetries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ThrottleRetries();

  /// @brief Method get_Timeout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_Timeout();

  /// @brief Method get_UseAlternateUserAgentHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseAlternateUserAgentHeader();

  /// @brief Method get_UseDualstackEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseDualstackEndpoint();

  /// @brief Method get_UseHttp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_UseHttp();

  /// @brief Method get_UserAgent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_UserAgent();

  // Ctor Parameters [CppParam { name: "", ty: "IClientConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IClientConfig(IClientConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IClientConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IClientConfig(IClientConfig const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IClientConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IClientConfig*, "Amazon.Runtime", "IClientConfig");
