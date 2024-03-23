#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UntagResourceResponse)
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class UntagResourceResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::UntagResourceResponse);
// Type: Amazon.DynamoDBv2.Model::UntagResourceResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::UntagResourceResponse*
class CORDL_TYPE UntagResourceResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::Model::UntagResourceResponse* New_ctor();

  /// @brief Method .ctor, addr 0x1053c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UntagResourceResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UntagResourceResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UntagResourceResponse(UntagResourceResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UntagResourceResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UntagResourceResponse(UntagResourceResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::UntagResourceResponse, 0x28>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::UntagResourceResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::UntagResourceResponse*, "Amazon.DynamoDBv2.Model", "UntagResourceResponse");
