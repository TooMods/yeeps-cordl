#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QueryOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(QueryCondition)
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class QueryCondition;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::QueryCondition);
// Type: Amazon.DynamoDBv2.DataModel::QueryCondition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::QueryCondition*
class CORDL_TYPE QueryCondition : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Operator, put = set_Operator))::Amazon::DynamoDBv2::DocumentModel::QueryOperator Operator;

  __declspec(property(get = get_PropertyName, put = set_PropertyName))::StringW PropertyName;

  __declspec(property(get = get_Values, put = set_Values))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Values;

  /// @brief Field <Operator>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Operator_k__BackingField,
                      put = __cordl_internal_set__Operator_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::QueryOperator _Operator_k__BackingField;

  /// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyName_k__BackingField, put = __cordl_internal_set__PropertyName_k__BackingField))::StringW _PropertyName_k__BackingField;

  /// @brief Field <Values>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Values_k__BackingField,
                      put = __cordl_internal_set__Values_k__BackingField))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _Values_k__BackingField;

  static inline ::Amazon::DynamoDBv2::DataModel::QueryCondition* New_ctor(::StringW propertyName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator const& __cordl_internal_get__Operator_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::QueryOperator& __cordl_internal_get__Operator_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__Values_k__BackingField() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__Values_k__BackingField();

  constexpr void __cordl_internal_set__Operator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::QueryOperator value);

  constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Values_k__BackingField(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x1422a78, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method get_Operator, addr 0x1422a58, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::QueryOperator get_Operator();

  /// @brief Method get_PropertyName, addr 0x1422a48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PropertyName();

  /// @brief Method get_Values, addr 0x1422a68, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Values();

  /// @brief Method set_Operator, addr 0x1422a60, size 0x8, virtual false, abstract: false, final false
  inline void set_Operator(::Amazon::DynamoDBv2::DocumentModel::QueryOperator value);

  /// @brief Method set_PropertyName, addr 0x1422a50, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyName(::StringW value);

  /// @brief Method set_Values, addr 0x1422a70, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryCondition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryCondition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryCondition(QueryCondition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryCondition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryCondition(QueryCondition const&) = delete;

  /// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____PropertyName_k__BackingField;

  /// @brief Field <Operator>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::QueryOperator ____Operator_k__BackingField;

  /// @brief Field <Values>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____Values_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::QueryCondition, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::QueryCondition, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::QueryCondition, ____Operator_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::QueryCondition, ____Values_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::QueryCondition);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::QueryCondition*, "Amazon.DynamoDBv2.DataModel", "QueryCondition");
