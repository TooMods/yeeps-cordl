#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_def.hpp"
CORDL_MODULE_EXPORT(TaskAsyncOperation)
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
class AsyncOperationBase;
}
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
namespace Unity::Services::Core::Internal {
class __TaskAsyncOperation____c;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class TaskAsyncOperation;
}
namespace Unity::Services::Core::Internal {
class __TaskAsyncOperation____c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::TaskAsyncOperation);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::__TaskAsyncOperation____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::TaskAsyncOperation::<>c*
class CORDL_TYPE __TaskAsyncOperation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Services::Core::Internal::__TaskAsyncOperation____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* __9__10_0;

  static inline ::Unity::Services::Core::Internal::__TaskAsyncOperation____c* New_ctor();

  /// @brief Method <.ctor>b__10_0, addr 0x266a814, size 0xa0, virtual false, abstract: false, final false
  inline void __ctor_b__10_0(::System::Threading::Tasks::Task* t, ::System::Object* state);

  /// @brief Method .ctor, addr 0x266a80c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Services::Core::Internal::__TaskAsyncOperation____c* getStaticF___9();

  static inline ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* getStaticF___9__10_0();

  static inline void setStaticF___9(::Unity::Services::Core::Internal::__TaskAsyncOperation____c* value);

  static inline void setStaticF___9__10_0(::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskAsyncOperation____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TaskAsyncOperation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskAsyncOperation____c(__TaskAsyncOperation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskAsyncOperation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskAsyncOperation____c(__TaskAsyncOperation____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__TaskAsyncOperation____c, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
// Type: Unity.Services.Core.Internal::TaskAsyncOperation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::TaskAsyncOperation*
class CORDL_TYPE TaskAsyncOperation : public ::Unity::Services::Core::Internal::AsyncOperationBase {
public:
  // Declarations
  using __c = ::Unity::Services::Core::Internal::__TaskAsyncOperation____c;

  __declspec(property(get = get_Exception))::System::Exception* Exception;

  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Field Scheduler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Scheduler, put = setStaticF_Scheduler))::System::Threading::Tasks::TaskScheduler* Scheduler;

  __declspec(property(get = get_Status))::Unity::Services::Core::Internal::AsyncOperationStatus Status;

  /// @brief Field m_Task, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Task, put = __cordl_internal_set_m_Task))::System::Threading::Tasks::Task* m_Task;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

  /// @brief Method GetAwaiter, addr 0x266a524, size 0x4, virtual true, abstract: false, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationBase* GetAwaiter();

  /// @brief Method GetResult, addr 0x266a520, size 0x4, virtual true, abstract: false, final false
  inline void GetResult();

  static inline ::Unity::Services::Core::Internal::TaskAsyncOperation* New_ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method Run, addr 0x266a70c, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Services::Core::Internal::TaskAsyncOperation* Run(::System::Action* action);

  /// @brief Method SetScheduler, addr 0x266a698, size 0x74, virtual false, abstract: false, final false
  static inline void SetScheduler();

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_Task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_m_Task() const;

  constexpr void __cordl_internal_set_m_Task(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x266a528, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  static inline ::System::Threading::Tasks::TaskScheduler* getStaticF_Scheduler();

  /// @brief Method get_Exception, addr 0x266a50c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Exception* get_Exception();

  /// @brief Method get_IsCompleted, addr 0x266a488, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method get_Status, addr 0x266a4a4, size 0x68, virtual true, abstract: false, final false
  inline ::Unity::Services::Core::Internal::AsyncOperationStatus get_Status();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

  static inline void setStaticF_Scheduler(::System::Threading::Tasks::TaskScheduler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAsyncOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskAsyncOperation(TaskAsyncOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskAsyncOperation(TaskAsyncOperation const&) = delete;

  /// @brief Field m_Task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_Task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::TaskAsyncOperation, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::TaskAsyncOperation, ___m_Task) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::TaskAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::TaskAsyncOperation*, "Unity.Services.Core.Internal", "TaskAsyncOperation");
NEED_NO_BOX(::Unity::Services::Core::Internal::__TaskAsyncOperation____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__TaskAsyncOperation____c*, "Unity.Services.Core.Internal", "TaskAsyncOperation/<>c");
