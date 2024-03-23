#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeMapping)
namespace Amazon::Util {
class PropertyConfig;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util {
class TypeMapping;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::TypeMapping);
// Type: Amazon.Util::TypeMapping
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::TypeMapping*
class CORDL_TYPE TypeMapping : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PropertyConfigs, put = set_PropertyConfigs))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* PropertyConfigs;

  __declspec(property(get = get_TargetTable, put = set_TargetTable))::StringW TargetTable;

  __declspec(property(get = get_Type, put = set_Type))::System::Type* Type;

  /// @brief Field <PropertyConfigs>k__BackingField, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__PropertyConfigs_k__BackingField,
               put = __cordl_internal_set__PropertyConfigs_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* _PropertyConfigs_k__BackingField;

  /// @brief Field <TargetTable>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetTable_k__BackingField, put = __cordl_internal_set__TargetTable_k__BackingField))::StringW _TargetTable_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  /// @brief Method AddProperty, addr 0x1207f2c, size 0x60, virtual false, abstract: false, final false
  inline void AddProperty(::Amazon::Util::PropertyConfig* propertyConfig);

  static inline ::Amazon::Util::TypeMapping* New_ctor(::System::Type* type, ::StringW targetTable);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>*& __cordl_internal_get__PropertyConfigs_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>*> const&
  __cordl_internal_get__PropertyConfigs_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__TargetTable_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__TargetTable_k__BackingField();

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr void __cordl_internal_set__PropertyConfigs_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* value);

  constexpr void __cordl_internal_set__TargetTable_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x1207f8c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW targetTable);

  /// @brief Method get_PropertyConfigs, addr 0x1207f1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* get_PropertyConfigs();

  /// @brief Method get_TargetTable, addr 0x1207f0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TargetTable();

  /// @brief Method get_Type, addr 0x1207efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_PropertyConfigs, addr 0x1207f24, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyConfigs(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* value);

  /// @brief Method set_TargetTable, addr 0x1207f14, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetTable(::StringW value);

  /// @brief Method set_Type, addr 0x1207f04, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeMapping(TypeMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeMapping(TypeMapping const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <TargetTable>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____TargetTable_k__BackingField;

  /// @brief Field <PropertyConfigs>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Util::PropertyConfig*>* ____PropertyConfigs_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::TypeMapping, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::TypeMapping, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::TypeMapping, ____TargetTable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::TypeMapping, ____PropertyConfigs_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::TypeMapping);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::TypeMapping*, "Amazon.Util", "TypeMapping");
