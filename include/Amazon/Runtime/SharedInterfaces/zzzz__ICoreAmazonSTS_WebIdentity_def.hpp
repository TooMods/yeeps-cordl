#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonSTS_WebIdentity)
namespace Amazon::Runtime {
class AssumeRoleImmutableCredentials;
}
namespace Amazon::Runtime {
class AssumeRoleWithWebIdentityCredentialsOptions;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSTS_WebIdentity;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS_WebIdentity
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSTS_WebIdentity*
class CORDL_TYPE ICoreAmazonSTS_WebIdentity {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CredentialsFromAssumeRoleWithWebIdentityAuthentication, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::AssumeRoleImmutableCredentials* CredentialsFromAssumeRoleWithWebIdentityAuthentication(::StringW webIdentityToken, ::StringW roleArn, ::StringW roleSessionName,
                                                                                                                   ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options);

  /// @brief Method CredentialsFromAssumeRoleWithWebIdentityAuthenticationAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::AssumeRoleImmutableCredentials*>*
  CredentialsFromAssumeRoleWithWebIdentityAuthenticationAsync(::StringW webIdentityToken, ::StringW roleArn, ::StringW roleSessionName,
                                                              ::Amazon::Runtime::AssumeRoleWithWebIdentityCredentialsOptions* options);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS_WebIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSTS_WebIdentity(ICoreAmazonSTS_WebIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSTS_WebIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSTS_WebIdentity(ICoreAmazonSTS_WebIdentity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSTS_WebIdentity*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSTS_WebIdentity");
