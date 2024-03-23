#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
CORDL_MODULE_EXPORT(DescribeEndpointsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeEndpointsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeEndpointsRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeEndpointsRequest*
class CORDL_TYPE DescribeEndpointsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest* New_ctor();

  /// @brief Method .ctor, addr 0x1222d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeEndpointsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeEndpointsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeEndpointsRequest(DescribeEndpointsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeEndpointsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeEndpointsRequest(DescribeEndpointsRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest, 0x38>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeEndpointsRequest*, "Amazon.DynamoDBv2.Model", "DescribeEndpointsRequest");
