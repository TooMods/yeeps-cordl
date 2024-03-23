#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ListSortDescription)
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Forward declare root types
namespace System::ComponentModel {
class ListSortDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListSortDescription);
// Type: System.ComponentModel::ListSortDescription
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ListSortDescription*
class CORDL_TYPE ListSortDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PropertyDescriptor, put = set_PropertyDescriptor))::System::ComponentModel::PropertyDescriptor* PropertyDescriptor;

  __declspec(property(get = get_SortDirection, put = set_SortDirection))::System::ComponentModel::ListSortDirection SortDirection;

  /// @brief Field <PropertyDescriptor>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyDescriptor_k__BackingField,
                      put = __cordl_internal_set__PropertyDescriptor_k__BackingField))::System::ComponentModel::PropertyDescriptor* _PropertyDescriptor_k__BackingField;

  /// @brief Field <SortDirection>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__SortDirection_k__BackingField,
                      put = __cordl_internal_set__SortDirection_k__BackingField))::System::ComponentModel::ListSortDirection _SortDirection_k__BackingField;

  static inline ::System::ComponentModel::ListSortDescription* New_ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  constexpr ::System::ComponentModel::PropertyDescriptor*& __cordl_internal_get__PropertyDescriptor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const& __cordl_internal_get__PropertyDescriptor_k__BackingField() const;

  constexpr ::System::ComponentModel::ListSortDirection const& __cordl_internal_get__SortDirection_k__BackingField() const;

  constexpr ::System::ComponentModel::ListSortDirection& __cordl_internal_get__SortDirection_k__BackingField();

  constexpr void __cordl_internal_set__PropertyDescriptor_k__BackingField(::System::ComponentModel::PropertyDescriptor* value);

  constexpr void __cordl_internal_set__SortDirection_k__BackingField(::System::ComponentModel::ListSortDirection value);

  /// @brief Method .ctor, addr 0x1afc194, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method get_PropertyDescriptor, addr 0x1afc1c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor();

  /// @brief Method get_SortDirection, addr 0x1afc1d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ListSortDirection get_SortDirection();

  /// @brief Method set_PropertyDescriptor, addr 0x1afc1cc, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyDescriptor(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method set_SortDirection, addr 0x1afc1dc, size 0x8, virtual false, abstract: false, final false
  inline void set_SortDirection(::System::ComponentModel::ListSortDirection value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListSortDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListSortDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListSortDescription(ListSortDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListSortDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListSortDescription(ListSortDescription const&) = delete;

  /// @brief Field <PropertyDescriptor>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptor* ____PropertyDescriptor_k__BackingField;

  /// @brief Field <SortDirection>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::ComponentModel::ListSortDirection ____SortDirection_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListSortDescription, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ListSortDescription, ____PropertyDescriptor_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListSortDescription, ____SortDirection_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListSortDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListSortDescription*, "System.ComponentModel", "ListSortDescription");
