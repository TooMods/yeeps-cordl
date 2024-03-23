#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICredentialProfileSource)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource);
// Type: Amazon.Runtime.CredentialManagement::ICredentialProfileSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::ICredentialProfileSource*
class CORDL_TYPE ICredentialProfileSource {
public:
  // Declarations
  /// @brief Method TryGetProfile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile);

  // Ctor Parameters [CppParam { name: "", ty: "ICredentialProfileSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICredentialProfileSource(ICredentialProfileSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICredentialProfileSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICredentialProfileSource(ICredentialProfileSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, "Amazon.Runtime.CredentialManagement", "ICredentialProfileSource");
