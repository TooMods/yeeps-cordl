#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Filter)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Filter__FilterCondition;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class Condition;
}
namespace Amazon::DynamoDBv2 {
class ComparisonOperator;
}
namespace Amazon::DynamoDBv2 {
class DynamoDBEntryConversion;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Filter;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __Filter__FilterCondition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Filter);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition);
// Type: ::FilterCondition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Filter::FilterCondition*
class CORDL_TYPE __Filter__FilterCondition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeValues, put = set_AttributeValues))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* AttributeValues;

  __declspec(property(get = get_ComparisonOperator, put = set_ComparisonOperator))::Amazon::DynamoDBv2::ComparisonOperator* ComparisonOperator;

  __declspec(property(get = get_DynamoDBEntries, put = set_DynamoDBEntries))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* DynamoDBEntries;

  /// @brief Field <AttributeValues>k__BackingField, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__AttributeValues_k__BackingField,
               put = __cordl_internal_set__AttributeValues_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* _AttributeValues_k__BackingField;

  /// @brief Field <ComparisonOperator>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ComparisonOperator_k__BackingField,
                      put = __cordl_internal_set__ComparisonOperator_k__BackingField))::Amazon::DynamoDBv2::ComparisonOperator* _ComparisonOperator_k__BackingField;

  /// @brief Field <DynamoDBEntries>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__DynamoDBEntries_k__BackingField,
      put = __cordl_internal_set__DynamoDBEntries_k__BackingField))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* _DynamoDBEntries_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition* New_ctor(::Amazon::DynamoDBv2::ComparisonOperator* comparisonOperator,
                                                                                         ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* attributeValues);

  static inline ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition* New_ctor(::Amazon::DynamoDBv2::ComparisonOperator* comparisonOperator,
                                                                                         ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* dynamoDBEntries);

  static inline ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition* New_ctor(::Amazon::DynamoDBv2::Model::Condition* condition);

  /// @brief Method ToCondition, addr 0x1655d1c, size 0x10, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Condition* ToCondition(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToCondition, addr 0x1655d38, size 0x10, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Condition* ToCondition(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool shouldConvertToEpochSeconds);

  /// @brief Method ToCondition, addr 0x1655d2c, size 0xc, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Condition* ToCondition(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool shouldConvertToEpochSeconds, ::StringW attributeName);

  /// @brief Method ToCondition, addr 0x16554c4, size 0x210, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Condition* ToCondition(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool shouldConvertToEpochSeconds, ::StringW attributeName,
                                                             bool isEmptyStringValueEnabled);

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__AttributeValues_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__AttributeValues_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::ComparisonOperator*& __cordl_internal_get__ComparisonOperator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ComparisonOperator*> const& __cordl_internal_get__ComparisonOperator_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get__DynamoDBEntries_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
  __cordl_internal_get__DynamoDBEntries_k__BackingField() const;

  constexpr void __cordl_internal_set__AttributeValues_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__ComparisonOperator_k__BackingField(::Amazon::DynamoDBv2::ComparisonOperator* value);

  constexpr void __cordl_internal_set__DynamoDBEntries_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method .ctor, addr 0x1655cec, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::ComparisonOperator* comparisonOperator, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* attributeValues);

  /// @brief Method .ctor, addr 0x1655bd0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::ComparisonOperator* comparisonOperator, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* dynamoDBEntries);

  /// @brief Method .ctor, addr 0x16558c8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::Model::Condition* condition);

  /// @brief Method get_AttributeValues, addr 0x1655cbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* get_AttributeValues();

  /// @brief Method get_ComparisonOperator, addr 0x1655cdc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ComparisonOperator* get_ComparisonOperator();

  /// @brief Method get_DynamoDBEntries, addr 0x1655ccc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* get_DynamoDBEntries();

  /// @brief Method set_AttributeValues, addr 0x1655cc4, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributeValues(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ComparisonOperator, addr 0x1655ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_ComparisonOperator(::Amazon::DynamoDBv2::ComparisonOperator* value);

  /// @brief Method set_DynamoDBEntries, addr 0x1655cd4, size 0x8, virtual false, abstract: false, final false
  inline void set_DynamoDBEntries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Filter__FilterCondition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Filter__FilterCondition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Filter__FilterCondition(__Filter__FilterCondition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Filter__FilterCondition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Filter__FilterCondition(__Filter__FilterCondition const&) = delete;

  /// @brief Field <AttributeValues>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>* ____AttributeValues_k__BackingField;

  /// @brief Field <DynamoDBEntries>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ____DynamoDBEntries_k__BackingField;

  /// @brief Field <ComparisonOperator>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ComparisonOperator* ____ComparisonOperator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition, ____AttributeValues_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition, ____DynamoDBEntries_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition, ____ComparisonOperator_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::Filter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Filter*
class CORDL_TYPE Filter : public ::System::Object {
public:
  // Declarations
  using FilterCondition = ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition;

  __declspec(property(get = get_Conditions, put = set_Conditions))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* Conditions;

  /// @brief Field <Conditions>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Conditions_k__BackingField, put = __cordl_internal_set__Conditions_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* _Conditions_k__BackingField;

  /// @brief Method AddCondition, addr 0x1655b28, size 0xa8, virtual false, abstract: false, final false
  inline void AddCondition(::StringW attributeName, ::Amazon::DynamoDBv2::ComparisonOperator* comparisonOperator,
                           ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* values);

  /// @brief Method AddCondition, addr 0x1655a90, size 0x98, virtual false, abstract: false, final false
  inline void AddCondition(::StringW attributeName, ::Amazon::DynamoDBv2::Model::Condition* condition);

  /// @brief Method AddCondition, addr 0x1655bfc, size 0x68, virtual false, abstract: false, final false
  inline void AddCondition(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition* filterCondition);

  /// @brief Method ConvertToAttributeValues, addr 0x1655908, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*
  ConvertToAttributeValues(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled,
                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method ConvertToAttributeValues, addr 0x16558fc, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeValue*>*
  ConvertToAttributeValues(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> values);

  /// @brief Method FromConditions, addr 0x16556d4, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::DocumentModel::Filter* FromConditions(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* conditions);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Filter* New_ctor();

  /// @brief Method RemoveCondition, addr 0x1655c64, size 0x58, virtual false, abstract: false, final false
  inline void RemoveCondition(::StringW attributeName);

  /// @brief Method ToConditions, addr 0x16551e0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ToConditions();

  /// @brief Method ToConditions, addr 0x1655248, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ToConditions(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToConditions, addr 0x1655254, size 0x240, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*
  ToConditions(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, bool isEmptyStringValueEnabled);

  /// @brief Method ToConditions, addr 0x1655494, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ToConditions(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                                                                        bool isEmptyStringValueEnabled);

  /// @brief Method ToConditions, addr 0x16554a0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ToConditions(::Amazon::DynamoDBv2::DocumentModel::Table* table);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>*& __cordl_internal_get__Conditions_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>*> const&
  __cordl_internal_get__Conditions_k__BackingField() const;

  constexpr void __cordl_internal_set__Conditions_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* value);

  /// @brief Method .ctor, addr 0x16550fc, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Conditions, addr 0x16550ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* get_Conditions();

  /// @brief Method set_Conditions, addr 0x16550f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Conditions(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Filter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Filter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Filter(Filter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Filter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Filter(Filter const&) = delete;

  /// @brief Field <Conditions>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*>* ____Conditions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Filter, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Filter, ____Conditions_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Filter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Filter*, "Amazon.DynamoDBv2.DocumentModel", "Filter");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__Filter__FilterCondition*, "Amazon.DynamoDBv2.DocumentModel", "Filter/FilterCondition");
