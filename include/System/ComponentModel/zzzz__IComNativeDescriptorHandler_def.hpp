#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IComNativeDescriptorHandler)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class IComNativeDescriptorHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IComNativeDescriptorHandler);
// Type: System.ComponentModel::IComNativeDescriptorHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IComNativeDescriptorHandler*
class CORDL_TYPE IComNativeDescriptorHandler {
public:
  // Declarations
  /// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component);

  /// @brief Method GetClassName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetClassName(::System::Object* component);

  /// @brief Method GetConverter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* component);

  /// @brief Method GetDefaultEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* component);

  /// @brief Method GetDefaultProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* component);

  /// @brief Method GetEditor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetEditor(::System::Object* component, ::System::Type* baseEditorType);

  /// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component);

  /// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetName(::System::Object* component);

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetPropertyValue(::System::Object* component, int32_t dispid, ByRef<bool> success);

  /// @brief Method GetPropertyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetPropertyValue(::System::Object* component, ::StringW propertyName, ByRef<bool> success);

  // Ctor Parameters [CppParam { name: "", ty: "IComNativeDescriptorHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IComNativeDescriptorHandler(IComNativeDescriptorHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IComNativeDescriptorHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComNativeDescriptorHandler(IComNativeDescriptorHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IComNativeDescriptorHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComNativeDescriptorHandler*, "System.ComponentModel", "IComNativeDescriptorHandler");
