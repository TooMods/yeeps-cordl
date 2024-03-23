#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSCredentialsFactory)
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileOptions;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class BasicAWSCredentials;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class AWSCredentialsFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory);
// Type: Amazon.Runtime.CredentialManagement::AWSCredentialsFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::AWSCredentialsFactory*
class CORDL_TYPE AWSCredentialsFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field CallbackProfileTypes, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_CallbackProfileTypes,
               put = setStaticF_CallbackProfileTypes))::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* CallbackProfileTypes;

  /// @brief Method GetAWSCredentials, addr 0x2027820, size 0x70, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options,
                                                                     ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource);

  /// @brief Method GetAWSCredentials, addr 0x2027914, size 0x74, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options,
                                                                     ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool nonCallbackOnly);

  /// @brief Method GetAWSCredentials, addr 0x20274f0, size 0x80, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                     ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource);

  /// @brief Method GetAWSCredentials, addr 0x2027890, size 0x84, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                     ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool nonCallbackOnly);

  /// @brief Method GetAWSCredentials, addr 0x2027570, size 0x2b0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentials(::StringW profileName, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                     ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options, ::Amazon::RegionEndpoint* stsRegion,
                                                                     bool nonCallbackOnly);

  /// @brief Method GetAWSCredentialsInternal, addr 0x2027a9c, size 0x928, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetAWSCredentialsInternal(::StringW profileName,
                                                                             ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType,
                                                                             ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options, ::Amazon::RegionEndpoint* stsRegion,
                                                                             ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool throwIfInvalid,
                                                                             ::System::Collections::Generic::HashSet_1<::StringW>* profileLoopAvoidance);

  /// @brief Method GetCredentialSourceAWSCredentials, addr 0x2028ac0, size 0x3b8, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetCredentialSourceAWSCredentials(::StringW credentialSourceType, bool throwIfInvalid);

  /// @brief Method GetSourceAWSCredentials, addr 0x20288ac, size 0x214, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetSourceAWSCredentials(::StringW sourceProfileName, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                           bool throwIfInvalid, ::System::Collections::Generic::HashSet_1<::StringW>* profileLoopAvoidance);

  /// @brief Method IsCallbackRequired, addr 0x202877c, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsCallbackRequired(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType);

  /// @brief Method ThrowInvalidOrReturnNull, addr 0x202920c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::BasicAWSCredentials* ThrowInvalidOrReturnNull(::StringW profileName, bool doThrow);

  /// @brief Method ThrowOrReturnNull, addr 0x2028848, size 0x64, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::BasicAWSCredentials* ThrowOrReturnNull(::StringW message, ::System::Exception* innerException, bool doThrow);

  /// @brief Method TryGetAWSCredentials, addr 0x20283c4, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryGetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                          ByRef<::Amazon::Runtime::AWSCredentials*> credentials);

  /// @brief Method TryGetAWSCredentials, addr 0x2027988, size 0xbc, virtual false, abstract: false, final false
  static inline bool TryGetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                          ByRef<::Amazon::Runtime::AWSCredentials*> credentials);

  static inline ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* getStaticF_CallbackProfileTypes();

  static inline void setStaticF_CallbackProfileTypes(::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSCredentialsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentialsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSCredentialsFactory(AWSCredentialsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentialsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSCredentialsFactory(AWSCredentialsFactory const&) = delete;

  /// @brief Field RoleSessionNamePrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString RoleSessionNamePrefix{ u"aws-dotnet-sdk-session-" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*, "Amazon.Runtime.CredentialManagement", "AWSCredentialsFactory");
