#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SettingsConstants)
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class SettingsConstants;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::SettingsConstants);
// Type: Amazon.Runtime.Internal.Settings::SettingsConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::SettingsConstants*
class CORDL_TYPE SettingsConstants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsConstants(SettingsConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsConstants(SettingsConstants const&) = delete;

  /// @brief Field AccessKeyField offset 0xffffffff size 0x8
  static constexpr ::ConstString AccessKeyField{ u"AWSAccessKey" };

  /// @brief Field AccountNumberField offset 0xffffffff size 0x8
  static constexpr ::ConstString AccountNumberField{ u"AccountNumber" };

  /// @brief Field AuthenticationTypeField offset 0xffffffff size 0x8
  static constexpr ::ConstString AuthenticationTypeField{ u"AuthenticationType" };

  /// @brief Field CredentialProcess offset 0xffffffff size 0x8
  static constexpr ::ConstString CredentialProcess{ u"credential_process" };

  /// @brief Field CredentialSourceField offset 0xffffffff size 0x8
  static constexpr ::ConstString CredentialSourceField{ u"CredentialSource" };

  /// @brief Field DisplayNameField offset 0xffffffff size 0x8
  static constexpr ::ConstString DisplayNameField{ u"DisplayName" };

  /// @brief Field EC2ConnectSettings offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2ConnectSettings{ u"EC2ConnectSettings" };

  /// @brief Field EC2InstanceMapDrives offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2InstanceMapDrives{ u"EC2RDPMapDrives" };

  /// @brief Field EC2InstancePassword offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2InstancePassword{ u"EC2InstancePassword" };

  /// @brief Field EC2InstanceSaveCredentials offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2InstanceSaveCredentials{ u"EC2InstanceSaveCredentials" };

  /// @brief Field EC2InstanceUseKeyPair offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2InstanceUseKeyPair{ u"EC2RDPUseKeyPair" };

  /// @brief Field EC2InstanceUserName offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2InstanceUserName{ u"EC2InstanceUserName" };

  /// @brief Field EndpointField offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointField{ u"Endpoint" };

  /// @brief Field EndpointNameField offset 0xffffffff size 0x8
  static constexpr ::ConstString EndpointNameField{ u"EndpointName" };

  /// @brief Field ExternalIDField offset 0xffffffff size 0x8
  static constexpr ::ConstString ExternalIDField{ u"ExternalId" };

  /// @brief Field HostedFilesLocation offset 0xffffffff size 0x8
  static constexpr ::ConstString HostedFilesLocation{ u"HostedFilesLocation" };

  /// @brief Field LastAcountSelectedKey offset 0xffffffff size 0x8
  static constexpr ::ConstString LastAcountSelectedKey{ u"LastAcountSelectedKey" };

  /// @brief Field LastVersionDoNotRemindMe offset 0xffffffff size 0x8
  static constexpr ::ConstString LastVersionDoNotRemindMe{ u"LastVersionDoNotRemindMe" };

  /// @brief Field MfaSerialField offset 0xffffffff size 0x8
  static constexpr ::ConstString MfaSerialField{ u"MfaSerial" };

  /// @brief Field MiscSettings offset 0xffffffff size 0x8
  static constexpr ::ConstString MiscSettings{ u"MiscSettings" };

  /// @brief Field ProfileTypeField offset 0xffffffff size 0x8
  static constexpr ::ConstString ProfileTypeField{ u"ProfileType" };

  /// @brief Field ProxyHost offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyHost{ u"ProxyHost" };

  /// @brief Field ProxyPasswordEncrypted offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyPasswordEncrypted{ u"ProxyPasswordEncrypted" };

  /// @brief Field ProxyPasswordObsolete offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyPasswordObsolete{ u"ProxyPassword" };

  /// @brief Field ProxyPort offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyPort{ u"ProxyPort" };

  /// @brief Field ProxySettings offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxySettings{ u"ProxySettings" };

  /// @brief Field ProxyUsernameEncrypted offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyUsernameEncrypted{ u"ProxyUsernameEncrypted" };

  /// @brief Field ProxyUsernameObsolete offset 0xffffffff size 0x8
  static constexpr ::ConstString ProxyUsernameObsolete{ u"ProxyUsername" };

  /// @brief Field RecentUsages offset 0xffffffff size 0x8
  static constexpr ::ConstString RecentUsages{ u"RecentUsages" };

  /// @brief Field Region offset 0xffffffff size 0x8
  static constexpr ::ConstString Region{ u"Region" };

  /// @brief Field RegisteredProfiles offset 0xffffffff size 0x8
  static constexpr ::ConstString RegisteredProfiles{ u"RegisteredAccounts" };

  /// @brief Field RegisteredRoleSessions offset 0xffffffff size 0x8
  static constexpr ::ConstString RegisteredRoleSessions{ u"RoleSessions" };

  /// @brief Field RegisteredSAMLEndpoints offset 0xffffffff size 0x8
  static constexpr ::ConstString RegisteredSAMLEndpoints{ u"SAMLEndpoints" };

  /// @brief Field Restrictions offset 0xffffffff size 0x8
  static constexpr ::ConstString Restrictions{ u"Restrictions" };

  /// @brief Field RoleArnField offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleArnField{ u"RoleArn" };

  /// @brief Field RoleSession offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleSession{ u"RoleSession" };

  /// @brief Field RoleSessionName offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleSessionName{ u"RoleSessionName" };

  /// @brief Field SecretKeyField offset 0xffffffff size 0x8
  static constexpr ::ConstString SecretKeyField{ u"AWSSecretKey" };

  /// @brief Field SecretKeyRepository offset 0xffffffff size 0x8
  static constexpr ::ConstString SecretKeyRepository{ u"SecretKeyRepository" };

  /// @brief Field SessionTokenField offset 0xffffffff size 0x8
  static constexpr ::ConstString SessionTokenField{ u"SessionToken" };

  /// @brief Field SourceProfileField offset 0xffffffff size 0x8
  static constexpr ::ConstString SourceProfileField{ u"SourceProfile" };

  /// @brief Field UserIdentityField offset 0xffffffff size 0x8
  static constexpr ::ConstString UserIdentityField{ u"UserIdentity" };

  /// @brief Field UserPreferences offset 0xffffffff size 0x8
  static constexpr ::ConstString UserPreferences{ u"UserPreferences" };

  /// @brief Field VersionCheck offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionCheck{ u"VersionCheck" };

  /// @brief Field WebIdentityTokenFile offset 0xffffffff size 0x8
  static constexpr ::ConstString WebIdentityTokenFile{ u"WebIdentityTokenFile" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::SettingsConstants, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::SettingsConstants);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::SettingsConstants*, "Amazon.Runtime.Internal.Settings", "SettingsConstants");
