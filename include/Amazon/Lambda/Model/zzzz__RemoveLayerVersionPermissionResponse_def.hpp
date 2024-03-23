#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(RemoveLayerVersionPermissionResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class RemoveLayerVersionPermissionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::RemoveLayerVersionPermissionResponse);
// Type: Amazon.Lambda.Model::RemoveLayerVersionPermissionResponse
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::RemoveLayerVersionPermissionResponse*
class CORDL_TYPE RemoveLayerVersionPermissionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  static inline ::Amazon::Lambda::Model::RemoveLayerVersionPermissionResponse* New_ctor();

  /// @brief Method .ctor, addr 0x3108e88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoveLayerVersionPermissionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoveLayerVersionPermissionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoveLayerVersionPermissionResponse(RemoveLayerVersionPermissionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoveLayerVersionPermissionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoveLayerVersionPermissionResponse(RemoveLayerVersionPermissionResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::RemoveLayerVersionPermissionResponse, 0x28>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::RemoveLayerVersionPermissionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::RemoveLayerVersionPermissionResponse*, "Amazon.Lambda.Model", "RemoveLayerVersionPermissionResponse");
