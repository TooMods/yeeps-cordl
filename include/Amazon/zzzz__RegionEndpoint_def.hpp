#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegionEndpoint)
namespace Amazon::Internal {
class IRegionEndpointProvider;
}
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace Amazon {
class __RegionEndpoint__Endpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
// Forward declare root types
namespace Amazon {
class RegionEndpoint;
}
namespace Amazon {
class __RegionEndpoint__Endpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::RegionEndpoint);
MARK_REF_PTR_T(::Amazon::__RegionEndpoint__Endpoint);
// Type: ::Endpoint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::RegionEndpoint::Endpoint*
class CORDL_TYPE __RegionEndpoint__Endpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthRegion, put = set_AuthRegion))::StringW AuthRegion;

  __declspec(property(get = get_Hostname, put = set_Hostname))::StringW Hostname;

  __declspec(property(get = get_SignatureVersionOverride, put = set_SignatureVersionOverride))::StringW SignatureVersionOverride;

  /// @brief Field <AuthRegion>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AuthRegion_k__BackingField, put = __cordl_internal_set__AuthRegion_k__BackingField))::StringW _AuthRegion_k__BackingField;

  /// @brief Field <Hostname>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Hostname_k__BackingField, put = __cordl_internal_set__Hostname_k__BackingField))::StringW _Hostname_k__BackingField;

  /// @brief Field <SignatureVersionOverride>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SignatureVersionOverride_k__BackingField,
                      put = __cordl_internal_set__SignatureVersionOverride_k__BackingField))::StringW _SignatureVersionOverride_k__BackingField;

  static inline ::Amazon::__RegionEndpoint__Endpoint* New_ctor(::StringW hostname, ::StringW authregion, ::StringW signatureVersionOverride);

  /// @brief Method ToString, addr 0x21f5fb4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__AuthRegion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AuthRegion_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Hostname_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Hostname_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SignatureVersionOverride_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SignatureVersionOverride_k__BackingField();

  constexpr void __cordl_internal_set__AuthRegion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Hostname_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SignatureVersionOverride_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x21f5f58, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW hostname, ::StringW authregion, ::StringW signatureVersionOverride);

  /// @brief Method get_AuthRegion, addr 0x21f5fa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AuthRegion();

  /// @brief Method get_Hostname, addr 0x21f5f94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Hostname();

  /// @brief Method get_SignatureVersionOverride, addr 0x21f5fbc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SignatureVersionOverride();

  /// @brief Method set_AuthRegion, addr 0x21f5fac, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthRegion(::StringW value);

  /// @brief Method set_Hostname, addr 0x21f5f9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Hostname(::StringW value);

  /// @brief Method set_SignatureVersionOverride, addr 0x21f5fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_SignatureVersionOverride(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionEndpoint__Endpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpoint__Endpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionEndpoint__Endpoint(__RegionEndpoint__Endpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpoint__Endpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionEndpoint__Endpoint(__RegionEndpoint__Endpoint const&) = delete;

  /// @brief Field <Hostname>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Hostname_k__BackingField;

  /// @brief Field <AuthRegion>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AuthRegion_k__BackingField;

  /// @brief Field <SignatureVersionOverride>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____SignatureVersionOverride_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::__RegionEndpoint__Endpoint, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::__RegionEndpoint__Endpoint, ____Hostname_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::__RegionEndpoint__Endpoint, ____AuthRegion_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::__RegionEndpoint__Endpoint, ____SignatureVersionOverride_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon
// Type: Amazon::RegionEndpoint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon {
// Is value type: false
// CS Name: ::Amazon::RegionEndpoint*
class CORDL_TYPE RegionEndpoint : public ::System::Object {
public:
  // Declarations
  using Endpoint = ::Amazon::__RegionEndpoint__Endpoint;

  /// @brief Field AFSouth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AFSouth1, put = setStaticF_AFSouth1))::Amazon::RegionEndpoint* AFSouth1;

  /// @brief Field APEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APEast1, put = setStaticF_APEast1))::Amazon::RegionEndpoint* APEast1;

  /// @brief Field APNortheast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APNortheast1, put = setStaticF_APNortheast1))::Amazon::RegionEndpoint* APNortheast1;

  /// @brief Field APNortheast2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APNortheast2, put = setStaticF_APNortheast2))::Amazon::RegionEndpoint* APNortheast2;

  /// @brief Field APNortheast3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APNortheast3, put = setStaticF_APNortheast3))::Amazon::RegionEndpoint* APNortheast3;

  /// @brief Field APSouth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APSouth1, put = setStaticF_APSouth1))::Amazon::RegionEndpoint* APSouth1;

  /// @brief Field APSoutheast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APSoutheast1, put = setStaticF_APSoutheast1))::Amazon::RegionEndpoint* APSoutheast1;

  /// @brief Field APSoutheast2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_APSoutheast2, put = setStaticF_APSoutheast2))::Amazon::RegionEndpoint* APSoutheast2;

  /// @brief Field CACentral1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CACentral1, put = setStaticF_CACentral1))::Amazon::RegionEndpoint* CACentral1;

