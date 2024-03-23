#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
CORDL_MODULE_EXPORT(AmazonDynamoDBStreamsRequest)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBStreamsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest);
// Type: Amazon.DynamoDBv2::AmazonDynamoDBStreamsRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::AmazonDynamoDBStreamsRequest*
class CORDL_TYPE AmazonDynamoDBStreamsRequest : public ::Amazon::Runtime::AmazonWebServiceRequest {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest* New_ctor();

  /// @brief Method .ctor, addr 0x120f7d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmazonDynamoDBStreamsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmazonDynamoDBStreamsRequest(AmazonDynamoDBStreamsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmazonDynamoDBStreamsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmazonDynamoDBStreamsRequest(AmazonDynamoDBStreamsRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest, 0x38>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsRequest*, "Amazon.DynamoDBv2", "AmazonDynamoDBStreamsRequest");
