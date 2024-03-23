#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileAWSEndpointDiscoveryEnabled)
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileSource;
}
// Forward declare root types
namespace Amazon::Runtime {
class ProfileAWSEndpointDiscoveryEnabled;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled);
// Type: Amazon.Runtime::ProfileAWSEndpointDiscoveryEnabled
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ProfileAWSEndpointDiscoveryEnabled*
class CORDL_TYPE ProfileAWSEndpointDiscoveryEnabled : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Enabled, put = set_Enabled)) bool Enabled;

  /// @brief Field <Enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) bool _Enabled_k__BackingField;

  static inline ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  static inline ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled* New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  /// @brief Method Setup, addr 0x1ff571c, size 0x39c, virtual false, abstract: false, final false
  inline void Setup(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enabled_k__BackingField();

  constexpr void __cordl_internal_set__Enabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1ff5690, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source);

  /// @brief Method .ctor, addr 0x1ff5ab8, size 0x1034, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName);

  /// @brief Method get_Enabled, addr 0x1ff567c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Enabled();

  /// @brief Method set_Enabled, addr 0x1ff5684, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileAWSEndpointDiscoveryEnabled();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileAWSEndpointDiscoveryEnabled", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileAWSEndpointDiscoveryEnabled(ProfileAWSEndpointDiscoveryEnabled&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileAWSEndpointDiscoveryEnabled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileAWSEndpointDiscoveryEnabled(ProfileAWSEndpointDiscoveryEnabled const&) = delete;

  /// @brief Field <Enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Enabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled, ____Enabled_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*, "Amazon.Runtime", "ProfileAWSEndpointDiscoveryEnabled");
