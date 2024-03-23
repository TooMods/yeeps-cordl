#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
CORDL_MODULE_EXPORT(UpdateCodeSigningConfigResponse)
namespace Amazon::Lambda::Model {
class CodeSigningConfig;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateCodeSigningConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse);
// Type: Amazon.Lambda.Model::UpdateCodeSigningConfigResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateCodeSigningConfigResponse*
class CORDL_TYPE UpdateCodeSigningConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfig, put = set_CodeSigningConfig))::Amazon::Lambda::Model::CodeSigningConfig* CodeSigningConfig;

  /// @brief Field _codeSigningConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfig, put = __cordl_internal_set__codeSigningConfig))::Amazon::Lambda::Model::CodeSigningConfig* _codeSigningConfig;

  /// @brief Method IsSetCodeSigningConfig, addr 0x31098e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfig();

  static inline ::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::CodeSigningConfig*& __cordl_internal_get__codeSigningConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::CodeSigningConfig*> const& __cordl_internal_get__codeSigningConfig() const;

  constexpr void __cordl_internal_set__codeSigningConfig(::Amazon::Lambda::Model::CodeSigningConfig* value);

  /// @brief Method .ctor, addr 0x31098f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSigningConfig, addr 0x31098d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::CodeSigningConfig* get_CodeSigningConfig();

  /// @brief Method set_CodeSigningConfig, addr 0x31098d8, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfig(::Amazon::Lambda::Model::CodeSigningConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateCodeSigningConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateCodeSigningConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateCodeSigningConfigResponse(UpdateCodeSigningConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateCodeSigningConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateCodeSigningConfigResponse(UpdateCodeSigningConfigResponse const&) = delete;

  /// @brief Field _codeSigningConfig, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Lambda::Model::CodeSigningConfig* ____codeSigningConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse, ____codeSigningConfig) == 0x28, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateCodeSigningConfigResponse*, "Amazon.Lambda.Model", "UpdateCodeSigningConfigResponse");
