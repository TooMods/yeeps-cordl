#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationModuleElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModuleElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::AuthenticationModuleElement);
// Type: System.Net.Configuration::AuthenticationModuleElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::AuthenticationModuleElement*
class CORDL_TYPE AuthenticationModuleElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  static inline ::System::Net::Configuration::AuthenticationModuleElement* New_ctor();

  static inline ::System::Net::Configuration::AuthenticationModuleElement* New_ctor(::StringW typeName);

  /// @brief Method .ctor, addr 0x18cc86c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x18cc8a4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName);

  /// @brief Method get_Properties, addr 0x18cc8dc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_Type, addr 0x18cc914, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_Type, addr 0x18cc94c, size 0x38, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationModuleElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationModuleElement(AuthenticationModuleElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationModuleElement(AuthenticationModuleElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::AuthenticationModuleElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::AuthenticationModuleElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::AuthenticationModuleElement*, "System.Net.Configuration", "AuthenticationModuleElement");
