#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BypassElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class BypassElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class BypassElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::BypassElementCollection);
// Type: System.Net.Configuration::BypassElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::BypassElementCollection*
class CORDL_TYPE BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Net::Configuration::BypassElement* Item[];

  __declspec(property(get = get_ThrowOnDuplicate)) bool ThrowOnDuplicate;

  /// @brief Method Add, addr 0x18ccfdc, size 0x38, virtual false, abstract: false, final false
  inline void Add(::System::Net::Configuration::BypassElement* element);

  /// @brief Method Clear, addr 0x18cd014, size 0x38, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateNewElement, addr 0x18cd04c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationElement* CreateNewElement();

  /// @brief Method GetElementKey, addr 0x18cd084, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element);

  /// @brief Method IndexOf, addr 0x18cd0bc, size 0x38, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Configuration::BypassElement* element);

  static inline ::System::Net::Configuration::BypassElementCollection* New_ctor();

  /// @brief Method Remove, addr 0x18cd0f4, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::System::Net::Configuration::BypassElement* element);

  /// @brief Method Remove, addr 0x18cd12c, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method RemoveAt, addr 0x18cd164, size 0x38, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x18cce8c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x18ccec4, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::BypassElement* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x18ccf34, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::BypassElement* get_Item(::StringW name);

  /// @brief Method get_ThrowOnDuplicate, addr 0x18ccfa4, size 0x38, virtual true, abstract: false, final false
  inline bool get_ThrowOnDuplicate();

  /// @brief Method set_Item, addr 0x18ccefc, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Net::Configuration::BypassElement* value);

  /// @brief Method set_Item, addr 0x18ccf6c, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(::StringW name, ::System::Net::Configuration::BypassElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BypassElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BypassElementCollection(BypassElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BypassElementCollection(BypassElementCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::BypassElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::BypassElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElementCollection*, "System.Net.Configuration", "BypassElementCollection");
