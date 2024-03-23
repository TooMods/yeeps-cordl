#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BypassElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class BypassElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::BypassElement);
// Type: System.Net.Configuration::BypassElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::BypassElement*
class CORDL_TYPE BypassElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_Address, put = set_Address))::StringW Address;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::BypassElement* New_ctor();

  static inline ::System::Net::Configuration::BypassElement* New_ctor(::StringW address);

  /// @brief Method .ctor, addr 0x18ccd74, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x18ccdac, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW address);

  /// @brief Method get_Address, addr 0x18ccde4, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_Address();

  /// @brief Method get_Properties, addr 0x18cce54, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method set_Address, addr 0x18cce1c, size 0x38, virtual false, abstract: false, final false
  inline void set_Address(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BypassElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BypassElement(BypassElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BypassElement(BypassElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::BypassElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::BypassElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElement*, "System.Net.Configuration", "BypassElement");
