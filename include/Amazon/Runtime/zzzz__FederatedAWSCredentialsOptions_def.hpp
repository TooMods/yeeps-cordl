#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FederatedAWSCredentialsOptions)
namespace Amazon::Runtime {
class CredentialRequestCallbackArgs;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net {
class WebProxy;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class FederatedAWSCredentialsOptions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::FederatedAWSCredentialsOptions);
// Type: Amazon.Runtime::FederatedAWSCredentialsOptions
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::FederatedAWSCredentialsOptions*
class CORDL_TYPE FederatedAWSCredentialsOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CredentialRequestCallback,
                      put = set_CredentialRequestCallback))::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* CredentialRequestCallback;

  __declspec(property(get = get_CustomCallbackState, put = set_CustomCallbackState))::System::Object* CustomCallbackState;

  __declspec(property(get = get_ProfileName, put = set_ProfileName))::StringW ProfileName;

  __declspec(property(get = get_ProxySettings, put = set_ProxySettings))::System::Net::WebProxy* ProxySettings;

  __declspec(property(get = get_STSRegion, put = set_STSRegion))::Amazon::RegionEndpoint* STSRegion;

  __declspec(property(get = get_UserIdentity, put = set_UserIdentity))::StringW UserIdentity;

  /// @brief Field credentialRequestCallback, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_credentialRequestCallback,
               put = __cordl_internal_set_credentialRequestCallback))::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* credentialRequestCallback;

  /// @brief Field customCallbackState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_customCallbackState, put = __cordl_internal_set_customCallbackState))::System::Object* customCallbackState;

  /// @brief Field profileName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_profileName, put = __cordl_internal_set_profileName))::StringW profileName;

  /// @brief Field proxySettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_proxySettings, put = __cordl_internal_set_proxySettings))::System::Net::WebProxy* proxySettings;

  /// @brief Field stsRegion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stsRegion, put = __cordl_internal_set_stsRegion))::Amazon::RegionEndpoint* stsRegion;

  /// @brief Field syncLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_syncLock, put = __cordl_internal_set_syncLock))::System::Object* syncLock;

  /// @brief Field userIdentity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_userIdentity, put = __cordl_internal_set_userIdentity))::StringW userIdentity;

  static inline ::Amazon::Runtime::FederatedAWSCredentialsOptions* New_ctor();

  constexpr ::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>*& __cordl_internal_get_credentialRequestCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>*> const&
  __cordl_internal_get_credentialRequestCallback() const;

  constexpr ::System::Object*& __cordl_internal_get_customCallbackState();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_customCallbackState() const;

  constexpr ::StringW const& __cordl_internal_get_profileName() const;

  constexpr ::StringW& __cordl_internal_get_profileName();

  constexpr ::System::Net::WebProxy*& __cordl_internal_get_proxySettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::WebProxy*> const& __cordl_internal_get_proxySettings() const;

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get_stsRegion();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get_stsRegion() const;

  constexpr ::System::Object*& __cordl_internal_get_syncLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_syncLock() const;

  constexpr ::StringW const& __cordl_internal_get_userIdentity() const;

  constexpr ::StringW& __cordl_internal_get_userIdentity();

  constexpr void __cordl_internal_set_credentialRequestCallback(::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* value);

  constexpr void __cordl_internal_set_customCallbackState(::System::Object* value);

  constexpr void __cordl_internal_set_profileName(::StringW value);

  constexpr void __cordl_internal_set_proxySettings(::System::Net::WebProxy* value);

  constexpr void __cordl_internal_set_stsRegion(::Amazon::RegionEndpoint* value);

  constexpr void __cordl_internal_set_syncLock(::System::Object* value);

  constexpr void __cordl_internal_set_userIdentity(::StringW value);

  /// @brief Method .ctor, addr 0x1feb0a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CredentialRequestCallback, addr 0x1feb8f8, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* get_CredentialRequestCallback();

  /// @brief Method get_CustomCallbackState, addr 0x1feba78, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Object* get_CustomCallbackState();

  /// @brief Method get_ProfileName, addr 0x1feb9b8, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW get_ProfileName();

  /// @brief Method get_ProxySettings, addr 0x1fec20c, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Net::WebProxy* get_ProxySettings();

  /// @brief Method get_STSRegion, addr 0x1fec14c, size 0xc0, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_STSRegion();

  /// @brief Method get_UserIdentity, addr 0x1feb838, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW get_UserIdentity();

  /// @brief Method set_CredentialRequestCallback, addr 0x1fec664, size 0xbc, virtual false, abstract: false, final false
  inline void set_CredentialRequestCallback(::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* value);

  /// @brief Method set_CustomCallbackState, addr 0x1fec720, size 0xbc, virtual false, abstract: false, final false
  inline void set_CustomCallbackState(::System::Object* value);

  /// @brief Method set_ProfileName, addr 0x1fec954, size 0xbc, virtual false, abstract: false, final false
  inline void set_ProfileName(::StringW value);

  /// @brief Method set_ProxySettings, addr 0x1fec7dc, size 0xbc, virtual false, abstract: false, final false
  inline void set_ProxySettings(::System::Net::WebProxy* value);

  /// @brief Method set_STSRegion, addr 0x1fec898, size 0xbc, virtual false, abstract: false, final false
  inline void set_STSRegion(::Amazon::RegionEndpoint* value);

  /// @brief Method set_UserIdentity, addr 0x1fec5a8, size 0xbc, virtual false, abstract: false, final false
  inline void set_UserIdentity(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FederatedAWSCredentialsOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FederatedAWSCredentialsOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FederatedAWSCredentialsOptions(FederatedAWSCredentialsOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FederatedAWSCredentialsOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FederatedAWSCredentialsOptions(FederatedAWSCredentialsOptions const&) = delete;

  /// @brief Field syncLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___syncLock;

  /// @brief Field credentialRequestCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Amazon::Runtime::CredentialRequestCallbackArgs*, ::System::Net::NetworkCredential*>* ___credentialRequestCallback;

  /// @brief Field customCallbackState, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___customCallbackState;

  /// @brief Field userIdentity, offset: 0x28, size: 0x8, def value: None
  ::StringW ___userIdentity;

  /// @brief Field profileName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___profileName;

  /// @brief Field stsRegion, offset: 0x38, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ___stsRegion;

  /// @brief Field proxySettings, offset: 0x40, size: 0x8, def value: None
  ::System::Net::WebProxy* ___proxySettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::FederatedAWSCredentialsOptions, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___syncLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___credentialRequestCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___customCallbackState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___userIdentity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___profileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___stsRegion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::FederatedAWSCredentialsOptions, ___proxySettings) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::FederatedAWSCredentialsOptions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::FederatedAWSCredentialsOptions*, "Amazon.Runtime", "FederatedAWSCredentialsOptions");
