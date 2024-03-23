#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DesignerAttribute);
// Type: System.ComponentModel::DesignerAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DesignerAttribute*
class CORDL_TYPE DesignerAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DesignerBaseTypeName))::StringW DesignerBaseTypeName;

  __declspec(property(get = get_DesignerTypeName))::StringW DesignerTypeName;

  __declspec(property(get = get_TypeId))::System::Object* TypeId;

  /// @brief Field designerBaseTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_designerBaseTypeName, put = __cordl_internal_set_designerBaseTypeName))::StringW designerBaseTypeName;

  /// @brief Field designerTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_designerTypeName, put = __cordl_internal_set_designerTypeName))::StringW designerTypeName;

  /// @brief Field typeId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_typeId, put = __cordl_internal_set_typeId))::StringW typeId;

  /// @brief Method Equals, addr 0x1b14328, size 0xa4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1b143cc, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::System::Type* designerType);

  static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::System::Type* designerType, ::System::Type* designerBaseType);

  static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW designerTypeName);

  static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW designerTypeName, ::System::Type* designerBaseType);

  static inline ::System::ComponentModel::DesignerAttribute* New_ctor(::StringW designerTypeName, ::StringW designerBaseTypeName);

  constexpr ::StringW const& __cordl_internal_get_designerBaseTypeName() const;

  constexpr ::StringW& __cordl_internal_get_designerBaseTypeName();

  constexpr ::StringW const& __cordl_internal_get_designerTypeName() const;

  constexpr ::StringW& __cordl_internal_get_designerTypeName();

  constexpr ::StringW const& __cordl_internal_get_typeId() const;

  constexpr ::StringW& __cordl_internal_get_typeId();

  constexpr void __cordl_internal_set_designerBaseTypeName(::StringW value);

  constexpr void __cordl_internal_set_designerTypeName(::StringW value);

  constexpr void __cordl_internal_set_typeId(::StringW value);

  /// @brief Method .ctor, addr 0x1b14028, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* designerType);

  /// @brief Method .ctor, addr 0x1b14228, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* designerType, ::System::Type* designerBaseType);

  /// @brief Method .ctor, addr 0x1b13f3c, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::StringW designerTypeName);

  /// @brief Method .ctor, addr 0x1b1417c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW designerTypeName, ::System::Type* designerBaseType);

  /// @brief Method .ctor, addr 0x1b140ec, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW designerTypeName, ::StringW designerBaseTypeName);

  /// @brief Method get_DesignerBaseTypeName, addr 0x1b1428c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DesignerBaseTypeName();

  /// @brief Method get_DesignerTypeName, addr 0x1b14294, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DesignerTypeName();

  /// @brief Method get_TypeId, addr 0x1b1429c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* get_TypeId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerAttribute(DesignerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerAttribute(DesignerAttribute const&) = delete;

  /// @brief Field designerTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___designerTypeName;

  /// @brief Field designerBaseTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___designerBaseTypeName;

  /// @brief Field typeId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___typeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DesignerAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___designerTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___designerBaseTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DesignerAttribute, ___typeId) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DesignerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerAttribute*, "System.ComponentModel", "DesignerAttribute");
