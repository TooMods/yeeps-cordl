#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/CredentialManagement/zzzz__SAMLAuthenticationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SAMLEndpoint)
namespace Amazon::Runtime::CredentialManagement {
struct SAMLAuthenticationType;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class SAMLEndpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::SAMLEndpoint);
// Type: Amazon.Runtime.CredentialManagement::SAMLEndpoint
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::SAMLEndpoint*
class CORDL_TYPE SAMLEndpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType, put = set_AuthenticationType))::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType AuthenticationType;

  /// @brief Field DefaultAuthenticationType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_DefaultAuthenticationType,
                      put = __cordl_internal_set_DefaultAuthenticationType))::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType DefaultAuthenticationType;

  __declspec(property(get = get_EndpointUri, put = set_EndpointUri))::System::Uri* EndpointUri;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  /// @brief Field <AuthenticationType>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__AuthenticationType_k__BackingField,
                      put = __cordl_internal_set__AuthenticationType_k__BackingField))::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType _AuthenticationType_k__BackingField;

  /// @brief Field <EndpointUri>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__EndpointUri_k__BackingField, put = __cordl_internal_set__EndpointUri_k__BackingField))::System::Uri* _EndpointUri_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  static inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* New_ctor(::StringW name, ::StringW endpointUri, ::StringW authenticationType);

  static inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* New_ctor(::StringW name, ::System::Uri* endpointUri);

  static inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* New_ctor(::StringW name, ::System::Uri* endpointUri,
                                                                                ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType authenticationType);

  /// @brief Method SetProperties, addr 0x202ecd0, size 0x104, virtual false, abstract: false, final false
  inline void SetProperties(::StringW name, ::System::Uri* endpointUri, ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType authenticationType);

  constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const& __cordl_internal_get_DefaultAuthenticationType() const;

  constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType& __cordl_internal_get_DefaultAuthenticationType();

  constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType const& __cordl_internal_get__AuthenticationType_k__BackingField() const;

  constexpr ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType& __cordl_internal_get__AuthenticationType_k__BackingField();

  constexpr ::System::Uri*& __cordl_internal_get__EndpointUri_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__EndpointUri_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set_DefaultAuthenticationType(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType value);

  constexpr void __cordl_internal_set__AuthenticationType_k__BackingField(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType value);

  constexpr void __cordl_internal_set__EndpointUri_k__BackingField(::System::Uri* value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x202eb58, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW endpointUri, ::StringW authenticationType);

  /// @brief Method .ctor, addr 0x202edd4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Uri* endpointUri);

  /// @brief Method .ctor, addr 0x202ee14, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Uri* endpointUri, ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType authenticationType);

  /// @brief Method get_AuthenticationType, addr 0x202eb48, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType get_AuthenticationType();

  /// @brief Method get_EndpointUri, addr 0x202eb38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_EndpointUri();

  /// @brief Method get_Name, addr 0x202eb28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_AuthenticationType, addr 0x202eb50, size 0x8, virtual false, abstract: false, final false
  inline void set_AuthenticationType(::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType value);

  /// @brief Method set_EndpointUri, addr 0x202eb40, size 0x8, virtual false, abstract: false, final false
  inline void set_EndpointUri(::System::Uri* value);

  /// @brief Method set_Name, addr 0x202eb30, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLEndpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLEndpoint(SAMLEndpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLEndpoint(SAMLEndpoint const&) = delete;

  /// @brief Field DefaultAuthenticationType, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType ___DefaultAuthenticationType;

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <EndpointUri>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* ____EndpointUri_k__BackingField;

  /// @brief Field <AuthenticationType>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::Amazon::Runtime::CredentialManagement::SAMLAuthenticationType ____AuthenticationType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::SAMLEndpoint, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLEndpoint, ___DefaultAuthenticationType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLEndpoint, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLEndpoint, ____EndpointUri_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLEndpoint, ____AuthenticationType_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::SAMLEndpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::SAMLEndpoint*, "Amazon.Runtime.CredentialManagement", "SAMLEndpoint");
