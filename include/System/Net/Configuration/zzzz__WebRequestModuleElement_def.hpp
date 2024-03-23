#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebRequestModuleElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModuleElement);
// Type: System.Net.Configuration::WebRequestModuleElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::WebRequestModuleElement*
class CORDL_TYPE WebRequestModuleElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Prefix, put = set_Prefix))::StringW Prefix;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_Type, put = set_Type))::System::Type* Type;

  static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor();

  static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor(::StringW prefix, ::StringW type);

  static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor(::StringW prefix, ::System::Type* type);

  /// @brief Method .ctor, addr 0x18d03b4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x18d03ec, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW type);

  /// @brief Method .ctor, addr 0x18d0424, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::System::Type* type);

  /// @brief Method get_Prefix, addr 0x18d045c, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Properties, addr 0x18d04cc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_Type, addr 0x18d0504, size 0x38, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Prefix, addr 0x18d0494, size 0x38, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_Type, addr 0x18d053c, size 0x38, virtual false, abstract: false, final false
  inline void set_Type(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestModuleElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestModuleElement(WebRequestModuleElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestModuleElement(WebRequestModuleElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModuleElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModuleElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModuleElement*, "System.Net.Configuration", "WebRequestModuleElement");
