#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetFunctionEventInvokeConfigResponse)
namespace Amazon::Lambda::Model {
class DestinationConfig;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetFunctionEventInvokeConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse);
// Type: Amazon.Lambda.Model::GetFunctionEventInvokeConfigResponse
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetFunctionEventInvokeConfigResponse*
class CORDL_TYPE GetFunctionEventInvokeConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
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

  /// @brief Method IsSetDestinationConfig, addr 0x2bcb390, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationConfig();

  /// @brief Method IsSetFunctionArn, addr 0x2bcb3b0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetLastModified, addr 0x2bcb46c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetMaximumEventAgeInSeconds, addr 0x2bcb54c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumEventAgeInSeconds();

  /// @brief Method IsSetMaximumRetryAttempts, addr 0x2bcb62c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaximumRetryAttempts();

  static inline ::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse* New_ctor();

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

  /// @brief Method .ctor, addr 0x2bcb668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationConfig, addr 0x2bcb380, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::DestinationConfig* get_DestinationConfig();

  /// @brief Method get_FunctionArn, addr 0x2bcb3a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_LastModified, addr 0x2bcb3c0, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_LastModified();

  /// @brief Method get_MaximumEventAgeInSeconds, addr 0x2bcb4a8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumEventAgeInSeconds();

  /// @brief Method get_MaximumRetryAttempts, addr 0x2bcb588, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaximumRetryAttempts();

  /// @brief Method set_DestinationConfig, addr 0x2bcb388, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationConfig(::Amazon::Lambda::Model::DestinationConfig* value);

  /// @brief Method set_FunctionArn, addr 0x2bcb3a8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_LastModified, addr 0x2bcb3fc, size 0x70, virtual false, abstract: false, final false
  inline void set_LastModified(::System::DateTime value);

  /// @brief Method set_MaximumEventAgeInSeconds, addr 0x2bcb4e4, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumEventAgeInSeconds(int32_t value);

  /// @brief Method set_MaximumRetryAttempts, addr 0x2bcb5c4, size 0x68, virtual false, abstract: false, final false
  inline void set_MaximumRetryAttempts(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFunctionEventInvokeConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionEventInvokeConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFunctionEventInvokeConfigResponse(GetFunctionEventInvokeConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionEventInvokeConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFunctionEventInvokeConfigResponse(GetFunctionEventInvokeConfigResponse const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, ____destinationConfig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, ____functionArn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, ____lastModified) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, ____maximumEventAgeInSeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse, ____maximumRetryAttempts) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetFunctionEventInvokeConfigResponse*, "Amazon.Lambda.Model", "GetFunctionEventInvokeConfigResponse");
