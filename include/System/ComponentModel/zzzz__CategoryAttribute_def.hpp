#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CategoryAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class CategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CategoryAttribute);
// Type: System.ComponentModel::CategoryAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CategoryAttribute*
class CORDL_TYPE CategoryAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Category))::StringW Category;

  /// @brief Field action, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_action, put = setStaticF_action))::System::ComponentModel::CategoryAttribute* action;

  /// @brief Field appearance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_appearance, put = setStaticF_appearance))::System::ComponentModel::CategoryAttribute* appearance;

  /// @brief Field asynchronous, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_asynchronous, put = setStaticF_asynchronous))::System::ComponentModel::CategoryAttribute* asynchronous;

  /// @brief Field behavior, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_behavior, put = setStaticF_behavior))::System::ComponentModel::CategoryAttribute* behavior;

  /// @brief Field categoryValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_categoryValue, put = __cordl_internal_set_categoryValue))::StringW categoryValue;

  /// @brief Field data, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_data, put = setStaticF_data))::System::ComponentModel::CategoryAttribute* data;

  /// @brief Field defAttr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defAttr, put = setStaticF_defAttr))::System::ComponentModel::CategoryAttribute* defAttr;

  /// @brief Field design, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_design, put = setStaticF_design))::System::ComponentModel::CategoryAttribute* design;

  /// @brief Field dragDrop, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dragDrop, put = setStaticF_dragDrop))::System::ComponentModel::CategoryAttribute* dragDrop;

  /// @brief Field focus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_focus, put = setStaticF_focus))::System::ComponentModel::CategoryAttribute* focus;

  /// @brief Field format, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_format, put = setStaticF_format))::System::ComponentModel::CategoryAttribute* format;

  /// @brief Field key, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_key, put = setStaticF_key))::System::ComponentModel::CategoryAttribute* key;

  /// @brief Field layout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_layout, put = setStaticF_layout))::System::ComponentModel::CategoryAttribute* layout;

  /// @brief Field localized, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_localized, put = __cordl_internal_set_localized)) bool localized;

  /// @brief Field mouse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mouse, put = setStaticF_mouse))::System::ComponentModel::CategoryAttribute* mouse;

  /// @brief Field windowStyle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_windowStyle, put = setStaticF_windowStyle))::System::ComponentModel::CategoryAttribute* windowStyle;

  /// @brief Method Equals, addr 0x1b10a60, size 0x134, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1b10b94, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLocalizedString, addr 0x1b10be4, size 0x36c, virtual true, abstract: false, final false
  inline ::StringW GetLocalizedString(::StringW value);

  /// @brief Method IsDefaultAttribute, addr 0x1b10f50, size 0x94, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::CategoryAttribute* New_ctor();

  static inline ::System::ComponentModel::CategoryAttribute* New_ctor(::StringW category);

  constexpr ::StringW const& __cordl_internal_get_categoryValue() const;

  constexpr ::StringW& __cordl_internal_get_categoryValue();

  constexpr bool const& __cordl_internal_get_localized() const;

  constexpr bool& __cordl_internal_get_localized();

  constexpr void __cordl_internal_set_categoryValue(::StringW value);

  constexpr void __cordl_internal_set_localized(bool value);

  /// @brief Method .ctor, addr 0x1b10448, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b100d0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_action();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_appearance();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_asynchronous();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_behavior();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_data();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_defAttr();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_design();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_dragDrop();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_focus();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_format();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_key();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_layout();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_mouse();

  static inline ::System::ComponentModel::CategoryAttribute* getStaticF_windowStyle();

  /// @brief Method get_Action, addr 0x1b10020, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Action();

  /// @brief Method get_Appearance, addr 0x1b100fc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Appearance();

  /// @brief Method get_Asynchronous, addr 0x1b101ac, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Asynchronous();

  /// @brief Method get_Behavior, addr 0x1b1025c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Behavior();

  /// @brief Method get_Category, addr 0x1b10a20, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_Category();

  /// @brief Method get_Data, addr 0x1b1030c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Data();

  /// @brief Method get_Default, addr 0x1b103bc, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Default();

  /// @brief Method get_Design, addr 0x1b104a0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Design();

  /// @brief Method get_DragDrop, addr 0x1b10550, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_DragDrop();

  /// @brief Method get_Focus, addr 0x1b10600, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Focus();

  /// @brief Method get_Format, addr 0x1b106b0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Format();

  /// @brief Method get_Key, addr 0x1b10760, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Key();

  /// @brief Method get_Layout, addr 0x1b10810, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Layout();

  /// @brief Method get_Mouse, addr 0x1b108c0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_Mouse();

  /// @brief Method get_WindowStyle, addr 0x1b10970, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::CategoryAttribute* get_WindowStyle();

  static inline void setStaticF_action(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_appearance(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_asynchronous(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_behavior(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_data(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_defAttr(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_design(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_dragDrop(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_focus(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_format(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_key(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_layout(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_mouse(::System::ComponentModel::CategoryAttribute* value);

  static inline void setStaticF_windowStyle(::System::ComponentModel::CategoryAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CategoryAttribute(CategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CategoryAttribute(CategoryAttribute const&) = delete;

  /// @brief Field localized, offset: 0x10, size: 0x1, def value: None
  bool ___localized;

  /// @brief Field categoryValue, offset: 0x18, size: 0x8, def value: None
  ::StringW ___categoryValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CategoryAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::CategoryAttribute, ___localized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::CategoryAttribute, ___categoryValue) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CategoryAttribute*, "System.ComponentModel", "CategoryAttribute");
