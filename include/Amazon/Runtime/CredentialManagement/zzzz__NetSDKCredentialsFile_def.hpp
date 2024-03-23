#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetSDKCredentialsFile)
namespace Amazon::Runtime::CredentialManagement::Internal {
class CredentialProfilePropertyMapping;
}
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileStore;
}
namespace Amazon::Runtime::CredentialManagement {
class __NetSDKCredentialsFile____c;
}
namespace Amazon::Util::Internal {
class NamedSettingsManager;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class NetSDKCredentialsFile;
}
namespace Amazon::Runtime::CredentialManagement {
class __NetSDKCredentialsFile____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile);
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::NetSDKCredentialsFile::<>c*
class CORDL_TYPE __NetSDKCredentialsFile____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* __9;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* __9__18_0;

  static inline ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* New_ctor();

  /// @brief Method <ListProfileNames>b__18_0, addr 0x202eb10, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ListProfileNames_b__18_0(::Amazon::Runtime::CredentialManagement::CredentialProfile* p);

  /// @brief Method .ctor, addr 0x202eb08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* getStaticF___9__18_0();

  static inline void setStaticF___9(::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c* value);

  static inline void setStaticF___9__18_0(::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetSDKCredentialsFile____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetSDKCredentialsFile____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetSDKCredentialsFile____c(__NetSDKCredentialsFile____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetSDKCredentialsFile____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetSDKCredentialsFile____c(__NetSDKCredentialsFile____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
// Type: Amazon.Runtime.CredentialManagement::NetSDKCredentialsFile
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::NetSDKCredentialsFile*
class CORDL_TYPE NetSDKCredentialsFile : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c;

  /// @brief Field PropertyMapping, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PropertyMapping, put = setStaticF_PropertyMapping))::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* PropertyMapping;

  /// @brief Field ReservedPropertyNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReservedPropertyNames, put = setStaticF_ReservedPropertyNames))::System::Collections::Generic::HashSet_1<::StringW>* ReservedPropertyNames;

  /// @brief Field _settingsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager))::Amazon::Util::Internal::NamedSettingsManager* _settingsManager;

  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*() noexcept;

  /// @brief Method CopyProfile, addr 0x202e020, size 0x20, virtual true, abstract: false, final true
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName);

  /// @brief Method CopyProfile, addr 0x202e040, size 0x20, virtual true, abstract: false, final true
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName, bool force);

  /// @brief Method ListProfileNames, addr 0x202d4dc, size 0x128, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::StringW>* ListProfileNames();

  /// @brief Method ListProfiles, addr 0x202c780, size 0x248, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* ListProfiles();

  static inline ::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile* New_ctor();

  /// @brief Method RegisterProfile, addr 0x202ccd8, size 0x54c, virtual true, abstract: false, final true
  inline void RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method RenameProfile, addr 0x202dfe0, size 0x20, virtual true, abstract: false, final true
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName);

  /// @brief Method RenameProfile, addr 0x202e000, size 0x20, virtual true, abstract: false, final true
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName, bool force);

  /// @brief Method SetProfileTypeField, addr 0x202d9e0, size 0x208, virtual false, abstract: false, final false
  static inline void SetProfileTypeField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* properties,
                                         ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType profileType);

  /// @brief Method TryGetProfile, addr 0x202bd84, size 0x7e4, virtual true, abstract: false, final true
  inline bool TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile);

  /// @brief Method UnregisterProfile, addr 0x202dfc4, size 0x1c, virtual true, abstract: false, final true
  inline void UnregisterProfile(::StringW profileName);

  constexpr ::Amazon::Util::Internal::NamedSettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::NamedSettingsManager*> const& __cordl_internal_get__settingsManager() const;

  constexpr void __cordl_internal_set__settingsManager(::Amazon::Util::Internal::NamedSettingsManager* value);

  /// @brief Method .ctor, addr 0x202bd00, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* getStaticF_PropertyMapping();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_ReservedPropertyNames();

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept;

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* i___Amazon__Runtime__CredentialManagement__ICredentialProfileStore() noexcept;

  static inline void setStaticF_PropertyMapping(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* value);

  static inline void setStaticF_ReservedPropertyNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSDKCredentialsFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSDKCredentialsFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSDKCredentialsFile(NetSDKCredentialsFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSDKCredentialsFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSDKCredentialsFile(NetSDKCredentialsFile const&) = delete;

  /// @brief Field _settingsManager, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::NamedSettingsManager* ____settingsManager;

  /// @brief Field AWSCredentialsProfileType offset 0xffffffff size 0x8
  static constexpr ::ConstString AWSCredentialsProfileType{ u"AWS" };

  /// @brief Field DefaultProfileName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultProfileName{ u"Default" };

  /// @brief Field EndpointDiscoveryEnabledField offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointDiscoveryEnabledField{ u"EndpointDiscoveryEnabled" };

  /// @brief Field MaxAttemptsField offset 0xffffffff size 0x8
  static constexpr ::ConstString MaxAttemptsField{ u"MaxAttempts" };

  /// @brief Field RegionField offset 0xffffffff size 0x8
  static constexpr ::ConstString RegionField{ u"Region" };

  /// @brief Field RetryModeField offset 0xffffffff size 0x8
  static constexpr ::ConstString RetryModeField{ u"RetryMode" };

  /// @brief Field S3RegionalEndpointField offset 0xffffffff size 0x8
  static constexpr ::ConstString S3RegionalEndpointField{ u"S3RegionalEndpoint" };

  /// @brief Field S3UseArnRegionField offset 0xffffffff size 0x8
  static constexpr ::ConstString S3UseArnRegionField{ u"S3UseArnRegion" };

  /// @brief Field SAMLRoleProfileType offset 0xffffffff size 0x8
  static constexpr ::ConstString SAMLRoleProfileType{ u"SAML" };

  /// @brief Field SsoAccountId offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoAccountId{ u"sso_account_id" };

  /// @brief Field SsoRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRegion{ u"sso_region" };

  /// @brief Field SsoRoleName offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRoleName{ u"sso_role_name" };

  /// @brief Field SsoStartUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoStartUrl{ u"sso_start_url" };

  /// @brief Field StsRegionalEndpointsField offset 0xffffffff size 0x8
  static constexpr ::ConstString StsRegionalEndpointsField{ u"StsRegionalEndpoints" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile, ____settingsManager) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::NetSDKCredentialsFile*, "Amazon.Runtime.CredentialManagement", "NetSDKCredentialsFile");
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::__NetSDKCredentialsFile____c*, "Amazon.Runtime.CredentialManagement", "NetSDKCredentialsFile/<>c");
