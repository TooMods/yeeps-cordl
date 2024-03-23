#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CredentialProfileStoreChain)
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfileStoreChain;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain);
// Type: Amazon.Runtime.CredentialManagement::CredentialProfileStoreChain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::CredentialProfileStoreChain*
class CORDL_TYPE CredentialProfileStoreChain : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ProfilesLocation, put = set_ProfilesLocation))::StringW ProfilesLocation;

  /// @brief Field <ProfilesLocation>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfilesLocation_k__BackingField, put = __cordl_internal_set__ProfilesLocation_k__BackingField))::StringW _ProfilesLocation_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr operator ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*() noexcept;

  /// @brief Method ListProfiles, addr 0x202c64c, size 0x134, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::CredentialProfile*>* ListProfiles();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* New_ctor();

  static inline ::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain* New_ctor(::StringW profilesLocation);

  /// @brief Method RegisterProfile, addr 0x202cc14, size 0xc4, virtual false, abstract: false, final false
  inline void RegisterProfile(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method TryGetAWSCredentials, addr 0x202bb60, size 0xa8, virtual false, abstract: false, final false
  inline bool TryGetAWSCredentials(::StringW profileName, ByRef<::Amazon::Runtime::AWSCredentials*> credentials);

  /// @brief Method TryGetProfile, addr 0x202bc08, size 0xf8, virtual true, abstract: false, final true
  inline bool TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile);

  /// @brief Method UnregisterProfile, addr 0x202d404, size 0xd8, virtual false, abstract: false, final false
  inline void UnregisterProfile(::StringW profileName);

  constexpr ::StringW const& __cordl_internal_get__ProfilesLocation_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfilesLocation_k__BackingField();

  constexpr void __cordl_internal_set__ProfilesLocation_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x201933c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x202bb38, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilesLocation);

  /// @brief Method get_ProfilesLocation, addr 0x202bb28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfilesLocation();

  /// @brief Convert to "::Amazon::Runtime::CredentialManagement::ICredentialProfileSource"
  constexpr ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* i___Amazon__Runtime__CredentialManagement__ICredentialProfileSource() noexcept;

  /// @brief Method set_ProfilesLocation, addr 0x202bb30, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfilesLocation(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfileStoreChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileStoreChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfileStoreChain(CredentialProfileStoreChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileStoreChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfileStoreChain(CredentialProfileStoreChain const&) = delete;

  /// @brief Field <ProfilesLocation>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ProfilesLocation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain, ____ProfilesLocation_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::CredentialProfileStoreChain*, "Amazon.Runtime.CredentialManagement", "CredentialProfileStoreChain");
