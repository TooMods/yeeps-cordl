#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListGlobalTablesRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class ListGlobalTablesRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest);
// Type: Amazon.DynamoDBv2.Model::ListGlobalTablesRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::ListGlobalTablesRequest*
class CORDL_TYPE ListGlobalTablesRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_ExclusiveStartGlobalTableName, put = set_ExclusiveStartGlobalTableName))::StringW ExclusiveStartGlobalTableName;

  __declspec(property(get = get_Limit, put = set_Limit)) int32_t Limit;

  __declspec(property(get = get_RegionName, put = set_RegionName))::StringW RegionName;

  /// @brief Field _exclusiveStartGlobalTableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__exclusiveStartGlobalTableName, put = __cordl_internal_set__exclusiveStartGlobalTableName))::StringW _exclusiveStartGlobalTableName;

  /// @brief Field _limit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit))::System::Nullable_1<int32_t> _limit;

  /// @brief Field _regionName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__regionName, put = __cordl_internal_set__regionName))::StringW _regionName;

  /// @brief Method IsSetExclusiveStartGlobalTableName, addr 0x104aecc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExclusiveStartGlobalTableName();

  /// @brief Method IsSetLimit, addr 0x104af80, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLimit();

  /// @brief Method IsSetRegionName, addr 0x104afcc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetRegionName();

  static inline ::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__exclusiveStartGlobalTableName() const;

  constexpr ::StringW& __cordl_internal_get__exclusiveStartGlobalTableName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__limit() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__limit();

  constexpr ::StringW const& __cordl_internal_get__regionName() const;

  constexpr ::StringW& __cordl_internal_get__regionName();

  constexpr void __cordl_internal_set__exclusiveStartGlobalTableName(::StringW value);

  constexpr void __cordl_internal_set__limit(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__regionName(::StringW value);

  /// @brief Method .ctor, addr 0x104afdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExclusiveStartGlobalTableName, addr 0x104aebc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExclusiveStartGlobalTableName();

  /// @brief Method get_Limit, addr 0x104aedc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Limit();

  /// @brief Method get_RegionName, addr 0x104afbc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RegionName();

  /// @brief Method set_ExclusiveStartGlobalTableName, addr 0x104aec4, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveStartGlobalTableName(::StringW value);

  /// @brief Method set_Limit, addr 0x104af18, size 0x68, virtual false, abstract: false, final false
  inline void set_Limit(int32_t value);

  /// @brief Method set_RegionName, addr 0x104afc4, size 0x8, virtual false, abstract: false, final false
  inline void set_RegionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListGlobalTablesRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListGlobalTablesRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListGlobalTablesRequest(ListGlobalTablesRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListGlobalTablesRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListGlobalTablesRequest(ListGlobalTablesRequest const&) = delete;

  /// @brief Field _exclusiveStartGlobalTableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____exclusiveStartGlobalTableName;

  /// @brief Field _limit, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____limit;

  /// @brief Field _regionName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____regionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest, ____exclusiveStartGlobalTableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest, ____limit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest, ____regionName) == 0x48, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::ListGlobalTablesRequest*, "Amazon.DynamoDBv2.Model", "ListGlobalTablesRequest");
