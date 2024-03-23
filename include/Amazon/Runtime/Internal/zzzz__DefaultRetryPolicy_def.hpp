#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RetryPolicy_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultRetryPolicy)
namespace Amazon::Runtime::Internal {
class CapacityManager;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class DefaultRetryPolicy;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::DefaultRetryPolicy);
// Type: Amazon.Runtime.Internal::DefaultRetryPolicy
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::DefaultRetryPolicy*
class CORDL_TYPE DefaultRetryPolicy : public ::Amazon::Runtime::RetryPolicy {
public:
  // Declarations
  __declspec(property(get = get_MaxBackoffInMilliseconds, put = set_MaxBackoffInMilliseconds)) int32_t MaxBackoffInMilliseconds;

  /// @brief Field <MaxBackoffInMilliseconds>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField,
                      put = __cordl_internal_set__MaxBackoffInMilliseconds_k__BackingField)) int32_t _MaxBackoffInMilliseconds_k__BackingField;

  /// @brief Field _capacityManagerInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__capacityManagerInstance, put = setStaticF__capacityManagerInstance))::Amazon::Runtime::Internal::CapacityManager* _capacityManagerInstance;

  /// @brief Field _netStandardRetryErrorMessages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__netStandardRetryErrorMessages,
                             put = setStaticF__netStandardRetryErrorMessages))::System::Collections::Generic::HashSet_1<::StringW>* _netStandardRetryErrorMessages;

  /// @brief Method CalculateRetryDelay, addr 0x23ed6b8, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t CalculateRetryDelay(int32_t retries, int32_t maxBackoffInMilliseconds);

  /// @brief Method CanRetry, addr 0x23ec908, size 0x190, virtual true, abstract: false, final false
  inline bool CanRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method ContainErrorMessage, addr 0x23ed784, size 0x90, virtual false, abstract: false, final false
  static inline bool ContainErrorMessage(::System::Exception* exception);

  /// @brief Method IsInnerException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsInnerException(::System::Exception* exception);

  /// @brief Method IsInnerException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsInnerException(::System::Exception* exception, ByRef<T> inner);

  static inline ::Amazon::Runtime::Internal::DefaultRetryPolicy* New_ctor(::Amazon::Runtime::IClientConfig* config);

  static inline ::Amazon::Runtime::Internal::DefaultRetryPolicy* New_ctor(int32_t maxRetries);

  /// @brief Method NotifySuccess, addr 0x23ed0d0, size 0x2c0, virtual true, abstract: false, final false
  inline void NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method OnRetry, addr 0x23ecdc4, size 0x18, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method OnRetry, addr 0x23ecddc, size 0x18, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity);

  /// @brief Method OnRetry, addr 0x23ecdf4, size 0x2dc, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError);

  /// @brief Method RetryForException, addr 0x23eca98, size 0x10, virtual true, abstract: false, final false
  inline bool RetryForException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForExceptionAsync, addr 0x23ed814, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForExceptionSync, addr 0x23ed390, size 0x8, virtual false, abstract: false, final false
  inline bool RetryForExceptionSync(::System::Exception* exception);

  /// @brief Method RetryForExceptionSync, addr 0x23ecaa8, size 0x31c, virtual false, abstract: false, final false
  inline bool RetryForExceptionSync(::System::Exception* exception, ::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method RetryLimitReached, addr 0x23ed398, size 0x12c, virtual true, abstract: false, final false
  inline bool RetryLimitReached(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method WaitBeforeRetry, addr 0x23ed4c4, size 0x158, virtual true, abstract: false, final false
  inline void WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method WaitBeforeRetry, addr 0x23ed61c, size 0x9c, virtual false, abstract: false, final false
  static inline void WaitBeforeRetry(int32_t retries, int32_t maxBackoffInMilliseconds);

  /// @brief Method WaitBeforeRetryAsync, addr 0x23ed8a8, size 0x268, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr int32_t const& __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField();

  constexpr void __cordl_internal_set__MaxBackoffInMilliseconds_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x23ec6fc, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method .ctor, addr 0x23ec688, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxRetries);

  static inline ::Amazon::Runtime::Internal::CapacityManager* getStaticF__capacityManagerInstance();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF__netStandardRetryErrorMessages();

  /// @brief Method get_MaxBackoffInMilliseconds, addr 0x23ec678, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxBackoffInMilliseconds();

  static inline void setStaticF__capacityManagerInstance(::Amazon::Runtime::Internal::CapacityManager* value);

  static inline void setStaticF__netStandardRetryErrorMessages(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_MaxBackoffInMilliseconds, addr 0x23ec680, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxBackoffInMilliseconds(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultRetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultRetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultRetryPolicy(DefaultRetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultRetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultRetryPolicy(DefaultRetryPolicy const&) = delete;

  /// @brief Field <MaxBackoffInMilliseconds>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____MaxBackoffInMilliseconds_k__BackingField;

  /// @brief Field INVALID_ENDPOINT_EXCEPTION_STATUSCODE offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_ENDPOINT_EXCEPTION_STATUSCODE{ static_cast<int32_t>(0x1a5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::DefaultRetryPolicy, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::DefaultRetryPolicy, ____MaxBackoffInMilliseconds_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::DefaultRetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::DefaultRetryPolicy*, "Amazon.Runtime.Internal", "DefaultRetryPolicy");
