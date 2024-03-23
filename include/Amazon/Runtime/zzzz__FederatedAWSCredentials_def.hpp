#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RefreshingAWSCredentials_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FederatedAWSCredentials)
namespace Amazon::Runtime::CredentialManagement::Internal {
class SAMLRoleSessionManager;
}
namespace Amazon::Runtime::CredentialManagement {
class SAMLEndpoint;
}
namespace Amazon::Runtime {
class FederatedAWSCredentialsOptions;
}
namespace Amazon::Runtime {
class SAMLImmutableCredentials;
}
namespace Amazon::Runtime {
class __RefreshingAWSCredentials__CredentialsRefreshState;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Net {
class ICredentials;
}
// Forward declare root types
namespace Amazon::Runtime {
class FederatedAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FederatedAWSCredentials);
// Type: Amazon.Runtime::FederatedAWSCredentials
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FederatedAWSCredentials*
class CORDL_TYPE FederatedAWSCredentials : public ::Amazon::Runtime::RefreshingAWSCredentials {
public:
  // Declarations
  /// @brief Field DefaultPreemptExpiryTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultPreemptExpiryTime, put = setStaticF_DefaultPreemptExpiryTime))::System::TimeSpan DefaultPreemptExpiryTime;

  /// @brief Field DefaultSTSClientRegion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultSTSClientRegion, put = setStaticF_DefaultSTSClientRegion))::Amazon::RegionEndpoint* DefaultSTSClientRegion;

  /// @brief Field MaximumCredentialTimespan, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaximumCredentialTimespan, put = setStaticF_MaximumCredentialTimespan))::System::TimeSpan MaximumCredentialTimespan;

  __declspec(property(get = get_Options, put = set_Options))::Amazon::Runtime::FederatedAWSCredentialsOptions* Options;

  __declspec(property(get = get_RoleArn, put = set_RoleArn))::StringW RoleArn;

  __declspec(property(get = get_SAMLEndpoint, put = set_SAMLEndpoint))::Amazon::Runtime::CredentialManagement::SAMLEndpoint* SAMLEndpoint;

  /// @brief Field <Options>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField,
                      put = __cordl_internal_set__Options_k__BackingField))::Amazon::Runtime::FederatedAWSCredentialsOptions* _Options_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__RoleArn_k__BackingField, put = __cordl_internal_set__RoleArn_k__BackingField))::StringW _RoleArn_k__BackingField;

  /// @brief Field <SAMLEndpoint>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__SAMLEndpoint_k__BackingField,
                      put = __cordl_internal_set__SAMLEndpoint_k__BackingField))::Amazon::Runtime::CredentialManagement::SAMLEndpoint* _SAMLEndpoint_k__BackingField;

  /// @brief Field sessionManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionManager, put = __cordl_internal_set_sessionManager))::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* sessionManager;

  /// @brief Method Authenticate, addr 0x1febb38, size 0x614, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* Authenticate(::System::Net::ICredentials* userCredential);

  /// @brief Method ClearCredentials, addr 0x1fec4cc, size 0x8, virtual true, abstract: false, final false
  inline void ClearCredentials();

  /// @brief Method GenerateNewCredentials, addr 0x1feb2d8, size 0x430, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::__RefreshingAWSCredentials__CredentialsRefreshState* GenerateNewCredentials();

  /// @brief Method GetRoleSessionName, addr 0x1fec324, size 0x1a8, virtual false, abstract: false, final false
  inline ::StringW GetRoleSessionName();

  static inline ::Amazon::Runtime::FederatedAWSCredentials* New_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn);

  static inline ::Amazon::Runtime::FederatedAWSCredentials* New_ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn,
                                                                     ::Amazon::Runtime::FederatedAWSCredentialsOptions* options);

  /// @brief Method RegisterRoleSession, addr 0x1fec2cc, size 0x58, virtual false, abstract: false, final false
  inline void RegisterRoleSession(::Amazon::Runtime::SAMLImmutableCredentials* sessionCredentials);

  /// @brief Method TryGetRoleSession, addr 0x1feb708, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetRoleSession(ByRef<::Amazon::Runtime::SAMLImmutableCredentials*> sessionCredentials);

  constexpr ::Amazon::Runtime::FederatedAWSCredentialsOptions*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::FederatedAWSCredentialsOptions*> const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__RoleArn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__RoleArn_k__BackingField();

  constexpr ::Amazon::Runtime::CredentialManagement::SAMLEndpoint*& __cordl_internal_get__SAMLEndpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*> const& __cordl_internal_get__SAMLEndpoint_k__BackingField() const;

  constexpr ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*& __cordl_internal_get_sessionManager();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*> const& __cordl_internal_get_sessionManager() const;

  constexpr void __cordl_internal_set__Options_k__BackingField(::Amazon::Runtime::FederatedAWSCredentialsOptions* value);

  constexpr void __cordl_internal_set__RoleArn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SAMLEndpoint_k__BackingField(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* value);

  constexpr void __cordl_internal_set_sessionManager(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* value);

  /// @brief Method .ctor, addr 0x1feb02c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn);

  /// @brief Method .ctor, addr 0x1feb10c, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint, ::StringW roleArn, ::Amazon::Runtime::FederatedAWSCredentialsOptions* options);

  static inline ::System::TimeSpan getStaticF_DefaultPreemptExpiryTime();

  static inline ::Amazon::RegionEndpoint* getStaticF_DefaultSTSClientRegion();

  static inline ::System::TimeSpan getStaticF_MaximumCredentialTimespan();

  /// @brief Method get_Options, addr 0x1feb2c8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::FederatedAWSCredentialsOptions* get_Options();

  /// @brief Method get_RoleArn, addr 0x1feb2b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RoleArn();

  /// @brief Method get_SAMLEndpoint, addr 0x1feb2a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* get_SAMLEndpoint();

  static inline void setStaticF_DefaultPreemptExpiryTime(::System::TimeSpan value);

  static inline void setStaticF_DefaultSTSClientRegion(::Amazon::RegionEndpoint* value);

  static inline void setStaticF_MaximumCredentialTimespan(::System::TimeSpan value);

  /// @brief Method set_Options, addr 0x1feb2d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Amazon::Runtime::FederatedAWSCredentialsOptions* value);

  /// @brief Method set_RoleArn, addr 0x1feb2c0, size 0x8, virtual false, abstract: false, final false
  inline void set_RoleArn(::StringW value);

  /// @brief Method set_SAMLEndpoint, addr 0x1feb2b0, size 0x8, virtual false, abstract: false, final false
  inline void set_SAMLEndpoint(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FederatedAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FederatedAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FederatedAWSCredentials(FederatedAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FederatedAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FederatedAWSCredentials(FederatedAWSCredentials const&) = delete;

  /// @brief Field sessionManager, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* ___sessionManager;

  /// @brief Field <SAMLEndpoint>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* ____SAMLEndpoint_k__BackingField;

  /// @brief Field <RoleArn>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____RoleArn_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Runtime::FederatedAWSCredentialsOptions* ____Options_k__BackingField;

  /// @brief Field MaxAuthenticationRetries offset 0xffffffff size 0x4
  static constexpr int32_t MaxAuthenticationRetries{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FederatedAWSCredentials, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentials, ___sessionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentials, ____SAMLEndpoint_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentials, ____RoleArn_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentials, ____Options_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FederatedAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FederatedAWSCredentials*, "Amazon.Runtime", "FederatedAWSCredentials");
