#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PutProvisionedConcurrencyConfigRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class PutProvisionedConcurrencyConfigRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest);
// Type: Amazon.Lambda.Model::PutProvisionedConcurrencyConfigRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PutProvisionedConcurrencyConfigRequest*
class CORDL_TYPE PutProvisionedConcurrencyConfigRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_ProvisionedConcurrentExecutions, put = set_ProvisionedConcurrentExecutions)) int32_t ProvisionedConcurrentExecutions;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _provisionedConcurrentExecutions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__provisionedConcurrentExecutions,
                      put = __cordl_internal_set__provisionedConcurrentExecutions))::System::Nullable_1<int32_t> _provisionedConcurrentExecutions;

  /// @brief Field _qualifier, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Method IsSetFunctionName, addr 0x31088c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetProvisionedConcurrentExecutions, addr 0x310897c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetProvisionedConcurrentExecutions();

  /// @brief Method IsSetQualifier, addr 0x31089c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  static inline ::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__provisionedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__provisionedConcurrentExecutions();

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__provisionedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  /// @brief Method .ctor, addr 0x31089d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x31088b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_ProvisionedConcurrentExecutions, addr 0x31088d8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ProvisionedConcurrentExecutions();

  /// @brief Method get_Qualifier, addr 0x31089b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method set_FunctionName, addr 0x31088c0, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_ProvisionedConcurrentExecutions, addr 0x3108914, size 0x68, virtual false, abstract: false, final false
  inline void set_ProvisionedConcurrentExecutions(int32_t value);

  /// @brief Method set_Qualifier, addr 0x31089c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutProvisionedConcurrencyConfigRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutProvisionedConcurrencyConfigRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutProvisionedConcurrencyConfigRequest(PutProvisionedConcurrencyConfigRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutProvisionedConcurrencyConfigRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutProvisionedConcurrencyConfigRequest(PutProvisionedConcurrencyConfigRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _provisionedConcurrentExecutions, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____provisionedConcurrentExecutions;

  /// @brief Field _qualifier, offset: 0x48, size: 0x8, def value: None
  ::StringW ____qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest, ____provisionedConcurrentExecutions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest, ____qualifier) == 0x48, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PutProvisionedConcurrencyConfigRequest*, "Amazon.Lambda.Model", "PutProvisionedConcurrencyConfigRequest");
