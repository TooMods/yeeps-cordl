#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DeleteCodeSigningConfigRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class DeleteCodeSigningConfigRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest);
// Type: Amazon.Lambda.Model::DeleteCodeSigningConfigRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::DeleteCodeSigningConfigRequest*
class CORDL_TYPE DeleteCodeSigningConfigRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  /// @brief Field _codeSigningConfigArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x2bc6ccc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  static inline ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

  /// @brief Method .ctor, addr 0x2bc6cdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSigningConfigArn, addr 0x2bc6cbc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method set_CodeSigningConfigArn, addr 0x2bc6cc4, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeleteCodeSigningConfigRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeleteCodeSigningConfigRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeleteCodeSigningConfigRequest(DeleteCodeSigningConfigRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeleteCodeSigningConfigRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeleteCodeSigningConfigRequest(DeleteCodeSigningConfigRequest const&) = delete;

  /// @brief Field _codeSigningConfigArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest, ____codeSigningConfigArn) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*, "Amazon.Lambda.Model", "DeleteCodeSigningConfigRequest");
