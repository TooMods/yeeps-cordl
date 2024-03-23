#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RetryPolicy)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
namespace Amazon::Runtime::Internal {
class RetryCapacity;
}
namespace Amazon::Runtime {
class AmazonServiceException;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace Amazon::Runtime {
struct __RetryPolicy___RetryAsync_d__59;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime {
class RetryPolicy;
}
namespace Amazon::Runtime {
struct __RetryPolicy___RetryAsync_d__59;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::RetryPolicy);
MARK_VAL_T(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59);
// Type: ::<RetryAsync>d__59
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: true
// CS Name: ::RetryPolicy::<RetryAsync>d__59
struct CORDL_TYPE __RetryPolicy___RetryAsync_d__59 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x201fd4c, size 0x4c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2020210, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RetryPolicy___RetryAsync_d__59();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::RetryPolicy*", modifiers: "",
  // def_value: None }, CppParam { name: "executionContext", ty: "::Amazon::Runtime::IExecutionContext*", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception*",
  // modifiers: "", def_value: None }, CppParam { name: "_canRetry_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isClockSkewError_5__3", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __RetryPolicy___RetryAsync_d__59(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Amazon::Runtime::RetryPolicy* __4__this,
                                             ::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception, bool _canRetry_5__2, bool _isClockSkewError_5__3,
                                             ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::RetryPolicy* __4__this;

  /// @brief Field executionContext, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::IExecutionContext* executionContext;

  /// @brief Field exception, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* exception;

  /// @brief Field <canRetry>5__2, offset: 0x38, size: 0x1, def value: None
  bool _canRetry_5__2;

  /// @brief Field <isClockSkewError>5__3, offset: 0x39, size: 0x1, def value: None
  bool _isClockSkewError_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, executionContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, exception) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, _canRetry_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, _isClockSkewError_5__3) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
// Type: Amazon.Runtime::RetryPolicy
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::RetryPolicy*
class CORDL_TYPE RetryPolicy : public ::System::Object {
public:
  // Declarations
  using _RetryAsync_d__59 = ::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59;

  __declspec(property(get = get_ErrorCodesToRetryOn, put = set_ErrorCodesToRetryOn))::System::Collections::Generic::ICollection_1<::StringW>* ErrorCodesToRetryOn;

  __declspec(property(get = get_HttpStatusCodesToRetryOn, put = set_HttpStatusCodesToRetryOn))::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* HttpStatusCodesToRetryOn;

  __declspec(property(get = get_Logger, put = set_Logger))::Amazon::Runtime::Internal::Util::ILogger* Logger;

  __declspec(property(get = get_MaxRetries, put = set_MaxRetries)) int32_t MaxRetries;

  __declspec(property(get = get_RetryCapacity, put = set_RetryCapacity))::Amazon::Runtime::Internal::RetryCapacity* RetryCapacity;

  __declspec(property(get = get_ThrottlingErrorCodes, put = set_ThrottlingErrorCodes))::System::Collections::Generic::ICollection_1<::StringW>* ThrottlingErrorCodes;

  __declspec(property(get = get_TimeoutErrorCodesToRetryOn, put = set_TimeoutErrorCodesToRetryOn))::System::Collections::Generic::ICollection_1<::StringW>* TimeoutErrorCodesToRetryOn;

  __declspec(property(get = get_WebExceptionStatusesToRetryOn,
                      put = set_WebExceptionStatusesToRetryOn))::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* WebExceptionStatusesToRetryOn;

