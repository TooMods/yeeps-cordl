#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetItemRequest)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2 {
class ReturnConsumedCapacity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class GetItemRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::GetItemRequest);
// Type: Amazon.DynamoDBv2.Model::GetItemRequest
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::GetItemRequest*
class CORDL_TYPE GetItemRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_AttributesToGet, put = set_AttributesToGet))::System::Collections::Generic::List_1<::StringW>* AttributesToGet;

  __declspec(property(get = get_ConsistentRead, put = set_ConsistentRead)) bool ConsistentRead;

  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_Key, put = set_Key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Key;

  __declspec(property(get = get_ProjectionExpression, put = set_ProjectionExpression))::StringW ProjectionExpression;

  __declspec(property(get = get_ReturnConsumedCapacity, put = set_ReturnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* ReturnConsumedCapacity;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _attributesToGet, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__attributesToGet, put = __cordl_internal_set__attributesToGet))::System::Collections::Generic::List_1<::StringW>* _attributesToGet;

  /// @brief Field _consistentRead, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get__consistentRead, put = __cordl_internal_set__consistentRead))::System::Nullable_1<bool> _consistentRead;

  /// @brief Field _expressionAttributeNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _key, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _key;

  /// @brief Field _projectionExpression, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionExpression, put = __cordl_internal_set__projectionExpression))::StringW _projectionExpression;

  /// @brief Field _returnConsumedCapacity, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__returnConsumedCapacity, put = __cordl_internal_set__returnConsumedCapacity))::Amazon::DynamoDBv2::ReturnConsumedCapacity* _returnConsumedCapacity;

  /// @brief Field _tableName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetAttributesToGet, addr 0x1048980, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAttributesToGet();

  /// @brief Method IsSetConsistentRead, addr 0x1048a78, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConsistentRead();

  /// @brief Method IsSetExpressionAttributeNames, addr 0x1048ac4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetKey, addr 0x1048b2c, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKey();

  /// @brief Method IsSetProjectionExpression, addr 0x1048b94, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjectionExpression();

  /// @brief Method IsSetReturnConsumedCapacity, addr 0x1048bb4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetReturnConsumedCapacity();

  /// @brief Method IsSetTableName, addr 0x1048c24, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::GetItemRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::GetItemRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  static inline ::Amazon::DynamoDBv2::Model::GetItemRequest* New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                                                                      bool consistentRead);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__attributesToGet();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__attributesToGet() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__consistentRead() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__consistentRead();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__key() const;

  constexpr ::StringW const& __cordl_internal_get__projectionExpression() const;

  constexpr ::StringW& __cordl_internal_get__projectionExpression();

  constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& __cordl_internal_get__returnConsumedCapacity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& __cordl_internal_get__returnConsumedCapacity() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__attributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__consistentRead(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__projectionExpression(::StringW value);

  constexpr void __cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x10485f0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10486f4, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key);

  /// @brief Method .ctor, addr 0x1048814, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key, bool consistentRead);

  /// @brief Method get_AttributesToGet, addr 0x1048970, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_AttributesToGet();

  /// @brief Method get_ConsistentRead, addr 0x10489d4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ConsistentRead();

  /// @brief Method get_ExpressionAttributeNames, addr 0x1048ab4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_Key, addr 0x1048b1c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Key();

  /// @brief Method get_ProjectionExpression, addr 0x1048b84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectionExpression();

  /// @brief Method get_ReturnConsumedCapacity, addr 0x1048ba4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* get_ReturnConsumedCapacity();

  /// @brief Method get_TableName, addr 0x1048c14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_AttributesToGet, addr 0x1048978, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_ConsistentRead, addr 0x1048a10, size 0x68, virtual false, abstract: false, final false
  inline void set_ConsistentRead(bool value);

  /// @brief Method set_ExpressionAttributeNames, addr 0x1048abc, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Key, addr 0x1048b24, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ProjectionExpression, addr 0x1048b8c, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionExpression(::StringW value);

  /// @brief Method set_ReturnConsumedCapacity, addr 0x1048bac, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value);

  /// @brief Method set_TableName, addr 0x1048c1c, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetItemRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetItemRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetItemRequest(GetItemRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetItemRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetItemRequest(GetItemRequest const&) = delete;

  /// @brief Field _attributesToGet, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____attributesToGet;

  /// @brief Field _consistentRead, offset: 0x40, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____consistentRead;

  /// @brief Field _expressionAttributeNames, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _key, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____key;

  /// @brief Field _projectionExpression, offset: 0x58, size: 0x8, def value: None
  ::StringW ____projectionExpression;

  /// @brief Field _returnConsumedCapacity, offset: 0x60, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::ReturnConsumedCapacity* ____returnConsumedCapacity;

  /// @brief Field _tableName, offset: 0x68, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::GetItemRequest, 0x70>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____attributesToGet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____consistentRead) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____expressionAttributeNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____key) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____projectionExpression) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____returnConsumedCapacity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::GetItemRequest, ____tableName) == 0x68, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::GetItemRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::GetItemRequest*, "Amazon.DynamoDBv2.Model", "GetItemRequest");
