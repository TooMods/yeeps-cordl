#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSRegion_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileAWSRegion)
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
// Forward declare root types
namespace Amazon::Runtime {
class ProfileAWSRegion;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ProfileAWSRegion);
// Type: Amazon.Runtime::ProfileAWSRegion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ProfileAWSRegion*
class CORDL_TYPE ProfileAWSRegion : public ::Amazon::Runtime::AWSRegion {
public:
  // Declarations
  static inline ::Amazon::Runtime::ProfileAWSRegion* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  static inline ::Amazon::Runtime::ProfileAWSRegion* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  /// @brief Method Setup, addr 0x1fdfcec, size 0x358, virtual false, abstract: false, final false
  inline void Setup(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  /// @brief Method .ctor, addr 0x1fdfc20, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  /// @brief Method .ctor, addr 0x1fe0044, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileAWSRegion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileAWSRegion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileAWSRegion(ProfileAWSRegion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileAWSRegion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileAWSRegion(ProfileAWSRegion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ProfileAWSRegion, 0x18>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ProfileAWSRegion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ProfileAWSRegion*, "Amazon.Runtime", "ProfileAWSRegion");
