#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICall_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonitoringAPICallEvent)
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class MonitoringAPICallEvent;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::MonitoringAPICallEvent);
// Type: Amazon.Runtime.Internal::MonitoringAPICallEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::MonitoringAPICallEvent*
class CORDL_TYPE MonitoringAPICallEvent : public ::Amazon::Runtime::Internal::MonitoringAPICall {
public:
  // Declarations
  __declspec(property(get = get_AttemptCount, put = set_AttemptCount)) int32_t AttemptCount;

  __declspec(property(get = get_FinalAWSException, put = set_FinalAWSException))::StringW FinalAWSException;

  __declspec(property(get = get_FinalAWSExceptionMessage, put = set_FinalAWSExceptionMessage))::StringW FinalAWSExceptionMessage;

  __declspec(property(get = get_FinalHttpStatusCode, put = set_FinalHttpStatusCode))::System::Nullable_1<int32_t> FinalHttpStatusCode;

  __declspec(property(get = get_FinalSdkException, put = set_FinalSdkException))::StringW FinalSdkException;

  __declspec(property(get = get_FinalSdkExceptionMessage, put = set_FinalSdkExceptionMessage))::StringW FinalSdkExceptionMessage;

  __declspec(property(get = get_IsLastExceptionRetryable, put = set_IsLastExceptionRetryable)) bool IsLastExceptionRetryable;

  __declspec(property(get = get_Latency, put = set_Latency)) int64_t Latency;

  /// @brief Field <AttemptCount>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__AttemptCount_k__BackingField, put = __cordl_internal_set__AttemptCount_k__BackingField)) int32_t _AttemptCount_k__BackingField;

  /// @brief Field <FinalAWSExceptionMessage>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__FinalAWSExceptionMessage_k__BackingField,
                      put = __cordl_internal_set__FinalAWSExceptionMessage_k__BackingField))::StringW _FinalAWSExceptionMessage_k__BackingField;

  /// @brief Field <FinalAWSException>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__FinalAWSException_k__BackingField, put = __cordl_internal_set__FinalAWSException_k__BackingField))::StringW _FinalAWSException_k__BackingField;

  /// @brief Field <FinalHttpStatusCode>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__FinalHttpStatusCode_k__BackingField,
                      put = __cordl_internal_set__FinalHttpStatusCode_k__BackingField))::System::Nullable_1<int32_t> _FinalHttpStatusCode_k__BackingField;

  /// @brief Field <FinalSdkExceptionMessage>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__FinalSdkExceptionMessage_k__BackingField,
                      put = __cordl_internal_set__FinalSdkExceptionMessage_k__BackingField))::StringW _FinalSdkExceptionMessage_k__BackingField;

  /// @brief Field <FinalSdkException>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__FinalSdkException_k__BackingField, put = __cordl_internal_set__FinalSdkException_k__BackingField))::StringW _FinalSdkException_k__BackingField;

  /// @brief Field <IsLastExceptionRetryable>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__IsLastExceptionRetryable_k__BackingField,
                      put = __cordl_internal_set__IsLastExceptionRetryable_k__BackingField)) bool _IsLastExceptionRetryable_k__BackingField;

  /// @brief Field <Latency>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Latency_k__BackingField, put = __cordl_internal_set__Latency_k__BackingField)) int64_t _Latency_k__BackingField;

  static inline ::Amazon::Runtime::Internal::MonitoringAPICallEvent* New_ctor(::Amazon::Runtime::IRequestContext* requestContext);

  constexpr int32_t const& __cordl_internal_get__AttemptCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__AttemptCount_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FinalAWSExceptionMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FinalAWSExceptionMessage_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FinalAWSException_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FinalAWSException_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__FinalHttpStatusCode_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__FinalHttpStatusCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FinalSdkExceptionMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FinalSdkExceptionMessage_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FinalSdkException_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FinalSdkException_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsLastExceptionRetryable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsLastExceptionRetryable_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__Latency_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__Latency_k__BackingField();

  constexpr void __cordl_internal_set__AttemptCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__FinalAWSExceptionMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FinalAWSException_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FinalHttpStatusCode_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__FinalSdkExceptionMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FinalSdkException_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsLastExceptionRetryable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Latency_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x23d55b8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method get_AttemptCount, addr 0x23d5638, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AttemptCount();

  /// @brief Method get_FinalAWSException, addr 0x23d568c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FinalAWSException();

  /// @brief Method get_FinalAWSExceptionMessage, addr 0x23d569c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FinalAWSExceptionMessage();

  /// @brief Method get_FinalHttpStatusCode, addr 0x23d56ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_FinalHttpStatusCode();

  /// @brief Method get_FinalSdkException, addr 0x23d567c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FinalSdkException();

  /// @brief Method get_FinalSdkExceptionMessage, addr 0x23d566c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FinalSdkExceptionMessage();

  /// @brief Method get_IsLastExceptionRetryable, addr 0x23d5658, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLastExceptionRetryable();

  /// @brief Method get_Latency, addr 0x23d5648, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Latency();

  /// @brief Method set_AttemptCount, addr 0x23d5640, size 0x8, virtual false, abstract: false, final false
  inline void set_AttemptCount(int32_t value);

  /// @brief Method set_FinalAWSException, addr 0x23d5694, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalAWSException(::StringW value);

  /// @brief Method set_FinalAWSExceptionMessage, addr 0x23d56a4, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalAWSExceptionMessage(::StringW value);

  /// @brief Method set_FinalHttpStatusCode, addr 0x23d56b4, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalHttpStatusCode(::System::Nullable_1<int32_t> value);

  /// @brief Method set_FinalSdkException, addr 0x23d5684, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalSdkException(::StringW value);

  /// @brief Method set_FinalSdkExceptionMessage, addr 0x23d5674, size 0x8, virtual false, abstract: false, final false
  inline void set_FinalSdkExceptionMessage(::StringW value);

  /// @brief Method set_IsLastExceptionRetryable, addr 0x23d5660, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLastExceptionRetryable(bool value);

  /// @brief Method set_Latency, addr 0x23d5650, size 0x8, virtual false, abstract: false, final false
  inline void set_Latency(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonitoringAPICallEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICallEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonitoringAPICallEvent(MonitoringAPICallEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICallEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonitoringAPICallEvent(MonitoringAPICallEvent const&) = delete;

  /// @brief Field <AttemptCount>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____AttemptCount_k__BackingField;

  /// @brief Field <Latency>k__BackingField, offset: 0x58, size: 0x8, def value: None
  int64_t ____Latency_k__BackingField;

  /// @brief Field <IsLastExceptionRetryable>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____IsLastExceptionRetryable_k__BackingField;

  /// @brief Field <FinalSdkExceptionMessage>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::StringW ____FinalSdkExceptionMessage_k__BackingField;

  /// @brief Field <FinalSdkException>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::StringW ____FinalSdkException_k__BackingField;

  /// @brief Field <FinalAWSException>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::StringW ____FinalAWSException_k__BackingField;

  /// @brief Field <FinalAWSExceptionMessage>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::StringW ____FinalAWSExceptionMessage_k__BackingField;

  /// @brief Field <FinalHttpStatusCode>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____FinalHttpStatusCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::MonitoringAPICallEvent, 0x90>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____AttemptCount_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____Latency_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____IsLastExceptionRetryable_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____FinalSdkExceptionMessage_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____FinalSdkException_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____FinalAWSException_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____FinalAWSExceptionMessage_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICallEvent, ____FinalHttpStatusCode_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::MonitoringAPICallEvent);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::MonitoringAPICallEvent*, "Amazon.Runtime.Internal", "MonitoringAPICallEvent");
