#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScanRequest)
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
class ScanRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ScanRequest);
// Type: Amazon.DynamoDBv2.Model::ScanRequest
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ScanRequest*
class CORDL_TYPE ScanRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
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

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_ProjectionExpression, put = set_ProjectionExpression))::StringW ProjectionExpression;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_ScanFilter, put = set_ScanFilter))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ScanFilter;

  __declspec(property(get = get_Segment, put = set_Segment)) int32_t Segment;

  __declspec(property(get = get_Select, put = set_Select))::Amazon::DynamoDBv2::Select* Select;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  __declspec(property(get = get_TotalSegments, put = set_TotalSegments)) int32_t TotalSegments;

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

  /// @brief Field _limit, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _projectionExpression, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionExpression, put = __cordl_internal_set__projectionExpression))::StringW _projectionExpression;

  /// @brief Field _returnConsumedCapacity, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _scanFilter, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__scanFilter,
                      put = __cordl_internal_set__scanFilter))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* _scanFilter;

  /// @brief Field _segment, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__segment, put = __cordl_internal_set__segment))::System::Nullable_1<int32_t> _segment;

  /// @brief Field _select, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__select, put = __cordl_internal_set__select))::Amazon::DynamoDBv2::Select* _select;

  /// @brief Field _tableName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Field _totalSegments, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__totalSegments, put = __cordl_internal_set__totalSegments))::System::Nullable_1<int32_t> _totalSegments;

  /// @brief Method IsSetAttributesToGet, addr 0x1050444, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributesToGet();

  /// @brief Method IsSetConditionalOperator, addr 0x10504a8, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetConditionalOperator();

  /// @brief Method IsSetConsistentRead, addr 0x10505ac, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetExclusiveStartKey, addr 0x10505f8, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartKey();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x1050660, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetExpressionAttributeValues, addr 0x10506c8, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeValues();

  /// @brief Method IsSetFilterExpression, addr 0x1050730, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFilterExpression();

  /// @brief Method IsSetIndexName, addr 0x1050750, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetIndexName();

  /// @brief Method IsSetLimit, addr 0x1050804, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetProjectionExpression, addr 0x1050850, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjectionExpression();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x1050870, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetScanFilter, addr 0x10508e0, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetScanFilter();

  /// @brief Method IsSetSegment, addr 0x10509dc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetSegment();

  /// @brief Method IsSetSelect, addr 0x1050a28, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetSelect();

  /// @brief Method IsSetTableName, addr 0x1050a98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  /// @brief Method IsSetTotalSegments, addr 0x1050b4c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTotalSegments();

  static inline ::Amazon::DynamoDBv2::Model::ScanRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::ScanRequest* New_ctor(::StringW tableName);

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

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__projectionExpression() const;

  constexpr ::StringW& __cordl_internal_get__projectionExpression();

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*& __cordl_internal_get__scanFilter();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>*> const& __cordl_internal_get__scanFilter() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__segment() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__segment();

  constexpr ::Amazon::DynamoDBv2::Select*& __cordl_internal_get__select();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Select*> const& __cordl_internal_get__select() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__totalSegments() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__totalSegments();

  constexpr void __cordl_internal_set__attributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__conditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__exclusiveStartKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__expressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__filterExpression(::StringW value);

  constexpr void __cordl_internal_set__indexName(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__projectionExpression(::StringW value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__scanFilter(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  constexpr void __cordl_internal_set__segment(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__select(::Amazon::DynamoDBv2::Select* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  constexpr void __cordl_internal_set__totalSegments(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x1050148, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10502b4, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName);

  /// @brief Method get_AttributesToGet, addr 0x1050434, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConditionalOperator, addr 0x1050498, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ConditionalOperator* get_ConditionalOperator();

  /// @brief Method get_ConsistentRead, addr 0x1050508, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_ExclusiveStartKey, addr 0x10505e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExclusiveStartKey();

  /// @brief Method get_ExpressionAttributeNames, addr 0x1050650, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x10506b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExpressionAttributeValues();

  /// @brief Method get_FilterExpression, addr 0x1050720, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FilterExpression();

  /// @brief Method get_IndexName, addr 0x1050740, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndexName();

  /// @brief Method get_Limit, addr 0x1050760, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_ProjectionExpression, addr 0x1050840, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectionExpression();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x1050860, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ScanFilter, addr 0x10508d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* get_ScanFilter();

  /// @brief Method get_Segment, addr 0x1050938, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Segment();

  /// @brief Method get_Select, addr 0x1050a18, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Select* get_Select();

  /// @brief Method get_TableName, addr 0x1050a88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method get_TotalSegments, addr 0x1050aa8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_TotalSegments();

  /// @brief Method set_AttributesToGet, addr 0x105043c, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConditionalOperator, addr 0x10504a0, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  /// @brief Method set_ConsistentRead, addr 0x1050544, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_ExclusiveStartKey, addr 0x10505f0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartKey(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x1050658, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x10506c0, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_FilterExpression, addr 0x1050728, size 0x8, virtual false, abstract: false, final false
  inline void set_FilterExpression(::StringW value);

  /// @brief Method set_IndexName, addr 0x1050748, size 0x8, virtual false, abstract: false, final false
  inline void set_IndexName(::StringW value);

  /// @brief Method set_Limit, addr 0x105079c, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_ProjectionExpression, addr 0x1050848, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionExpression(::StringW value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x1050868, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ScanFilter, addr 0x10508d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ScanFilter(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* value);

  /// @brief Method set_Segment, addr 0x1050974, size 0x68, virtual false, abstract: false, final false
  inline void set_Segment(int32_t value);

  /// @brief Method set_Select, addr 0x1050a20, size 0x8, virtual false, abstract: false, final false
  inline void set_Select(::Amazon::DynamoDBv2::Select* value);

  /// @brief Method set_TableName, addr 0x1050a90, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

  /// @brief Method set_TotalSegments, addr 0x1050ae4, size 0x68, virtual false, abstract: false, final false
  inline void set_TotalSegments(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScanRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScanRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScanRequest(ScanRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScanRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScanRequest(ScanRequest const&) = delete;

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

  /// @brief Field _limit, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _projectionExpression, offset: 0x80, size: 0x8, def value: None
  ::StringW ____projectionExpression;

  /// @brief Field _returnConsumedCapacity, offset: 0x88, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _scanFilter, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::Condition*>* ____scanFilter;

  /// @brief Field _segment, offset: 0x98, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____segment;

  /// @brief Field _select, offset: 0xa0, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Select* ____select;

  /// @brief Field _tableName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____tableName;

  /// @brief Field _totalSegments, offset: 0xb0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____totalSegments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ScanRequest, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____attributesToGet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____conditionalOperator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____consistentRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____exclusiveStartKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____expressionAttributeNames) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____expressionAttributeValues) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____filterExpression) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____indexName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____limit) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____projectionExpression) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____returnConsumedCapacity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____scanFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____segment) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____select) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____tableName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ScanRequest, ____totalSegments) == 0xb0, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ScanRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ScanRequest*, "Amazon.DynamoDBv2.Model", "ScanRequest");
