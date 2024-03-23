#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_def.hpp"
CORDL_MODULE_EXPORT(DescribeLimitsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DescribeLimitsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DescribeLimitsRequest);
// Type: Amazon.DynamoDBv2.Model::DescribeLimitsRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DescribeLimitsRequest*
class CORDL_TYPE DescribeLimitsRequest : public ::Amazon::DynamoDBv2::AmazonDynamoDBRequest {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::DescribeLimitsRequest* New_ctor();

  /// @brief Method .ctor, addr 0x122a318, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DescribeLimitsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DescribeLimitsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DescribeLimitsRequest(DescribeLimitsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DescribeLimitsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DescribeLimitsRequest(DescribeLimitsRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DescribeLimitsRequest, 0x38>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DescribeLimitsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DescribeLimitsRequest*, "Amazon.DynamoDBv2.Model", "DescribeLimitsRequest");
