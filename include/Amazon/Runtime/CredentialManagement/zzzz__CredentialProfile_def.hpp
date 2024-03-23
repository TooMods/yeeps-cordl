#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RequestRetryMode_def.hpp"
#include "Amazon/Runtime/zzzz__S3UsEast1RegionalEndpointValue_def.hpp"
#include "Amazon/Runtime/zzzz__StsRegionalEndpointsValue_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialProfile)
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileOptions;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileStore;
}
namespace Amazon::Runtime::CredentialManagement {
class __CredentialProfile____c;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
struct RequestRetryMode;
}
namespace Amazon::Runtime {
struct S3UsEast1RegionalEndpointValue;
}
namespace Amazon::Runtime {
struct StsRegionalEndpointsValue;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class __CredentialProfile____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::CredentialProfile);
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::__CredentialProfile____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::CredentialProfile::<>c*
class CORDL_TYPE __CredentialProfile____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::CredentialManagement::__CredentialProfile____c* __9;

  /// @brief Field <>9__59_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__59_0, put = setStaticF___9__59_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__59_0;

  /// @brief Field <>9__59_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__59_1, put = setStaticF___9__59_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* __9__59_1;

  static inline ::Amazon::Runtime::CredentialManagement::__CredentialProfile____c* New_ctor();

  /// @brief Method <GetPropertiesString>b__59_0, addr 0x202a774, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetPropertiesString_b__59_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> p);

  /// @brief Method <GetPropertiesString>b__59_1, addr 0x202a7b0, size 0x74, virtual false, abstract: false, final false
  inline ::StringW _GetPropertiesString_b__59_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> p);

  /// @brief Method .ctor, addr 0x202a76c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::__CredentialProfile____c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__59_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* getStaticF___9__59_1();

  static inline void setStaticF___9(::Amazon::Runtime::CredentialManagement::__CredentialProfile____c* value);

  static inline void setStaticF___9__59_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

  static inline void setStaticF___9__59_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CredentialProfile____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfile____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CredentialProfile____c(__CredentialProfile____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CredentialProfile____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CredentialProfile____c(__CredentialProfile____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::__CredentialProfile____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
// Type: Amazon.Runtime.CredentialManagement::CredentialProfile
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::CredentialProfile*
class CORDL_TYPE CredentialProfile : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::CredentialManagement::__CredentialProfile____c;

  __declspec(property(get = get_CanCreateAWSCredentials)) bool CanCreateAWSCredentials;

  __declspec(property(get = get_CredentialDescription))::StringW CredentialDescription;

  __declspec(property(get = get_CredentialProfileStore, put = set_CredentialProfileStore))::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* CredentialProfileStore;

  __declspec(property(get = get_EndpointDiscoveryEnabled, put = set_EndpointDiscoveryEnabled))::System::Nullable_1<bool> EndpointDiscoveryEnabled;

  __declspec(property(get = get_IsCallbackRequired)) bool IsCallbackRequired;

  __declspec(property(get = get_MaxAttempts, put = set_MaxAttempts))::System::Nullable_1<int32_t> MaxAttempts;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Options, put = set_Options))::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* Options;

  __declspec(property(get = get_ProfileType))::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> ProfileType;

  __declspec(property(get = get_Properties, put = set_Properties))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Properties;

  __declspec(property(get = get_Region, put = set_Region))::Amazon::RegionEndpoint* Region;

  __declspec(property(get = get_RetryMode, put = set_RetryMode))::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> RetryMode;

  __declspec(property(get = get_S3RegionalEndpoint, put = set_S3RegionalEndpoint))::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> S3RegionalEndpoint;

  __declspec(property(get = get_S3UseArnRegion, put = set_S3UseArnRegion))::System::Nullable_1<bool> S3UseArnRegion;

  __declspec(property(get = get_StsRegionalEndpoints, put = set_StsRegionalEndpoints))::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> StsRegionalEndpoints;

  __declspec(property(get = get_UniqueKey, put = set_UniqueKey))::System::Nullable_1<::System::Guid> UniqueKey;

  /// @brief Field <CredentialProfileStore>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__CredentialProfileStore_k__BackingField,
                      put = __cordl_internal_set__CredentialProfileStore_k__BackingField))::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* _CredentialProfileStore_k__BackingField;

  /// @brief Field <EndpointDiscoveryEnabled>k__BackingField, offset 0x44, size 0x2
  __declspec(property(get = __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField,
                      put = __cordl_internal_set__EndpointDiscoveryEnabled_k__BackingField))::System::Nullable_1<bool> _EndpointDiscoveryEnabled_k__BackingField;

  /// @brief Field <MaxAttempts>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__MaxAttempts_k__BackingField, put = __cordl_internal_set__MaxAttempts_k__BackingField))::System::Nullable_1<int32_t> _MaxAttempts_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField))::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* _Options_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::Amazon::RegionEndpoint* _Region_k__BackingField;

  /// @brief Field <RetryMode>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryMode_k__BackingField,
                      put = __cordl_internal_set__RetryMode_k__BackingField))::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> _RetryMode_k__BackingField;

  /// @brief Field <S3RegionalEndpoint>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__S3RegionalEndpoint_k__BackingField,
                      put = __cordl_internal_set__S3RegionalEndpoint_k__BackingField))::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> _S3RegionalEndpoint_k__BackingField;

  /// @brief Field <S3UseArnRegion>k__BackingField, offset 0x46, size 0x2
  __declspec(property(get = __cordl_internal_get__S3UseArnRegion_k__BackingField,
                      put = __cordl_internal_set__S3UseArnRegion_k__BackingField))::System::Nullable_1<bool> _S3UseArnRegion_k__BackingField;

  /// @brief Field <StsRegionalEndpoints>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__StsRegionalEndpoints_k__BackingField,
                      put = __cordl_internal_set__StsRegionalEndpoints_k__BackingField))::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> _StsRegionalEndpoints_k__BackingField;

  /// @brief Field <UniqueKey>k__BackingField, offset 0x30, size 0x14
  __declspec(property(get = __cordl_internal_get__UniqueKey_k__BackingField, put = __cordl_internal_set__UniqueKey_k__BackingField))::System::Nullable_1<::System::Guid> _UniqueKey_k__BackingField;

  /// @brief Field _properties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _properties;

  /// @brief Method Equals, addr 0x202a034, size 0x484, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetAWSCredentials, addr 0x20297d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource);

  /// @brief Method GetAWSCredentials, addr 0x20297d8, size 0x6c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool nonCallbackOnly);

  /// @brief Method GetHashCode, addr 0x202a4b8, size 0x250, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPropertiesString, addr 0x2029844, size 0x240, virtual false, abstract: false, final false
  inline ::StringW GetPropertiesString();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfile* New_ctor(::StringW name, ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions);

  /// @brief Method ToString, addr 0x2029a84, size 0x5b0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*& __cordl_internal_get__CredentialProfileStore_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*> const& __cordl_internal_get__CredentialProfileStore_k__BackingField() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__EndpointDiscoveryEnabled_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MaxAttempts_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MaxAttempts_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get__Region_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> const& __cordl_internal_get__RetryMode_k__BackingField() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode>& __cordl_internal_get__RetryMode_k__BackingField();

  constexpr ::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> const& __cordl_internal_get__S3RegionalEndpoint_k__BackingField() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue>& __cordl_internal_get__S3RegionalEndpoint_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__S3UseArnRegion_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__S3UseArnRegion_k__BackingField();

  constexpr ::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> const& __cordl_internal_get__StsRegionalEndpoints_k__BackingField() const;

  constexpr ::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue>& __cordl_internal_get__StsRegionalEndpoints_k__BackingField();

  constexpr ::System::Nullable_1<::System::Guid> const& __cordl_internal_get__UniqueKey_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::Guid>& __cordl_internal_get__UniqueKey_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__properties() const;

  constexpr void __cordl_internal_set__CredentialProfileStore_k__BackingField(::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* value);

  constexpr void __cordl_internal_set__EndpointDiscoveryEnabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__MaxAttempts_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set__RetryMode_k__BackingField(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value);

  constexpr void __cordl_internal_set__S3RegionalEndpoint_k__BackingField(::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> value);

  constexpr void __cordl_internal_set__S3UseArnRegion_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__StsRegionalEndpoints_k__BackingField(::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> value);

  constexpr void __cordl_internal_set__UniqueKey_k__BackingField(::System::Nullable_1<::System::Guid> value);

  constexpr void __cordl_internal_set__properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x20296f8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* profileOptions);

  /// @brief Method get_CanCreateAWSCredentials, addr 0x20292f0, size 0x48, virtual false, abstract: false, final false
  inline bool get_CanCreateAWSCredentials();

  /// @brief Method get_CredentialDescription, addr 0x2029568, size 0x64, virtual false, abstract: false, final false
  inline ::StringW get_CredentialDescription();

  /// @brief Method get_CredentialProfileStore, addr 0x2029558, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* get_CredentialProfileStore();

  /// @brief Method get_EndpointDiscoveryEnabled, addr 0x2029470, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_EndpointDiscoveryEnabled();

  /// @brief Method get_IsCallbackRequired, addr 0x2029694, size 0x64, virtual false, abstract: false, final false
  inline bool get_IsCallbackRequired();

  /// @brief Method get_MaxAttempts, addr 0x20294c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxAttempts();

  /// @brief Method get_Name, addr 0x2029418, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Options, addr 0x2029428, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* get_Options();

  /// @brief Method get_ProfileType, addr 0x2027a44, size 0x58, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> get_ProfileType();

  /// @brief Method get_Properties, addr 0x20294d0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Properties();

  /// @brief Method get_Region, addr 0x2029438, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_Region();

  /// @brief Method get_RetryMode, addr 0x20294b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> get_RetryMode();

  /// @brief Method get_S3RegionalEndpoint, addr 0x20294a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> get_S3RegionalEndpoint();

  /// @brief Method get_S3UseArnRegion, addr 0x2029480, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_S3UseArnRegion();

  /// @brief Method get_StsRegionalEndpoints, addr 0x2029490, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> get_StsRegionalEndpoints();

  /// @brief Method get_UniqueKey, addr 0x2029448, size 0x14, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::Guid> get_UniqueKey();

  /// @brief Method set_CredentialProfileStore, addr 0x2029560, size 0x8, virtual false, abstract: false, final false
  inline void set_CredentialProfileStore(::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* value);

  /// @brief Method set_EndpointDiscoveryEnabled, addr 0x2029478, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointDiscoveryEnabled(::System::Nullable_1<bool> value);

  /// @brief Method set_MaxAttempts, addr 0x20294c8, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxAttempts(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Name, addr 0x2029420, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Options, addr 0x2029430, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* value);

  /// @brief Method set_Properties, addr 0x2029550, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Region, addr 0x2029440, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::Amazon::RegionEndpoint* value);

  /// @brief Method set_RetryMode, addr 0x20294b8, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryMode(::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> value);

  /// @brief Method set_S3RegionalEndpoint, addr 0x20294a8, size 0x8, virtual false, abstract: false, final false
  inline void set_S3RegionalEndpoint(::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> value);

  /// @brief Method set_S3UseArnRegion, addr 0x2029488, size 0x8, virtual false, abstract: false, final false
  inline void set_S3UseArnRegion(::System::Nullable_1<bool> value);

  /// @brief Method set_StsRegionalEndpoints, addr 0x2029498, size 0x8, virtual false, abstract: false, final false
  inline void set_StsRegionalEndpoints(::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> value);

  /// @brief Method set_UniqueKey, addr 0x202945c, size 0x14, virtual false, abstract: false, final false
  inline void set_UniqueKey(::System::Nullable_1<::System::Guid> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfile(CredentialProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfile(CredentialProfile const&) = delete;

  /// @brief Field _properties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____properties;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* ____Options_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ____Region_k__BackingField;

  /// @brief Field <UniqueKey>k__BackingField, offset: 0x30, size: 0x14, def value: None
  ::System::Nullable_1<::System::Guid> ____UniqueKey_k__BackingField;

  /// @brief Field <EndpointDiscoveryEnabled>k__BackingField, offset: 0x44, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____EndpointDiscoveryEnabled_k__BackingField;

  /// @brief Field <S3UseArnRegion>k__BackingField, offset: 0x46, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____S3UseArnRegion_k__BackingField;

  /// @brief Field <StsRegionalEndpoints>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<::Amazon::Runtime::StsRegionalEndpointsValue> ____StsRegionalEndpoints_k__BackingField;

  /// @brief Field <S3RegionalEndpoint>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<::Amazon::Runtime::S3UsEast1RegionalEndpointValue> ____S3RegionalEndpoint_k__BackingField;

  /// @brief Field <RetryMode>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Nullable_1<::Amazon::Runtime::RequestRetryMode> ____RetryMode_k__BackingField;

  /// @brief Field <MaxAttempts>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaxAttempts_k__BackingField;

  /// @brief Field <CredentialProfileStore>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* ____CredentialProfileStore_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::CredentialProfile, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____properties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____Options_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____Region_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____UniqueKey_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____EndpointDiscoveryEnabled_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____S3UseArnRegion_k__BackingField) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____StsRegionalEndpoints_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____S3RegionalEndpoint_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____RetryMode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____MaxAttempts_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfile, ____CredentialProfileStore_k__BackingField) == 0x68, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::CredentialProfile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::CredentialProfile*, "Amazon.Runtime.CredentialManagement", "CredentialProfile");
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::__CredentialProfile____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::__CredentialProfile____c*, "Amazon.Runtime.CredentialManagement", "CredentialProfile/<>c");
