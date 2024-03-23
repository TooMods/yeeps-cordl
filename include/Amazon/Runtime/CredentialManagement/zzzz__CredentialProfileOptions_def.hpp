#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialProfileOptions)
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions);
// Type: Amazon.Runtime.CredentialManagement::CredentialProfileOptions
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::CredentialProfileOptions*
class CORDL_TYPE CredentialProfileOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessKey, put = set_AccessKey))::StringW AccessKey;

  __declspec(property(get = get_CredentialProcess, put = set_CredentialProcess))::StringW CredentialProcess;

  __declspec(property(get = get_CredentialSource, put = set_CredentialSource))::StringW CredentialSource;

  __declspec(property(get = get_EndpointName, put = set_EndpointName))::StringW EndpointName;

  __declspec(property(get = get_ExternalID, put = set_ExternalID))::StringW ExternalID;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_MfaSerial, put = set_MfaSerial))::StringW MfaSerial;

  __declspec(property(get = get_RoleArn, put = set_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_RoleSessionName, put = set_RoleSessionName))::StringW RoleSessionName;

  __declspec(property(get = get_SecretKey, put = set_SecretKey))::StringW SecretKey;

  __declspec(property(get = get_SourceProfile, put = set_SourceProfile))::StringW SourceProfile;

  __declspec(property(get = get_SsoAccountId, put = set_SsoAccountId))::StringW SsoAccountId;

  __declspec(property(get = get_SsoRegion, put = set_SsoRegion))::StringW SsoRegion;

  __declspec(property(get = get_SsoRoleName, put = set_SsoRoleName))::StringW SsoRoleName;

  __declspec(property(get = get_SsoStartUrl, put = set_SsoStartUrl))::StringW SsoStartUrl;

  __declspec(property(get = get_Token, put = set_Token))::StringW Token;

  __declspec(property(get = get_UserIdentity, put = set_UserIdentity))::StringW UserIdentity;

  __declspec(property(get = get_WebIdentityTokenFile, put = set_WebIdentityTokenFile))::StringW WebIdentityTokenFile;

  /// @brief Field <AccessKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKey_k__BackingField, put = __cordl_internal_set__AccessKey_k__BackingField))::StringW _AccessKey_k__BackingField;

  /// @brief Field <CredentialProcess>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__CredentialProcess_k__BackingField, put = __cordl_internal_set__CredentialProcess_k__BackingField))::StringW _CredentialProcess_k__BackingField;

  /// @brief Field <CredentialSource>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__CredentialSource_k__BackingField, put = __cordl_internal_set__CredentialSource_k__BackingField))::StringW _CredentialSource_k__BackingField;

  /// @brief Field <EndpointName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__EndpointName_k__BackingField, put = __cordl_internal_set__EndpointName_k__BackingField))::StringW _EndpointName_k__BackingField;

  /// @brief Field <ExternalID>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ExternalID_k__BackingField, put = __cordl_internal_set__ExternalID_k__BackingField))::StringW _ExternalID_k__BackingField;

  /// @brief Field <MfaSerial>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__MfaSerial_k__BackingField, put = __cordl_internal_set__MfaSerial_k__BackingField))::StringW _MfaSerial_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleSessionName_k__BackingField, put = __cordl_internal_set__RoleSessionName_k__BackingField))::StringW _RoleSessionName_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__SecretKey_k__BackingField, put = __cordl_internal_set__SecretKey_k__BackingField))::StringW _SecretKey_k__BackingField;

  /// @brief Field <SourceProfile>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__SourceProfile_k__BackingField, put = __cordl_internal_set__SourceProfile_k__BackingField))::StringW _SourceProfile_k__BackingField;

  /// @brief Field <SsoAccountId>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoAccountId_k__BackingField, put = __cordl_internal_set__SsoAccountId_k__BackingField))::StringW _SsoAccountId_k__BackingField;

  /// @brief Field <SsoRegion>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoRegion_k__BackingField, put = __cordl_internal_set__SsoRegion_k__BackingField))::StringW _SsoRegion_k__BackingField;

  /// @brief Field <SsoRoleName>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoRoleName_k__BackingField, put = __cordl_internal_set__SsoRoleName_k__BackingField))::StringW _SsoRoleName_k__BackingField;

  /// @brief Field <SsoStartUrl>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__SsoStartUrl_k__BackingField, put = __cordl_internal_set__SsoStartUrl_k__BackingField))::StringW _SsoStartUrl_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Token_k__BackingField, put = __cordl_internal_set__Token_k__BackingField))::StringW _Token_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__UserIdentity_k__BackingField, put = __cordl_internal_set__UserIdentity_k__BackingField))::StringW _UserIdentity_k__BackingField;

  /// @brief Field <WebIdentityTokenFile>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__WebIdentityTokenFile_k__BackingField,
                      put = __cordl_internal_set__WebIdentityTokenFile_k__BackingField))::StringW _WebIdentityTokenFile_k__BackingField;

  /// @brief Method Equals, addr 0x202b154, size 0x6a0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x202b7f4, size 0x32c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* New_ctor();

  /// @brief Method ToString, addr 0x202aa48, size 0x70c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__AccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CredentialProcess_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CredentialProcess_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CredentialSource_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CredentialSource_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__EndpointName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__EndpointName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ExternalID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ExternalID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__MfaSerial_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MfaSerial_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__RoleSessionName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleSessionName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SecretKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SecretKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SourceProfile_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SourceProfile_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SsoAccountId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SsoAccountId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SsoRegion_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SsoRegion_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SsoRoleName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SsoRoleName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SsoStartUrl_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SsoStartUrl_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Token_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Token_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserIdentity_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserIdentity_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__WebIdentityTokenFile_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__WebIdentityTokenFile_k__BackingField();

  constexpr void __cordl_internal_set__AccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CredentialProcess_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__CredentialSource_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__EndpointName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ExternalID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MfaSerial_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__RoleSessionName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SecretKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SourceProfile_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SsoAccountId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SsoRegion_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SsoRoleName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SsoStartUrl_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Token_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UserIdentity_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__WebIdentityTokenFile_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x202bb20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AccessKey, addr 0x202a824, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKey();

  /// @brief Method get_CredentialProcess, addr 0x202a8d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CredentialProcess();

  /// @brief Method get_CredentialSource, addr 0x202a834, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CredentialSource();

  /// @brief Method get_EndpointName, addr 0x202a844, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EndpointName();

  /// @brief Method get_ExternalID, addr 0x202a854, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExternalID();

  /// @brief Method get_IsEmpty, addr 0x202a934, size 0x114, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_MfaSerial, addr 0x202a864, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MfaSerial();

  /// @brief Method get_RoleArn, addr 0x202a874, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_RoleSessionName, addr 0x202a884, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleSessionName();

  /// @brief Method get_SecretKey, addr 0x202a894, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SecretKey();

  /// @brief Method get_SourceProfile, addr 0x202a8a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SourceProfile();

  /// @brief Method get_SsoAccountId, addr 0x202a8f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SsoAccountId();

  /// @brief Method get_SsoRegion, addr 0x202a904, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SsoRegion();

  /// @brief Method get_SsoRoleName, addr 0x202a914, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SsoRoleName();

  /// @brief Method get_SsoStartUrl, addr 0x202a924, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SsoStartUrl();

  /// @brief Method get_Token, addr 0x202a8b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Token();

  /// @brief Method get_UserIdentity, addr 0x202a8c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserIdentity();

  /// @brief Method get_WebIdentityTokenFile, addr 0x202a8e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_WebIdentityTokenFile();

  /// @brief Method set_AccessKey, addr 0x202a82c, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKey(::StringW value);

  /// @brief Method set_CredentialProcess, addr 0x202a8dc, size 0x8, virtual false, abstract: false, final false
  inline void set_CredentialProcess(::StringW value);

  /// @brief Method set_CredentialSource, addr 0x202a83c, size 0x8, virtual false, abstract: false, final false
  inline void set_CredentialSource(::StringW value);

  /// @brief Method set_EndpointName, addr 0x202a84c, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointName(::StringW value);

  /// @brief Method set_ExternalID, addr 0x202a85c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExternalID(::StringW value);

  /// @brief Method set_MfaSerial, addr 0x202a86c, size 0x8, virtual false, abstract: false, final false
  inline void set_MfaSerial(::StringW value);

  /// @brief Method set_RoleArn, addr 0x202a87c, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleArn(::StringW value);

  /// @brief Method set_RoleSessionName, addr 0x202a88c, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleSessionName(::StringW value);

  /// @brief Method set_SecretKey, addr 0x202a89c, size 0x8, virtual false, abstract: false, final false
  inline void set_SecretKey(::StringW value);

  /// @brief Method set_SourceProfile, addr 0x202a8ac, size 0x8, virtual false, abstract: false, final false
  inline void set_SourceProfile(::StringW value);

  /// @brief Method set_SsoAccountId, addr 0x202a8fc, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoAccountId(::StringW value);

  /// @brief Method set_SsoRegion, addr 0x202a90c, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoRegion(::StringW value);

  /// @brief Method set_SsoRoleName, addr 0x202a91c, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoRoleName(::StringW value);

  /// @brief Method set_SsoStartUrl, addr 0x202a92c, size 0x8, virtual false, abstract: false, final false
  inline void set_SsoStartUrl(::StringW value);

  /// @brief Method set_Token, addr 0x202a8bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Token(::StringW value);

  /// @brief Method set_UserIdentity, addr 0x202a8cc, size 0x8, virtual false, abstract: false, final false
  inline void set_UserIdentity(::StringW value);

  /// @brief Method set_WebIdentityTokenFile, addr 0x202a8ec, size 0x8, virtual false, abstract: false, final false
  inline void set_WebIdentityTokenFile(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfileOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfileOptions(CredentialProfileOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfileOptions(CredentialProfileOptions const&) = delete;

  /// @brief Field <AccessKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AccessKey_k__BackingField;

  /// @brief Field <CredentialSource>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____CredentialSource_k__BackingField;

  /// @brief Field <EndpointName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____EndpointName_k__BackingField;

  /// @brief Field <ExternalID>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ExternalID_k__BackingField;

  /// @brief Field <MfaSerial>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____MfaSerial_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  /// @brief Field <RoleSessionName>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____RoleSessionName_k__BackingField;

  /// @brief Field <SecretKey>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____SecretKey_k__BackingField;

  /// @brief Field <SourceProfile>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____SourceProfile_k__BackingField;

  /// @brief Field <Token>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____Token_k__BackingField;

  /// @brief Field <UserIdentity>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____UserIdentity_k__BackingField;

  /// @brief Field <CredentialProcess>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____CredentialProcess_k__BackingField;

  /// @brief Field <WebIdentityTokenFile>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::StringW ____WebIdentityTokenFile_k__BackingField;

  /// @brief Field <SsoAccountId>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::StringW ____SsoAccountId_k__BackingField;

  /// @brief Field <SsoRegion>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____SsoRegion_k__BackingField;

  /// @brief Field <SsoRoleName>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____SsoRoleName_k__BackingField;

  /// @brief Field <SsoStartUrl>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____SsoStartUrl_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, 0x98>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____AccessKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____CredentialSource_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____EndpointName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____ExternalID_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____MfaSerial_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____RoleArn_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____RoleSessionName_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SecretKey_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SourceProfile_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____Token_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____UserIdentity_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____CredentialProcess_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____WebIdentityTokenFile_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SsoAccountId_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SsoRegion_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SsoRoleName_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions, ____SsoStartUrl_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*, "Amazon.Runtime.CredentialManagement", "CredentialProfileOptions");
