#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Expression)
namespace Amazon::DynamoDBv2::DocumentModel {
class DynamoDBEntry;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class DeleteItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class PutItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ScanRequest;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateItemRequest;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DocumentModel {
class Expression;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DocumentModel::Expression);
// Type: Amazon.DynamoDBv2.DocumentModel::Expression
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DocumentModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DocumentModel::Expression*
class CORDL_TYPE Expression : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExpressionAttributeNames, put = set_ExpressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ExpressionAttributeNames;

  __declspec(property(get = get_ExpressionAttributeValues,
                      put = set_ExpressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ExpressionAttributeValues;

  __declspec(property(get = get_ExpressionStatement, put = set_ExpressionStatement))::StringW ExpressionStatement;

  __declspec(property(get = get_IsSet)) bool IsSet;

  /// @brief Field <ExpressionStatement>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpressionStatement_k__BackingField, put = __cordl_internal_set__ExpressionStatement_k__BackingField))::StringW _ExpressionStatement_k__BackingField;

  /// @brief Field _expressionAttributeNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expressionAttributeNames,
                      put = __cordl_internal_set__expressionAttributeNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__expressionAttributeValues,
      put = __cordl_internal_set__expressionAttributeValues))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* _expressionAttributeValues;

  /// @brief Method ApplyExpression, addr 0x1654b58, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyExpression(::Amazon::DynamoDBv2::Model::DeleteItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method ApplyExpression, addr 0x1654c00, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyExpression(::Amazon::DynamoDBv2::Model::PutItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method ApplyExpression, addr 0x1654d50, size 0x234, virtual false, abstract: false, final false
  static inline void ApplyExpression(::Amazon::DynamoDBv2::Model::QueryRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table,
                                     ::Amazon::DynamoDBv2::DocumentModel::Expression* keyExpression, ::Amazon::DynamoDBv2::DocumentModel::Expression* filterExpression);

  /// @brief Method ApplyExpression, addr 0x1654770, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyExpression(::Amazon::DynamoDBv2::Model::ScanRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method ApplyExpression, addr 0x1654ca8, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyExpression(::Amazon::DynamoDBv2::Model::UpdateItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  /// @brief Method ConvertToAttributeValues, addr 0x1654818, size 0x340, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*
  ConvertToAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* valueMap, ::Amazon::DynamoDBv2::DocumentModel::Table* table);

  static inline ::Amazon::DynamoDBv2::DocumentModel::Expression* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__ExpressionStatement_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ExpressionStatement_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__expressionAttributeNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__expressionAttributeNames() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*& __cordl_internal_get__expressionAttributeValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
  __cordl_internal_get__expressionAttributeValues() const;

  constexpr void __cordl_internal_set__ExpressionStatement_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__expressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method .ctor, addr 0x1654f84, size 0x168, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExpressionAttributeNames, addr 0x1654750, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_ExpressionAttributeNames();

  /// @brief Method get_ExpressionAttributeValues, addr 0x1654760, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* get_ExpressionAttributeValues();

  /// @brief Method get_ExpressionStatement, addr 0x1654740, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExpressionStatement();

  /// @brief Method get_IsSet, addr 0x1654730, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method set_ExpressionAttributeNames, addr 0x1654758, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ExpressionAttributeValues, addr 0x1654768, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value);

  /// @brief Method set_ExpressionStatement, addr 0x1654748, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpressionStatement(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression(Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression(Expression const&) = delete;

  /// @brief Field _expressionAttributeNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____expressionAttributeNames;

  /// @brief Field _expressionAttributeValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* ____expressionAttributeValues;

  /// @brief Field <ExpressionStatement>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ExpressionStatement_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DocumentModel::Expression, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Expression, ____expressionAttributeNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Expression, ____expressionAttributeValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DocumentModel::Expression, ____ExpressionStatement_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DocumentModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DocumentModel::Expression);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DocumentModel::Expression*, "Amazon.DynamoDBv2.DocumentModel", "Expression");
