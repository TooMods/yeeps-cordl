#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UntagResourceResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class UntagResourceResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UntagResourceResponse);
// Type: Amazon.Lambda.Model::UntagResourceResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UntagResourceResponse*
class CORDL_TYPE UntagResourceResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  static inline ::Amazon::Lambda::Model::UntagResourceResponse* New_ctor();

  /// @brief Method .ctor, addr 0x31096b0, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UntagResourceResponse, 0x28>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UntagResourceResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UntagResourceResponse*, "Amazon.Lambda.Model", "UntagResourceResponse");
