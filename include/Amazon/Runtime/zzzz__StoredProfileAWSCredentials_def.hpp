#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StoredProfileAWSCredentials)
namespace Amazon::Runtime {
class AWSCredentials;
}
namespace Amazon::Runtime {
class ImmutableCredentials;
}
// Forward declare root types
namespace Amazon::Runtime {
class StoredProfileAWSCredentials;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::StoredProfileAWSCredentials);
// Type: Amazon.Runtime::StoredProfileAWSCredentials
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::StoredProfileAWSCredentials*
class CORDL_TYPE StoredProfileAWSCredentials : public ::Amazon::Runtime::AWSCredentials {
public:
  // Declarations
  __declspec(property(get = get_ProfileName, put = set_ProfileName))::StringW ProfileName;

  __declspec(property(get = get_ProfilesLocation, put = set_ProfilesLocation))::StringW ProfilesLocation;

  __declspec(property(get = get_WrappedCredentials))::Amazon::Runtime::AWSCredentials* WrappedCredentials;

  /// @brief Field <ProfileName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfileName_k__BackingField, put = __cordl_internal_set__ProfileName_k__BackingField))::StringW _ProfileName_k__BackingField;

  /// @brief Field <ProfilesLocation>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ProfilesLocation_k__BackingField, put = __cordl_internal_set__ProfilesLocation_k__BackingField))::StringW _ProfilesLocation_k__BackingField;

  /// @brief Field _wrappedCredentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__wrappedCredentials, put = __cordl_internal_set__wrappedCredentials))::Amazon::Runtime::AWSCredentials* _wrappedCredentials;

  /// @brief Method CanCreateFrom, addr 0x1ff24d8, size 0x58, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::StringW profileName, ::StringW profilesLocation);

  /// @brief Method GetCredentials, addr 0x1ff2530, size 0x20, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::ImmutableCredentials* GetCredentials();

  /// @brief Method IsProfileKnown, addr 0x1ff2128, size 0x54, virtual false, abstract: false, final false
  static inline bool IsProfileKnown(::StringW profileName, ::StringW profilesLocation);

  static inline ::Amazon::Runtime::StoredProfileAWSCredentials* New_ctor();

  static inline ::Amazon::Runtime::StoredProfileAWSCredentials* New_ctor(::StringW profileName);

  static inline ::Amazon::Runtime::StoredProfileAWSCredentials* New_ctor(::StringW profileName, ::StringW profilesLocation);

  /// @brief Method ValidCredentialsExistInSharedFile, addr 0x1ff217c, size 0x35c, virtual false, abstract: false, final false
  static inline bool ValidCredentialsExistInSharedFile(::StringW profilesLocation, ::StringW profileName);

  constexpr ::StringW const& __cordl_internal_get__ProfileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ProfilesLocation_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ProfilesLocation_k__BackingField();

  constexpr ::Amazon::Runtime::AWSCredentials*& __cordl_internal_get__wrappedCredentials();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AWSCredentials*> const& __cordl_internal_get__wrappedCredentials() const;

  constexpr void __cordl_internal_set__ProfileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ProfilesLocation_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__wrappedCredentials(::Amazon::Runtime::AWSCredentials* value);

  /// @brief Method .ctor, addr 0x1ff1670, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ff16d0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW profileName);

  /// @brief Method .ctor, addr 0x1ff1740, size 0x404, virtual false, abstract: false, final false
  inline void _ctor(::StringW profileName, ::StringW profilesLocation);

  /// @brief Method get_ProfileName, addr 0x1ff2108, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfileName();

  /// @brief Method get_ProfilesLocation, addr 0x1ff2118, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProfilesLocation();

  /// @brief Method get_WrappedCredentials, addr 0x1ff1668, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AWSCredentials* get_WrappedCredentials();

  /// @brief Method set_ProfileName, addr 0x1ff2110, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfileName(::StringW value);

  /// @brief Method set_ProfilesLocation, addr 0x1ff2120, size 0x8, virtual false, abstract: false, final false
  inline void set_ProfilesLocation(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StoredProfileAWSCredentials();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StoredProfileAWSCredentials", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StoredProfileAWSCredentials(StoredProfileAWSCredentials&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StoredProfileAWSCredentials", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StoredProfileAWSCredentials(StoredProfileAWSCredentials const&) = delete;

  /// @brief Field _wrappedCredentials, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::AWSCredentials* ____wrappedCredentials;

  /// @brief Field <ProfileName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ProfileName_k__BackingField;

  /// @brief Field <ProfilesLocation>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ProfilesLocation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::StoredProfileAWSCredentials, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::StoredProfileAWSCredentials, ____wrappedCredentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::StoredProfileAWSCredentials, ____ProfileName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::StoredProfileAWSCredentials, ____ProfilesLocation_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::StoredProfileAWSCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::StoredProfileAWSCredentials*, "Amazon.Runtime", "StoredProfileAWSCredentials");
