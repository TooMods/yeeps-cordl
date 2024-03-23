#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICall_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonitoringAPICallAttempt)
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class MonitoringAPICallAttempt;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::MonitoringAPICallAttempt);
// Type: Amazon.Runtime.Internal::MonitoringAPICallAttempt
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::MonitoringAPICallAttempt*
class CORDL_TYPE MonitoringAPICallAttempt : public ::Amazon::Runtime::Internal::MonitoringAPICall {
public:
  // Declarations
  __declspec(property(get = get_AWSException, put = set_AWSException))::StringW AWSException;

  __declspec(property(get = get_AWSExceptionMessage, put = set_AWSExceptionMessage))::StringW AWSExceptionMessage;

  __declspec(property(get = get_AccessKey, put = set_AccessKey))::StringW AccessKey;

  __declspec(property(get = get_AttemptLatency, put = set_AttemptLatency)) int64_t AttemptLatency;

  __declspec(property(get = get_Fqdn, put = set_Fqdn))::StringW Fqdn;

  __declspec(property(get = get_HttpStatusCode, put = set_HttpStatusCode))::System::Nullable_1<int32_t> HttpStatusCode;

  __declspec(property(get = get_SdkException, put = set_SdkException))::StringW SdkException;

  __declspec(property(get = get_SdkExceptionMessage, put = set_SdkExceptionMessage))::StringW SdkExceptionMessage;

  __declspec(property(get = get_SessionToken, put = set_SessionToken))::StringW SessionToken;

  __declspec(property(get = get_XAmzId2, put = set_XAmzId2))::StringW XAmzId2;

  __declspec(property(get = get_XAmzRequestId, put = set_XAmzRequestId))::StringW XAmzRequestId;

  __declspec(property(get = get_XAmznRequestId, put = set_XAmznRequestId))::StringW XAmznRequestId;

  /// @brief Field <AWSExceptionMessage>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__AWSExceptionMessage_k__BackingField, put = __cordl_internal_set__AWSExceptionMessage_k__BackingField))::StringW _AWSExceptionMessage_k__BackingField;

  /// @brief Field <AWSException>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__AWSException_k__BackingField, put = __cordl_internal_set__AWSException_k__BackingField))::StringW _AWSException_k__BackingField;

  /// @brief Field <AccessKey>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessKey_k__BackingField, put = __cordl_internal_set__AccessKey_k__BackingField))::StringW _AccessKey_k__BackingField;

  /// @brief Field <AttemptLatency>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__AttemptLatency_k__BackingField, put = __cordl_internal_set__AttemptLatency_k__BackingField)) int64_t _AttemptLatency_k__BackingField;

  /// @brief Field <Fqdn>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Fqdn_k__BackingField, put = __cordl_internal_set__Fqdn_k__BackingField))::StringW _Fqdn_k__BackingField;

