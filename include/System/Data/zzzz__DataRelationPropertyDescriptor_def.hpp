#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationPropertyDescriptor)
namespace System::Data {
class DataRelation;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataRelationPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRelationPropertyDescriptor);
// Type: System.Data::DataRelationPropertyDescriptor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRelationPropertyDescriptor*
class CORDL_TYPE DataRelationPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_Relation))::System::Data::DataRelation* Relation;

  /// @brief Field <Relation>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__Relation_k__BackingField, put = __cordl_internal_set__Relation_k__BackingField))::System::Data::DataRelation* _Relation_k__BackingField;

  /// @brief Method CanResetValue, addr 0x18907ac, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method Equals, addr 0x189071c, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x189078c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValue, addr 0x18907b4, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::Data::DataRelationPropertyDescriptor* New_ctor(::System::Data::DataRelation* dataRelation);

  /// @brief Method ResetValue, addr 0x1890848, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x189084c, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x1890850, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__Relation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& __cordl_internal_get__Relation_k__BackingField() const;

  constexpr void __cordl_internal_set__Relation_k__BackingField(::System::Data::DataRelation* value);

  /// @brief Method .ctor, addr 0x18905e8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRelation* dataRelation);

  /// @brief Method get_ComponentType, addr 0x189063c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x18906a8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x18906b0, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_Relation, addr 0x1890634, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataRelation* get_Relation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelationPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelationPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelationPropertyDescriptor(DataRelationPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelationPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelationPropertyDescriptor(DataRelationPropertyDescriptor const&) = delete;

  /// @brief Field <Relation>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Data::DataRelation* ____Relation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRelationPropertyDescriptor, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRelationPropertyDescriptor, ____Relation_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRelationPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationPropertyDescriptor*, "System.Data", "DataRelationPropertyDescriptor");
