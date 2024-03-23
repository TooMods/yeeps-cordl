#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SmtpSpecifiedPickupDirectoryElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SmtpSpecifiedPickupDirectoryElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement);
// Type: System.Net.Configuration::SmtpSpecifiedPickupDirectoryElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::SmtpSpecifiedPickupDirectoryElement*
class CORDL_TYPE SmtpSpecifiedPickupDirectoryElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_PickupDirectoryLocation, put = set_PickupDirectoryLocation))::StringW PickupDirectoryLocation;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  static inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* New_ctor();

  /// @brief Method .ctor, addr 0x18ced2c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PickupDirectoryLocation, addr 0x18ced64, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_PickupDirectoryLocation();

  /// @brief Method get_Properties, addr 0x18cedd4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method set_PickupDirectoryLocation, addr 0x18ced9c, size 0x38, virtual false, abstract: false, final false
  inline void set_PickupDirectoryLocation(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmtpSpecifiedPickupDirectoryElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmtpSpecifiedPickupDirectoryElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmtpSpecifiedPickupDirectoryElement(SmtpSpecifiedPickupDirectoryElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmtpSpecifiedPickupDirectoryElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmtpSpecifiedPickupDirectoryElement(SmtpSpecifiedPickupDirectoryElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*, "System.Net.Configuration", "SmtpSpecifiedPickupDirectoryElement");
