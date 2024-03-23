#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class Condition;
}
namespace Amazon::DynamoDBv2 {
class ConditionalOperator;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace Amazon::DynamoDBv2 {
class Select;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::QueryRequest);
// Type: Amazon.DynamoDBv2.Model::QueryRequest
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::QueryRequest*
class CORDL_TYPE QueryRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::ConditionalOperator* ConditionalOperator;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_ExclusiveStartKey,
                      put = set_ExclusiveStartKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ExclusiveStartKey;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_ExpressionAttributeValues,
                      put = set_ExpressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ExpressionAttributeValues;

  __declspec(property(get = get_FilterExpression, put = set_FilterExpression))::StringW FilterExpression;

  __declspec(property(get = get_IndexName, put = set_IndexName))::StringW IndexName;

  __declspec(property(get = get_KeyConditionExpression, put = set_KeyConditionExpression))::StringW KeyConditionExpression;

  __declspec(property(get = get_KeyConditions, put = set_KeyConditions))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* KeyConditions;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_ProjectionExpression, put = set_ProjectionExpression))::StringW ProjectionExpression;

  __declspec(property(get = get_QueryFilter, put = set_QueryFilter))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* QueryFilter;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_ScanIndexForward, put = set_ScanIndexForward)) bool ScanIndexForward;

  __declspec(property(get = get_Select, put = set_Select))::Amazon::DynamoDBv2::Select* Select;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _attributesToGet, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__attributesToGet, put = __cordl_internal_set__attributesToGet))::System::Collections::Generic::List_1<::StringW>* _attributesToGet;

  /// @brief Field _conditionalOperator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__conditionalOperator, put = __cordl_internal_set__conditionalOperator))::Amazon::DynamoDBv2::ConditionalOperator* _conditionalOperator;

  /// @brief Field _consistentRead, offset 0x48, size 0x2
  __declspec(property(get = __cordl_internal_get__consistentRead, put = __cordl_internal_set__consistentRead))::System::Nullable_1<bool> _consistentRead;

  /// @brief Field _exclusiveStartKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartKey,
                      put = __cordl_internal_set__exclusiveStartKey))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _exclusiveStartKey;

  /// @brief Field _expressionAttributeNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset 0x60, size 0x8
  __declspec(
      property(get = __cordl_internal_get__expressionAttributeValues,
               put = __cordl_internal_set__expressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _expressionAttributeValues;

  /// @brief Field _filterExpression, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__filterExpression, put = __cordl_internal_set__filterExpression))::StringW _filterExpression;

  /// @brief Field _indexName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__indexName, put = __cordl_internal_set__indexName))::StringW _indexName;

  /// @brief Field _keyConditionExpression, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__keyConditionExpression, put = __cordl_internal_set__keyConditionExpression))::StringW _keyConditionExpression;

  /// @brief Field _keyConditions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__keyConditions,
                      put = __cordl_internal_set__keyConditions))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* _keyConditions;

  /// @brief Field _limit, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _projectionExpression, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionExpression, put = __cordl_internal_set__projectionExpression))::StringW _projectionExpression;

  /// @brief Field _queryFilter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__queryFilter,
                      put = __cordl_internal_set__queryFilter))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* _queryFilter;

  /// @brief Field _returnConsumedCapacity, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _scanIndexForward, offset 0xa8, size 0x2
  __declspec(property(get = __cordl_internal_get__scanIndexForward, put = __cordl_internal_set__scanIndexForward))::System::Nullable_1<bool> _scanIndexForward;

  /// @brief Field _select, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__select, put = __cordl_internal_set__select))::Amazon::DynamoDBv2::Select* _select;

  /// @brief Field _tableName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetAttributesToGet, addr 0x104da08, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributesToGet();

  /// @brief Method IsSetConditionalOperator, addr 0x104da6c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetConditionalOperator();

  /// @brief Method IsSetConsistentRead, addr 0x104db70, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetExclusiveStartKey, addr 0x104dbbc, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartKey();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x104dc24, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetExpressionAttributeValues, addr 0x104dc8c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeValues();

  /// @brief Method IsSetFilterExpression, addr 0x104dcf4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFilterExpression();

  /// @brief Method IsSetIndexName, addr 0x104dd14, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetKeyConditionExpression, addr 0x104dd34, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetKeyConditionExpression();

  /// @brief Method IsSetKeyConditions, addr 0x104dd54, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKeyConditions();

  /// @brief Method IsSetLimit, addr 0x104de50, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetProjectionExpression, addr 0x104de9c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjectionExpression();

  /// @brief Method IsSetQueryFilter, addr 0x104debc, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetQueryFilter();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x104df24, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetScanIndexForward, addr 0x104e028, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetScanIndexForward();

  /// @brief Method IsSetSelect, addr 0x104e074, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetSelect();

  /// @brief Method IsSetTableName, addr 0x104e0e4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::QueryRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::QueryRequest* New_ctor(::StringW tableName);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__attributesToGet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__attributesToGet() const;

  constexpr ::Amazon::DynamoDBv2::ConditionalOperator*& __cordl_internal_get__conditionalOperator();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ConditionalOperator*> const& __cordl_internal_get__conditionalOperator() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__consistentRead() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__consistentRead();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__exclusiveStartKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__exclusiveStartKey() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__expressionAttributeValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
  __cordl_internal_get__expressionAttributeValues() const;

  constexpr ::StringW const& __cordl_internal_get__filterExpression() const;

  constexpr ::StringW& __cordl_internal_get__filterExpression();

  constexpr ::StringW const& __cordl_internal_get__indexName() const;

  constexpr ::StringW& __cordl_internal_get__indexName();

  constexpr ::StringW const& __cordl_internal_get__keyConditionExpression() const;

  constexpr ::StringW& __cordl_internal_get__keyConditionExpression();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*& __cordl_internal_get__keyConditions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*> const& __cordl_internal_get__keyConditions() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__projectionExpression() const;

  constexpr ::StringW& __cordl_internal_get__projectionExpression();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*& __cordl_internal_get__queryFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*> const& __cordl_internal_get__queryFilter() const;

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__scanIndexForward() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__scanIndexForward();

  constexpr ::Amazon::DynamoDBv2::Select*& __cordl_internal_get__select();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Select*> const& __cordl_internal_get__select() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__attributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__conditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__exclusiveStartKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__expressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__filterExpression(::StringW value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__keyConditionExpression(::StringW value);

  constexpr void __cordl_internal_set__keyConditions(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__projectionExpression(::StringW value);

  constexpr void __cordl_internal_set__queryFilter(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__scanIndexForward(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__select(::Amazon::DynamoDBv2::Select* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x104d6d4, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104d85c, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName);

  /// @brief Method get_AttributesToGet, addr 0x104d9f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConditionalOperator, addr 0x104da5c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ConditionalOperator* get_ConditionalOperator();

  /// @brief Method get_ConsistentRead, addr 0x104dacc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_ExclusiveStartKey, addr 0x104dbac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExclusiveStartKey();

  /// @brief Method get_ExpressionAttributeNames, addr 0x104dc14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x104dc7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExpressionAttributeValues();

  /// @brief Method get_FilterExpression, addr 0x104dce4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FilterExpression();

  /// @brief Method get_IndexName, addr 0x104dd04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_KeyConditionExpression, addr 0x104dd24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KeyConditionExpression();

  /// @brief Method get_KeyConditions, addr 0x104dd44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* get_KeyConditions();

  /// @brief Method get_Limit, addr 0x104ddac, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_ProjectionExpression, addr 0x104de8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectionExpression();

  /// @brief Method get_QueryFilter, addr 0x104deac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* get_QueryFilter();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x104df14, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ScanIndexForward, addr 0x104df84, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ScanIndexForward();

  /// @brief Method get_Select, addr 0x104e064, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Select* get_Select();

  /// @brief Method get_TableName, addr 0x104e0d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_AttributesToGet, addr 0x104da00, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConditionalOperator, addr 0x104da64, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  /// @brief Method set_ConsistentRead, addr 0x104db08, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_ExclusiveStartKey, addr 0x104dbb4, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x104dc1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x104dc84, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_FilterExpression, addr 0x104dcec, size 0x8, virtual false, abstract: false, final false
  inline void set_FilterExpression(::StringW value);

  /// @brief Method set_IndexName, addr 0x104dd0c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_KeyConditionExpression, addr 0x104dd2c, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyConditionExpression(::StringW value);

  /// @brief Method set_KeyConditions, addr 0x104dd4c, size 0x8, virtual false, abstract: false, final false
  inline void set_KeyConditions(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  /// @brief Method set_Limit, addr 0x104dde8, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_ProjectionExpression, addr 0x104de94, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionExpression(::StringW value);

  /// @brief Method set_QueryFilter, addr 0x104deb4, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryFilter(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x104df1c, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ScanIndexForward, addr 0x104dfc0, size 0x68, virtual false, abstract: false, final false
  inline void set_ScanIndexForward(bool value);

  /// @brief Method set_Select, addr 0x104e06c, size 0x8, virtual false, abstract: false, final false
  inline void set_Select(::Amazon::DynamoDBv2::Select* value);

  /// @brief Method set_TableName, addr 0x104e0dc, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryRequest(QueryRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryRequest(QueryRequest const&) = delete;

  /// @brief Field _attributesToGet, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____attributesToGet;

  /// @brief Field _conditionalOperator, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ConditionalOperator* ____conditionalOperator;

  /// @brief Field _consistentRead, offset: 0x48, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____consistentRead;

  /// @brief Field _exclusiveStartKey, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____exclusiveStartKey;

  /// @brief Field _expressionAttributeNames, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____expressionAttributeValues;

  /// @brief Field _filterExpression, offset: 0x68, size: 0x8, def value: None
  ::StringW ____filterExpression;

  /// @brief Field _indexName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____indexName;

  /// @brief Field _keyConditionExpression, offset: 0x78, size: 0x8, def value: None
  ::StringW ____keyConditionExpression;

  /// @brief Field _keyConditions, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ____keyConditions;

  /// @brief Field _limit, offset: 0x88, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _projectionExpression, offset: 0x90, size: 0x8, def value: None
  ::StringW ____projectionExpression;

  /// @brief Field _queryFilter, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ____queryFilter;

  /// @brief Field _returnConsumedCapacity, offset: 0xa0, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _scanIndexForward, offset: 0xa8, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____scanIndexForward;

  /// @brief Field _select, offset: 0xb0, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Select* ____select;

  /// @brief Field _tableName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::QueryRequest, 0xc0>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____attributesToGet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____conditionalOperator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____consistentRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____exclusiveStartKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____expressionAttributeNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____expressionAttributeValues) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____filterExpression) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____indexName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____keyConditionExpression) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____keyConditions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____limit) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____projectionExpression) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____queryFilter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____returnConsumedCapacity) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____scanIndexForward) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____select) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::QueryRequest, ____tableName) == 0xb8, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::QueryRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::QueryRequest*, "Amazon.DynamoDBv2.Model", "QueryRequest");
