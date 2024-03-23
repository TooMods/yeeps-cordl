#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvokeRequest)
namespace Amazon::Lambda {
class InvocationType;
}
namespace Amazon::Lambda {
class LogType;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class InvokeRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::InvokeRequest);
// Type: Amazon.Lambda.Model::InvokeRequest
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::InvokeRequest*
class CORDL_TYPE InvokeRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_ClientContext, put = set_ClientContext))::StringW ClientContext;

  __declspec(property(get = get_ClientContextBase64, put = set_ClientContextBase64))::StringW ClientContextBase64;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_InvocationType, put = set_InvocationType))::Amazon::Lambda::InvocationType* InvocationType;

  __declspec(property(get = get_LogType, put = set_LogType))::Amazon::Lambda::LogType* LogType;

  __declspec(property(get = get_Payload, put = set_Payload))::StringW Payload;

  __declspec(property(get = get_PayloadStream, put = set_PayloadStream))::System::IO::MemoryStream* PayloadStream;

  __declspec(property(get = get_Qualifier, put = set_Qualifier))::StringW Qualifier;

  /// @brief Field _clientContextBase64, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clientContextBase64, put = __cordl_internal_set__clientContextBase64))::StringW _clientContextBase64;

  /// @brief Field _functionName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _invocationType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__invocationType, put = __cordl_internal_set__invocationType))::Amazon::Lambda::InvocationType* _invocationType;

  /// @brief Field _logType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__logType, put = __cordl_internal_set__logType))::Amazon::Lambda::LogType* _logType;

  /// @brief Field _payloadStream, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__payloadStream, put = __cordl_internal_set__payloadStream))::System::IO::MemoryStream* _payloadStream;

  /// @brief Field _qualifier, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__qualifier, put = __cordl_internal_set__qualifier))::StringW _qualifier;

  /// @brief Method IsSetClientContextBase64, addr 0x2bc3924, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetClientContextBase64();

  /// @brief Method IsSetFunctionName, addr 0x2bc3944, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetInvocationType, addr 0x2bc3964, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetInvocationType();

  /// @brief Method IsSetLogType, addr 0x2bc39d4, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetLogType();

  /// @brief Method IsSetPayloadStream, addr 0x2bc3a44, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetPayloadStream();

  /// @brief Method IsSetQualifier, addr 0x2bc3a64, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetQualifier();

  static inline ::Amazon::Lambda::Model::InvokeRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__clientContextBase64() const;

  constexpr ::StringW& __cordl_internal_get__clientContextBase64();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::Amazon::Lambda::InvocationType*& __cordl_internal_get__invocationType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::InvocationType*> const& __cordl_internal_get__invocationType() const;

  constexpr ::Amazon::Lambda::LogType*& __cordl_internal_get__logType();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::LogType*> const& __cordl_internal_get__logType() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get__payloadStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__payloadStream() const;

  constexpr ::StringW const& __cordl_internal_get__qualifier() const;

  constexpr ::StringW& __cordl_internal_get__qualifier();

  constexpr void __cordl_internal_set__clientContextBase64(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__invocationType(::Amazon::Lambda::InvocationType* value);

  constexpr void __cordl_internal_set__logType(::Amazon::Lambda::LogType* value);

  constexpr void __cordl_internal_set__payloadStream(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set__qualifier(::StringW value);

  /// @brief Method .ctor, addr 0x2bc3a74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ClientContext, addr 0x2bc37dc, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW get_ClientContext();

  /// @brief Method get_ClientContextBase64, addr 0x2bc3914, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientContextBase64();

  /// @brief Method get_FunctionName, addr 0x2bc3934, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_InvocationType, addr 0x2bc3954, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::InvocationType* get_InvocationType();

  /// @brief Method get_LogType, addr 0x2bc39c4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::LogType* get_LogType();

  /// @brief Method get_Payload, addr 0x2bc36c0, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_Payload();

  /// @brief Method get_PayloadStream, addr 0x2bc3a34, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* get_PayloadStream();

  /// @brief Method get_Qualifier, addr 0x2bc3a54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Qualifier();

  /// @brief Method set_ClientContext, addr 0x2bc3880, size 0x94, virtual false, abstract: false, final false
  inline void set_ClientContext(::StringW value);

  /// @brief Method set_ClientContextBase64, addr 0x2bc391c, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientContextBase64(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bc393c, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_InvocationType, addr 0x2bc395c, size 0x8, virtual false, abstract: false, final false
  inline void set_InvocationType(::Amazon::Lambda::InvocationType* value);

  /// @brief Method set_LogType, addr 0x2bc39cc, size 0x8, virtual false, abstract: false, final false
  inline void set_LogType(::Amazon::Lambda::LogType* value);

  /// @brief Method set_Payload, addr 0x2bc376c, size 0x70, virtual false, abstract: false, final false
  inline void set_Payload(::StringW value);

  /// @brief Method set_PayloadStream, addr 0x2bc3a3c, size 0x8, virtual false, abstract: false, final false
  inline void set_PayloadStream(::System::IO::MemoryStream* value);

  /// @brief Method set_Qualifier, addr 0x2bc3a5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Qualifier(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeRequest(InvokeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeRequest(InvokeRequest const&) = delete;

  /// @brief Field _clientContextBase64, offset: 0x38, size: 0x8, def value: None
  ::StringW ____clientContextBase64;

  /// @brief Field _functionName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _invocationType, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Lambda::InvocationType* ____invocationType;

  /// @brief Field _logType, offset: 0x50, size: 0x8, def value: None
  ::Amazon::Lambda::LogType* ____logType;

  /// @brief Field _payloadStream, offset: 0x58, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____payloadStream;

  /// @brief Field _qualifier, offset: 0x60, size: 0x8, def value: None
  ::StringW ____qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::InvokeRequest, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____clientContextBase64) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____functionName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____invocationType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____logType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____payloadStream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeRequest, ____qualifier) == 0x60, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::InvokeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::InvokeRequest*, "Amazon.Lambda.Model", "InvokeRequest");
