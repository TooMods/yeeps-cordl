#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SharedCredentialsFile)
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
class __SharedCredentialsFile____c;
}
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime::Internal::Util {
class ProfileIniFile;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class SharedCredentialsFile;
}
namespace Amazon::Runtime::CredentialManagement {
class __SharedCredentialsFile____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile);
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::SharedCredentialsFile::<>c*
class CORDL_TYPE __SharedCredentialsFile____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0))::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* __9__33_0;

  static inline ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* New_ctor();

  /// @brief Method <ListProfileNames>b__33_0, addr 0x2031814, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ListProfileNames_b__33_0(::Amazon::Runtime::CredentialManagement::CredentialProfile* p);

  /// @brief Method .ctor, addr 0x203180c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* getStaticF___9__33_0();

  static inline void setStaticF___9(::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SharedCredentialsFile____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SharedCredentialsFile____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SharedCredentialsFile____c(__SharedCredentialsFile____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SharedCredentialsFile____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SharedCredentialsFile____c(__SharedCredentialsFile____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
// Type: Amazon.Runtime.CredentialManagement::SharedCredentialsFile
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::SharedCredentialsFile*
class CORDL_TYPE SharedCredentialsFile : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c;

  /// @brief Field DefaultDirectory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultDirectory, put = setStaticF_DefaultDirectory))::StringW DefaultDirectory;

  /// @brief Field DefaultFilePath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultFilePath, put = setStaticF_DefaultFilePath))::StringW DefaultFilePath;

  __declspec(property(get = get_FilePath, put = set_FilePath))::StringW FilePath;

  /// @brief Field ProfileTypeWhitelist, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ProfileTypeWhitelist,
               put = setStaticF_ProfileTypeWhitelist))::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* ProfileTypeWhitelist;

  /// @brief Field PropertyMapping, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PropertyMapping, put = setStaticF_PropertyMapping))::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* PropertyMapping;

  /// @brief Field ReservedPropertyNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReservedPropertyNames, put = setStaticF_ReservedPropertyNames))::System::Collections::Generic::HashSet_1<::StringW>* ReservedPropertyNames;

  /// @brief Field <FilePath>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__FilePath_k__BackingField, put = __cordl_internal_set__FilePath_k__BackingField))::StringW _FilePath_k__BackingField;

  /// @brief Field _configFile, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__configFile, put = __cordl_internal_set__configFile))::Amazon::Runtime::Internal::Util::ProfileIniFile* _configFile;

  /// @brief Field _credentialsFile, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__credentialsFile, put = __cordl_internal_set__credentialsFile))::Amazon::Runtime::Internal::Util::ProfileIniFile* _credentialsFile;

  /// @brief Field _logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept;

  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*() noexcept;

  /// @brief Method CopyProfile, addr 0x2031458, size 0x8, virtual true, abstract: false, final true
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName);

  /// @brief Method CopyProfile, addr 0x2031460, size 0x130, virtual true, abstract: false, final true
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName, bool force);

  /// @brief Method IsSupportedProfileType, addr 0x2030dac, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsSupportedProfileType(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType);

  /// @brief Method ListAllProfileNames, addr 0x20300f0, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* ListAllProfileNames();

  /// @brief Method ListProfileNames, addr 0x202ffc0, size 0x130, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::StringW>* ListProfileNames();

  /// @brief Method ListProfiles, addr 0x202c9c8, size 0x24c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* ListProfiles();

  static inline ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile* New_ctor();

  static inline ::Amazon::Runtime::CredentialManagement::SharedCredentialsFile* New_ctor(::StringW filePath);

  /// @brief Method Refresh, addr 0x202febc, size 0x104, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method RegisterProfile, addr 0x202d224, size 0x1e0, virtual true, abstract: false, final true
  inline void RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method RegisterProfileInternal, addr 0x2030e78, size 0x538, virtual false, abstract: false, final false
  inline void RegisterProfileInternal(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method RenameProfile, addr 0x20313f4, size 0x8, virtual true, abstract: false, final true
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName);

  /// @brief Method RenameProfile, addr 0x20313fc, size 0x5c, virtual true, abstract: false, final true
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName, bool force);

  /// @brief Method SetUpFilePath, addr 0x202fde8, size 0xd4, virtual false, abstract: false, final false
  inline void SetUpFilePath(::StringW filePath);

  /// @brief Method TryGetProfile, addr 0x203017c, size 0xc30, virtual false, abstract: false, final false
  inline bool TryGetProfile(::StringW profileName, bool doRefresh, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile);

  /// @brief Method TryGetProfile, addr 0x202c640, size 0xc, virtual true, abstract: false, final true
  inline bool TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile);

  /// @brief Method TryGetSection, addr 0x2031590, size 0x218, virtual false, abstract: false, final false
  inline bool TryGetSection(::StringW sectionName, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> iniProperties);

  /// @brief Method UnregisterProfile, addr 0x20313b0, size 0x44, virtual true, abstract: false, final true
  inline void UnregisterProfile(::StringW profileName);

  constexpr ::StringW const& __cordl_internal_get__FilePath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FilePath_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::Util::ProfileIniFile*& __cordl_internal_get__configFile();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ProfileIniFile*> const& __cordl_internal_get__configFile() const;

  constexpr ::Amazon::Runtime::Internal::Util::ProfileIniFile*& __cordl_internal_get__credentialsFile();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ProfileIniFile*> const& __cordl_internal_get__credentialsFile() const;

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__FilePath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__configFile(::Amazon::Runtime::Internal::Util::ProfileIniFile* value);

  constexpr void __cordl_internal_set__credentialsFile(::Amazon::Runtime::Internal::Util::ProfileIniFile* value);

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x202fd14, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x202c568, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

  static inline ::StringW getStaticF_DefaultDirectory();

  static inline ::StringW getStaticF_DefaultFilePath();

  static inline ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* getStaticF_ProfileTypeWhitelist();

  static inline ::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* getStaticF_PropertyMapping();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_ReservedPropertyNames();

  /// @brief Method get_FilePath, addr 0x202fd04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FilePath();

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept;

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileStore"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* i___Amazon__Runtime__CredentialManagement__ICredentialProfileStore() noexcept;

  static inline void setStaticF_DefaultDirectory(::StringW value);

  static inline void setStaticF_DefaultFilePath(::StringW value);

  static inline void setStaticF_ProfileTypeWhitelist(::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* value);

  static inline void setStaticF_PropertyMapping(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfilePropertyMapping* value);

  static inline void setStaticF_ReservedPropertyNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_FilePath, addr 0x202fd0c, size 0x8, virtual false, abstract: false, final false
  inline void set_FilePath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedCredentialsFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedCredentialsFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedCredentialsFile(SharedCredentialsFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedCredentialsFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedCredentialsFile(SharedCredentialsFile const&) = delete;

  /// @brief Field _logger, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  /// @brief Field _credentialsFile, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ProfileIniFile* ____credentialsFile;

  /// @brief Field _configFile, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ProfileIniFile* ____configFile;

  /// @brief Field <FilePath>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____FilePath_k__BackingField;

  /// @brief Field ConfigFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString ConfigFileName{ u"config" };

  /// @brief Field CredentialProcess offset 0xffffffff size 0x8
  static constexpr ::ConstString CredentialProcess{ u"credential_process" };

  /// @brief Field DefaultDirectoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultDirectoryName{ u".aws" };

  /// @brief Field DefaultFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultFileName{ u"credentials" };

  /// @brief Field DefaultProfileName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultProfileName{ u"default" };

  /// @brief Field EndpointDiscoveryEnabledField offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointDiscoveryEnabledField{ u"endpoint_discovery_enabled" };

  /// @brief Field MaxAttemptsField offset 0xffffffff size 0x8
  static constexpr ::ConstString MaxAttemptsField{ u"max_attempts" };

  /// @brief Field RegionField offset 0xffffffff size 0x8
  static constexpr ::ConstString RegionField{ u"region" };

  /// @brief Field RetryModeField offset 0xffffffff size 0x8
  static constexpr ::ConstString RetryModeField{ u"retry_mode" };

  /// @brief Field S3RegionalEndpointField offset 0xffffffff size 0x8
  static constexpr ::ConstString S3RegionalEndpointField{ u"s3_us_east_1_regional_endpoint" };

  /// @brief Field S3UseArnRegionField offset 0xffffffff size 0x8
  static constexpr ::ConstString S3UseArnRegionField{ u"s3_use_arn_region" };

  /// @brief Field SsoAccountId offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoAccountId{ u"sso_account_id" };

  /// @brief Field SsoRegion offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRegion{ u"sso_region" };

  /// @brief Field SsoRoleName offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoRoleName{ u"sso_role_name" };

  /// @brief Field SsoStartUrl offset 0xffffffff size 0x8
  static constexpr ::ConstString SsoStartUrl{ u"sso_start_url" };

  /// @brief Field StsRegionalEndpointsField offset 0xffffffff size 0x8
  static constexpr ::ConstString StsRegionalEndpointsField{ u"sts_regional_endpoints" };

  /// @brief Field ToolkitArtifactGuidField offset 0xffffffff size 0x8
  static constexpr ::ConstString ToolkitArtifactGuidField{ u"toolkit_artifact_guid" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::SharedCredentialsFile, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile, ____logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile, ____credentialsFile) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile, ____configFile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile, ____FilePath_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::SharedCredentialsFile*, "Amazon.Runtime.CredentialManagement", "SharedCredentialsFile");
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::__SharedCredentialsFile____c*, "Amazon.Runtime.CredentialManagement", "SharedCredentialsFile/<>c");
