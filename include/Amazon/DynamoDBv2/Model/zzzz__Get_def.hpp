#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Get)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Get;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Get);
// Type: Amazon.DynamoDBv2.Model::Get
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Get*
class CORDL_TYPE Get : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_Key, put = set_Key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Key;

  __declspec(property(get = get_ProjectionExpression, put = set_ProjectionExpression))::StringW ProjectionExpression;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _expressionAttributeNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _key;

  /// @brief Field _projectionExpression, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__projectionExpression, put = __cordl_internal_set__projectionExpression))::StringW _projectionExpression;

  /// @brief Field _tableName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetExpressionAttributeNames, addr 0x1048430, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetExpressionAttributeNames();

  /// @brief Method IsSetKey, addr 0x1048498, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetKey();

  /// @brief Method IsSetProjectionExpression, addr 0x1048500, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetProjectionExpression();

  /// @brief Method IsSetTableName, addr 0x1048520, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::Get* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__key() const;

  constexpr ::StringW const& __cordl_internal_get__projectionExpression() const;

  constexpr ::StringW& __cordl_internal_get__projectionExpression();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__projectionExpression(::StringW value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1048530, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExpressionAttributeNames, addr 0x1048420, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_Key, addr 0x1048488, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Key();

  /// @brief Method get_ProjectionExpression, addr 0x10484f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ProjectionExpression();

  /// @brief Method get_TableName, addr 0x1048510, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ExpressionAttributeNames, addr 0x1048428, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Key, addr 0x1048490, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_ProjectionExpression, addr 0x10484f8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProjectionExpression(::StringW value);

  /// @brief Method set_TableName, addr 0x1048518, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Get();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Get", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Get(Get&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Get", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Get(Get const&) = delete;

  /// @brief Field _expressionAttributeNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _key, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____key;

  /// @brief Field _projectionExpression, offset: 0x20, size: 0x8, def value: None
  ::StringW ____projectionExpression;

  /// @brief Field _tableName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Get, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Get, ____expressionAttributeNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Get, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Get, ____projectionExpression) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Get, ____tableName) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Get);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Get*, "Amazon.DynamoDBv2.Model", "Get");