  /// @brief Field CNNorth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CNNorth1, put = setStaticF_CNNorth1))::Amazon::RegionEndpoint* CNNorth1;

  /// @brief Field CNNorthWest1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CNNorthWest1, put = setStaticF_CNNorthWest1))::Amazon::RegionEndpoint* CNNorthWest1;

  __declspec(property(get = get_DisplayName, put = set_DisplayName))::StringW DisplayName;

  /// @brief Field EUCentral1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUCentral1, put = setStaticF_EUCentral1))::Amazon::RegionEndpoint* EUCentral1;

  /// @brief Field EUNorth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUNorth1, put = setStaticF_EUNorth1))::Amazon::RegionEndpoint* EUNorth1;

  /// @brief Field EUSouth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUSouth1, put = setStaticF_EUSouth1))::Amazon::RegionEndpoint* EUSouth1;

  /// @brief Field EUWest1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUWest1, put = setStaticF_EUWest1))::Amazon::RegionEndpoint* EUWest1;

  /// @brief Field EUWest2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUWest2, put = setStaticF_EUWest2))::Amazon::RegionEndpoint* EUWest2;

  /// @brief Field EUWest3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EUWest3, put = setStaticF_EUWest3))::Amazon::RegionEndpoint* EUWest3;

  __declspec(property(get = get_InternedRegionEndpoint))::Amazon::Internal::IRegionEndpoint* InternedRegionEndpoint;

  /// @brief Field MESouth1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MESouth1, put = setStaticF_MESouth1))::Amazon::RegionEndpoint* MESouth1;

  __declspec(property(get = get_PartitionDnsSuffix))::StringW PartitionDnsSuffix;

  __declspec(property(get = get_PartitionName))::StringW PartitionName;

  /// @brief Field SAEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SAEast1, put = setStaticF_SAEast1))::Amazon::RegionEndpoint* SAEast1;

  __declspec(property(get = get_SystemName, put = set_SystemName))::StringW SystemName;

  /// @brief Field USEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USEast1, put = setStaticF_USEast1))::Amazon::RegionEndpoint* USEast1;

  /// @brief Field USEast1Regional, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USEast1Regional, put = setStaticF_USEast1Regional))::Amazon::RegionEndpoint* USEast1Regional;

  /// @brief Field USEast2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USEast2, put = setStaticF_USEast2))::Amazon::RegionEndpoint* USEast2;

  /// @brief Field USGovCloudEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USGovCloudEast1, put = setStaticF_USGovCloudEast1))::Amazon::RegionEndpoint* USGovCloudEast1;

  /// @brief Field USGovCloudWest1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USGovCloudWest1, put = setStaticF_USGovCloudWest1))::Amazon::RegionEndpoint* USGovCloudWest1;

  /// @brief Field USIsoEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USIsoEast1, put = setStaticF_USIsoEast1))::Amazon::RegionEndpoint* USIsoEast1;

  /// @brief Field USIsobEast1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USIsobEast1, put = setStaticF_USIsobEast1))::Amazon::RegionEndpoint* USIsobEast1;

  /// @brief Field USWest1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USWest1, put = setStaticF_USWest1))::Amazon::RegionEndpoint* USWest1;

  /// @brief Field USWest2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_USWest2, put = setStaticF_USWest2))::Amazon::RegionEndpoint* USWest2;

  /// @brief Field <DisplayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayName_k__BackingField, put = __cordl_internal_set__DisplayName_k__BackingField))::StringW _DisplayName_k__BackingField;

  /// @brief Field <SystemName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SystemName_k__BackingField, put = __cordl_internal_set__SystemName_k__BackingField))::StringW _SystemName_k__BackingField;

