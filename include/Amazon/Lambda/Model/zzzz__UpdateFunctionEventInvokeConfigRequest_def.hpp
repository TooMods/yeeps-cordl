#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateFunctionEventInvokeConfigRequest)
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateFunctionEventInvokeConfigRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest);
// Type: Amazon.Lambda.Model::UpdateFunctionEventInvokeConfigRequest
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateFunctionEventInvokeConfigRequest*
class CORDL_TYPE UpdateFunctionEventInvokeConfigRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_DestinationConfig, put = set_DestinationConfig))::Amazon::Lambda::Model::DestinationConfig* DestinationConfig;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_MaximumEventAgeInSeconds, put = set_MaximumEventAgeInSeconds)) int32_t MaximumEventAgeInSeconds;

  __declspec(property(get = get_MaximumRetryAttempts, put = set_MaximumRetryAttempts)) int32_t MaximumRetryAttempts;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  /// @brief Field _destinationConfig, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationConfig, put = __cordl_internal_set__destinationConfig))::Amazon::Lambda::Model::DestinationConfig* _destinationConfig;

  /// @brief Field _functionName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _maximumEventAgeInSeconds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumEventAgeInSeconds, put = __cordl_internal_set__maximumEventAgeInSeconds))::System::Nullable_1<int32_t> _maximumEventAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRetryAttempts, put = __cordl_internal_set__maximumRetryAttempts))::System::Nullable_1<int32_t> _maximumRetryAttempts;

  /// @brief Field _qualifier, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Method IsSetDestinationConfig, addr 0x310c8e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetFunctionName, addr 0x310c900, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetMaximumEventAgeInSeconds, addr 0x310c9b4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumEventAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x310ca94, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  /// @brief Method IsSetQualifier, addr 0x310cae0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  static inline ::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest* New_ctor();

  constexpr ::Amazon::Lambda::Model::DestinationConfig*& __cordl_internal_get__destinationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DestinationConfig*> const& __cordl_internal_get__destinationConfig() const;

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumEventAgeInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumEventAgeInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRetryAttempts() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRetryAttempts();

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr void __cordl_internal_set__destinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__maximumEventAgeInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRetryAttempts(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  /// @brief Method .ctor, addr 0x310caf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationConfig, addr 0x310c8d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_FunctionName, addr 0x310c8f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_MaximumEventAgeInSeconds, addr 0x310c910, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumEventAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x310c9f0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method get_Qualifier, addr 0x310cad0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method set_DestinationConfig, addr 0x310c8d8, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_FunctionName, addr 0x310c8f8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_MaximumEventAgeInSeconds, addr 0x310c94c, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumEventAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x310ca2c, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

  /// @brief Method set_Qualifier, addr 0x310cad8, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateFunctionEventInvokeConfigRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionEventInvokeConfigRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateFunctionEventInvokeConfigRequest(UpdateFunctionEventInvokeConfigRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionEventInvokeConfigRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateFunctionEventInvokeConfigRequest(UpdateFunctionEventInvokeConfigRequest const&) = delete;

  /// @brief Field _destinationConfig, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DestinationConfig* ____destinationConfig;

  /// @brief Field _functionName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _maximumEventAgeInSeconds, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumEventAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRetryAttempts;

  /// @brief Field _qualifier, offset: 0x58, size: 0x8, def value: None
  ::StringW ____qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, ____destinationConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, ____functionName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, ____maximumEventAgeInSeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, ____maximumRetryAttempts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest, ____qualifier) == 0x58, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigRequest*, "Amazon.Lambda.Model", "UpdateFunctionEventInvokeConfigRequest");
