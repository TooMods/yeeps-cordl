#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StoredProfileCredentials)
namespace Amazon::Runtime {
class AWSCredentials;
}
// Forward declare root types
namespace Amazon::Runtime {
class StoredProfileCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::StoredProfileCredentials);
// Type: Amazon.Runtime::StoredProfileCredentials
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::StoredProfileCredentials*
class CORDL_TYPE StoredProfileCredentials : public ::System::Object {
public:
  // Declarations
  /// @brief Field PotentialEnvironmentPathsToCredentialsFile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PotentialEnvironmentPathsToCredentialsFile,
                             put = setStaticF_PotentialEnvironmentPathsToCredentialsFile))::ArrayW<::StringW, ::Array<::StringW>*> PotentialEnvironmentPathsToCredentialsFile;

  /// @brief Method GetProfile, addr 0x1ff2550, size 0x8c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetProfile(::StringW profileName);

  /// @brief Method GetProfile, addr 0x1ff25dc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::AWSCredentials* GetProfile(::StringW profileName, ::StringW profileLocation);

  static inline ::Amazon::Runtime::StoredProfileCredentials* New_ctor();

  /// @brief Method ResolveSharedCredentialFileLocation, addr 0x1ff1b44, size 0x5c4, virtual false, abstract: false, final false
  static inline ::StringW ResolveSharedCredentialFileLocation(::StringW profileLocation);

  /// @brief Method TestSharedCredentialFileExists, addr 0x1ff277c, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW TestSharedCredentialFileExists(::StringW pathOrFilename);

  /// @brief Method .ctor, addr 0x1ff282c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_PotentialEnvironmentPathsToCredentialsFile();

  static inline void setStaticF_PotentialEnvironmentPathsToCredentialsFile(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StoredProfileCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StoredProfileCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StoredProfileCredentials(StoredProfileCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StoredProfileCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StoredProfileCredentials(StoredProfileCredentials const&) = delete;

  /// @brief Field DEFAULT_PROFILE_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_PROFILE_NAME{ u"default" };

  /// @brief Field DefaultSharedCredentialFilename offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultSharedCredentialFilename{ u"credentials" };

  /// @brief Field DefaultSharedCredentialLocation offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultSharedCredentialLocation{ u".aws/credentials" };

  /// @brief Field SHARED_CREDENTIALS_FILE_ENVVAR offset 0xffffffff size 0x8
  static constexpr ::ConstString SHARED_CREDENTIALS_FILE_ENVVAR{ u"AWS_SHARED_CREDENTIALS_FILE" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::StoredProfileCredentials, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::StoredProfileCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::StoredProfileCredentials*, "Amazon.Runtime", "StoredProfileCredentials");
