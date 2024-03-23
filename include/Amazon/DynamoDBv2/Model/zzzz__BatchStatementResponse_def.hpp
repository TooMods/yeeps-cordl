#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchStatementResponse)
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class BatchStatementError;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class BatchStatementResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::BatchStatementResponse);
// Type: Amazon.DynamoDBv2.Model::BatchStatementResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::BatchStatementResponse*
class CORDL_TYPE BatchStatementResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Error, put = set_Error))::Amazon::DynamoDBv2::Model::BatchStatementError* Error;

  __declspec(property(get = get_Item, put = set_Item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Item;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _error, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error))::Amazon::DynamoDBv2::Model::BatchStatementError* _error;

  /// @brief Field _item, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__item, put = __cordl_internal_set__item))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* _item;

  /// @brief Field _tableName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetError, addr 0x1226fc8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetError();

  /// @brief Method IsSetItem, addr 0x1226fe8, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetItem();

  /// @brief Method IsSetTableName, addr 0x1227050, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::BatchStatementResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::BatchStatementError*& __cordl_internal_get__error();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BatchStatementError*> const& __cordl_internal_get__error() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& __cordl_internal_get__item();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const& __cordl_internal_get__item() const;

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__error(::Amazon::DynamoDBv2::Model::BatchStatementError* value);

  constexpr void __cordl_internal_set__item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x1227060, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Error, addr 0x1226fb8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::BatchStatementError* get_Error();

  /// @brief Method get_Item, addr 0x1226fd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* get_Item();

  /// @brief Method get_TableName, addr 0x1227040, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_Error, addr 0x1226fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::Amazon::DynamoDBv2::Model::BatchStatementError* value);

  /// @brief Method set_Item, addr 0x1226fe0, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value);

  /// @brief Method set_TableName, addr 0x1227048, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchStatementResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchStatementResponse(BatchStatementResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchStatementResponse(BatchStatementResponse const&) = delete;

  /// @brief Field _error, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::BatchStatementError* ____error;

  /// @brief Field _item, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* ____item;

  /// @brief Field _tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::BatchStatementResponse, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementResponse, ____error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementResponse, ____item) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::BatchStatementResponse, ____tableName) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::BatchStatementResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::BatchStatementResponse*, "Amazon.DynamoDBv2.Model", "BatchStatementResponse");
