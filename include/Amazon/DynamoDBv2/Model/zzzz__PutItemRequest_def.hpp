#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PutItemRequest)
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
class PutItemRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::PutItemRequest);
// Type: Amazon.DynamoDBv2.Model::PutItemRequest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::PutItemRequest*
class CORDL_TYPE PutItemRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ConditionExpression, put = set_ConditionExpression))::StringW ConditionExpression;

  __declspec(property(get = get_ConditionalOperator, put = set_ConditionalOperator))::Amazon::DynamoDBv2::ConditionalOperator* ConditionalOperator;

  __declspec(property(get = get_Expected, put = set_Expected))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* Expected;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_ExpressionAttributeValues,
                      put = set_ExpressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ExpressionAttributeValues;

  __declspec(property(get = get_Item, put = set_Item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Item;

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

  /// @brief Field _item, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _item;

  /// @brief Field _returnConsumedCapacity, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _returnItemCollectionMetrics, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__returnItemCollectionMetrics,
                      put = __cordl_internal_set__returnItemCollectionMetrics))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* _returnItemCollectionMetrics;

  /// @brief Field _returnValues, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__returnValues, put = __cordl_internal_set__returnValues))::Amazon::DynamoDBv2::ReturnValue* _returnValues;

  /// @brief Field _tableName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetConditionExpression, addr 0x104d11c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConditionExpression();

  /// @brief Method IsSetConditionalOperator, addr 0x104d0ac, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetConditionalOperator();

  /// @brief Method IsSetExpected, addr 0x104d13c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpected();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x104d1a4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetExpressionAttributeValues, addr 0x104d20c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeValues();

  /// @brief Method IsSetItem, addr 0x104d274, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItem();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x104d2dc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetReturnItemCollectionMetrics, addr 0x104d34c, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnItemCollectionMetrics();

  /// @brief Method IsSetReturnValues, addr 0x104d3bc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnValues();

  /// @brief Method IsSetTableName, addr 0x104d42c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::PutItemRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::PutItemRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item);

  static inline ::Amazon::DynamoDBv2::Model::PutItemRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item,
                                                                      ::Amazon::DynamoDBv2::ReturnValue* returnValues);

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

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__item() const;

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

  constexpr void __cordl_internal_set__item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  constexpr void __cordl_internal_set__returnValues(::Amazon::DynamoDBv2::ReturnValue* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x104cce8, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104ce10, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item);

  /// @brief Method .ctor, addr 0x104cf54, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* item, ::Amazon::DynamoDBv2::ReturnValue* returnValues);

  /// @brief Method get_ConditionExpression, addr 0x104d10c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ConditionExpression();

  /// @brief Method get_ConditionalOperator, addr 0x104d09c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ConditionalOperator* get_ConditionalOperator();

  /// @brief Method get_Expected, addr 0x104d12c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* get_Expected();

  /// @brief Method get_ExpressionAttributeNames, addr 0x104d194, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x104d1fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_ExpressionAttributeValues();

  /// @brief Method get_Item, addr 0x104d264, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Item();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x104d2cc, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_ReturnItemCollectionMetrics, addr 0x104d33c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* get_ReturnItemCollectionMetrics();

  /// @brief Method get_ReturnValues, addr 0x104d3ac, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnValue* get_ReturnValues();

  /// @brief Method get_TableName, addr 0x104d41c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ConditionExpression, addr 0x104d114, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionExpression(::StringW value);

  /// @brief Method set_ConditionalOperator, addr 0x104d0a4, size 0x8, virtual false, abstract: false, final false
  inline void set_ConditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value);

  /// @brief Method set_Expected, addr 0x104d134, size 0x8, virtual false, abstract: false, final false
  inline void set_Expected(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x104d19c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x104d204, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_Item, addr 0x104d26c, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x104d2d4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_ReturnItemCollectionMetrics, addr 0x104d344, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  /// @brief Method set_ReturnValues, addr 0x104d3b4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnValues(::Amazon::DynamoDBv2::ReturnValue* value);

  /// @brief Method set_TableName, addr 0x104d424, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutItemRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutItemRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutItemRequest(PutItemRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutItemRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutItemRequest(PutItemRequest const&) = delete;

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

  /// @brief Field _item, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____item;

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
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::PutItemRequest, 0x88>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____conditionalOperator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____conditionExpression) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____expected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____expressionAttributeNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____expressionAttributeValues) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____item) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____returnConsumedCapacity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____returnItemCollectionMetrics) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____returnValues) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::PutItemRequest, ____tableName) == 0x80, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::PutItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::PutItemRequest*, "Amazon.DynamoDBv2.Model", "PutItemRequest");
