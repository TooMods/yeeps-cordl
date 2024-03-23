#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateFunctionEventInvokeConfigResponse)
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class UpdateFunctionEventInvokeConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse);
// Type: Amazon.Lambda.Model::UpdateFunctionEventInvokeConfigResponse
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::UpdateFunctionEventInvokeConfigResponse*
class CORDL_TYPE UpdateFunctionEventInvokeConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_DestinationConfig, put = set_DestinationConfig))::Amazon::Lambda::Model::DestinationConfig* DestinationConfig;

  __declspec(property(get = get_FunctionArn, put = set_FunctionArn))::StringW FunctionArn;

  __declspec(property(get = get_LastModified, put = set_LastModified))::System::DateTime LastModified;

  __declspec(property(get = get_MaximumEventAgeInSeconds, put = set_MaximumEventAgeInSeconds)) int32_t MaximumEventAgeInSeconds;

  __declspec(property(get = get_MaximumRetryAttempts, put = set_MaximumRetryAttempts)) int32_t MaximumRetryAttempts;

  /// @brief Field _destinationConfig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationConfig, put = __cordl_internal_set__destinationConfig))::Amazon::Lambda::Model::DestinationConfig* _destinationConfig;

  /// @brief Field _functionArn, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArn, put = __cordl_internal_set__functionArn))::StringW _functionArn;

  /// @brief Field _lastModified, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::System::Nullable_1<::System::DateTime> _lastModified;

  /// @brief Field _maximumEventAgeInSeconds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumEventAgeInSeconds, put = __cordl_internal_set__maximumEventAgeInSeconds))::System::Nullable_1<int32_t> _maximumEventAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maximumRetryAttempts, put = __cordl_internal_set__maximumRetryAttempts))::System::Nullable_1<int32_t> _maximumRetryAttempts;

  /// @brief Method IsSetDestinationConfig, addr 0x310cb08, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetFunctionArn, addr 0x310cb28, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetLastModified, addr 0x310cbe4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetMaximumEventAgeInSeconds, addr 0x310ccc4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumEventAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x310cda4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  static inline ::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::DestinationConfig*& __cordl_internal_get__destinationConfig();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::DestinationConfig*> const& __cordl_internal_get__destinationConfig() const;

  constexpr ::StringW const& __cordl_internal_get__functionArn() const;

  constexpr ::StringW& __cordl_internal_get__functionArn();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__lastModified() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__lastModified();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumEventAgeInSeconds() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumEventAgeInSeconds();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maximumRetryAttempts() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maximumRetryAttempts();

  constexpr void __cordl_internal_set__destinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  constexpr void __cordl_internal_set__functionArn(::StringW value);

  constexpr void __cordl_internal_set__lastModified(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__maximumEventAgeInSeconds(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maximumRetryAttempts(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x310cde0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationConfig, addr 0x310caf8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_FunctionArn, addr 0x310cb18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_LastModified, addr 0x310cb38, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_MaximumEventAgeInSeconds, addr 0x310cc20, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumEventAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x310cd00, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method set_DestinationConfig, addr 0x310cb00, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_FunctionArn, addr 0x310cb20, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_LastModified, addr 0x310cb74, size 0x70, virtual false, abstract: false, final false
  inline void set_LastModified(::System::DateTime value);

  /// @brief Method set_MaximumEventAgeInSeconds, addr 0x310cc5c, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumEventAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x310cd3c, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateFunctionEventInvokeConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionEventInvokeConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UpdateFunctionEventInvokeConfigResponse(UpdateFunctionEventInvokeConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UpdateFunctionEventInvokeConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UpdateFunctionEventInvokeConfigResponse(UpdateFunctionEventInvokeConfigResponse const&) = delete;

  /// @brief Field _destinationConfig, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Lambda::Model::DestinationConfig* ____destinationConfig;

  /// @brief Field _functionArn, offset: 0x30, size: 0x8, def value: None
  ::StringW ____functionArn;

  /// @brief Field _lastModified, offset: 0x38, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____lastModified;

  /// @brief Field _maximumEventAgeInSeconds, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumEventAgeInSeconds;

  /// @brief Field _maximumRetryAttempts, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maximumRetryAttempts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, ____destinationConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, ____functionArn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, ____lastModified) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, ____maximumEventAgeInSeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse, ____maximumRetryAttempts) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::UpdateFunctionEventInvokeConfigResponse*, "Amazon.Lambda.Model", "UpdateFunctionEventInvokeConfigResponse");
