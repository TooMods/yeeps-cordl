#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionManagementElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::ConnectionManagementElementCollection);
// Type: System.Net.Configuration::ConnectionManagementElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::ConnectionManagementElementCollection*
class CORDL_TYPE ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Net::Configuration::ConnectionManagementElement* Item[];

  /// @brief Method Add, addr 0x18cd43c, size 0x38, virtual false, abstract: false, final false
  inline void Add(::System::Net::Configuration::ConnectionManagementElement* element);

  /// @brief Method Clear, addr 0x18cd474, size 0x38, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateNewElement, addr 0x18cd4ac, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationElement* CreateNewElement();

  /// @brief Method GetElementKey, addr 0x18cd4e4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element);

  /// @brief Method IndexOf, addr 0x18cd51c, size 0x38, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Configuration::ConnectionManagementElement* element);

  static inline ::System::Net::Configuration::ConnectionManagementElementCollection* New_ctor();

  /// @brief Method Remove, addr 0x18cd554, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::System::Net::Configuration::ConnectionManagementElement* element);

  /// @brief Method Remove, addr 0x18cd58c, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method RemoveAt, addr 0x18cd5c4, size 0x38, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x18cd324, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x18cd35c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::ConnectionManagementElement* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x18cd3cc, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::ConnectionManagementElement* get_Item(::StringW name);

  /// @brief Method set_Item, addr 0x18cd394, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Net::Configuration::ConnectionManagementElement* value);

  /// @brief Method set_Item, addr 0x18cd404, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(::StringW name, ::System::Net::Configuration::ConnectionManagementElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionManagementElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionManagementElementCollection(ConnectionManagementElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionManagementElementCollection(ConnectionManagementElementCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ConnectionManagementElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElementCollection*, "System.Net.Configuration", "ConnectionManagementElementCollection");
