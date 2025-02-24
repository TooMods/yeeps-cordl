#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonSTS)
namespace Amazon::Runtime {
class AssumeRoleAWSCredentialsOptions;
}
namespace Amazon::Runtime {
class AssumeRoleImmutableCredentials;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSTS;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS*
class CORDL_TYPE ICoreAmazonSTS {
public:
  // Declarations
  /// @brief Method CredentialsFromAssumeRoleAuthentication, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AssumeRoleImmutableCredentials* CredentialsFromAssumeRoleAuthentication(::StringW roleArn, ::StringW roleSessionName,
                                                                                                    ::Amazon::Runtime::AssumeRoleAWSCredentialsOptions* options);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSTS(ICoreAmazonSTS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSTS(ICoreAmazonSTS const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSTS");
