#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DescribeTableResponse)
namespace Amazon::DynamoDBv2::Model {
class TableDescription;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeTableResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeTableResponse);
// Type: Amazon.DynamoDBv2.Model::DescribeTableResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeTableResponse*
class CORDL_TYPE DescribeTableResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Table, put = set_Table))::Amazon::DynamoDBv2::Model::TableDescription* Table;

  /// @brief Field _table, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::Amazon::DynamoDBv2::Model::TableDescription* _table;

  /// @brief Method IsSetTable, addr 0x122a8b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTable();

  static inline ::Amazon::DynamoDBv2::Model::DescribeTableResponse* New_ctor();

  constexpr ::Amazon::DynamoDBv2::Model::TableDescription*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TableDescription*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__table(::Amazon::DynamoDBv2::Model::TableDescription* value);

  /// @brief Method .ctor, addr 0x122a8c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Table, addr 0x122a8a8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TableDescription* get_Table();

  /// @brief Method set_Table, addr 0x122a8b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Table(::Amazon::DynamoDBv2::Model::TableDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeTableResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeTableResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeTableResponse(DescribeTableResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeTableResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeTableResponse(DescribeTableResponse const&) = delete;

  /// @brief Field _table, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TableDescription* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeTableResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeTableResponse, ____table) == 0x28, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeTableResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeTableResponse*, "Amazon.DynamoDBv2.Model", "DescribeTableResponse");
