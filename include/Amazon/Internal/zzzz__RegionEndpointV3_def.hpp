#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegionEndpointV3)
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace Amazon::Internal {
class __RegionEndpointV3__ServiceMap;
}
namespace Amazon {
class __RegionEndpoint__Endpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace Amazon::Internal {
class RegionEndpointV3;
}
namespace Amazon::Internal {
class __RegionEndpointV3__ServiceMap;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Internal::RegionEndpointV3);
MARK_REF_PTR_T(::Amazon::Internal::__RegionEndpointV3__ServiceMap);
// Type: ::ServiceMap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::RegionEndpointV3::ServiceMap*
class CORDL_TYPE __RegionEndpointV3__ServiceMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dualServiceMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dualServiceMap,
                      put = __cordl_internal_set__dualServiceMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* _dualServiceMap;

  /// @brief Field _serviceMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__serviceMap,
                      put = __cordl_internal_set__serviceMap))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* _serviceMap;

  /// @brief Method Add, addr 0x21fa284, size 0x7c, virtual false, abstract: false, final false
  inline void Add(::StringW serviceName, bool dualStack, ::Amazon::__RegionEndpoint__Endpoint* endpoint);

  /// @brief Method ContainsKey, addr 0x21fa300, size 0x58, virtual false, abstract: false, final false
  inline bool ContainsKey(::StringW servicName);

  /// @brief Method GetMap, addr 0x21fa358, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* GetMap(bool dualStack);

  static inline ::Amazon::Internal::__RegionEndpointV3__ServiceMap* New_ctor();

  /// @brief Method TryGetEndpoint, addr 0x21f90cc, size 0x7c, virtual false, abstract: false, final false
  inline bool TryGetEndpoint(::StringW serviceName, bool dualStack, ByRef<::Amazon::__RegionEndpoint__Endpoint*> endpoint);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*& __cordl_internal_get__dualServiceMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*> const& __cordl_internal_get__dualServiceMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*& __cordl_internal_get__serviceMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*> const& __cordl_internal_get__serviceMap() const;

  constexpr void __cordl_internal_set__dualServiceMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* value);

  constexpr void __cordl_internal_set__serviceMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* value);

  /// @brief Method .ctor, addr 0x21f8b90, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionEndpointV3__ServiceMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpointV3__ServiceMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionEndpointV3__ServiceMap(__RegionEndpointV3__ServiceMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpointV3__ServiceMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionEndpointV3__ServiceMap(__RegionEndpointV3__ServiceMap const&) = delete;

  /// @brief Field _serviceMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* ____serviceMap;

  /// @brief Field _dualServiceMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* ____dualServiceMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Internal::__RegionEndpointV3__ServiceMap, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Internal::__RegionEndpointV3__ServiceMap, ____serviceMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::__RegionEndpointV3__ServiceMap, ____dualServiceMap) == 0x18, "Offset mismatch!");

} // namespace Amazon::Internal
// Type: Amazon.Internal::RegionEndpointV3
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::Amazon.Internal::RegionEndpointV3*
class CORDL_TYPE RegionEndpointV3 : public ::System::Object {
public:
  // Declarations
  using ServiceMap = ::Amazon::Internal::__RegionEndpointV3__ServiceMap;

  __declspec(property(get = get_DisplayName, put = set_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_PartitionDnsSuffix))::StringW PartitionDnsSuffix;

  __declspec(property(get = get_PartitionName))::StringW PartitionName;

  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  /// @brief Field <DisplayName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayName_k__BackingField, put = __cordl_internal_set__DisplayName_k__BackingField))::StringW _DisplayName_k__BackingField;

  /// @brief Field <RegionName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__RegionName_k__BackingField, put = __cordl_internal_set__RegionName_k__BackingField))::StringW _RegionName_k__BackingField;

  /// @brief Field _partitionJsonData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__partitionJsonData, put = __cordl_internal_set__partitionJsonData))::ThirdParty::Json::LitJson::JsonData* _partitionJsonData;

  /// @brief Field _serviceMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__serviceMap, put = __cordl_internal_set__serviceMap))::Amazon::Internal::__RegionEndpointV3__ServiceMap* _serviceMap;

  /// @brief Field _servicesJsonData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__servicesJsonData, put = __cordl_internal_set__servicesJsonData))::ThirdParty::Json::LitJson::JsonData* _servicesJsonData;

  /// @brief Field _servicesLoaded, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__servicesLoaded, put = __cordl_internal_set__servicesLoaded)) bool _servicesLoaded;

  /// @brief Convert operator to "::Amazon::Internal::IRegionEndpoint"
  constexpr operator ::Amazon::Internal::IRegionEndpoint*() noexcept;

  /// @brief Method AddServiceToMap, addr 0x21f92fc, size 0x23c, virtual false, abstract: false, final false
  inline void AddServiceToMap(::ThirdParty::Json::LitJson::JsonData* service, ::StringW serviceName);

  /// @brief Method CreateEndpointAndAddToServiceMap, addr 0x21f9860, size 0x48, virtual false, abstract: false, final false
  inline void CreateEndpointAndAddToServiceMap(::ThirdParty::Json::LitJson::JsonData* result, ::StringW regionName, ::StringW serviceName);

  /// @brief Method CreateEndpointAndAddToServiceMap, addr 0x21f98a8, size 0x568, virtual false, abstract: false, final false
  inline void CreateEndpointAndAddToServiceMap(::ThirdParty::Json::LitJson::JsonData* result, ::StringW regionName, ::StringW serviceName, bool dualStack);

