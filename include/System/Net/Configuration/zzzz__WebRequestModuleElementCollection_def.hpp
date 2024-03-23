#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestModuleElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModuleElementCollection);
// Type: System.Net.Configuration::WebRequestModuleElementCollection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::WebRequestModuleElementCollection*
class CORDL_TYPE WebRequestModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Net::Configuration::WebRequestModuleElement* Item[];

  /// @brief Method Add, addr 0x18d01f4, size 0x38, virtual false, abstract: false, final false
  inline void Add(::System::Net::Configuration::WebRequestModuleElement* element);

  /// @brief Method Clear, addr 0x18d022c, size 0x38, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateNewElement, addr 0x18d0264, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationElement* CreateNewElement();

  /// @brief Method GetElementKey, addr 0x18d029c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement* element);

  /// @brief Method IndexOf, addr 0x18d02d4, size 0x38, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Net::Configuration::WebRequestModuleElement* element);

  static inline ::System::Net::Configuration::WebRequestModuleElementCollection* New_ctor();

  /// @brief Method Remove, addr 0x18d030c, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::System::Net::Configuration::WebRequestModuleElement* element);

  /// @brief Method Remove, addr 0x18d0344, size 0x38, virtual false, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method RemoveAt, addr 0x18d037c, size 0x38, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method .ctor, addr 0x18d00dc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x18d0114, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::WebRequestModuleElement* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x18d0184, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::WebRequestModuleElement* get_Item(::StringW name);

  /// @brief Method set_Item, addr 0x18d014c, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Net::Configuration::WebRequestModuleElement* value);

  /// @brief Method set_Item, addr 0x18d01bc, size 0x38, virtual false, abstract: false, final false
  inline void set_Item(::StringW name, ::System::Net::Configuration::WebRequestModuleElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestModuleElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRequestModuleElementCollection(WebRequestModuleElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRequestModuleElementCollection(WebRequestModuleElementCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModuleElementCollection, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModuleElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModuleElementCollection*, "System.Net.Configuration", "WebRequestModuleElementCollection");
