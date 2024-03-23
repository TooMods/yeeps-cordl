#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ExpectedValue)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ScanOperator;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class ExpectedValue;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue);
// Type: Amazon.DynamoDBv2.DocumentModel::ExpectedValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ExpectedValue*
class CORDL_TYPE ExpectedValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Comparison, put = set_Comparison))::Amazon::DynamoDBv2::DocumentModel::ScanOperator Comparison;

  __declspec(property(get = get_Exists, put = set_Exists)) bool Exists;

  __declspec(property(get = get_Values, put = set_Values))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Values;

  /// @brief Field <Comparison>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Comparison_k__BackingField,
                      put = __cordl_internal_set__Comparison_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ScanOperator _Comparison_k__BackingField;

  /// @brief Field <Exists>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Exists_k__BackingField, put = __cordl_internal_set__Exists_k__BackingField)) bool _Exists_k__BackingField;

  /// @brief Field <Values>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Values_k__BackingField,
                      put = __cordl_internal_set__Values_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* _Values_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*
  New_ctor(::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison, ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values);

  static inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue* New_ctor(bool exists);

  /// @brief Method ToExpectedAttributeValue, addr 0x1653a88, size 0x64, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* ToExpectedAttributeValue();

  /// @brief Method ToExpectedAttributeValue, addr 0x1653b60, size 0x70, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* ToExpectedAttributeValue(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToExpectedAttributeValue, addr 0x1653aec, size 0x74, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* ToExpectedAttributeValue(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled);

  /// @brief Method ToExpectedAttributeValue, addr 0x1653bd0, size 0x484, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*
  ToExpectedAttributeValue(bool exists, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* values,
                           ::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator const& __cordl_internal_get__Comparison_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator& __cordl_internal_get__Comparison_k__BackingField();

  constexpr bool const& __cordl_internal_get__Exists_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Exists_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*& __cordl_internal_get__Values_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> const& __cordl_internal_get__Values_k__BackingField() const;

  constexpr void __cordl_internal_set__Comparison_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ScanOperator value);

  constexpr void __cordl_internal_set__Exists_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value);

  /// @brief Method .ctor, addr 0x16539e8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison,
                    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values);

  /// @brief Method .ctor, addr 0x1653954, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(bool exists);

  /// @brief Method get_Comparison, addr 0x1653934, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ScanOperator get_Comparison();

  /// @brief Method get_Exists, addr 0x1653920, size 0x8, virtual false, abstract: false, final false
  inline bool get_Exists();

  /// @brief Method get_Values, addr 0x1653944, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* get_Values();

  /// @brief Method set_Comparison, addr 0x165393c, size 0x8, virtual false, abstract: false, final false
  inline void set_Comparison(::Amazon::DynamoDBv2::DocumentModel::ScanOperator value);

  /// @brief Method set_Exists, addr 0x1653928, size 0xc, virtual false, abstract: false, final false
  inline void set_Exists(bool value);

  /// @brief Method set_Values, addr 0x165394c, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpectedValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpectedValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpectedValue(ExpectedValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpectedValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpectedValue(ExpectedValue const&) = delete;

  /// @brief Field <Exists>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Exists_k__BackingField;

  /// @brief Field <Comparison>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ScanOperator ____Comparison_k__BackingField;

  /// @brief Field <Values>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* ____Values_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue, ____Exists_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue, ____Comparison_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue, ____Values_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*, "Amazon.DynamoDBv2.DocumentModel", "ExpectedValue");
