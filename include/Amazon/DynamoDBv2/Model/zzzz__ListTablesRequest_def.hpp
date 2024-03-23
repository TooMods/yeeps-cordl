#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListTablesRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListTablesRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListTablesRequest);
// Type: Amazon.DynamoDBv2.Model::ListTablesRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListTablesRequest*
class CORDL_TYPE ListTablesRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ExclusiveStartTableName, put = set_ExclusiveStartTableName))::StringW ExclusiveStartTableName;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  /// @brief Field _exclusiveStartTableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartTableName, put = __cordl_internal_set__exclusiveStartTableName))::StringW _exclusiveStartTableName;

  /// @brief Field _limit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Method IsSetExclusiveStartTableName, addr 0x104b3d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartTableName();

  /// @brief Method IsSetLimit, addr 0x104b484, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  static inline ::Amazon::DynamoDBv2::Model::ListTablesRequest* New_ctor();

  static inline ::Amazon::DynamoDBv2::Model::ListTablesRequest* New_ctor(::StringW exclusiveStartTableName);

  static inline ::Amazon::DynamoDBv2::Model::ListTablesRequest* New_ctor(::StringW exclusiveStartTableName, int32_t limit);

  constexpr ::StringW const& __cordl_internal_get__exclusiveStartTableName() const;

  constexpr ::StringW& __cordl_internal_get__exclusiveStartTableName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr void __cordl_internal_set__exclusiveStartTableName(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x104b30c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x104b314, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW exclusiveStartTableName);

  /// @brief Method .ctor, addr 0x104b33c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW exclusiveStartTableName, int32_t limit);

  /// @brief Method get_ExclusiveStartTableName, addr 0x104b3c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExclusiveStartTableName();

  /// @brief Method get_Limit, addr 0x104b3e0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method set_ExclusiveStartTableName, addr 0x104b3c8, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartTableName(::StringW value);

  /// @brief Method set_Limit, addr 0x104b41c, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListTablesRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListTablesRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListTablesRequest(ListTablesRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListTablesRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListTablesRequest(ListTablesRequest const&) = delete;

  /// @brief Field _exclusiveStartTableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____exclusiveStartTableName;

  /// @brief Field _limit, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListTablesRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTablesRequest, ____exclusiveStartTableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListTablesRequest, ____limit) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListTablesRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListTablesRequest*, "Amazon.DynamoDBv2.Model", "ListTablesRequest");
