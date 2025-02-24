#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTablePropertyDescriptor)
namespace System::Data {
class DataTable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataTablePropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTablePropertyDescriptor);
// Type: System.Data::DataTablePropertyDescriptor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataTablePropertyDescriptor*
class CORDL_TYPE DataTablePropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_Table))::System::Data::DataTable* Table;

  /// @brief Field <Table>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__Table_k__BackingField, put = __cordl_internal_set__Table_k__BackingField))::System::Data::DataTable* _Table_k__BackingField;

  /// @brief Method CanResetValue, addr 0x18a4b44, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method Equals, addr 0x18a4ab4, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x18a4b24, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValue, addr 0x18a4b4c, size 0x70, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::Data::DataTablePropertyDescriptor* New_ctor(::System::Data::DataTable* dataTable);

  /// @brief Method ResetValue, addr 0x18a4bbc, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x18a4bc0, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x18a4bc4, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Data::DataTable*& __cordl_internal_get__Table_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__Table_k__BackingField() const;

  constexpr void __cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x18a499c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dataTable);

  /// @brief Method get_ComponentType, addr 0x18a49d4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x18a4a40, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x18a4a48, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_Table, addr 0x18a4994, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTablePropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTablePropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTablePropertyDescriptor(DataTablePropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTablePropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTablePropertyDescriptor(DataTablePropertyDescriptor const&) = delete;

  /// @brief Field <Table>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Data::DataTable* ____Table_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataTablePropertyDescriptor, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataTablePropertyDescriptor, ____Table_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTablePropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTablePropertyDescriptor*, "System.Data", "DataTablePropertyDescriptor");
