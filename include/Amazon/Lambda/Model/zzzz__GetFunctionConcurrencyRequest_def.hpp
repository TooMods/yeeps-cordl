#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetFunctionConcurrencyRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetFunctionConcurrencyRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetFunctionConcurrencyRequest);
// Type: Amazon.Lambda.Model::GetFunctionConcurrencyRequest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetFunctionConcurrencyRequest*
class CORDL_TYPE GetFunctionConcurrencyRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Method IsSetFunctionName, addr 0x2bca8a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  static inline ::Amazon::Lambda::Model::GetFunctionConcurrencyRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  /// @brief Method .ctor, addr 0x2bca8b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bca898, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method set_FunctionName, addr 0x2bca8a0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFunctionConcurrencyRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionConcurrencyRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFunctionConcurrencyRequest(GetFunctionConcurrencyRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionConcurrencyRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFunctionConcurrencyRequest(GetFunctionConcurrencyRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetFunctionConcurrencyRequest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionConcurrencyRequest, ____functionName) == 0x38, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetFunctionConcurrencyRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetFunctionConcurrencyRequest*, "Amazon.Lambda.Model", "GetFunctionConcurrencyRequest");
