#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ToolboxItemAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ToolboxItemAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ToolboxItemAttribute);
// Type: System.ComponentModel::ToolboxItemAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ToolboxItemAttribute*
class CORDL_TYPE ToolboxItemAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::ToolboxItemAttribute* Default;

  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None))::System::ComponentModel::ToolboxItemAttribute* None;

  __declspec(property(get = get_ToolboxItemType))::System::Type* ToolboxItemType;

  __declspec(property(get = get_ToolboxItemTypeName))::StringW ToolboxItemTypeName;

  /// @brief Field _toolboxItemType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__toolboxItemType, put = __cordl_internal_set__toolboxItemType))::System::Type* _toolboxItemType;

  /// @brief Field _toolboxItemTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__toolboxItemTypeName, put = __cordl_internal_set__toolboxItemTypeName))::StringW _toolboxItemTypeName;

  /// @brief Method Equals, addr 0x1af64ec, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1af65e0, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1af6164, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(bool defaultType);

  static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(::System::Type* toolboxItemType);

  static inline ::System::ComponentModel::ToolboxItemAttribute* New_ctor(::StringW toolboxItemTypeName);

  constexpr ::System::Type*& __cordl_internal_get__toolboxItemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__toolboxItemType() const;

  constexpr ::StringW const& __cordl_internal_get__toolboxItemTypeName() const;

  constexpr ::StringW& __cordl_internal_get__toolboxItemTypeName();

  constexpr void __cordl_internal_set__toolboxItemType(::System::Type* value);

  constexpr void __cordl_internal_set__toolboxItemTypeName(::StringW value);

  /// @brief Method .ctor, addr 0x1af61cc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(bool defaultType);

  /// @brief Method .ctor, addr 0x1af62b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* toolboxItemType);

  /// @brief Method .ctor, addr 0x1af6228, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW toolboxItemTypeName);

  static inline ::System::ComponentModel::ToolboxItemAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::ToolboxItemAttribute* getStaticF_None();

  /// @brief Method get_ToolboxItemType, addr 0x1af62fc, size 0x19c, virtual false, abstract: false, final false
  inline ::System::Type* get_ToolboxItemType();

  /// @brief Method get_ToolboxItemTypeName, addr 0x1af6498, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ToolboxItemTypeName();

  static inline void setStaticF_Default(::System::ComponentModel::ToolboxItemAttribute* value);

  static inline void setStaticF_None(::System::ComponentModel::ToolboxItemAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToolboxItemAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToolboxItemAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToolboxItemAttribute(ToolboxItemAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToolboxItemAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToolboxItemAttribute(ToolboxItemAttribute const&) = delete;

  /// @brief Field _toolboxItemType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____toolboxItemType;

  /// @brief Field _toolboxItemTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____toolboxItemTypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ToolboxItemAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemAttribute, ____toolboxItemType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ToolboxItemAttribute, ____toolboxItemTypeName) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ToolboxItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ToolboxItemAttribute*, "System.ComponentModel", "ToolboxItemAttribute");
