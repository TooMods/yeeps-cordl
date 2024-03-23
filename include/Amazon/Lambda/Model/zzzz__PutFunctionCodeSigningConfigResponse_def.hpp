#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PutFunctionCodeSigningConfigResponse)
// Forward declare root types
namespace Amazon::Lambda::Model {
class PutFunctionCodeSigningConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse);
// Type: Amazon.Lambda.Model::PutFunctionCodeSigningConfigResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PutFunctionCodeSigningConfigResponse*
class CORDL_TYPE PutFunctionCodeSigningConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfigArn, put = set_CodeSigningConfigArn))::StringW CodeSigningConfigArn;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  /// @brief Field _codeSigningConfigArn, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigArn, put = __cordl_internal_set__codeSigningConfigArn))::StringW _codeSigningConfigArn;

  /// @brief Field _functionName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Method IsSetCodeSigningConfigArn, addr 0x2bcfce0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigArn();

  /// @brief Method IsSetFunctionName, addr 0x2bcfd00, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  static inline ::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__codeSigningConfigArn() const;

  constexpr ::StringW& __cordl_internal_get__codeSigningConfigArn();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr void __cordl_internal_set__codeSigningConfigArn(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  /// @brief Method .ctor, addr 0x2bcfd10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSigningConfigArn, addr 0x2bcfcd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CodeSigningConfigArn();

  /// @brief Method get_FunctionName, addr 0x2bcfcf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method set_CodeSigningConfigArn, addr 0x2bcfcd8, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigArn(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bcfcf8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutFunctionCodeSigningConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutFunctionCodeSigningConfigResponse(PutFunctionCodeSigningConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionCodeSigningConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutFunctionCodeSigningConfigResponse(PutFunctionCodeSigningConfigResponse const&) = delete;

  /// @brief Field _codeSigningConfigArn, offset: 0x28, size: 0x8, def value: None
  ::StringW ____codeSigningConfigArn;

  /// @brief Field _functionName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____functionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse, ____codeSigningConfigArn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse, ____functionName) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PutFunctionCodeSigningConfigResponse*, "Amazon.Lambda.Model", "PutFunctionCodeSigningConfigResponse");
