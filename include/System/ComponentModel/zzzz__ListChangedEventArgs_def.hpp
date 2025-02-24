#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedEventArgs)
namespace System::ComponentModel {
struct ListChangedType;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Forward declare root types
namespace System::ComponentModel {
class ListChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ListChangedEventArgs);
// Type: System.ComponentModel::ListChangedEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ListChangedEventArgs*
class CORDL_TYPE ListChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_ListChangedType))::System::ComponentModel::ListChangedType ListChangedType;

  __declspec(property(get = get_NewIndex)) int32_t NewIndex;

  __declspec(property(get = get_OldIndex)) int32_t OldIndex;

  __declspec(property(get = get_PropertyDescriptor))::System::ComponentModel::PropertyDescriptor* PropertyDescriptor;

  /// @brief Field <ListChangedType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ListChangedType_k__BackingField,
                      put = __cordl_internal_set__ListChangedType_k__BackingField))::System::ComponentModel::ListChangedType _ListChangedType_k__BackingField;

  /// @brief Field <NewIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__NewIndex_k__BackingField, put = __cordl_internal_set__NewIndex_k__BackingField)) int32_t _NewIndex_k__BackingField;

  /// @brief Field <OldIndex>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__OldIndex_k__BackingField, put = __cordl_internal_set__OldIndex_k__BackingField)) int32_t _OldIndex_k__BackingField;

  /// @brief Field <PropertyDescriptor>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyDescriptor_k__BackingField,
                      put = __cordl_internal_set__PropertyDescriptor_k__BackingField))::System::ComponentModel::PropertyDescriptor* _PropertyDescriptor_k__BackingField;

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex);

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex);

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex,
                                                                         ::System::ComponentModel::PropertyDescriptor* propDesc);

  static inline ::System::ComponentModel::ListChangedEventArgs* New_ctor(::System::ComponentModel::ListChangedType listChangedType, ::System::ComponentModel::PropertyDescriptor* propDesc);

  constexpr ::System::ComponentModel::ListChangedType const& __cordl_internal_get__ListChangedType_k__BackingField() const;

  constexpr ::System::ComponentModel::ListChangedType& __cordl_internal_get__ListChangedType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__NewIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__NewIndex_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__OldIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__OldIndex_k__BackingField();

  constexpr ::System::ComponentModel::PropertyDescriptor*& __cordl_internal_get__PropertyDescriptor_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const& __cordl_internal_get__PropertyDescriptor_k__BackingField() const;

  constexpr void __cordl_internal_set__ListChangedType_k__BackingField(::System::ComponentModel::ListChangedType value);

  constexpr void __cordl_internal_set__NewIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__OldIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PropertyDescriptor_k__BackingField(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method .ctor, addr 0x1afbed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex);

  /// @brief Method .ctor, addr 0x1afbed8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex);

  /// @brief Method .ctor, addr 0x1afbf58, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, ::System::ComponentModel::PropertyDescriptor* propDesc);

  /// @brief Method .ctor, addr 0x1afbf88, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ListChangedType listChangedType, ::System::ComponentModel::PropertyDescriptor* propDesc);

  /// @brief Method get_ListChangedType, addr 0x1afbffc, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ListChangedType get_ListChangedType();

  /// @brief Method get_NewIndex, addr 0x1afc004, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NewIndex();

  /// @brief Method get_OldIndex, addr 0x1afc00c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OldIndex();

  /// @brief Method get_PropertyDescriptor, addr 0x1afc014, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventArgs(ListChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventArgs(ListChangedEventArgs const&) = delete;

  /// @brief Field <ListChangedType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::ListChangedType ____ListChangedType_k__BackingField;

  /// @brief Field <NewIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____NewIndex_k__BackingField;

  /// @brief Field <OldIndex>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____OldIndex_k__BackingField;

  /// @brief Field <PropertyDescriptor>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptor* ____PropertyDescriptor_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ListChangedEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____ListChangedType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____NewIndex_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____OldIndex_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ListChangedEventArgs, ____PropertyDescriptor_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ListChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedEventArgs*, "System.ComponentModel", "ListChangedEventArgs");
