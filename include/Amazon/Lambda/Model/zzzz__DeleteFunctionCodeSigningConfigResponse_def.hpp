#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(DeleteFunctionCodeSigningConfigResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class DeleteFunctionCodeSigningConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigResponse);
// Type: Amazon.Lambda.Model::DeleteFunctionCodeSigningConfigResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::DeleteFunctionCodeSigningConfigResponse*
class CORDL_TYPE DeleteFunctionCodeSigningConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  static inline ::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigResponse* New_ctor();

  /// @brief Method .ctor, addr 0x2bc792c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteFunctionCodeSigningConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteFunctionCodeSigningConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteFunctionCodeSigningConfigResponse(DeleteFunctionCodeSigningConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteFunctionCodeSigningConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteFunctionCodeSigningConfigResponse(DeleteFunctionCodeSigningConfigResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigResponse, 0x28>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::DeleteFunctionCodeSigningConfigResponse*, "Amazon.Lambda.Model", "DeleteFunctionCodeSigningConfigResponse");
