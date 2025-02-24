#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TaskAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class __TaskAwaiter____c__DisplayClass11_0;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class __TaskAwaiter____c__DisplayClass11_0;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0);
MARK_VAL_T(::System::Runtime::CompilerServices::TaskAwaiter);
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::TaskAwaiter::<>c__DisplayClass11_0*
class CORDL_TYPE __TaskAwaiter____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field continuation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_continuation, put = __cordl_internal_set_continuation))::System::Action* continuation;

  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task))::System::Threading::Tasks::Task* task;

  static inline ::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0* New_ctor();

  /// @brief Method <OutputWaitEtwEvents>b__0, addr 0x1b45650, size 0x174, virtual false, abstract: false, final false
  inline void _OutputWaitEtwEvents_b__0();

  constexpr ::System::Action*& __cordl_internal_get_continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_continuation() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_task() const;

  constexpr void __cordl_internal_set_continuation(::System::Action* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x1b45648, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskAwaiter____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskAwaiter____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskAwaiter____c__DisplayClass11_0(__TaskAwaiter____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskAwaiter____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskAwaiter____c__DisplayClass11_0(__TaskAwaiter____c__DisplayClass11_0 const&) = delete;

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___task;

  /// @brief Field continuation, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___continuation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0, ___continuation) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::TaskAwaiter
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::TaskAwaiter
struct CORDL_TYPE TaskAwaiter {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x1b45264, size 0x8, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method HandleNonSuccessAndDebuggerNotification, addr 0x1b452b8, size 0x60, virtual false, abstract: false, final false
  static inline void HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task* task);

  /// @brief Method OnCompleted, addr 0x1b44e3c, size 0x10, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method OnCompletedInternal, addr 0x1b451b0, size 0xb4, virtual false, abstract: false, final false
  static inline void OnCompletedInternal(::System::Threading::Tasks::Task* task, ::System::Action* continuation, bool continueOnCapturedContext, bool flowExecutionContext);

  /// @brief Method OutputWaitEtwEvents, addr 0x1b4546c, size 0x1dc, virtual false, abstract: false, final false
  static inline ::System::Action* OutputWaitEtwEvents(::System::Threading::Tasks::Task* task, ::System::Action* continuation);

  /// @brief Method ThrowForNonSuccess, addr 0x1b45318, size 0x154, virtual false, abstract: false, final false
  static inline void ThrowForNonSuccess(::System::Threading::Tasks::Task* task);

  /// @brief Method UnsafeOnCompleted, addr 0x1b44fd8, size 0x10, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method ValidateEnd, addr 0x1b4526c, size 0x4c, virtual false, abstract: false, final false
  static inline void ValidateEnd(::System::Threading::Tasks::Task* task);

  /// @brief Method .ctor, addr 0x1b4518c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method get_IsCompleted, addr 0x1b45194, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAwaiter();

  // Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }]
  constexpr TaskAwaiter(::System::Threading::Tasks::Task* m_task) noexcept;

  /// @brief Field m_task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TaskAwaiter, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::TaskAwaiter, m_task) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__TaskAwaiter____c__DisplayClass11_0*, "System.Runtime.CompilerServices", "TaskAwaiter/<>c__DisplayClass11_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TaskAwaiter, "System.Runtime.CompilerServices", "TaskAwaiter");
