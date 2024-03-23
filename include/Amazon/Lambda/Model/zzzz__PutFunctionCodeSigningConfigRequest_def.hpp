#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PutFunctionCodeSigningConfigRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class PutFunctionCodeSigningConfigRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest);
// Type: Amazon.Lambda.Model::PutFunctionCodeSigningConfigRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PutFunctionCodeSigningConfigRequest*
class CORDL_TYPE PutFunctionCodeSigningConfigRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  /// @brief Field _codeSigningConfigArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Field _functionName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x2bcfc98, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  /// @brief Method IsSetFunctionName, addr 0x2bcfcb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  static inline ::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  /// @brief Method .ctor, addr 0x2bcfcc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSigningConfigArn, addr 0x2bcfc88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method get_FunctionName, addr 0x2bcfca8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method set_CodeSigningConfigArn, addr 0x2bcfc90, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bcfcb0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutFunctionCodeSigningConfigRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutFunctionCodeSigningConfigRequest(PutFunctionCodeSigningConfigRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutFunctionCodeSigningConfigRequest(PutFunctionCodeSigningConfigRequest const&) = delete;

  /// @brief Field _codeSigningConfigArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  /// @brief Field _functionName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest, ____codeSigningConfigArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest, ____functionName) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigRequest*, "Amazon.Lambda.Model", "PutFunctionCodeSigningConfigRequest");
