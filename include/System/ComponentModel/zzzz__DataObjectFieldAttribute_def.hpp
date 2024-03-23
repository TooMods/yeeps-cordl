#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataObjectFieldAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DataObjectFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DataObjectFieldAttribute);
// Type: System.ComponentModel::DataObjectFieldAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DataObjectFieldAttribute*
class CORDL_TYPE DataObjectFieldAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsIdentity)) bool IsIdentity;

  __declspec(property(get = get_IsNullable)) bool IsNullable;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_PrimaryKey)) bool PrimaryKey;

  /// @brief Field <IsIdentity>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsIdentity_k__BackingField, put = __cordl_internal_set__IsIdentity_k__BackingField)) bool _IsIdentity_k__BackingField;

  /// @brief Field <IsNullable>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__IsNullable_k__BackingField, put = __cordl_internal_set__IsNullable_k__BackingField)) bool _IsNullable_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Length_k__BackingField, put = __cordl_internal_set__Length_k__BackingField)) int32_t _Length_k__BackingField;

  /// @brief Field <PrimaryKey>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__PrimaryKey_k__BackingField, put = __cordl_internal_set__PrimaryKey_k__BackingField)) bool _PrimaryKey_k__BackingField;

  /// @brief Method Equals, addr 0x1af3aa8, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x1af3b90, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool primaryKey);

  static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool primaryKey, bool isIdentity);

  static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool primaryKey, bool isIdentity, bool isNullable);

  static inline ::System::ComponentModel::DataObjectFieldAttribute* New_ctor(bool primaryKey, bool isIdentity, bool isNullable, int32_t length);

  constexpr bool const& __cordl_internal_get__IsIdentity_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsIdentity_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsNullable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsNullable_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Length_k__BackingField();

  constexpr bool const& __cordl_internal_get__PrimaryKey_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PrimaryKey_k__BackingField();

  constexpr void __cordl_internal_set__IsIdentity_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsNullable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Length_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PrimaryKey_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1af3988, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool primaryKey);

  /// @brief Method .ctor, addr 0x1af3a04, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool primaryKey, bool isIdentity);

  /// @brief Method .ctor, addr 0x1af3a40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool primaryKey, bool isIdentity, bool isNullable);

  /// @brief Method .ctor, addr 0x1af39bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool primaryKey, bool isIdentity, bool isNullable, int32_t length);

  /// @brief Method get_IsIdentity, addr 0x1af3a88, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsIdentity();

  /// @brief Method get_IsNullable, addr 0x1af3a90, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_Length, addr 0x1af3a98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_PrimaryKey, addr 0x1af3aa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_PrimaryKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataObjectFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataObjectFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataObjectFieldAttribute(DataObjectFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataObjectFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataObjectFieldAttribute(DataObjectFieldAttribute const&) = delete;

  /// @brief Field <IsIdentity>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsIdentity_k__BackingField;

  /// @brief Field <IsNullable>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____IsNullable_k__BackingField;

  /// @brief Field <Length>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____Length_k__BackingField;

  /// @brief Field <PrimaryKey>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____PrimaryKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DataObjectFieldAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____IsIdentity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____IsNullable_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____Length_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DataObjectFieldAttribute, ____PrimaryKey_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DataObjectFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DataObjectFieldAttribute*, "System.ComponentModel", "DataObjectFieldAttribute");
