#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(WebRequestModulesSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModulesSection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModulesSection);
// Type: System.Net.Configuration::WebRequestModulesSection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::WebRequestModulesSection*
class CORDL_TYPE WebRequestModulesSection : public ::System::Configuration::ConfigurationSection {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_WebRequestModules))::System::Net::Configuration::WebRequestModuleElementCollection* WebRequestModules;

  /// @brief Method InitializeDefault, addr 0x18d006c, size 0x38, virtual true, abstract: false, final false
  inline void InitializeDefault();

  static inline ::System::Net::Configuration::WebRequestModulesSection* New_ctor();

  /// @brief Method PostDeserialize, addr 0x18d00a4, size 0x38, virtual true, abstract: false, final false
  inline void PostDeserialize();

  /// @brief Method .ctor, addr 0x18cffc4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Properties, addr 0x18cfffc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_WebRequestModules, addr 0x18d0034, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestModulesSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestModulesSection(WebRequestModulesSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestModulesSection(WebRequestModulesSection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModulesSection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModulesSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModulesSection*, "System.Net.Configuration", "WebRequestModulesSection");
