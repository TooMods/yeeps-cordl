#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationModuleElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class AuthenticationModuleElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModuleElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::AuthenticationModuleElementCollection);
// Type: System.Net.Configuration::AuthenticationModuleElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::AuthenticationModuleElementCollection*
class CORDL_TYPE AuthenticationModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Net::Configuration::AuthenticationModuleElement* Item[];

  /// @brief Method Add, addr 0x18cca9c, size 0x38, virtual false, abstract: false, final false
  inline void Add(::System::Net::Configuration::AuthenticationModuleElement* element);

  /// @brief Method Clear, addr 0x18ccad4, size 0x38, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateNewElement, addr 0x18ccb0c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationElement* CreateNewElement();

  /// @brief Method GetElementKey, addr 0x18ccb44, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element);

  /// @brief Method IndexOf, addr 0x18ccb7c, size 0x38, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Configuration::AuthenticationModuleElement* element);

  static inline ::System::Net::Configuration::AuthenticationModuleElementCollection* New_ctor();

  /// @brief Method Remove, addr 0x18ccbb4, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::System::Net::Configuration::AuthenticationModuleElement* element);

  /// @brief Method Remove, addr 0x18ccbec, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method RemoveAt, addr 0x18ccc24, size 0x38, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x18cc984, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x18cc9bc, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::AuthenticationModuleElement* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x18cca2c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::AuthenticationModuleElement* get_Item(::StringW name);

  /// @brief Method set_Item, addr 0x18cc9f4, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Net::Configuration::AuthenticationModuleElement* value);

  /// @brief Method set_Item, addr 0x18cca64, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(::StringW name, ::System::Net::Configuration::AuthenticationModuleElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationModuleElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticationModuleElementCollection(AuthenticationModuleElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticationModuleElementCollection(AuthenticationModuleElementCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::AuthenticationModuleElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::AuthenticationModuleElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::AuthenticationModuleElementCollection*, "System.Net.Configuration", "AuthenticationModuleElementCollection");
