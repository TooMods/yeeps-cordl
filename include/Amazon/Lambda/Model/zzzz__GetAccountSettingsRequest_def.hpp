#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
CORDL_MODULE_EXPORT(GetAccountSettingsRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetAccountSettingsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetAccountSettingsRequest);
// Type: Amazon.Lambda.Model::GetAccountSettingsRequest
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetAccountSettingsRequest*
class CORDL_TYPE GetAccountSettingsRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  static inline ::Amazon::Lambda::Model::GetAccountSettingsRequest* New_ctor();

  /// @brief Method .ctor, addr 0x2bc9a60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetAccountSettingsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetAccountSettingsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetAccountSettingsRequest(GetAccountSettingsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetAccountSettingsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetAccountSettingsRequest(GetAccountSettingsRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetAccountSettingsRequest, 0x38>, "Size mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetAccountSettingsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetAccountSettingsRequest*, "Amazon.Lambda.Model", "GetAccountSettingsRequest");
