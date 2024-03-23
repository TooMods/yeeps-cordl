#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationElementCollection);
// Type: System.Configuration::ConfigurationElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: false
// CS Name: ::System.Configuration::ConfigurationElementCollection*
class CORDL_TYPE ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  __declspec(property(get = get_ThrowOnDuplicate)) bool ThrowOnDuplicate;

  /// @brief Method CreateNewElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Configuration::ConfigurationElement* CreateNewElement();

  /// @brief Method GetElementKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element);

  /// @brief Method get_ThrowOnDuplicate, addr 0x16d4898, size 0x38, virtual true, abstract: false, final false
  inline bool get_ThrowOnDuplicate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurationElementCollection(ConfigurationElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurationElementCollection(ConfigurationElementCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