  /// @brief Field _hashBySystemName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__hashBySystemName,
                             put = setStaticF__hashBySystemName))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* _hashBySystemName;

  /// @brief Field _hashRegionEndpointOverride, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__hashRegionEndpointOverride,
                             put = setStaticF__hashRegionEndpointOverride))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* _hashRegionEndpointOverride;

  /// @brief Field _regionEndpointOverrideLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__regionEndpointOverrideLock, put = setStaticF__regionEndpointOverrideLock))::System::Threading::ReaderWriterLockSlim* _regionEndpointOverrideLock;

  /// @brief Field _regionEndpointProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__regionEndpointProvider, put = setStaticF__regionEndpointProvider))::Amazon::Internal::IRegionEndpointProvider* _regionEndpointProvider;

  /// @brief Method GetBySystemName, addr 0x21f506c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetBySystemName(::StringW systemName);

  /// @brief Method GetEndpoint, addr 0x21f442c, size 0x434, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetEndpoint(::StringW systemName, ::StringW displayName);

  /// @brief Method GetEndpointForService, addr 0x21f5e14, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::__RegionEndpoint__Endpoint* GetEndpointForService(::StringW serviceName);

  /// @brief Method GetEndpointForService, addr 0x21f5e1c, size 0xc4, virtual false, abstract: false, final false
  inline ::Amazon::__RegionEndpoint__Endpoint* GetEndpointForService(::StringW serviceName, bool dualStack);

  /// @brief Method GetRegionEndpointOverride, addr 0x21f50c4, size 0x188, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* GetRegionEndpointOverride(::Amazon::RegionEndpoint* regionEndpoint);

  static inline ::Amazon::RegionEndpoint* New_ctor(::StringW systemName, ::StringW displayName);

  /// @brief Method Reload, addr 0x21f524c, size 0x3f4, virtual false, abstract: false, final false
  static inline void Reload(::System::IO::Stream* stream);

  /// @brief Method ResetRegionEndpointOverride, addr 0x21f4860, size 0x1bc, virtual false, abstract: false, final false
  static inline void ResetRegionEndpointOverride();

  /// @brief Method ToString, addr 0x21f5ee0, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SystemName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SystemName_k__BackingField();

  constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SystemName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x21f574c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW systemName, ::StringW displayName);

  static inline ::Amazon::RegionEndpoint* getStaticF_AFSouth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_APEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_APNortheast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_APNortheast2();

  static inline ::Amazon::RegionEndpoint* getStaticF_APNortheast3();

  static inline ::Amazon::RegionEndpoint* getStaticF_APSouth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_APSoutheast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_APSoutheast2();

  static inline ::Amazon::RegionEndpoint* getStaticF_CACentral1();

  static inline ::Amazon::RegionEndpoint* getStaticF_CNNorth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_CNNorthWest1();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUCentral1();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUNorth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUSouth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUWest1();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUWest2();

  static inline ::Amazon::RegionEndpoint* getStaticF_EUWest3();

  static inline ::Amazon::RegionEndpoint* getStaticF_MESouth1();

  static inline ::Amazon::RegionEndpoint* getStaticF_SAEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USEast1Regional();

  static inline ::Amazon::RegionEndpoint* getStaticF_USEast2();

  static inline ::Amazon::RegionEndpoint* getStaticF_USGovCloudEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USGovCloudWest1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USIsoEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USIsobEast1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USWest1();

  static inline ::Amazon::RegionEndpoint* getStaticF_USWest2();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* getStaticF__hashBySystemName();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* getStaticF__hashRegionEndpointOverride();

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF__regionEndpointOverrideLock();

  static inline ::Amazon::Internal::IRegionEndpointProvider* getStaticF__regionEndpointProvider();

  /// @brief Method get_DisplayName, addr 0x21f5b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_EnumerableAllRegions, addr 0x21f4a1c, size 0x530, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::RegionEndpoint*>* get_EnumerableAllRegions();

  /// @brief Method get_InternedRegionEndpoint, addr 0x21f5c00, size 0xd4, virtual false, abstract: false, final false
  inline ::Amazon::Internal::IRegionEndpoint* get_InternedRegionEndpoint();

  /// @brief Method get_PartitionDnsSuffix, addr 0x21f5d30, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_PartitionDnsSuffix();

  /// @brief Method get_PartitionName, addr 0x21f5b78, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_PartitionName();

  /// @brief Method get_RegionEndpointProvider, addr 0x21f4f4c, size 0x120, virtual false, abstract: false, final false
  static inline ::Amazon::Internal::IRegionEndpointProvider* get_RegionEndpointProvider();

  /// @brief Method get_SystemName, addr 0x21f5b58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemName();

  static inline void setStaticF_AFSouth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APNortheast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APNortheast2(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APNortheast3(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APSouth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APSoutheast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_APSoutheast2(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_CACentral1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_CNNorth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_CNNorthWest1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUCentral1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUNorth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUSouth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUWest1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUWest2(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_EUWest3(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_MESouth1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_SAEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USEast1Regional(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USEast2(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USGovCloudEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USGovCloudWest1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USIsoEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USIsobEast1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USWest1(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_USWest2(::Amazon::RegionEndpoint* value);

  static inline void setStaticF__hashBySystemName(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* value);

  static inline void setStaticF__hashRegionEndpointOverride(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::RegionEndpoint*>* value);

  static inline void setStaticF__regionEndpointOverrideLock(::System::Threading::ReaderWriterLockSlim* value);

  static inline void setStaticF__regionEndpointProvider(::Amazon::Internal::IRegionEndpointProvider* value);

  /// @brief Method set_DisplayName, addr 0x21f5b70, size 0x8, virtual false, abstract: false, final false
  inline void set_DisplayName(::StringW value);

  /// @brief Method set_SystemName, addr 0x21f5b60, size 0x8, virtual false, abstract: false, final false
  inline void set_SystemName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionEndpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionEndpoint(RegionEndpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionEndpoint(RegionEndpoint const&) = delete;

  /// @brief Field <SystemName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____SystemName_k__BackingField;

  /// @brief Field <DisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____DisplayName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::RegionEndpoint, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::RegionEndpoint, ____SystemName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::RegionEndpoint, ____DisplayName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon
NEED_NO_BOX(::Amazon::RegionEndpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::RegionEndpoint*, "Amazon", "RegionEndpoint");
NEED_NO_BOX(::Amazon::__RegionEndpoint__Endpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::__RegionEndpoint__Endpoint*, "Amazon", "RegionEndpoint/Endpoint");
