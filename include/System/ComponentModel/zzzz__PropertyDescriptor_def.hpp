#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyDescriptor)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyDescriptor);
// Type: System.ComponentModel::PropertyDescriptor
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::PropertyDescriptor*
class CORDL_TYPE PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_Converter))::System::ComponentModel::TypeConverter* Converter;

  __declspec(property(get = get_IsLocalizable)) bool IsLocalizable;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_SerializationVisibility))::System::ComponentModel::DesignerSerializationVisibility SerializationVisibility;

  __declspec(property(get = get_SupportsChangeEvents)) bool SupportsChangeEvents;

  /// @brief Field _converter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__converter, put = __cordl_internal_set__converter))::System::ComponentModel::TypeConverter* _converter;

  /// @brief Field _editorCount, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__editorCount, put = __cordl_internal_set__editorCount)) int32_t _editorCount;

  /// @brief Field _editorTypes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__editorTypes, put = __cordl_internal_set__editorTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _editorTypes;

  /// @brief Field _editors, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__editors, put = __cordl_internal_set__editors))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _editors;

  /// @brief Field _valueChangedHandlers, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__valueChangedHandlers, put = __cordl_internal_set__valueChangedHandlers))::System::Collections::Hashtable* _valueChangedHandlers;

  /// @brief Method AddValueChanged, addr 0x1b05c94, size 0x160, virtual true, abstract: false, final false
  inline void AddValueChanged(::System::Object* component, ::System::EventHandler* handler);

  /// @brief Method CanResetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method CreateInstance, addr 0x1b058bc, size 0x204, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::Type* type);

  /// @brief Method Equals, addr 0x1b05df4, size 0x200, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FillAttributes, addr 0x1b05ff4, size 0x10, virtual true, abstract: false, final false
  inline void FillAttributes(::System::Collections::IList* attributeList);

  /// @brief Method GetChildProperties, addr 0x1b060f8, size 0x18, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties();

  /// @brief Method GetChildProperties, addr 0x1b06110, size 0x18, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  /// @brief Method GetChildProperties, addr 0x1b06128, size 0x14, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object* instance);

  /// @brief Method GetChildProperties, addr 0x1b0613c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object* instance, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  /// @brief Method GetEditor, addr 0x1b061f4, size 0x3a0, virtual true, abstract: false, final false
  inline ::System::Object* GetEditor(::System::Type* editorBaseType);

  /// @brief Method GetHashCode, addr 0x1b06594, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInvocationTarget, addr 0x1b065e8, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Object* GetInvocationTarget(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetTypeFromName, addr 0x1b056c0, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Type* GetTypeFromName(::StringW typeName);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* GetValue(::System::Object* component);

  /// @brief Method GetValueChangedHandler, addr 0x1b06a00, size 0x80, virtual false, abstract: false, final false
  inline ::System::EventHandler* GetValueChangedHandler(::System::Object* component);

  static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr);

  static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method OnValueChanged, addr 0x1b067dc, size 0xb0, virtual true, abstract: false, final false
  inline void OnValueChanged(::System::Object* component, ::System::EventArgs* e);

  /// @brief Method RemoveValueChanged, addr 0x1b0688c, size 0x174, virtual true, abstract: false, final false
  inline void RemoveValueChanged(::System::Object* component, ::System::EventHandler* handler);

  /// @brief Method ResetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::ComponentModel::TypeConverter*& __cordl_internal_get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeConverter*> const& __cordl_internal_get__converter() const;

  constexpr int32_t const& __cordl_internal_get__editorCount() const;

  constexpr int32_t& __cordl_internal_get__editorCount();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__editorTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__editorTypes();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__editors() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__editors();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__valueChangedHandlers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__valueChangedHandlers() const;

  constexpr void __cordl_internal_set__converter(::System::ComponentModel::TypeConverter* value);

  constexpr void __cordl_internal_set__editorCount(int32_t value);

  constexpr void __cordl_internal_set__editorTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__editors(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__valueChangedHandlers(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x1b04f1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* descr);

  /// @brief Method .ctor, addr 0x1b0503c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method .ctor, addr 0x1b04d74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs);

  /// @brief Method get_ComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_Converter, addr 0x1b0546c, size 0x254, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* get_Converter();

  /// @brief Method get_IsLocalizable, addr 0x1b05ac0, size 0xf4, virtual true, abstract: false, final false
  inline bool get_IsLocalizable();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_SerializationVisibility, addr 0x1b05bb4, size 0xe0, virtual false, abstract: false, final false
  inline ::System::ComponentModel::DesignerSerializationVisibility get_SerializationVisibility();

  /// @brief Method get_SupportsChangeEvents, addr 0x1b06a80, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsChangeEvents();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyDescriptor(PropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyDescriptor(PropertyDescriptor const&) = delete;

  /// @brief Field _converter, offset: 0x60, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter* ____converter;

  /// @brief Field _valueChangedHandlers, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____valueChangedHandlers;

  /// @brief Field _editors, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____editors;

  /// @brief Field _editorTypes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____editorTypes;

  /// @brief Field _editorCount, offset: 0x80, size: 0x4, def value: None
  int32_t ____editorCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyDescriptor, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____converter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____valueChangedHandlers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editorTypes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editorCount) == 0x80, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptor*, "System.ComponentModel", "PropertyDescriptor");
