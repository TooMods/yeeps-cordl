#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RetryPolicy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardRetryPolicy)
namespace Amazon::Runtime::Internal {
class CapacityManager;
}
namespace Amazon::Runtime {
class IClientConfig;
}
namespace Amazon::Runtime {
class IExecutionContext;
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
namespace System {
class Random;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class StandardRetryPolicy;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::StandardRetryPolicy);
// Type: Amazon.Runtime.Internal::StandardRetryPolicy
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::StandardRetryPolicy*
class CORDL_TYPE StandardRetryPolicy : public ::Amazon::Runtime::RetryPolicy {
public:
  // Declarations
  __declspec(property(get = get_MaxBackoffInMilliseconds, put = set_MaxBackoffInMilliseconds)) int32_t MaxBackoffInMilliseconds;

  /// @brief Field <CapacityManagerInstance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__CapacityManagerInstance_k__BackingField,
                             put = setStaticF__CapacityManagerInstance_k__BackingField))::Amazon::Runtime::Internal::CapacityManager* _CapacityManagerInstance_k__BackingField;

  /// @brief Field <MaxBackoffInMilliseconds>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField,
                      put = __cordl_internal_set__MaxBackoffInMilliseconds_k__BackingField)) int32_t _MaxBackoffInMilliseconds_k__BackingField;

  /// @brief Field _randomJitter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__randomJitter, put = setStaticF__randomJitter))::System::Random* _randomJitter;

  /// @brief Method CalculateRetryDelay, addr 0x23ebb40, size 0x1cc, virtual false, abstract: false, final false
  static inline int32_t CalculateRetryDelay(int32_t retries, int32_t maxBackoffInMilliseconds);

  /// @brief Method CanRetry, addr 0x23ef1fc, size 0x190, virtual true, abstract: false, final false
  inline bool CanRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  static inline ::Amazon::Runtime::Internal::StandardRetryPolicy* New_ctor(::Amazon::Runtime::IClientConfig* config);

  static inline ::Amazon::Runtime::Internal::StandardRetryPolicy* New_ctor(int32_t maxRetries);

  /// @brief Method NotifySuccess, addr 0x23eb234, size 0x2f4, virtual true, abstract: false, final false
  inline void NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method OnRetry, addr 0x23ef39c, size 0x18, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method OnRetry, addr 0x23ef3b4, size 0x18, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity);

  /// @brief Method OnRetry, addr 0x23eaa68, size 0x30c, virtual true, abstract: false, final false
  inline bool OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError);

  /// @brief Method RetryForException, addr 0x23ef38c, size 0x10, virtual true, abstract: false, final false
  inline bool RetryForException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForExceptionAsync, addr 0x23ef6f4, size 0x94, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception);

  /// @brief Method RetryForExceptionSync, addr 0x23ef3cc, size 0x8, virtual false, abstract: false, final false
  inline bool RetryForExceptionSync(::System::Exception* exception);

  /// @brief Method RetryForExceptionSync, addr 0x23eb5bc, size 0x31c, virtual false, abstract: false, final false
  inline bool RetryForExceptionSync(::System::Exception* exception, ::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method RetryLimitReached, addr 0x23ef3d4, size 0x12c, virtual true, abstract: false, final false
  inline bool RetryLimitReached(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method WaitBeforeRetry, addr 0x23ef500, size 0x158, virtual true, abstract: false, final false
  inline void WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext);

  /// @brief Method WaitBeforeRetry, addr 0x23ef658, size 0x9c, virtual false, abstract: false, final false
  static inline void WaitBeforeRetry(int32_t retries, int32_t maxBackoffInMilliseconds);

  /// @brief Method WaitBeforeRetryAsync, addr 0x23ef788, size 0x268, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext);

  constexpr int32_t const& __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField();

  constexpr void __cordl_internal_set__MaxBackoffInMilliseconds_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x23ea59c, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config);

  /// @brief Method .ctor, addr 0x23ea474, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxRetries);

  static inline ::Amazon::Runtime::Internal::CapacityManager* getStaticF__CapacityManagerInstance_k__BackingField();

  static inline ::System::Random* getStaticF__randomJitter();

  /// @brief Method get_CapacityManagerInstance, addr 0x23ef138, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::Internal::CapacityManager* get_CapacityManagerInstance();

  /// @brief Method get_MaxBackoffInMilliseconds, addr 0x23ef1ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxBackoffInMilliseconds();

  static inline void setStaticF__CapacityManagerInstance_k__BackingField(::Amazon::Runtime::Internal::CapacityManager* value);

  static inline void setStaticF__randomJitter(::System::Random* value);

  /// @brief Method set_CapacityManagerInstance, addr 0x23ef190, size 0x5c, virtual false, abstract: false, final false
  static inline void set_CapacityManagerInstance(::Amazon::Runtime::Internal::CapacityManager* value);

  /// @brief Method set_MaxBackoffInMilliseconds, addr 0x23ef1f4, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxBackoffInMilliseconds(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardRetryPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardRetryPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardRetryPolicy(StandardRetryPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardRetryPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardRetryPolicy(StandardRetryPolicy const&) = delete;

  /// @brief Field <MaxBackoffInMilliseconds>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____MaxBackoffInMilliseconds_k__BackingField;

  /// @brief Field INVALID_ENDPOINT_EXCEPTION_STATUSCODE offset 0xffffffff size 0x4
  static constexpr int32_t INVALID_ENDPOINT_EXCEPTION_STATUSCODE{ static_cast<int32_t>(0x1a5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::StandardRetryPolicy, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StandardRetryPolicy, ____MaxBackoffInMilliseconds_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::StandardRetryPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::StandardRetryPolicy*, "Amazon.Runtime.Internal", "StandardRetryPolicy");