  /// @brief Field <HttpStatusCode>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__HttpStatusCode_k__BackingField,
                      put = __cordl_internal_set__HttpStatusCode_k__BackingField))::System::Nullable_1<int32_t> _HttpStatusCode_k__BackingField;

  /// @brief Field <SdkExceptionMessage>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__SdkExceptionMessage_k__BackingField, put = __cordl_internal_set__SdkExceptionMessage_k__BackingField))::StringW _SdkExceptionMessage_k__BackingField;

  /// @brief Field <SdkException>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__SdkException_k__BackingField, put = __cordl_internal_set__SdkException_k__BackingField))::StringW _SdkException_k__BackingField;

  /// @brief Field <SessionToken>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__SessionToken_k__BackingField, put = __cordl_internal_set__SessionToken_k__BackingField))::StringW _SessionToken_k__BackingField;

  /// @brief Field <XAmzId2>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__XAmzId2_k__BackingField, put = __cordl_internal_set__XAmzId2_k__BackingField))::StringW _XAmzId2_k__BackingField;

  /// @brief Field <XAmzRequestId>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__XAmzRequestId_k__BackingField, put = __cordl_internal_set__XAmzRequestId_k__BackingField))::StringW _XAmzRequestId_k__BackingField;

  /// @brief Field <XAmznRequestId>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__XAmznRequestId_k__BackingField, put = __cordl_internal_set__XAmznRequestId_k__BackingField))::StringW _XAmznRequestId_k__BackingField;

  static inline ::Amazon::Runtime::Internal::MonitoringAPICallAttempt* New_ctor(::Amazon::Runtime::IRequestContext* requestContext);

  constexpr ::StringW const& __cordl_internal_get__AWSExceptionMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AWSExceptionMessage_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__AWSException_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AWSException_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__AccessKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessKey_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__AttemptLatency_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__AttemptLatency_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Fqdn_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Fqdn_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__HttpStatusCode_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__HttpStatusCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SdkExceptionMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SdkExceptionMessage_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SdkException_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SdkException_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SessionToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SessionToken_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__XAmzId2_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__XAmzId2_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__XAmzRequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__XAmzRequestId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__XAmznRequestId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__XAmznRequestId_k__BackingField();

  constexpr void __cordl_internal_set__AWSExceptionMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AWSException_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AccessKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__AttemptLatency_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__Fqdn_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__HttpStatusCode_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__SdkExceptionMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SdkException_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SessionToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__XAmzId2_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__XAmzRequestId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__XAmznRequestId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x23d5474, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method get_AWSException, addr 0x23d5558, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AWSException();

  /// @brief Method get_AWSExceptionMessage, addr 0x23d5568, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AWSExceptionMessage();

  /// @brief Method get_AccessKey, addr 0x23d5518, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessKey();

  /// @brief Method get_AttemptLatency, addr 0x23d55a8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_AttemptLatency();

  /// @brief Method get_Fqdn, addr 0x23d54f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Fqdn();

  /// @brief Method get_HttpStatusCode, addr 0x23d5528, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_HttpStatusCode();

  /// @brief Method get_SdkException, addr 0x23d5548, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SdkException();

  /// @brief Method get_SdkExceptionMessage, addr 0x23d5538, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SdkExceptionMessage();

  /// @brief Method get_SessionToken, addr 0x23d5508, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SessionToken();

  /// @brief Method get_XAmzId2, addr 0x23d5598, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XAmzId2();

  /// @brief Method get_XAmzRequestId, addr 0x23d5588, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XAmzRequestId();

  /// @brief Method get_XAmznRequestId, addr 0x23d5578, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XAmznRequestId();

  /// @brief Method set_AWSException, addr 0x23d5560, size 0x8, virtual false, abstract: false, final false
  inline void set_AWSException(::StringW value);

  /// @brief Method set_AWSExceptionMessage, addr 0x23d5570, size 0x8, virtual false, abstract: false, final false
  inline void set_AWSExceptionMessage(::StringW value);

  /// @brief Method set_AccessKey, addr 0x23d5520, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessKey(::StringW value);

  /// @brief Method set_AttemptLatency, addr 0x23d55b0, size 0x8, virtual false, abstract: false, final false
  inline void set_AttemptLatency(int64_t value);

  /// @brief Method set_Fqdn, addr 0x23d5500, size 0x8, virtual false, abstract: false, final false
  inline void set_Fqdn(::StringW value);

  /// @brief Method set_HttpStatusCode, addr 0x23d5530, size 0x8, virtual false, abstract: false, final false
  inline void set_HttpStatusCode(::System::Nullable_1<int32_t> value);

  /// @brief Method set_SdkException, addr 0x23d5550, size 0x8, virtual false, abstract: false, final false
  inline void set_SdkException(::StringW value);

  /// @brief Method set_SdkExceptionMessage, addr 0x23d5540, size 0x8, virtual false, abstract: false, final false
  inline void set_SdkExceptionMessage(::StringW value);

  /// @brief Method set_SessionToken, addr 0x23d5510, size 0x8, virtual false, abstract: false, final false
  inline void set_SessionToken(::StringW value);

  /// @brief Method set_XAmzId2, addr 0x23d55a0, size 0x8, virtual false, abstract: false, final false
  inline void set_XAmzId2(::StringW value);

  /// @brief Method set_XAmzRequestId, addr 0x23d5590, size 0x8, virtual false, abstract: false, final false
  inline void set_XAmzRequestId(::StringW value);

  /// @brief Method set_XAmznRequestId, addr 0x23d5580, size 0x8, virtual false, abstract: false, final false
  inline void set_XAmznRequestId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonitoringAPICallAttempt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICallAttempt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonitoringAPICallAttempt(MonitoringAPICallAttempt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICallAttempt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonitoringAPICallAttempt(MonitoringAPICallAttempt const&) = delete;

  /// @brief Field <Fqdn>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____Fqdn_k__BackingField;

  /// @brief Field <SessionToken>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____SessionToken_k__BackingField;

  /// @brief Field <AccessKey>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____AccessKey_k__BackingField;

  /// @brief Field <HttpStatusCode>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____HttpStatusCode_k__BackingField;

  /// @brief Field <SdkExceptionMessage>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::StringW ____SdkExceptionMessage_k__BackingField;

  /// @brief Field <SdkException>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::StringW ____SdkException_k__BackingField;

  /// @brief Field <AWSException>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____AWSException_k__BackingField;

  /// @brief Field <AWSExceptionMessage>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::StringW ____AWSExceptionMessage_k__BackingField;

  /// @brief Field <XAmznRequestId>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____XAmznRequestId_k__BackingField;

  /// @brief Field <XAmzRequestId>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____XAmzRequestId_k__BackingField;

  /// @brief Field <XAmzId2>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::StringW ____XAmzId2_k__BackingField;

  /// @brief Field <AttemptLatency>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  int64_t ____AttemptLatency_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::MonitoringAPICallAttempt, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____Fqdn_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____SessionToken_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____AccessKey_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____HttpStatusCode_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____SdkExceptionMessage_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____SdkException_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____AWSException_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____AWSExceptionMessage_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____XAmznRequestId_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____XAmzRequestId_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____XAmzId2_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallAttempt, ____AttemptLatency_k__BackingField) == 0xa8, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::MonitoringAPICallAttempt);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::MonitoringAPICallAttempt*, "Amazon.Runtime.Internal", "MonitoringAPICallAttempt");
