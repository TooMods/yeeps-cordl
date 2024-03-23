#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExpectedState)
namespace Amazon::DynamoDBv2::DocumentModel {
struct ConditionalOperatorValues;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ExpectedValue;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Primitive;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct ScanOperator;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __ExpectedState____c__DisplayClass14_0;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
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
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class ExpectedState;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class __ExpectedState____c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::ExpectedState);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0);
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::ExpectedState::<>c__DisplayClass14_0*
class CORDL_TYPE __ExpectedState____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeName, put = __cordl_internal_set_attributeName))::StringW attributeName;

  static inline ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0* New_ctor();

  /// @brief Method <ToExpectedAttributeMap>b__0, addr 0x165471c, size 0x14, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* _ToExpectedAttributeMap_b__0(::Amazon::DynamoDBv2::DocumentModel::Primitive* p);

  constexpr ::StringW const& __cordl_internal_get_attributeName() const;

  constexpr ::StringW& __cordl_internal_get_attributeName();

  constexpr void __cordl_internal_set_attributeName(::StringW value);

  /// @brief Method .ctor, addr 0x1654714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpectedState____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExpectedState____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExpectedState____c__DisplayClass14_0(__ExpectedState____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExpectedState____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExpectedState____c__DisplayClass14_0(__ExpectedState____c__DisplayClass14_0 const&) = delete;

  /// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___attributeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0, ___attributeName) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
// Type: Amazon.DynamoDBv2.DocumentModel::ExpectedState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::ExpectedState*
class CORDL_TYPE ExpectedState : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass14_0 = ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ConditionalOperator;

  __declspec(property(get = get_ExpectedValues, put = set_ExpectedValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* ExpectedValues;

  /// @brief Field <ConditionalOperator>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ConditionalOperator_k__BackingField,
                      put = __cordl_internal_set__ConditionalOperator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues _ConditionalOperator_k__BackingField;

  /// @brief Field <ExpectedValues>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpectedValues_k__BackingField, put = __cordl_internal_set__ExpectedValues_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* _ExpectedValues_k__BackingField;

  /// @brief Method AddExpected, addr 0x16541f4, size 0xa8, virtual false, abstract: false, final false
  inline void AddExpected(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison,
                          ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values);

  /// @brief Method AddExpected, addr 0x165415c, size 0x98, virtual false, abstract: false, final false
  inline void AddExpected(::StringW attributeName, bool exists);

  static inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedState* New_ctor();

  /// @brief Method ToExpectedAttributeMap, addr 0x165429c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* ToExpectedAttributeMap();

  /// @brief Method ToExpectedAttributeMap, addr 0x1654304, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
  ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion);

  /// @brief Method ToExpectedAttributeMap, addr 0x1654310, size 0x38c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
  ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, bool isEmptyStringValueEnabled);

  /// @brief Method ToExpectedAttributeMap, addr 0x165469c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* ToExpectedAttributeMap(::Amazon::DynamoDBv2::DocumentModel::Table* table);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& __cordl_internal_get__ConditionalOperator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& __cordl_internal_get__ConditionalOperator_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*& __cordl_internal_get__ExpectedValues_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*> const&
  __cordl_internal_get__ExpectedValues_k__BackingField() const;

  constexpr void __cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  constexpr void __cordl_internal_set__ExpectedValues_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* value);

  /// @brief Method .ctor, addr 0x1654054, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConditionalOperator, addr 0x165414c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues get_ConditionalOperator();

  /// @brief Method get_ExpectedValues, addr 0x165413c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* get_ExpectedValues();

  /// @brief Method set_ConditionalOperator, addr 0x1654154, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value);

  /// @brief Method set_ExpectedValues, addr 0x1654144, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpectedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpectedState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpectedState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpectedState(ExpectedState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpectedState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpectedState(ExpectedState const&) = delete;

  /// @brief Field <ExpectedValues>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* ____ExpectedValues_k__BackingField;

  /// @brief Field <ConditionalOperator>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues ____ConditionalOperator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::ExpectedState, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ExpectedState, ____ExpectedValues_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::ExpectedState, ____ConditionalOperator_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::ExpectedState);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::ExpectedState*, "Amazon.DynamoDBv2.DocumentModel", "ExpectedState");
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*, "Amazon.DynamoDBv2.DocumentModel", "ExpectedState/<>c__DisplayClass14_0");