  /// @brief Field <ErrorCodesToRetryOn>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ErrorCodesToRetryOn_k__BackingField,
                      put = __cordl_internal_set__ErrorCodesToRetryOn_k__BackingField))::System::Collections::Generic::ICollection_1<::StringW>* _ErrorCodesToRetryOn_k__BackingField;

  /// @brief Field <HttpStatusCodesToRetryOn>k__BackingField, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__HttpStatusCodesToRetryOn_k__BackingField,
      put = __cordl_internal_set__HttpStatusCodesToRetryOn_k__BackingField))::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* _HttpStatusCodesToRetryOn_k__BackingField;

  /// @brief Field <Logger>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Logger_k__BackingField, put = __cordl_internal_set__Logger_k__BackingField))::Amazon::Runtime::Internal::Util::ILogger* _Logger_k__BackingField;

  /// @brief Field <MaxRetries>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxRetries_k__BackingField, put = __cordl_internal_set__MaxRetries_k__BackingField)) int32_t _MaxRetries_k__BackingField;

  /// @brief Field <RetryCapacity>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__RetryCapacity_k__BackingField,
                      put = __cordl_internal_set__RetryCapacity_k__BackingField))::Amazon::Runtime::Internal::RetryCapacity* _RetryCapacity_k__BackingField;

  /// @brief Field <ThrottlingErrorCodes>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ThrottlingErrorCodes_k__BackingField,
                      put = __cordl_internal_set__ThrottlingErrorCodes_k__BackingField))::System::Collections::Generic::ICollection_1<::StringW>* _ThrottlingErrorCodes_k__BackingField;

  /// @brief Field <TimeoutErrorCodesToRetryOn>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__TimeoutErrorCodesToRetryOn_k__BackingField,
                      put = __cordl_internal_set__TimeoutErrorCodesToRetryOn_k__BackingField))::System::Collections::Generic::ICollection_1<::StringW>* _TimeoutErrorCodesToRetryOn_k__BackingField;

  /// @brief Field <WebExceptionStatusesToRetryOn>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__WebExceptionStatusesToRetryOn_k__BackingField, put = __cordl_internal_set__WebExceptionStatusesToRetryOn_k__BackingField))::System::Collections::
      Generic::ICollection_1<::System::Net::WebExceptionStatus>* _WebExceptionStatusesToRetryOn_k__BackingField;

  /// @brief Field clockSkewErrorCodes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clockSkewErrorCodes, put = setStaticF_clockSkewErrorCodes))::System::Collections::Generic::HashSet_1<::StringW>* clockSkewErrorCodes;

  /// @brief Field clockSkewMaxThreshold, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clockSkewMaxThreshold, put = setStaticF_clockSkewMaxThreshold))::System::TimeSpan clockSkewMaxThreshold;

  /// @brief Method CanRetry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CanRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ContainErrorMessage, addr 0x201f3a8, size 0xb4, virtual false, abstract: false, final false
  static inline bool ContainErrorMessage(::System::Exception* exception, ::System::Collections::Generic::HashSet_1<::StringW>* errorMessages);

  /// @brief Method GetWebData, addr 0x201f31c, size 0x8c, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* GetWebData(::Amazon::Runtime::AmazonServiceException* ase);

  /// @brief Method IsClockskew, addr 0x201db28, size 0xbf8, virtual false, abstract: false, final false
  inline bool IsClockskew(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method IsServiceTimeoutError, addr 0x201ee84, size 0xfc, virtual true, abstract: false, final false
  inline bool IsServiceTimeoutError(::System::Exception* exception);

  /// @brief Method IsThrottlingError, addr 0x201e748, size 0x1ac, virtual true, abstract: false, final false
  inline bool IsThrottlingError(::System::Exception* exception);

  /// @brief Method IsTransientError, addr 0x201e8f4, size 0x4b0, virtual true, abstract: false, final false
  inline bool IsTransientError(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method IsTransientSslError, addr 0x201eda4, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsTransientSslError(::System::Exception* exception);

  static inline ::Amazon::Runtime::RetryPolicy* New_ctor();

  /// @brief Method NotifySuccess, addr 0x201e720, size 0x4, virtual true, abstract: false, final false
  inline void NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ObtainSendToken, addr 0x201e744, size 0x4, virtual true, abstract: false, final false
  inline void ObtainSendToken(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method ObtainSendTokenAsync, addr 0x201f598, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ObtainSendTokenAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method OnRetry, addr 0x201e724, size 0x8, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method OnRetry, addr 0x201e72c, size 0x8, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity);

  /// @brief Method OnRetry, addr 0x201e734, size 0x10, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError);

  /// @brief Method Retry, addr 0x201d774, size 0x3b4, virtual false, abstract: false, final false
  inline bool Retry(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryAsync, addr 0x201f45c, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RetryAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RetryForException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForExceptionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryLimitReached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RetryLimitReached(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method TryParseDateHeader, addr 0x201ef80, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryParseDateHeader(::Amazon::Runtime::AmazonServiceException* ase, ByRef<::System::DateTime> serverTime);

  /// @brief Method TryParseExceptionMessage, addr 0x201f144, size 0x1d8, virtual false, abstract: false, final false
  static inline bool TryParseExceptionMessage(::Amazon::Runtime::AmazonServiceException* ase, ByRef<::System::DateTime> serverTime);

  /// @brief Method WaitBeforeRetry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method WaitBeforeRetryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get__ErrorCodesToRetryOn_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const& __cordl_internal_get__ErrorCodesToRetryOn_k__BackingField() const;

  constexpr ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*& __cordl_internal_get__HttpStatusCodesToRetryOn_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>*> const&
  __cordl_internal_get__HttpStatusCodesToRetryOn_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::Util::ILogger*& __cordl_internal_get__Logger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::ILogger*> const& __cordl_internal_get__Logger_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__MaxRetries_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxRetries_k__BackingField();

  constexpr ::Amazon::Runtime::Internal::RetryCapacity*& __cordl_internal_get__RetryCapacity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::RetryCapacity*> const& __cordl_internal_get__RetryCapacity_k__BackingField() const;

  constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get__ThrottlingErrorCodes_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const& __cordl_internal_get__ThrottlingErrorCodes_k__BackingField() const;

  constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get__TimeoutErrorCodesToRetryOn_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::StringW>*> const& __cordl_internal_get__TimeoutErrorCodesToRetryOn_k__BackingField() const;

  constexpr ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*& __cordl_internal_get__WebExceptionStatusesToRetryOn_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>*> const&
  __cordl_internal_get__WebExceptionStatusesToRetryOn_k__BackingField() const;

  constexpr void __cordl_internal_set__ErrorCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value);

  constexpr void __cordl_internal_set__HttpStatusCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* value);

  constexpr void __cordl_internal_set__Logger_k__BackingField(::Amazon::Runtime::Internal::Util::ILogger* value);

  constexpr void __cordl_internal_set__MaxRetries_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__RetryCapacity_k__BackingField(::Amazon::Runtime::Internal::RetryCapacity* value);

  constexpr void __cordl_internal_set__ThrottlingErrorCodes_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value);

  constexpr void __cordl_internal_set__TimeoutErrorCodesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::StringW>* value);

  constexpr void __cordl_internal_set__WebExceptionStatusesToRetryOn_k__BackingField(::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* value);

  /// @brief Method .ctor, addr 0x201f620, size 0x4e4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_clockSkewErrorCodes();

  static inline ::System::TimeSpan getStaticF_clockSkewMaxThreshold();

  /// @brief Method get_ErrorCodesToRetryOn, addr 0x201d734, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_ErrorCodesToRetryOn();

  /// @brief Method get_HttpStatusCodesToRetryOn, addr 0x201d744, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* get_HttpStatusCodesToRetryOn();

  /// @brief Method get_Logger, addr 0x201d704, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::ILogger* get_Logger();

  /// @brief Method get_MaxRetries, addr 0x201d6f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxRetries();

  /// @brief Method get_RetryCapacity, addr 0x201d764, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::RetryCapacity* get_RetryCapacity();

  /// @brief Method get_ThrottlingErrorCodes, addr 0x201d714, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_ThrottlingErrorCodes();

  /// @brief Method get_TimeoutErrorCodesToRetryOn, addr 0x201d724, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_TimeoutErrorCodesToRetryOn();

  /// @brief Method get_WebExceptionStatusesToRetryOn, addr 0x201d754, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* get_WebExceptionStatusesToRetryOn();

  static inline void setStaticF_clockSkewErrorCodes(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline void setStaticF_clockSkewMaxThreshold(::System::TimeSpan value);

  /// @brief Method set_ErrorCodesToRetryOn, addr 0x201d73c, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCodesToRetryOn(::System::Collections::Generic::ICollection_1<::StringW>* value);

  /// @brief Method set_HttpStatusCodesToRetryOn, addr 0x201d74c, size 0x8, virtual false, abstract: false, final false
  inline void set_HttpStatusCodesToRetryOn(::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* value);

  /// @brief Method set_Logger, addr 0x201d70c, size 0x8, virtual false, abstract: false, final false
  inline void set_Logger(::Amazon::Runtime::Internal::Util::ILogger* value);

  /// @brief Method set_MaxRetries, addr 0x201d6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxRetries(int32_t value);

  /// @brief Method set_RetryCapacity, addr 0x201d76c, size 0x8, virtual false, abstract: false, final false
  inline void set_RetryCapacity(::Amazon::Runtime::Internal::RetryCapacity* value);

  /// @brief Method set_ThrottlingErrorCodes, addr 0x201d71c, size 0x8, virtual true, abstract: false, final false
  inline void set_ThrottlingErrorCodes(::System::Collections::Generic::ICollection_1<::StringW>* value);

  /// @brief Method set_TimeoutErrorCodesToRetryOn, addr 0x201d72c, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeoutErrorCodesToRetryOn(::System::Collections::Generic::ICollection_1<::StringW>* value);

  /// @brief Method set_WebExceptionStatusesToRetryOn, addr 0x201d75c, size 0x8, virtual false, abstract: false, final false
  inline void set_WebExceptionStatusesToRetryOn(::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RetryPolicy(RetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RetryPolicy(RetryPolicy const&) = delete;

  /// @brief Field <MaxRetries>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____MaxRetries_k__BackingField;

  /// @brief Field <Logger>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ILogger* ____Logger_k__BackingField;

  /// @brief Field <ThrottlingErrorCodes>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<::StringW>* ____ThrottlingErrorCodes_k__BackingField;

  /// @brief Field <TimeoutErrorCodesToRetryOn>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<::StringW>* ____TimeoutErrorCodesToRetryOn_k__BackingField;

  /// @brief Field <ErrorCodesToRetryOn>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<::StringW>* ____ErrorCodesToRetryOn_k__BackingField;

  /// @brief Field <HttpStatusCodesToRetryOn>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<::System::Net::HttpStatusCode>* ____HttpStatusCodesToRetryOn_k__BackingField;

  /// @brief Field <WebExceptionStatusesToRetryOn>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<::System::Net::WebExceptionStatus>* ____WebExceptionStatusesToRetryOn_k__BackingField;

  /// @brief Field <RetryCapacity>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::RetryCapacity* ____RetryCapacity_k__BackingField;

  /// @brief Field clockSkewMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString clockSkewMessageFormat{
    u"Identified clock skew: local time = {0}, local time with correction = {1}, current clock skew correction = {2}, server time = {3}, service endpoint = {4}."
  };

  /// @brief Field clockSkewMessageMinusSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString clockSkewMessageMinusSeparator{ u" - " };

  /// @brief Field clockSkewMessageParen offset 0xffffffff size 0x8
  static constexpr ::ConstString clockSkewMessageParen{ u"(" };

  /// @brief Field clockSkewMessagePlusSeparator offset 0xffffffff size 0x8
  static constexpr ::ConstString clockSkewMessagePlusSeparator{ u" + " };

  /// @brief Field clockSkewUpdatedFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString clockSkewUpdatedFormat{ u"Setting clock skew correction: new clock skew correction = {0}, service endpoint = {1}." };

  /// @brief Field sslErrorZeroReturn offset 0xffffffff size 0x8
  static constexpr ::ConstString sslErrorZeroReturn{ u"SSL_ERROR_ZERO_RETURN" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RetryPolicy, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____MaxRetries_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____Logger_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____ThrottlingErrorCodes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____TimeoutErrorCodesToRetryOn_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____ErrorCodesToRetryOn_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____HttpStatusCodesToRetryOn_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____WebExceptionStatusesToRetryOn_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::RetryPolicy, ____RetryCapacity_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::RetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RetryPolicy*, "Amazon.Runtime", "RetryPolicy");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::__RetryPolicy___RetryAsync_d__59, "Amazon.Runtime", "RetryPolicy/<RetryAsync>d__59");
