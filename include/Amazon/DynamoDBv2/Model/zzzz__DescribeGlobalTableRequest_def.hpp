#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DescribeGlobalTableRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeGlobalTableRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeGlobalTableRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeGlobalTableRequest*
class CORDL_TYPE DescribeGlobalTableRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  __declspec(property(get = get_GlobalTableName, put = set_GlobalTableName))::StringW GlobalTableName;

  /// @brief Field _globalTableName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__globalTableName, put = __cordl_internal_set__globalTableName))::StringW _globalTableName;

  /// @brief Method IsSetGlobalTableName, addr 0x122a088, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetGlobalTableName();

  static inline ::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__globalTableName() const;

  constexpr ::StringW& __cordl_internal_get__globalTableName();

  constexpr void __cordl_internal_set__globalTableName(::StringW value);

  /// @brief Method .ctor, addr 0x122a098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalTableName, addr 0x122a078, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GlobalTableName();

  /// @brief Method set_GlobalTableName, addr 0x122a080, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalTableName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeGlobalTableRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeGlobalTableRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeGlobalTableRequest(DescribeGlobalTableRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeGlobalTableRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeGlobalTableRequest(DescribeGlobalTableRequest const&) = delete;

  /// @brief Field _globalTableName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____globalTableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest, ____globalTableName) == 0x38, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeGlobalTableRequest*, "Amazon.DynamoDBv2.Model", "DescribeGlobalTableRequest");
