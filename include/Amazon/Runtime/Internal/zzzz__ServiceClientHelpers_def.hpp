#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServiceClientHelpers)
namespace Amazon::Runtime::Internal {
class __ServiceClientHelpers____c__DisplayClass21_0;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class AmazonServiceClient;
}
namespace Amazon::Runtime {
class ClientConfig;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ServiceClientHelpers;
}
namespace Amazon::Runtime::Internal {
class __ServiceClientHelpers____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ServiceClientHelpers);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::ServiceClientHelpers::<>c__DisplayClass21_0*
class CORDL_TYPE __ServiceClientHelpers____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName))::StringW assemblyName;

  static inline ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0* New_ctor();

  /// @brief Method <GetSDKAssembly>b__0, addr 0x23dba8c, size 0x44, virtual false, abstract: false, final false
  inline bool _GetSDKAssembly_b__0(::System::Reflection::Assembly* x);

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  /// @brief Method .ctor, addr 0x23dba84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServiceClientHelpers____c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ServiceClientHelpers____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ServiceClientHelpers____c__DisplayClass21_0(__ServiceClientHelpers____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ServiceClientHelpers____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ServiceClientHelpers____c__DisplayClass21_0(__ServiceClientHelpers____c__DisplayClass21_0 const&) = delete;

  /// @brief Field assemblyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___assemblyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0, ___assemblyName) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::ServiceClientHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ServiceClientHelpers*
class CORDL_TYPE ServiceClientHelpers : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0;

  /// @brief Method CreateServiceConfig, addr 0x23db648, size 0x174, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::ClientConfig* CreateServiceConfig(::StringW assemblyName, ::StringW serviceConfigClassName);

  /// @brief Method CreateServiceFromAnother, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TClient, typename TConfig> static inline TClient CreateServiceFromAnother(::Amazon::Runtime::AmazonServiceClient* originalServiceClient);

  /// @brief Method CreateServiceFromAssembly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TClient>
  static inline TClient CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::Runtime::ClientConfig* config);

  /// @brief Method CreateServiceFromAssembly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TClient>
  static inline TClient CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region);

  /// @brief Method CreateServiceFromAssembly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TClient> static inline TClient CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::Runtime::AmazonServiceClient* originalServiceClient);

  /// @brief Method CreateServiceFromAssembly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TClient> static inline TClient CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::RegionEndpoint* region);

  /// @brief Method GetSDKAssembly, addr 0x23db8cc, size 0x1b8, virtual false, abstract: false, final false
  static inline ::System::Reflection::Assembly* GetSDKAssembly(::StringW assemblyName);

  /// @brief Method LoadServiceClientType, addr 0x23db844, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Util::Internal::ITypeInfo* LoadServiceClientType(::StringW assemblyName, ::StringW serviceClientClassName);

  /// @brief Method LoadServiceConfigType, addr 0x23db7bc, size 0x88, virtual false, abstract: false, final false
  static inline ::Amazon::Util::Internal::ITypeInfo* LoadServiceConfigType(::StringW assemblyName, ::StringW serviceConfigClassName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceClientHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServiceClientHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceClientHelpers(ServiceClientHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceClientHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceClientHelpers(ServiceClientHelpers const&) = delete;

  /// @brief Field KMS_ASSEMBLY_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString KMS_ASSEMBLY_NAME{ u"AWSSDK.KeyManagementService" };

  /// @brief Field KMS_SERVICE_CLASS_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString KMS_SERVICE_CLASS_NAME{ u"Amazon.KeyManagementService.AmazonKeyManagementServiceClient" };

  /// @brief Field S3_ASSEMBLY_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_ASSEMBLY_NAME{ u"AWSSDK.S3" };

  /// @brief Field S3_SERVICE_CLASS_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_SERVICE_CLASS_NAME{ u"Amazon.S3.AmazonS3Client" };

  /// @brief Field SSO_ASSEMBLY_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_ASSEMBLY_NAME{ u"AWSSDK.SSO" };

  /// @brief Field SSO_OIDC_ASSEMBLY_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_OIDC_ASSEMBLY_NAME{ u"AWSSDK.SSOOIDC" };

  /// @brief Field SSO_OIDC_SERVICE_CLASS_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_OIDC_SERVICE_CLASS_NAME{ u"Amazon.SSOOIDC.AmazonSSOOIDCClient" };

  /// @brief Field SSO_OIDC_SERVICE_CONFIG_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_OIDC_SERVICE_CONFIG_NAME{ u"Amazon.SSOOIDC.AmazonSSOOIDCConfig" };

  /// @brief Field SSO_SERVICE_CLASS_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_SERVICE_CLASS_NAME{ u"Amazon.SSO.AmazonSSOClient" };

  /// @brief Field SSO_SERVICE_CONFIG_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString SSO_SERVICE_CONFIG_NAME{ u"Amazon.SSO.AmazonSSOConfig" };

  /// @brief Field STS_ASSEMBLY_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString STS_ASSEMBLY_NAME{ u"AWSSDK.SecurityToken" };

  /// @brief Field STS_SERVICE_CLASS_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString STS_SERVICE_CLASS_NAME{ u"Amazon.SecurityToken.AmazonSecurityTokenServiceClient" };

  /// @brief Field STS_SERVICE_CONFIG_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString STS_SERVICE_CONFIG_NAME{ u"Amazon.SecurityToken.AmazonSecurityTokenServiceConfig" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ServiceClientHelpers, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ServiceClientHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ServiceClientHelpers*, "Amazon.Runtime.Internal", "ServiceClientHelpers");
NEED_NO_BOX(::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*, "Amazon.Runtime.Internal", "ServiceClientHelpers/<>c__DisplayClass21_0");
