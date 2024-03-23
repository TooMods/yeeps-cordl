#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__ProfileSettingsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSCredentialsProfile)
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Runtime {
class BasicAWSCredentials;
}
// Forward declare root types
namespace Amazon::Util {
class AWSCredentialsProfile;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::AWSCredentialsProfile);
// Type: Amazon.Util::AWSCredentialsProfile
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSCredentialsProfile*
class CORDL_TYPE AWSCredentialsProfile : public ::Amazon::Util::ProfileSettingsBase {
public:
  // Declarations
  __declspec(property(get = get_Credentials, put = set_Credentials))::Amazon::Runtime::BasicAWSCredentials* Credentials;

  /// @brief Field <Credentials>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Credentials_k__BackingField,
                      put = __cordl_internal_set__Credentials_k__BackingField))::Amazon::Runtime::BasicAWSCredentials* _Credentials_k__BackingField;

  /// @brief Method CanCreateFrom, addr 0x220d8ac, size 0x230, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method CanCreateFrom, addr 0x220c748, size 0x10, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::StringW profileName);

  /// @brief Method LoadFrom, addr 0x220dbd8, size 0x200, virtual false, abstract: false, final false
  static inline ::Amazon::Util::AWSCredentialsProfile* LoadFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method LoadFrom, addr 0x220c758, size 0x10, virtual false, abstract: false, final false
  static inline ::Amazon::Util::AWSCredentialsProfile* LoadFrom(::StringW profileName);

  static inline ::Amazon::Util::AWSCredentialsProfile* New_ctor(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey);

  /// @brief Method Persist, addr 0x220de7c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW Persist();

  /// @brief Method Persist, addr 0x220b0a0, size 0x308, virtual false, abstract: false, final false
  static inline ::StringW Persist(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey);

  /// @brief Method Validate, addr 0x220dadc, size 0xfc, virtual false, abstract: false, final false
  static inline void Validate(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method Validate, addr 0x220de6c, size 0x10, virtual false, abstract: false, final false
  static inline void Validate(::StringW profileName);

  constexpr ::Amazon::Runtime::BasicAWSCredentials*& __cordl_internal_get__Credentials_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::BasicAWSCredentials*> const& __cordl_internal_get__Credentials_k__BackingField() const;

  constexpr void __cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::BasicAWSCredentials* value);

  /// @brief Method .ctor, addr 0x220ddd8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey);

  /// @brief Method get_Credentials, addr 0x220d89c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::BasicAWSCredentials* get_Credentials();

  /// @brief Method set_Credentials, addr 0x220d8a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Credentials(::Amazon::Runtime::BasicAWSCredentials* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSCredentialsProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentialsProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSCredentialsProfile(AWSCredentialsProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSCredentialsProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSCredentialsProfile(AWSCredentialsProfile const&) = delete;

  /// @brief Field <Credentials>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::BasicAWSCredentials* ____Credentials_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSCredentialsProfile, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::AWSCredentialsProfile, ____Credentials_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::AWSCredentialsProfile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSCredentialsProfile*, "Amazon.Util", "AWSCredentialsProfile");