  /// @brief Method CreateUnknownEndpoint, addr 0x21f9148, size 0x1b4, virtual false, abstract: false, final false
  inline ::Amazon::__RegionEndpoint__Endpoint* CreateUnknownEndpoint(::StringW serviceName, bool dualStack);

  /// @brief Method DetermineAuthRegion, addr 0x21f9e10, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW DetermineAuthRegion(::ThirdParty::Json::LitJson::JsonData* credentialScope);

  /// @brief Method DetermineSignatureOverride, addr 0x21f9e8c, size 0x3f8, virtual false, abstract: false, final false
  static inline ::StringW DetermineSignatureOverride(::ThirdParty::Json::LitJson::JsonData* defaults, ::StringW serviceName);

  /// @brief Method GetEndpointForService, addr 0x21f8c30, size 0x128, virtual true, abstract: false, final true
  inline ::Amazon::__RegionEndpoint__Endpoint* GetEndpointForService(::StringW serviceName, bool dualStack);

  /// @brief Method MergeJsonData, addr 0x21f9538, size 0x328, virtual false, abstract: false, final false
  static inline void MergeJsonData(::ThirdParty::Json::LitJson::JsonData* target, ::ThirdParty::Json::LitJson::JsonData* source);

  static inline ::Amazon::Internal::RegionEndpointV3* New_ctor(::StringW regionName, ::StringW displayName, ::ThirdParty::Json::LitJson::JsonData* partition,
                                                               ::ThirdParty::Json::LitJson::JsonData* services);

  /// @brief Method ParseAllServices, addr 0x21f8d58, size 0x374, virtual false, abstract: false, final false
  inline void ParseAllServices();

  constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RegionName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RegionName_k__BackingField();

  constexpr ::ThirdParty::Json::LitJson::JsonData*& __cordl_internal_get__partitionJsonData();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& __cordl_internal_get__partitionJsonData() const;

  constexpr ::Amazon::Internal::__RegionEndpointV3__ServiceMap*& __cordl_internal_get__serviceMap();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Internal::__RegionEndpointV3__ServiceMap*> const& __cordl_internal_get__serviceMap() const;

  constexpr ::ThirdParty::Json::LitJson::JsonData*& __cordl_internal_get__servicesJsonData();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& __cordl_internal_get__servicesJsonData() const;

  constexpr bool const& __cordl_internal_get__servicesLoaded() const;

  constexpr bool& __cordl_internal_get__servicesLoaded();

  constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RegionName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__partitionJsonData(::ThirdParty::Json::LitJson::JsonData* value);

  constexpr void __cordl_internal_set__serviceMap(::Amazon::Internal::__RegionEndpointV3__ServiceMap* value);

  constexpr void __cordl_internal_set__servicesJsonData(::ThirdParty::Json::LitJson::JsonData* value);

  constexpr void __cordl_internal_set__servicesLoaded(bool value);

  /// @brief Method .ctor, addr 0x21f8b00, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW regionName, ::StringW displayName, ::ThirdParty::Json::LitJson::JsonData* partition, ::ThirdParty::Json::LitJson::JsonData* services);

  /// @brief Method get_DisplayName, addr 0x21f8af0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_DisplayName();

  /// @brief Method get_PartitionDnsSuffix, addr 0x21f5db8, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW get_PartitionDnsSuffix();

  /// @brief Method get_PartitionName, addr 0x21f5cd4, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW get_PartitionName();

  /// @brief Method get_RegionName, addr 0x21f8ae0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RegionName();

  /// @brief Convert to "::Amazon::Internal::IRegionEndpoint"
  constexpr ::Amazon::Internal::IRegionEndpoint* i___Amazon__Internal__IRegionEndpoint() noexcept;

  /// @brief Method set_DisplayName, addr 0x21f8af8, size 0x8, virtual false, abstract: false, final false
  inline void set_DisplayName(::StringW value);

  /// @brief Method set_RegionName, addr 0x21f8ae8, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionEndpointV3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointV3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionEndpointV3(RegionEndpointV3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointV3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionEndpointV3(RegionEndpointV3 const&) = delete;

  /// @brief Field _serviceMap, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Internal::__RegionEndpointV3__ServiceMap* ____serviceMap;

  /// @brief Field <RegionName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____RegionName_k__BackingField;

  /// @brief Field <DisplayName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____DisplayName_k__BackingField;

  /// @brief Field _partitionJsonData, offset: 0x28, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::JsonData* ____partitionJsonData;

  /// @brief Field _servicesJsonData, offset: 0x30, size: 0x8, def value: None
  ::ThirdParty::Json::LitJson::JsonData* ____servicesJsonData;

  /// @brief Field _servicesLoaded, offset: 0x38, size: 0x1, def value: None
  bool ____servicesLoaded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Internal::RegionEndpointV3, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____serviceMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____RegionName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____DisplayName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____partitionJsonData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____servicesJsonData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::RegionEndpointV3, ____servicesLoaded) == 0x38, "Offset mismatch!");

} // namespace Amazon::Internal
NEED_NO_BOX(::Amazon::Internal::RegionEndpointV3);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::RegionEndpointV3*, "Amazon.Internal", "RegionEndpointV3");
NEED_NO_BOX(::Amazon::Internal::__RegionEndpointV3__ServiceMap);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::__RegionEndpointV3__ServiceMap*, "Amazon.Internal", "RegionEndpointV3/ServiceMap");
