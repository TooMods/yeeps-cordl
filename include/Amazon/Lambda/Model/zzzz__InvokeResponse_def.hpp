#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvokeResponse)
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class InvokeResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::InvokeResponse);
// Type: Amazon.Lambda.Model::InvokeResponse
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::InvokeResponse*
class CORDL_TYPE InvokeResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_ExecutedVersion, put = set_ExecutedVersion))::StringW ExecutedVersion;

  __declspec(property(get = get_FunctionError, put = set_FunctionError))::StringW FunctionError;

  __declspec(property(get = get_LogResult, put = set_LogResult))::StringW LogResult;

  __declspec(property(get = get_Payload, put = set_Payload))::System::IO::MemoryStream* Payload;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  /// @brief Field _executedVersion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__executedVersion, put = __cordl_internal_set__executedVersion))::StringW _executedVersion;

  /// @brief Field _functionError, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__functionError, put = __cordl_internal_set__functionError))::StringW _functionError;

  /// @brief Field _logResult, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__logResult, put = __cordl_internal_set__logResult))::StringW _logResult;

  /// @brief Field _payload, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__payload, put = __cordl_internal_set__payload))::System::IO::MemoryStream* _payload;

  /// @brief Field _statusCode, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__statusCode, put = __cordl_internal_set__statusCode))::System::Nullable_1<int32_t> _statusCode;

  /// @brief Method IsSetExecutedVersion, addr 0x2bcc9f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetExecutedVersion();

  /// @brief Method IsSetFunctionError, addr 0x2bcca10, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionError();

  /// @brief Method IsSetLogResult, addr 0x2bcca30, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLogResult();

  /// @brief Method IsSetPayload, addr 0x2bcca50, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPayload();

  /// @brief Method IsSetStatusCode, addr 0x2bccb04, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetStatusCode();

  static inline ::Amazon::Lambda::Model::InvokeResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__executedVersion() const;

  constexpr ::StringW& __cordl_internal_get__executedVersion();

  constexpr ::StringW const& __cordl_internal_get__functionError() const;

  constexpr ::StringW& __cordl_internal_get__functionError();

  constexpr ::StringW const& __cordl_internal_get__logResult() const;

  constexpr ::StringW& __cordl_internal_get__logResult();

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get__payload();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__payload() const;

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__statusCode() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__statusCode();

  constexpr void __cordl_internal_set__executedVersion(::StringW value);

  constexpr void __cordl_internal_set__functionError(::StringW value);

  constexpr void __cordl_internal_set__logResult(::StringW value);

  constexpr void __cordl_internal_set__payload(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set__statusCode(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bccb40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExecutedVersion, addr 0x2bcc9e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ExecutedVersion();

  /// @brief Method get_FunctionError, addr 0x2bcca00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionError();

  /// @brief Method get_LogResult, addr 0x2bcca20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LogResult();

  /// @brief Method get_Payload, addr 0x2bcca40, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* get_Payload();

  /// @brief Method get_StatusCode, addr 0x2bcca60, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_StatusCode();

  /// @brief Method set_ExecutedVersion, addr 0x2bcc9e8, size 0x8, virtual false, abstract: false, final false
  inline void set_ExecutedVersion(::StringW value);

  /// @brief Method set_FunctionError, addr 0x2bcca08, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionError(::StringW value);

  /// @brief Method set_LogResult, addr 0x2bcca28, size 0x8, virtual false, abstract: false, final false
  inline void set_LogResult(::StringW value);

  /// @brief Method set_Payload, addr 0x2bcca48, size 0x8, virtual false, abstract: false, final false
  inline void set_Payload(::System::IO::MemoryStream* value);

  /// @brief Method set_StatusCode, addr 0x2bcca9c, size 0x68, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeResponse(InvokeResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeResponse(InvokeResponse const&) = delete;

  /// @brief Field _executedVersion, offset: 0x28, size: 0x8, def value: None
  ::StringW ____executedVersion;

  /// @brief Field _functionError, offset: 0x30, size: 0x8, def value: None
  ::StringW ____functionError;

  /// @brief Field _logResult, offset: 0x38, size: 0x8, def value: None
  ::StringW ____logResult;

  /// @brief Field _payload, offset: 0x40, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____payload;

  /// @brief Field _statusCode, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____statusCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::InvokeResponse, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeResponse, ____executedVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeResponse, ____functionError) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeResponse, ____logResult) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeResponse, ____payload) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeResponse, ____statusCode) == 0x48, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::InvokeResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::InvokeResponse*, "Amazon.Lambda.Model", "InvokeResponse");
