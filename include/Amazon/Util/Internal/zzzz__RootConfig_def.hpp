#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RootConfig)
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
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class RootConfig;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::RootConfig);
// Type: Amazon.Util.Internal::RootConfig
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::RootConfig*
class CORDL_TYPE RootConfig : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ApplicationName, put = set_ApplicationName))::StringW ApplicationName;

  __declspec(property(get = get_CSMClientId, put = set_CSMClientId))::StringW CSMClientId;

  __declspec(property(get = get_CSMConfig, put = set_CSMConfig))::Amazon::Util::CSMConfig* CSMConfig;

  __declspec(property(get = get_CSMEnabled, put = set_CSMEnabled))::System::Nullable_1<bool> CSMEnabled;

  __declspec(property(get = get_CSMPort, put = set_CSMPort))::System::Nullable_1<int32_t> CSMPort;

  __declspec(property(get = get_CorrectForClockSkew, put = set_CorrectForClockSkew)) bool CorrectForClockSkew;

  __declspec(property(get = get_EndpointDefinition, put = set_EndpointDefinition))::StringW EndpointDefinition;

  __declspec(property(get = get_Logging, put = set_Logging))::Amazon::Util::LoggingConfig* Logging;

  __declspec(property(get = get_ProfileName, put = set_ProfileName))::StringW ProfileName;

  __declspec(property(get = get_ProfilesLocation, put = set_ProfilesLocation))::StringW ProfilesLocation;

  __declspec(property(get = get_Proxy, put = set_Proxy))::Amazon::Util::ProxyConfig* Proxy;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_RegionEndpoint, put = set_RegionEndpoint))::Amazon::RegionEndpoint* RegionEndpoint;

  __declspec(property(get = get_ServiceSections, put = set_ServiceSections))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* ServiceSections;

  __declspec(property(get = get_UseAlternateUserAgentHeader, put = set_UseAlternateUserAgentHeader)) bool UseAlternateUserAgentHeader;

  __declspec(property(get = get_UseSdkCache, put = set_UseSdkCache)) bool UseSdkCache;

  /// @brief Field <ApplicationName>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ApplicationName_k__BackingField, put = __cordl_internal_set__ApplicationName_k__BackingField))::StringW _ApplicationName_k__BackingField;

  /// @brief Field <CSMClientId>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMClientId_k__BackingField, put = __cordl_internal_set__CSMClientId_k__BackingField))::StringW _CSMClientId_k__BackingField;

  /// @brief Field <CSMConfig>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMConfig_k__BackingField, put = __cordl_internal_set__CSMConfig_k__BackingField))::Amazon::Util::CSMConfig* _CSMConfig_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset 0x58, size 0x2
  __declspec(property(get = __cordl_internal_get__CSMEnabled_k__BackingField, put = __cordl_internal_set__CSMEnabled_k__BackingField))::System::Nullable_1<bool> _CSMEnabled_k__BackingField;

  /// @brief Field <CSMPort>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__CSMPort_k__BackingField, put = __cordl_internal_set__CSMPort_k__BackingField))::System::Nullable_1<int32_t> _CSMPort_k__BackingField;

  /// @brief Field <CorrectForClockSkew>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__CorrectForClockSkew_k__BackingField, put = __cordl_internal_set__CorrectForClockSkew_k__BackingField)) bool _CorrectForClockSkew_k__BackingField;

  /// @brief Field <EndpointDefinition>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__EndpointDefinition_k__BackingField, put = __cordl_internal_set__EndpointDefinition_k__BackingField))::StringW _EndpointDefinition_k__BackingField;

  /// @brief Field <Logging>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Logging_k__BackingField, put = __cordl_internal_set__Logging_k__BackingField))::Amazon::Util::LoggingConfig* _Logging_k__BackingField;

  /// @brief Field <ProfileName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfileName_k__BackingField, put = __cordl_internal_set__ProfileName_k__BackingField))::StringW _ProfileName_k__BackingField;

  /// @brief Field <ProfilesLocation>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfilesLocation_k__BackingField, put = __cordl_internal_set__ProfilesLocation_k__BackingField))::StringW _ProfilesLocation_k__BackingField;

  /// @brief Field <Proxy>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Proxy_k__BackingField, put = __cordl_internal_set__Proxy_k__BackingField))::Amazon::Util::ProxyConfig* _Proxy_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <ServiceSections>k__BackingField, offset 0x70, size 0x8
  __declspec(
      property(get = __cordl_internal_get__ServiceSections_k__BackingField,
               put = __cordl_internal_set__ServiceSections_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* _ServiceSections_k__BackingField;

  /// @brief Field <UseAlternateUserAgentHeader>k__BackingField, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get__UseAlternateUserAgentHeader_k__BackingField,
                      put = __cordl_internal_set__UseAlternateUserAgentHeader_k__BackingField)) bool _UseAlternateUserAgentHeader_k__BackingField;

  /// @brief Field <UseSdkCache>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__UseSdkCache_k__BackingField, put = __cordl_internal_set__UseSdkCache_k__BackingField)) bool _UseSdkCache_k__BackingField;

  /// @brief Method Choose, addr 0x1fd7600, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW Choose(::StringW a, ::StringW b);

  /// @brief Method GetServiceSection, addr 0x1fd763c, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XElement* GetServiceSection(::StringW service);

  static inline ::Amazon::Util::Internal::RootConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__ApplicationName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ApplicationName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CSMClientId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CSMClientId_k__BackingField();

  constexpr ::Amazon::Util::CSMConfig*& __cordl_internal_get__CSMConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CSMConfig*> const& __cordl_internal_get__CSMConfig_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__CSMEnabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__CSMEnabled_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__CSMPort_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__CSMPort_k__BackingField();

  constexpr bool const& __cordl_internal_get__CorrectForClockSkew_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CorrectForClockSkew_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__EndpointDefinition_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EndpointDefinition_k__BackingField();

  constexpr ::Amazon::Util::LoggingConfig*& __cordl_internal_get__Logging_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::LoggingConfig*> const& __cordl_internal_get__Logging_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ProfileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProfilesLocation_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfilesLocation_k__BackingField();

  constexpr ::Amazon::Util::ProxyConfig*& __cordl_internal_get__Proxy_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::ProxyConfig*> const& __cordl_internal_get__Proxy_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>*& __cordl_internal_get__ServiceSections_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>*> const&
  __cordl_internal_get__ServiceSections_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__UseAlternateUserAgentHeader_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseAlternateUserAgentHeader_k__BackingField();

  constexpr bool const& __cordl_internal_get__UseSdkCache_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseSdkCache_k__BackingField();

  constexpr void __cordl_internal_set__ApplicationName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CSMClientId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CSMConfig_k__BackingField(::Amazon::Util::CSMConfig* value);

  constexpr void __cordl_internal_set__CSMEnabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__CSMPort_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__CorrectForClockSkew_k__BackingField(bool value);

  constexpr void __cordl_internal_set__EndpointDefinition_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Logging_k__BackingField(::Amazon::Util::LoggingConfig* value);

  constexpr void __cordl_internal_set__ProfileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProfilesLocation_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Proxy_k__BackingField(::Amazon::Util::ProxyConfig* value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ServiceSections_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* value);

  constexpr void __cordl_internal_set__UseAlternateUserAgentHeader_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UseSdkCache_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1fd74e0, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ApplicationName, addr 0x1fd74a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ApplicationName();

  /// @brief Method get_CSMClientId, addr 0x1fd74c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CSMClientId();

  /// @brief Method get_CSMConfig, addr 0x1fd7360, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::CSMConfig* get_CSMConfig();

  /// @brief Method get_CSMEnabled, addr 0x1fd74b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_CSMEnabled();

  /// @brief Method get_CSMPort, addr 0x1fd74d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_CSMPort();

  /// @brief Method get_CorrectForClockSkew, addr 0x1fd7478, size 0x8, virtual false, abstract: false, final false
  inline bool get_CorrectForClockSkew();

  /// @brief Method get_EndpointDefinition, addr 0x1fd7390, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EndpointDefinition();

  /// @brief Method get_Logging, addr 0x1fd7370, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::LoggingConfig* get_Logging();

  /// @brief Method get_ProfileName, addr 0x1fd73b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfileName();

  /// @brief Method get_ProfilesLocation, addr 0x1fd73c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfilesLocation();

  /// @brief Method get_Proxy, addr 0x1fd7380, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::ProxyConfig* get_Proxy();

  /// @brief Method get_Region, addr 0x1fd73a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_RegionEndpoint, addr 0x1fd73d0, size 0x7c, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_RegionEndpoint();

  /// @brief Method get_ServiceSections, addr 0x1fd762c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* get_ServiceSections();

  /// @brief Method get_UseAlternateUserAgentHeader, addr 0x1fd748c, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseAlternateUserAgentHeader();

  /// @brief Method get_UseSdkCache, addr 0x1fd7464, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseSdkCache();

  /// @brief Method set_ApplicationName, addr 0x1fd74a8, size 0x8, virtual false, abstract: false, final false
  inline void set_ApplicationName(::StringW value);

  /// @brief Method set_CSMClientId, addr 0x1fd74c8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMClientId(::StringW value);

  /// @brief Method set_CSMConfig, addr 0x1fd7368, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMConfig(::Amazon::Util::CSMConfig* value);

  /// @brief Method set_CSMEnabled, addr 0x1fd74b8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_CSMPort, addr 0x1fd74d8, size 0x8, virtual false, abstract: false, final false
  inline void set_CSMPort(::System::Nullable_1<int32_t> value);

  /// @brief Method set_CorrectForClockSkew, addr 0x1fd7480, size 0xc, virtual false, abstract: false, final false
  inline void set_CorrectForClockSkew(bool value);

  /// @brief Method set_EndpointDefinition, addr 0x1fd7398, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointDefinition(::StringW value);

  /// @brief Method set_Logging, addr 0x1fd7378, size 0x8, virtual false, abstract: false, final false
  inline void set_Logging(::Amazon::Util::LoggingConfig* value);

  /// @brief Method set_ProfileName, addr 0x1fd73b8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfileName(::StringW value);

  /// @brief Method set_ProfilesLocation, addr 0x1fd73c8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfilesLocation(::StringW value);

  /// @brief Method set_Proxy, addr 0x1fd7388, size 0x8, virtual false, abstract: false, final false
  inline void set_Proxy(::Amazon::Util::ProxyConfig* value);

  /// @brief Method set_Region, addr 0x1fd73a8, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_RegionEndpoint, addr 0x1fd744c, size 0x18, virtual false, abstract: false, final false
  inline void set_RegionEndpoint(::Amazon::RegionEndpoint* value);

  /// @brief Method set_ServiceSections, addr 0x1fd7634, size 0x8, virtual false, abstract: false, final false
  inline void set_ServiceSections(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* value);

  /// @brief Method set_UseAlternateUserAgentHeader, addr 0x1fd7494, size 0xc, virtual false, abstract: false, final false
  inline void set_UseAlternateUserAgentHeader(bool value);

  /// @brief Method set_UseSdkCache, addr 0x1fd746c, size 0xc, virtual false, abstract: false, final false
  inline void set_UseSdkCache(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RootConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RootConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RootConfig(RootConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RootConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootConfig(RootConfig const&) = delete;

  /// @brief Field <CSMConfig>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::CSMConfig* ____CSMConfig_k__BackingField;

  /// @brief Field <Logging>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Util::LoggingConfig* ____Logging_k__BackingField;

  /// @brief Field <Proxy>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Util::ProxyConfig* ____Proxy_k__BackingField;

  /// @brief Field <EndpointDefinition>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____EndpointDefinition_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field <ProfileName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____ProfileName_k__BackingField;

  /// @brief Field <ProfilesLocation>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____ProfilesLocation_k__BackingField;

  /// @brief Field <UseSdkCache>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____UseSdkCache_k__BackingField;

  /// @brief Field <CorrectForClockSkew>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____CorrectForClockSkew_k__BackingField;

  /// @brief Field <UseAlternateUserAgentHeader>k__BackingField, offset: 0x4a, size: 0x1, def value: None
  bool ____UseAlternateUserAgentHeader_k__BackingField;

  /// @brief Field <ApplicationName>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____ApplicationName_k__BackingField;

  /// @brief Field <CSMEnabled>k__BackingField, offset: 0x58, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____CSMEnabled_k__BackingField;

  /// @brief Field <CSMClientId>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____CSMClientId_k__BackingField;

  /// @brief Field <CSMPort>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____CSMPort_k__BackingField;

  /// @brief Field <ServiceSections>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Xml::Linq::XElement*>* ____ServiceSections_k__BackingField;

  /// @brief Field _rootAwsSectionName offset 0xffffffff size 0x8
  static constexpr ::ConstString _rootAwsSectionName{ u"aws" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::RootConfig, 0x78>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____CSMConfig_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____Logging_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____Proxy_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____EndpointDefinition_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____Region_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____ProfileName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____ProfilesLocation_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____UseSdkCache_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____CorrectForClockSkew_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____UseAlternateUserAgentHeader_k__BackingField) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____ApplicationName_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____CSMEnabled_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____CSMClientId_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____CSMPort_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::RootConfig, ____ServiceSections_k__BackingField) == 0x70, "Offset mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::RootConfig);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::RootConfig*, "Amazon.Util.Internal", "RootConfig");
