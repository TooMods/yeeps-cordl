#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListStreamsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListStreamsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListStreamsRequest);
// Type: Amazon.DynamoDBv2.Model::ListStreamsRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListStreamsRequest*
class CORDL_TYPE ListStreamsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest {
public:
  // Declarations
  __declspec(property(get = get_ExclusiveStartStreamArn, put = set_ExclusiveStartStreamArn))::StringW ExclusiveStartStreamArn;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_TableName, put = set_TableName))::StringW TableName;

  /// @brief Field _exclusiveStartStreamArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartStreamArn, put = __cordl_internal_set__exclusiveStartStreamArn))::StringW _exclusiveStartStreamArn;

  /// @brief Field _limit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _tableName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tableName, put = __cordl_internal_set__tableName))::StringW _tableName;

  /// @brief Method IsSetExclusiveStartStreamArn, addr 0x104b0f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartStreamArn();

  /// @brief Method IsSetLimit, addr 0x104b1a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetTableName, addr 0x104b1f4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTableName();

  static inline ::Amazon::DynamoDBv2::Model::ListStreamsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__exclusiveStartStreamArn() const;

  constexpr ::StringW& __cordl_internal_get__exclusiveStartStreamArn();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__tableName() const;

  constexpr ::StringW& __cordl_internal_get__tableName();

  constexpr void __cordl_internal_set__exclusiveStartStreamArn(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__tableName(::StringW value);

  /// @brief Method .ctor, addr 0x104b204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExclusiveStartStreamArn, addr 0x104b0e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExclusiveStartStreamArn();

  /// @brief Method get_Limit, addr 0x104b104, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_TableName, addr 0x104b1e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TableName();

  /// @brief Method set_ExclusiveStartStreamArn, addr 0x104b0ec, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartStreamArn(::StringW value);

  /// @brief Method set_Limit, addr 0x104b140, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_TableName, addr 0x104b1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_TableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListStreamsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListStreamsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListStreamsRequest(ListStreamsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListStreamsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListStreamsRequest(ListStreamsRequest const&) = delete;

  /// @brief Field _exclusiveStartStreamArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____exclusiveStartStreamArn;

  /// @brief Field _limit, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _tableName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____tableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListStreamsRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListStreamsRequest, ____exclusiveStartStreamArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListStreamsRequest, ____limit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListStreamsRequest, ____tableName) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListStreamsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListStreamsRequest*, "Amazon.DynamoDBv2.Model", "ListStreamsRequest");
