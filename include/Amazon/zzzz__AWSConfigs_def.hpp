#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/zzzz__LoggingOptions_def.hpp"
#include "Amazon/zzzz__ResponseLoggingOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSConfigs)
namespace Amazon::Runtime {
class HttpClientFactory;
}
namespace Amazon::Util::Internal {
class RootConfig;
}
namespace Amazon::Util {
class CSMConfig;
}
namespace Amazon::Util {
class LoggingConfig;
}
namespace Amazon::Util {
class ProxyConfig;
}
namespace Amazon {
struct LoggingOptions;
}
namespace Amazon {
class RegionEndpoint;
}
namespace Amazon {
struct ResponseLoggingOption;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Diagnostics {
class TraceListener;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon {
class AWSConfigs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::AWSConfigs);
// Type: Amazon::AWSConfigs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::Amazon::AWSConfigs*
class CORDL_TYPE AWSConfigs : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ClockOffset>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ClockOffset_k__BackingField, put = setStaticF__ClockOffset_k__BackingField))::System::TimeSpan _ClockOffset_k__BackingField;

  /// @brief Field <HttpClientFactory>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__HttpClientFactory_k__BackingField,
                             put = setStaticF__HttpClientFactory_k__BackingField))::Amazon::Runtime::HttpClientFactory* _HttpClientFactory_k__BackingField;

  /// @brief Field _awsAccountsLocation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__awsAccountsLocation, put = setStaticF__awsAccountsLocation))::StringW _awsAccountsLocation;

  /// @brief Field _awsProfileName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__awsProfileName, put = setStaticF__awsProfileName))::StringW _awsProfileName;

  /// @brief Field _awsRegion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__awsRegion, put = setStaticF__awsRegion))::StringW _awsRegion;

  /// @brief Field _endpointDefinition, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__endpointDefinition, put = setStaticF__endpointDefinition))::StringW _endpointDefinition;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field _logMetrics, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__logMetrics, put = setStaticF__logMetrics)) bool _logMetrics;

  /// @brief Field _logging, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__logging, put = setStaticF__logging))::Amazon::LoggingOptions _logging;

  /// @brief Field _responseLogging, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__responseLogging, put = setStaticF__responseLogging))::Amazon::ResponseLoggingOption _responseLogging;

  /// @brief Field _rootConfig, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__rootConfig, put = setStaticF__rootConfig))::Amazon::Util::Internal::RootConfig* _rootConfig;

  /// @brief Field _traceListeners, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF__traceListeners,
      put = setStaticF__traceListeners))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>* _traceListeners;

  /// @brief Field _useSdkCache, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__useSdkCache, put = setStaticF__useSdkCache)) bool _useSdkCache;

  /// @brief Field configPresent, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_configPresent, put = setStaticF_configPresent)) bool configPresent;

  /// @brief Field mPropertyChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mPropertyChanged, put = setStaticF_mPropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* mPropertyChanged;

  /// @brief Field propertyChangedLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_propertyChangedLock, put = setStaticF_propertyChangedLock))::System::Object* propertyChangedLock;

  /// @brief Field standardConfigs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_standardConfigs, put = setStaticF_standardConfigs))::System::Collections::Generic::List_1<::StringW>* standardConfigs;

  /// @brief Field utcNowSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utcNowSource, put = setStaticF_utcNowSource))::System::Func_1<::System::DateTime>* utcNowSource;

  /// @brief Field validSeparators, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_validSeparators, put = setStaticF_validSeparators))::ArrayW<char16_t, ::Array<char16_t>*> validSeparators;

  /// @brief Method AddTraceListener, addr 0x21f2d44, size 0x3a0, virtual false, abstract: false, final false
  static inline void AddTraceListener(::StringW source, ::System::Diagnostics::TraceListener* listener);

  /// @brief Method GetConfig, addr 0x21f2148, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetConfig(::StringW name);

  /// @brief Method GetConfigBool, addr 0x21f2b90, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetConfigBool(::StringW name, bool defaultValue);

  /// @brief Method GetConfigEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetConfigEnum(::StringW name);

  /// @brief Method GetLoggingSetting, addr 0x21f20bc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Amazon::LoggingOptions GetLoggingSetting();

  /// @brief Method GetUtcNow, addr 0x21f2c38, size 0x50, virtual false, abstract: false, final false
  static inline ::System::DateTime GetUtcNow();

  /// @brief Method OnPropertyChanged, addr 0x21f2adc, size 0xb4, virtual false, abstract: false, final false
  static inline void OnPropertyChanged(::StringW name);

  /// @brief Method ParseEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ParseEnum(::StringW value);

  /// @brief Method RemoveTraceListener, addr 0x21f30e4, size 0x46c, virtual false, abstract: false, final false
  static inline void RemoveTraceListener(::StringW source, ::StringW name);

  /// @brief Method TraceListeners, addr 0x21f3550, size 0x1b4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Diagnostics::TraceListener*, ::Array<::System::Diagnostics::TraceListener*>*> TraceListeners(::StringW source);

  /// @brief Method TryParseEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParseEnum(::StringW value, ByRef<T> result);

  /// @brief Method XmlSectionExists, addr 0x21f2c88, size 0x8, virtual false, abstract: false, final false
  static inline bool XmlSectionExists(::StringW sectionName);

  /// @brief Method add_PropertyChanged, addr 0x21f27dc, size 0x180, virtual false, abstract: false, final false
  static inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  static inline ::System::TimeSpan getStaticF__ClockOffset_k__BackingField();

  static inline ::Amazon::Runtime::HttpClientFactory* getStaticF__HttpClientFactory_k__BackingField();

  static inline ::StringW getStaticF__awsAccountsLocation();

  static inline ::StringW getStaticF__awsProfileName();

  static inline ::StringW getStaticF__awsRegion();

  static inline ::StringW getStaticF__endpointDefinition();

  static inline ::System::Object* getStaticF__lock();

  static inline bool getStaticF__logMetrics();

  static inline ::Amazon::LoggingOptions getStaticF__logging();

  static inline ::Amazon::ResponseLoggingOption getStaticF__responseLogging();

  static inline ::Amazon::Util::Internal::RootConfig* getStaticF__rootConfig();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>* getStaticF__traceListeners();

  static inline bool getStaticF__useSdkCache();

  static inline bool getStaticF_configPresent();

  static inline ::System::ComponentModel::PropertyChangedEventHandler* getStaticF_mPropertyChanged();

  static inline ::System::Object* getStaticF_propertyChangedLock();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_standardConfigs();

  static inline ::System::Func_1<::System::DateTime>* getStaticF_utcNowSource();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_validSeparators();

  /// @brief Method get_AWSProfileName, addr 0x21f1dd0, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AWSProfileName();

  /// @brief Method get_AWSProfilesLocation, addr 0x21f1e9c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AWSProfilesLocation();

  /// @brief Method get_AWSRegion, addr 0x21f1d04, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AWSRegion();

  /// @brief Method get_CSMConfig, addr 0x21f2710, size 0x64, virtual false, abstract: false, final false
  static inline ::Amazon::Util::CSMConfig* get_CSMConfig();

  /// @brief Method get_ClockOffset, addr 0x21f1c50, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_ClockOffset();

  /// @brief Method get_CorrectForClockSkew, addr 0x21f1b80, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CorrectForClockSkew();

  /// @brief Method get_EndpointDefinition, addr 0x21f230c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_EndpointDefinition();

  /// @brief Method get_HttpClientFactory, addr 0x21f2c90, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::HttpClientFactory* get_HttpClientFactory();

  /// @brief Method get_LogMetrics, addr 0x21f222c, size 0x6c, virtual false, abstract: false, final false
  static inline bool get_LogMetrics();

  /// @brief Method get_Logging, addr 0x21f1f68, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::LoggingOptions get_Logging();

  /// @brief Method get_LoggingConfig, addr 0x21f24a8, size 0x64, virtual false, abstract: false, final false
  static inline ::Amazon::Util::LoggingConfig* get_LoggingConfig();

  /// @brief Method get_ManualClockCorrection, addr 0x21f1ac8, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> get_ManualClockCorrection();

  /// @brief Method get_ProxyConfig, addr 0x21f250c, size 0x64, virtual false, abstract: false, final false
  static inline ::Amazon::Util::ProxyConfig* get_ProxyConfig();

  /// @brief Method get_RegionEndpoint, addr 0x21f2640, size 0x64, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_ResponseLogging, addr 0x21f2150, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::ResponseLoggingOption get_ResponseLogging();

  /// @brief Method get_UseAlternateUserAgentHeader, addr 0x21f2570, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseAlternateUserAgentHeader();

  /// @brief Method get_UseSdkCache, addr 0x21f23d8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseSdkCache();

  /// @brief Method remove_PropertyChanged, addr 0x21f295c, size 0x180, virtual false, abstract: false, final false
  static inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  static inline void setStaticF__ClockOffset_k__BackingField(::System::TimeSpan value);

  static inline void setStaticF__HttpClientFactory_k__BackingField(::Amazon::Runtime::HttpClientFactory* value);

  static inline void setStaticF__awsAccountsLocation(::StringW value);

  static inline void setStaticF__awsProfileName(::StringW value);

  static inline void setStaticF__awsRegion(::StringW value);

  static inline void setStaticF__endpointDefinition(::StringW value);

  static inline void setStaticF__lock(::System::Object* value);

  static inline void setStaticF__logMetrics(bool value);

  static inline void setStaticF__logging(::Amazon::LoggingOptions value);

  static inline void setStaticF__responseLogging(::Amazon::ResponseLoggingOption value);

  static inline void setStaticF__rootConfig(::Amazon::Util::Internal::RootConfig* value);

  static inline void setStaticF__traceListeners(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::System::Diagnostics::TraceListener*>*>* value);

  static inline void setStaticF__useSdkCache(bool value);

  static inline void setStaticF_configPresent(bool value);

  static inline void setStaticF_mPropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  static inline void setStaticF_propertyChangedLock(::System::Object* value);

  static inline void setStaticF_standardConfigs(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_utcNowSource(::System::Func_1<::System::DateTime>* value);

  static inline void setStaticF_validSeparators(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method set_AWSProfileName, addr 0x21f1e34, size 0x68, virtual false, abstract: false, final false
  static inline void set_AWSProfileName(::StringW value);

  /// @brief Method set_AWSProfilesLocation, addr 0x21f1f00, size 0x68, virtual false, abstract: false, final false
  static inline void set_AWSProfilesLocation(::StringW value);

  /// @brief Method set_AWSRegion, addr 0x21f1d68, size 0x68, virtual false, abstract: false, final false
  static inline void set_AWSRegion(::StringW value);

  /// @brief Method set_CSMConfig, addr 0x21f2774, size 0x68, virtual false, abstract: false, final false
  static inline void set_CSMConfig(::Amazon::Util::CSMConfig* value);

  /// @brief Method set_ClockOffset, addr 0x21f1ca8, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ClockOffset(::System::TimeSpan value);

  /// @brief Method set_CorrectForClockSkew, addr 0x21f1be4, size 0x6c, virtual false, abstract: false, final false
  static inline void set_CorrectForClockSkew(bool value);

  /// @brief Method set_EndpointDefinition, addr 0x21f2370, size 0x68, virtual false, abstract: false, final false
  static inline void set_EndpointDefinition(::StringW value);

  /// @brief Method set_HttpClientFactory, addr 0x21f2ce8, size 0x5c, virtual false, abstract: false, final false
  static inline void set_HttpClientFactory(::Amazon::Runtime::HttpClientFactory* value);

  /// @brief Method set_LogMetrics, addr 0x21f2298, size 0x74, virtual false, abstract: false, final false
  static inline void set_LogMetrics(bool value);

  /// @brief Method set_Logging, addr 0x21f1fd4, size 0x70, virtual false, abstract: false, final false
  static inline void set_Logging(::Amazon::LoggingOptions value);

  /// @brief Method set_ManualClockCorrection, addr 0x21f1b18, size 0x68, virtual false, abstract: false, final false
  static inline void set_ManualClockCorrection(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method set_RegionEndpoint, addr 0x21f26a4, size 0x6c, virtual false, abstract: false, final false
  static inline void set_RegionEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_ResponseLogging, addr 0x21f21bc, size 0x70, virtual false, abstract: false, final false
  static inline void set_ResponseLogging(::Amazon::ResponseLoggingOption value);

  /// @brief Method set_UseAlternateUserAgentHeader, addr 0x21f25d4, size 0x6c, virtual false, abstract: false, final false
  static inline void set_UseAlternateUserAgentHeader(bool value);

  /// @brief Method set_UseSdkCache, addr 0x21f243c, size 0x6c, virtual false, abstract: false, final false
  static inline void set_UseSdkCache(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSConfigs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSConfigs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSConfigs(AWSConfigs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSConfigs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSConfigs(AWSConfigs const&) = delete;

  /// @brief Field AWSProfileNameKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSProfileNameKey{ u"AWSProfileName" };

  /// @brief Field AWSProfilesLocationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSProfilesLocationKey{ u"AWSProfilesLocation" };

  /// @brief Field AWSRegionKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSRegionKey{ u"AWSRegion" };

  /// @brief Field EndpointDefinitionKey offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointDefinitionKey{ u"AWSEndpointDefinition" };

  /// @brief Field LogMetricsKey offset 0xffffffff size 0x8
  static constexpr ::ConstString LogMetricsKey{ u"AWSLogMetrics" };

  /// @brief Field LoggingDestinationProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString LoggingDestinationProperty{ u"LogTo" };

  /// @brief Field LoggingKey offset 0xffffffff size 0x8
  static constexpr ::ConstString LoggingKey{ u"AWSLogging" };

  /// @brief Field ResponseLoggingKey offset 0xffffffff size 0x8
  static constexpr ::ConstString ResponseLoggingKey{ u"AWSResponseLogging" };

  /// @brief Field UseSdkCacheKey offset 0xffffffff size 0x8
  static constexpr ::ConstString UseSdkCacheKey{ u"AWSCache" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::AWSConfigs, 0x10>, "Size mismatch!");

} // namespace Amazon
NEED_NO_BOX(::Amazon::AWSConfigs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::AWSConfigs*, "Amazon", "AWSConfigs");
