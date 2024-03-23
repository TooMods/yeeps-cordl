#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__InheritanceLevel_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InheritanceAttribute)
namespace System::ComponentModel {
struct InheritanceLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class InheritanceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::InheritanceAttribute);
// Type: System.ComponentModel::InheritanceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::InheritanceAttribute*
class CORDL_TYPE InheritanceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::InheritanceAttribute* Default;

  __declspec(property(get = get_InheritanceLevel))::System::ComponentModel::InheritanceLevel InheritanceLevel;

  /// @brief Field Inherited, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Inherited, put = setStaticF_Inherited))::System::ComponentModel::InheritanceAttribute* Inherited;

  /// @brief Field InheritedReadOnly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InheritedReadOnly, put = setStaticF_InheritedReadOnly))::System::ComponentModel::InheritanceAttribute* InheritedReadOnly;

  /// @brief Field NotInherited, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NotInherited, put = setStaticF_NotInherited))::System::ComponentModel::InheritanceAttribute* NotInherited;

  /// @brief Field <InheritanceLevel>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__InheritanceLevel_k__BackingField,
                      put = __cordl_internal_set__InheritanceLevel_k__BackingField))::System::ComponentModel::InheritanceLevel _InheritanceLevel_k__BackingField;

  /// @brief Method Equals, addr 0x1af527c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x1af52fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute, addr 0x1af5304, size 0x68, virtual true, abstract: false, final false
  inline bool IsDefaultAttribute();

  static inline ::System::ComponentModel::InheritanceAttribute* New_ctor();

  static inline ::System::ComponentModel::InheritanceAttribute* New_ctor(::System::ComponentModel::InheritanceLevel inheritanceLevel);

  /// @brief Method ToString, addr 0x1af536c, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::ComponentModel::InheritanceLevel const& __cordl_internal_get__InheritanceLevel_k__BackingField() const;

  constexpr ::System::ComponentModel::InheritanceLevel& __cordl_internal_get__InheritanceLevel_k__BackingField();

  constexpr void __cordl_internal_set__InheritanceLevel_k__BackingField(::System::ComponentModel::InheritanceLevel value);

  /// @brief Method .ctor, addr 0x1af51d4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1af524c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::InheritanceLevel inheritanceLevel);

  static inline ::System::ComponentModel::InheritanceAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::InheritanceAttribute* getStaticF_Inherited();

  static inline ::System::ComponentModel::InheritanceAttribute* getStaticF_InheritedReadOnly();

  static inline ::System::ComponentModel::InheritanceAttribute* getStaticF_NotInherited();

  /// @brief Method get_InheritanceLevel, addr 0x1af5274, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::InheritanceLevel get_InheritanceLevel();

  static inline void setStaticF_Default(::System::ComponentModel::InheritanceAttribute* value);

  static inline void setStaticF_Inherited(::System::ComponentModel::InheritanceAttribute* value);

  static inline void setStaticF_InheritedReadOnly(::System::ComponentModel::InheritanceAttribute* value);

  static inline void setStaticF_NotInherited(::System::ComponentModel::InheritanceAttribute* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InheritanceAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InheritanceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InheritanceAttribute(InheritanceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InheritanceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InheritanceAttribute(InheritanceAttribute const&) = delete;

  /// @brief Field <InheritanceLevel>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::InheritanceLevel ____InheritanceLevel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::InheritanceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::InheritanceAttribute, ____InheritanceLevel_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::InheritanceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InheritanceAttribute*, "System.ComponentModel", "InheritanceAttribute");
