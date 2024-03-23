#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationModulesSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class AuthenticationModuleElementCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModulesSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::AuthenticationModulesSection);
// Type: System.Net.Configuration::AuthenticationModulesSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::AuthenticationModulesSection*
class CORDL_TYPE AuthenticationModulesSection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationModules))::System::Net::Configuration::AuthenticationModuleElementCollection* AuthenticationModules;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  /// @brief Method InitializeDefault, addr 0x18ccd04, size 0x38, virtual true, abstract: false, final false
  inline void InitializeDefault();

  static inline ::System::Net::Configuration::AuthenticationModulesSection* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18ccd3c, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18ccc5c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AuthenticationModules, addr 0x18ccc94, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::AuthenticationModuleElementCollection* get_AuthenticationModules();

  /// @brief Method get_Properties, addr 0x18ccccc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationModulesSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModulesSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationModulesSection(AuthenticationModulesSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModulesSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationModulesSection(AuthenticationModulesSection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::AuthenticationModulesSection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::AuthenticationModulesSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::AuthenticationModulesSection*, "System.Net.Configuration", "AuthenticationModulesSection");
