#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteItemRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class ExpectedAttributeValue;
}
namespace Amazon::DynamoDBv2 {
class ConditionalOperator;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace Amazon::DynamoDBv2 {
class ReturnItemCollectionMetrics;
}
namespace Amazon::DynamoDBv2 {
class ReturnValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DeleteItemRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DeleteItemRequest);
// Type: Amazon.DynamoDBv2.Model::DeleteItemRequest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DeleteItemRequest*
class CORDL_TYPE DeleteItemRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ConditionExpression, put = set_ConditionExpression))::StringW ConditionExpression;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::ConditionalOperator* ConditionalOperator;

  __declspec(property(get = get_Expected, put = set_Expected))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* Expected;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_ExpressionAttributeValues,
                      put = set_ExpressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ExpressionAttributeValues;

  __declspec(property(get = get_Key, put = set_Key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Key;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_ReturnItemCollectionMetrics, put = set_ReturnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ReturnItemCollectionMetrics;

  __declspec(property(get = get_ReturnValues, put = set_ReturnValues))::Amazon::DynamoDBv2::ReturnValue* ReturnValues;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _conditionExpression, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionExpression, put = __cordl_internal_set__conditionExpression))::StringW _conditionExpression;

  /// @brief Field _conditionalOperator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionalOperator, put = __cordl_internal_set__conditionalOperator))::Amazon::DynamoDBv2::ConditionalOperator* _conditionalOperator;

  /// @brief Field _expected, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__expected,
                      put = __cordl_internal_set__expected))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* _expected;

  /// @brief Field _expressionAttributeNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset 0x58, size 0x8
  __declspec(
      property(get = __cordl_internal_get__expressionAttributeValues,
               put = __cordl_internal_set__expressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _expressionAttributeValues;

  /// @brief Field _key, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _key;

  /// @brief Field _returnConsumedCapacity, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__returnItemCollectionMetrics,
                      put = __cordl_internal_set__returnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* _returnItemCollectionMetrics;

  /// @brief Field _returnValues, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValues, put = __cordl_internal_set__returnValues))::Amazon::DynamoDBv2::ReturnValue* _returnValues;

  /// @brief Field _tableName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetConditionExpression, addr 0x1229550, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConditionExpression();

  /// @brief Method IsSetConditionalOperator, addr 0x12294e0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetConditionalOperator();

  /// @brief Method IsSetExpected, addr 0x1229570, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpected();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x12295d8, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetExpressionAttributeValues, addr 0x1229640, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeValues();

  /// @brief Method IsSetKey, addr 0x12296a8, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKey();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x1229710, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetReturnItemCollectionMetrics, addr 0x1229780, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnItemCollectionMetrics();

  /// @brief Method IsSetReturnValues, addr 0x12297f0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnValues();

  /// @brief Method IsSetTableName, addr 0x1229860, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest* New_ctor(::StringW tableName,
                                                                         ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  static inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest*
  New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key, ::Amazon::DynamoDBv2::ReturnValue* returnValues);

  constexpr ::StringW const& __cordl_internal_get__conditionExpression() const;

  constexpr ::StringW& __cordl_internal_get__conditionExpression();

  constexpr ::Amazon::DynamoDBv2::ConditionalOperator*& __cordl_internal_get__conditionalOperator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ConditionalOperator*> const& __cordl_internal_get__conditionalOperator() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*& __cordl_internal_get__expected();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*> const&
  __cordl_internal_get__expected() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__expressionAttributeValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__expressionAttributeValues() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__key() const;

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*& __cordl_internal_get__returnItemCollectionMetrics();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*> const& __cordl_internal_get__returnItemCollectionMetrics() const;

  constexpr ::Amazon::DynamoDBv2::ReturnValue*& __cordl_internal_get__returnValues();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnValue*> const& __cordl_internal_get__returnValues() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__conditionExpression(::StringW value);

  constexpr void __cordl_internal_set__conditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  constexpr void __cordl_internal_set__expected(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__expressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  constexpr void __cordl_internal_set__returnValues(::Amazon::DynamoDBv2::ReturnValue* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x12172e4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1229244, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  /// @brief Method .ctor, addr 0x1229388, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key, ::Amazon::DynamoDBv2::ReturnValue* returnValues);

  /// @brief Method get_ConditionExpression, addr 0x1229540, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ConditionExpression();

  /// @brief Method get_ConditionalOperator, addr 0x12294d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ConditionalOperator* get_ConditionalOperator();

  /// @brief Method get_Expected, addr 0x1229560, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* get_Expected();

  /// @brief Method get_ExpressionAttributeNames, addr 0x12295c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x1229630, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExpressionAttributeValues();

  /// @brief Method get_Key, addr 0x1229698, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Key();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x1229700, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ReturnItemCollectionMetrics, addr 0x1229770, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* get_ReturnItemCollectionMetrics();

  /// @brief Method get_ReturnValues, addr 0x12297e0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnValue* get_ReturnValues();

  /// @brief Method get_TableName, addr 0x1229850, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ConditionExpression, addr 0x1229548, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionExpression(::StringW value);

  /// @brief Method set_ConditionalOperator, addr 0x12294d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  /// @brief Method set_Expected, addr 0x1229568, size 0x8, virtual false, abstract: false, final false
  inline void set_Expected(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x12295d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x1229638, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Key, addr 0x12296a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x1229708, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ReturnItemCollectionMetrics, addr 0x1229778, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  /// @brief Method set_ReturnValues, addr 0x12297e8, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnValues(::Amazon::DynamoDBv2::ReturnValue* value);

  /// @brief Method set_TableName, addr 0x1229858, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteItemRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteItemRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteItemRequest(DeleteItemRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteItemRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteItemRequest(DeleteItemRequest const&) = delete;

  /// @brief Field _conditionalOperator, offset: 0x38, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ConditionalOperator* ____conditionalOperator;

  /// @brief Field _conditionExpression, offset: 0x40, size: 0x8, def value: None
  ::StringW ____conditionExpression;

  /// @brief Field _expected, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* ____expected;

  /// @brief Field _expressionAttributeNames, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____expressionAttributeValues;

  /// @brief Field _key, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____key;

  /// @brief Field _returnConsumedCapacity, offset: 0x68, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset: 0x70, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* ____returnItemCollectionMetrics;

  /// @brief Field _returnValues, offset: 0x78, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnValue* ____returnValues;

  /// @brief Field _tableName, offset: 0x80, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DeleteItemRequest, 0x88>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____conditionalOperator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____conditionExpression) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____expected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____expressionAttributeNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____expressionAttributeValues) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____key) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____returnConsumedCapacity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____returnItemCollectionMetrics) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____returnValues) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DeleteItemRequest, ____tableName) == 0x80, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DeleteItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DeleteItemRequest*, "Amazon.DynamoDBv2.Model", "DeleteItemRequest");
