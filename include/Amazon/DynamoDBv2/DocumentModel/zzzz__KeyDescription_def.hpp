#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyDescription)
namespace Amazon::DynamoDBv2::DocumentModel {
struct DynamoDBEntryType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class KeyDescription;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::KeyDescription);
// Type: Amazon.DynamoDBv2.DocumentModel::KeyDescription
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::KeyDescription*
class CORDL_TYPE KeyDescription : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsHash, put = set_IsHash)) bool IsHash;

  __declspec(property(get = get_Type, put = set_Type))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Type;

  /// @brief Field <IsHash>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__IsHash_k__BackingField, put = __cordl_internal_set__IsHash_k__BackingField)) bool _IsHash_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType _Type_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::KeyDescription* New_ctor();

  constexpr bool const& __cordl_internal_get__IsHash_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsHash_k__BackingField();

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__IsHash_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

  /// @brief Method .ctor, addr 0x141f754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsHash, addr 0x141f740, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsHash();

  /// @brief Method get_Type, addr 0x141f730, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType get_Type();

  /// @brief Method set_IsHash, addr 0x141f748, size 0xc, virtual false, abstract: false, final false
  inline void set_IsHash(bool value);

  /// @brief Method set_Type, addr 0x141f738, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyDescription(KeyDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyDescription(KeyDescription const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType ____Type_k__BackingField;

  /// @brief Field <IsHash>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____IsHash_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::KeyDescription, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::KeyDescription, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::KeyDescription, ____IsHash_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::KeyDescription);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::KeyDescription*, "Amazon.DynamoDBv2.DocumentModel", "KeyDescription");
