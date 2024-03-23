#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonSTS_SAML)
namespace Amazon::Runtime {
class SAMLImmutableCredentials;
}
namespace System::Net {
class ICredentials;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSTS_SAML;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS_SAML
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS_SAML*
class CORDL_TYPE ICoreAmazonSTS_SAML {
public:
  // Declarations
  /// @brief Method CredentialsFromSAMLAuthentication, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::SAMLImmutableCredentials* CredentialsFromSAMLAuthentication(::StringW endpoint, ::StringW authenticationType, ::StringW roleARN, ::System::TimeSpan credentialDuration,
                                                                                        ::System::Net::ICredentials* userCredential);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS_SAML", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSTS_SAML(ICoreAmazonSTS_SAML&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS_SAML", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSTS_SAML(ICoreAmazonSTS_SAML const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_SAML*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSTS_SAML");
