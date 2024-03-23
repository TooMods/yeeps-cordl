#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Delete)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class ReturnValuesOnConditionCheckFailure;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Delete;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Delete);
// Type: Amazon.DynamoDBv2.Model::Delete
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Delete*
class CORDL_TYPE Delete : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConditionExpression, put = set_ConditionExpression))::StringW ConditionExpression;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_ExpressionAttributeValues,
                      put = set_ExpressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ExpressionAttributeValues;

  __declspec(property(get = get_Key, put = set_Key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Key;

  __declspec(property(get = get_ReturnValuesOnConditionCheckFailure,
                      put = set_ReturnValuesOnConditionCheckFailure))::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* ReturnValuesOnConditionCheckFailure;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _conditionExpression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionExpression, put = __cordl_internal_set__conditionExpression))::StringW _conditionExpression;

  /// @brief Field _expressionAttributeNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__expressionAttributeValues,
               put = __cordl_internal_set__expressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _expressionAttributeValues;

  /// @brief Field _key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _key;

  /// @brief Field _returnValuesOnConditionCheckFailure, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValuesOnConditionCheckFailure,
                      put = __cordl_internal_set__returnValuesOnConditionCheckFailure))::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* _returnValuesOnConditionCheckFailure;

  /// @brief Field _tableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetConditionExpression, addr 0x1228f10, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConditionExpression();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x1228f30, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetExpressionAttributeValues, addr 0x1228f98, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeValues();

  /// @brief Method IsSetKey, addr 0x1229000, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKey();

  /// @brief Method IsSetReturnValuesOnConditionCheckFailure, addr 0x1229068, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnValuesOnConditionCheckFailure();

  /// @brief Method IsSetTableName, addr 0x12290d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::Delete* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__conditionExpression() const;

  constexpr ::StringW& __cordl_internal_get__conditionExpression();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__expressionAttributeValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__expressionAttributeValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__key() const;

  constexpr ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure*& __cordl_internal_get__returnValuesOnConditionCheckFailure();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure*> const& __cordl_internal_get__returnValuesOnConditionCheckFailure() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__conditionExpression(::StringW value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__expressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__returnValuesOnConditionCheckFailure(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x12290e8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConditionExpression, addr 0x1228f00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ConditionExpression();

  /// @brief Method get_ExpressionAttributeNames, addr 0x1228f20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x1228f88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExpressionAttributeValues();

  /// @brief Method get_Key, addr 0x1228ff0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Key();

  /// @brief Method get_ReturnValuesOnConditionCheckFailure, addr 0x1229058, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* get_ReturnValuesOnConditionCheckFailure();

  /// @brief Method get_TableName, addr 0x12290c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ConditionExpression, addr 0x1228f08, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionExpression(::StringW value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x1228f28, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x1228f90, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Key, addr 0x1228ff8, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ReturnValuesOnConditionCheckFailure, addr 0x1229060, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnValuesOnConditionCheckFailure(::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* value);

  /// @brief Method set_TableName, addr 0x12290d0, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Delete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Delete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Delete(Delete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Delete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Delete(Delete const&) = delete;

  /// @brief Field _conditionExpression, offset: 0x10, size: 0x8, def value: None
  ::StringW ____conditionExpression;

  /// @brief Field _expressionAttributeNames, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____expressionAttributeValues;

  /// @brief Field _key, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____key;

  /// @brief Field _returnValuesOnConditionCheckFailure, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnValuesOnConditionCheckFailure* ____returnValuesOnConditionCheckFailure;

  /// @brief Field _tableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Delete, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____conditionExpression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____expressionAttributeNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____expressionAttributeValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____returnValuesOnConditionCheckFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Delete, ____tableName) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Delete);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Delete*, "Amazon.DynamoDBv2.Model", "Delete");
