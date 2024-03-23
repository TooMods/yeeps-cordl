#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICredentialProfileStore)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileStore;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::ICredentialProfileStore);
// Type: Amazon.Runtime.CredentialManagement::ICredentialProfileStore
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::ICredentialProfileStore*
class CORDL_TYPE ICredentialProfileStore {
public:
  // Declarations
  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept;

  /// @brief Method CopyProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName);

  /// @brief Method CopyProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyProfile(::StringW fromProfileName, ::StringW toProfileName, bool force);

  /// @brief Method ListProfileNames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ListProfileNames();

  /// @brief Method ListProfiles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* ListProfiles();

  /// @brief Method RegisterProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method RenameProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName);

  /// @brief Method RenameProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RenameProfile(::StringW oldProfileName, ::StringW newProfileName, bool force);

  /// @brief Method UnregisterProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterProfile(::StringW profileName);

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICredentialProfileStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICredentialProfileStore(ICredentialProfileStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICredentialProfileStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentialProfileStore(ICredentialProfileStore const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::ICredentialProfileStore);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::ICredentialProfileStore*, "Amazon.Runtime.CredentialManagement", "ICredentialProfileStore");
