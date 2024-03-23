#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetFunctionConfigurationRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetFunctionConfigurationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetFunctionConfigurationRequest);
// Type: Amazon.Lambda.Model::GetFunctionConfigurationRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetFunctionConfigurationRequest*
class CORDL_TYPE GetFunctionConfigurationRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _qualifier, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Method IsSetFunctionName, addr 0x2bca9b8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetQualifier, addr 0x2bca9d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  static inline ::Amazon::Lambda::Model::GetFunctionConfigurationRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  /// @brief Method .ctor, addr 0x2bbc3ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bca9a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Qualifier, addr 0x2bca9c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method set_FunctionName, addr 0x2bca9b0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Qualifier, addr 0x2bca9d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFunctionConfigurationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionConfigurationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFunctionConfigurationRequest(GetFunctionConfigurationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionConfigurationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFunctionConfigurationRequest(GetFunctionConfigurationRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _qualifier, offset: 0x40, size: 0x8, def value: None
  ::StringW ____qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetFunctionConfigurationRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionConfigurationRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionConfigurationRequest, ____qualifier) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetFunctionConfigurationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetFunctionConfigurationRequest*, "Amazon.Lambda.Model", "GetFunctionConfigurationRequest");
