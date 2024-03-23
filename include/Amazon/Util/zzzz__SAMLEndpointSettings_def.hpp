#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__ProfileSettingsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SAMLEndpointSettings)
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Util {
class SAMLEndpointSettings;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::SAMLEndpointSettings);
// Type: Amazon.Util::SAMLEndpointSettings
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::SAMLEndpointSettings*
class CORDL_TYPE SAMLEndpointSettings : public ::Amazon::Util::ProfileSettingsBase {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType))::StringW AuthenticationType;

  /// @brief Field DefaultAuthenticationType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultAuthenticationType, put = setStaticF_DefaultAuthenticationType))::StringW DefaultAuthenticationType;

  __declspec(property(get = get_Endpoint, put = set_Endpoint))::System::Uri* Endpoint;

  /// @brief Field <Endpoint>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField))::System::Uri* _Endpoint_k__BackingField;

  /// @brief Field _authenticationType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__authenticationType, put = __cordl_internal_set__authenticationType))::StringW _authenticationType;

  /// @brief Method CanCreateFrom, addr 0x220df5c, size 0x58, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::StringW endpointName);

  /// @brief Method CanCreateFrom, addr 0x220e15c, size 0x6c, virtual false, abstract: false, final false
  static inline bool CanCreateFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method LoadFrom, addr 0x220d498, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Util::SAMLEndpointSettings* LoadFrom(::StringW endpointName);

  /// @brief Method LoadFrom, addr 0x220e1c8, size 0x270, virtual false, abstract: false, final false
  static inline ::Amazon::Util::SAMLEndpointSettings* LoadFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  /// @brief Method LoadSettings, addr 0x220dfb4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* LoadSettings(::StringW endpointName);

  static inline ::Amazon::Util::SAMLEndpointSettings* New_ctor(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType);

  /// @brief Method Persist, addr 0x220e718, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW Persist();

  /// @brief Method Persist, addr 0x220b8cc, size 0x3a8, virtual false, abstract: false, final false
  static inline ::StringW Persist(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType);

  /// @brief Method Validate, addr 0x220e6c0, size 0x58, virtual false, abstract: false, final false
  static inline void Validate(::StringW endpointName);

  /// @brief Method Validate, addr 0x220e438, size 0x238, virtual false, abstract: false, final false
  static inline void Validate(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os);

  constexpr ::System::Uri*& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__authenticationType() const;

  constexpr ::StringW& __cordl_internal_get__authenticationType();

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::System::Uri* value);

  constexpr void __cordl_internal_set__authenticationType(::StringW value);

  /// @brief Method .ctor, addr 0x220e670, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType);

  static inline ::StringW getStaticF_DefaultAuthenticationType();

  /// @brief Method get_AuthenticationType, addr 0x220def0, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW get_AuthenticationType();

  /// @brief Method get_Endpoint, addr 0x220dee0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Endpoint();

  static inline void setStaticF_DefaultAuthenticationType(::StringW value);

  /// @brief Method set_Endpoint, addr 0x220dee8, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::System::Uri* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLEndpointSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpointSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLEndpointSettings(SAMLEndpointSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpointSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLEndpointSettings(SAMLEndpointSettings const&) = delete;

  /// @brief Field <Endpoint>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* ____Endpoint_k__BackingField;

  /// @brief Field _authenticationType, offset: 0x28, size: 0x8, def value: None
  ::StringW ____authenticationType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::SAMLEndpointSettings, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLEndpointSettings, ____Endpoint_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::SAMLEndpointSettings, ____authenticationType) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::SAMLEndpointSettings);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::SAMLEndpointSettings*, "Amazon.Util", "SAMLEndpointSettings");
