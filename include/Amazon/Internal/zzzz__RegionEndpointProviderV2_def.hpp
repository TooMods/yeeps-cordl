#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegionEndpointProviderV2)
namespace Amazon::Internal {
class IRegionEndpointProvider;
}
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace Amazon::Internal {
class __RegionEndpointProviderV2__RegionEndpoint;
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
namespace System::Net {
class IWebProxy;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace Amazon::Internal {
class RegionEndpointProviderV2;
}
namespace Amazon::Internal {
class __RegionEndpointProviderV2__RegionEndpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Internal::RegionEndpointProviderV2);
MARK_REF_PTR_T(::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint);
// Type: ::RegionEndpoint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::RegionEndpointProviderV2::RegionEndpoint*
class CORDL_TYPE __RegionEndpointProviderV2__RegionEndpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DisplayName, put = set_DisplayName))::StringW DisplayName;

  /// @brief Field LOCK_OBJECT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LOCK_OBJECT, put = setStaticF_LOCK_OBJECT))::System::Object* LOCK_OBJECT;

  __declspec(property(get = get_RegionName))::StringW RegionName;

  __declspec(property(get = get_SystemName, put = set_SystemName))::StringW SystemName;

  /// @brief Field <DisplayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__DisplayName_k__BackingField, put = __cordl_internal_set__DisplayName_k__BackingField))::StringW _DisplayName_k__BackingField;

  /// @brief Field <SystemName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SystemName_k__BackingField, put = __cordl_internal_set__SystemName_k__BackingField))::StringW _SystemName_k__BackingField;

  /// @brief Field _documentEndpoints, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__documentEndpoints,
                             put = setStaticF__documentEndpoints))::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* _documentEndpoints;

  /// @brief Field hashBySystemName, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_hashBySystemName,
               put = setStaticF_hashBySystemName))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* hashBySystemName;

  /// @brief Field loaded, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_loaded, put = setStaticF_loaded)) bool loaded;

  /// @brief Convert operator to "::Amazon::Internal::IRegionEndpoint"
  constexpr operator ::Amazon::Internal::IRegionEndpoint*() noexcept;

  /// @brief Method GetBySystemName, addr 0x21f6298, size 0x390, virtual false, abstract: false, final false
  static inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* GetBySystemName(::StringW systemName);

  /// @brief Method GetEndpoint, addr 0x21f6de8, size 0x218, virtual false, abstract: false, final false
  static inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* GetEndpoint(::StringW systemName, ::StringW displayName);

  /// @brief Method GetEndpointForService, addr 0x21f6628, size 0x3d0, virtual true, abstract: false, final true
  inline ::Amazon::__RegionEndpoint__Endpoint* GetEndpointForService(::StringW serviceName, bool dualStack);

  /// @brief Method GetEndpointRule, addr 0x21f6a78, size 0x254, virtual false, abstract: false, final false
  inline ::ThirdParty::Json::LitJson::JsonData* GetEndpointRule(::StringW serviceName);

  /// @brief Method LoadEndpointDefinitionFromFilePath, addr 0x21f7e6c, size 0x228, virtual false, abstract: false, final false
  static inline void LoadEndpointDefinitionFromFilePath(::StringW path);

  /// @brief Method LoadEndpointDefinitionFromWeb, addr 0x21f7a10, size 0x45c, virtual false, abstract: false, final false
  static inline void LoadEndpointDefinitionFromWeb(::StringW url);

  /// @brief Method LoadEndpointDefinitions, addr 0x21f69f8, size 0x80, virtual false, abstract: false, final false
  static inline void LoadEndpointDefinitions();

  /// @brief Method LoadEndpointDefinitions, addr 0x21f702c, size 0x278, virtual false, abstract: false, final false
  static inline void LoadEndpointDefinitions(::StringW endpointsPath);

  /// @brief Method LoadEndpointDefinitionsFromEmbeddedResource, addr 0x21f7560, size 0x4b0, virtual false, abstract: false, final false
  static inline void LoadEndpointDefinitionsFromEmbeddedResource();

  static inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* New_ctor(::StringW systemName, ::StringW displayName);

  /// @brief Method ReadEndpointFile, addr 0x21f8094, size 0x520, virtual false, abstract: false, final false
  static inline void ReadEndpointFile(::System::IO::Stream* stream);

  /// @brief Method ToString, addr 0x21f892c, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryLoadEndpointDefinitionsFromAssemblyDir, addr 0x21f72a4, size 0x2bc, virtual false, abstract: false, final false
  static inline bool TryLoadEndpointDefinitionsFromAssemblyDir();

  /// @brief Method UnloadEndpointDefinitions, addr 0x21f87c0, size 0x144, virtual false, abstract: false, final false
  static inline void UnloadEndpointDefinitions();

  constexpr ::StringW const& __cordl_internal_get__DisplayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DisplayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SystemName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SystemName_k__BackingField();

  constexpr void __cordl_internal_set__DisplayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SystemName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x21f7000, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW systemName, ::StringW displayName);

  static inline ::System::Object* getStaticF_LOCK_OBJECT();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* getStaticF__documentEndpoints();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* getStaticF_hashBySystemName();

  static inline bool getStaticF_loaded();

  /// @brief Method get_DisplayName, addr 0x21f8914, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_DisplayName();

  /// @brief Method get_EnumerableAllRegions, addr 0x21f60ac, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* get_EnumerableAllRegions();

  /// @brief Method get_RegionName, addr 0x21f8924, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_RegionName();

  /// @brief Method get_SystemName, addr 0x21f8904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemName();

  /// @brief Convert to "::Amazon::Internal::IRegionEndpoint"
  constexpr ::Amazon::Internal::IRegionEndpoint* i___Amazon__Internal__IRegionEndpoint() noexcept;

  static inline void setStaticF_LOCK_OBJECT(::System::Object* value);

  static inline void setStaticF__documentEndpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* value);

  static inline void setStaticF_hashBySystemName(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* value);

  static inline void setStaticF_loaded(bool value);

  /// @brief Method set_DisplayName, addr 0x21f891c, size 0x8, virtual false, abstract: false, final false
  inline void set_DisplayName(::StringW value);

  /// @brief Method set_SystemName, addr 0x21f890c, size 0x8, virtual false, abstract: false, final false
  inline void set_SystemName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RegionEndpointProviderV2__RegionEndpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpointProviderV2__RegionEndpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RegionEndpointProviderV2__RegionEndpoint(__RegionEndpointProviderV2__RegionEndpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RegionEndpointProviderV2__RegionEndpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RegionEndpointProviderV2__RegionEndpoint(__RegionEndpointProviderV2__RegionEndpoint const&) = delete;

  /// @brief Field <SystemName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____SystemName_k__BackingField;

  /// @brief Field <DisplayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____DisplayName_k__BackingField;

  /// @brief Field DEFAULT_RULE offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_RULE{ u"*/*" };

  /// @brief Field MAX_DOWNLOAD_RETRIES offset 0xffffffff size 0x4
  static constexpr int32_t MAX_DOWNLOAD_RETRIES{ static_cast<int32_t>(0x3) };

  /// @brief Field REGIONS_CUSTOMIZATIONS_FILE offset 0xffffffff size 0x8
  static constexpr ::ConstString REGIONS_CUSTOMIZATIONS_FILE{ u"Core.endpoints.customizations.json" };

  /// @brief Field REGIONS_FILE offset 0xffffffff size 0x8
  static constexpr ::ConstString REGIONS_FILE{ u"Core.endpoints.json" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint, ____SystemName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint, ____DisplayName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Internal
// Type: Amazon.Internal::RegionEndpointProviderV2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::Amazon.Internal::RegionEndpointProviderV2*
class CORDL_TYPE RegionEndpointProviderV2 : public ::System::Object {
public:
  // Declarations
  using RegionEndpoint = ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint;

  __declspec(property(get = get_AllRegionEndpoints))::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* AllRegionEndpoints;

  /// @brief Field <Proxy>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Proxy_k__BackingField, put = setStaticF__Proxy_k__BackingField))::System::Net::IWebProxy* _Proxy_k__BackingField;

  /// @brief Convert operator to "::Amazon::Internal::IRegionEndpointProvider"
  constexpr operator ::Amazon::Internal::IRegionEndpointProvider*() noexcept;

  /// @brief Method GetRegionEndpoint, addr 0x21f6244, size 0x54, virtual true, abstract: false, final true
  inline ::Amazon::Internal::IRegionEndpoint* GetRegionEndpoint(::StringW regionName);

  static inline ::Amazon::Internal::RegionEndpointProviderV2* New_ctor();

  /// @brief Method .ctor, addr 0x21f5778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::IWebProxy* getStaticF__Proxy_k__BackingField();

  /// @brief Method get_AllRegionEndpoints, addr 0x21f6060, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* get_AllRegionEndpoints();

  /// @brief Method get_Proxy, addr 0x21f5fcc, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Convert to "::Amazon::Internal::IRegionEndpointProvider"
  constexpr ::Amazon::Internal::IRegionEndpointProvider* i___Amazon__Internal__IRegionEndpointProvider() noexcept;

  static inline void setStaticF__Proxy_k__BackingField(::System::Net::IWebProxy* value);

  /// @brief Method set_Proxy, addr 0x21f6014, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Proxy(::System::Net::IWebProxy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegionEndpointProviderV2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointProviderV2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegionEndpointProviderV2(RegionEndpointProviderV2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegionEndpointProviderV2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegionEndpointProviderV2(RegionEndpointProviderV2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Internal::RegionEndpointProviderV2, 0x10>, "Size mismatch!");

} // namespace Amazon::Internal
NEED_NO_BOX(::Amazon::Internal::RegionEndpointProviderV2);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::RegionEndpointProviderV2*, "Amazon.Internal", "RegionEndpointProviderV2");
NEED_NO_BOX(::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*, "Amazon.Internal", "RegionEndpointProviderV2/RegionEndpoint");
