#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SynchronizationContextTaskScheduler)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __SynchronizationContextTaskScheduler____c;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextTaskScheduler;
}
namespace System::Threading::Tasks {
class __SynchronizationContextTaskScheduler____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextTaskScheduler);
MARK_REF_PTR_T(::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::SynchronizationContextTaskScheduler::<>c*
class CORDL_TYPE __SynchronizationContextTaskScheduler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* __9;

  static inline ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* New_ctor();

  /// @brief Method <.cctor>b__8_0, addr 0xedeff4, size 0x84, virtual false, abstract: false, final false
  inline void __cctor_b__8_0(::System::Object* s);

  /// @brief Method .ctor, addr 0xedefec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SynchronizationContextTaskScheduler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextTaskScheduler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SynchronizationContextTaskScheduler____c(__SynchronizationContextTaskScheduler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextTaskScheduler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SynchronizationContextTaskScheduler____c(__SynchronizationContextTaskScheduler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::SynchronizationContextTaskScheduler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::SynchronizationContextTaskScheduler*
class CORDL_TYPE SynchronizationContextTaskScheduler : public ::System::Threading::Tasks::TaskScheduler {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c;

  /// @brief Field m_synchronizationContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_synchronizationContext, put = __cordl_internal_set_m_synchronizationContext))::System::Threading::SynchronizationContext* m_synchronizationContext;

  /// @brief Field s_postCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_postCallback, put = setStaticF_s_postCallback))::System::Threading::SendOrPostCallback* s_postCallback;

  static inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler* New_ctor();

  /// @brief Method QueueTask, addr 0xededf8, size 0x84, virtual true, abstract: false, final false
  inline void QueueTask(::System::Threading::Tasks::Task* task);

  /// @brief Method TryExecuteTaskInline, addr 0xedee7c, size 0x48, virtual true, abstract: false, final false
  inline bool TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_m_synchronizationContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __cordl_internal_get_m_synchronizationContext() const;

  constexpr void __cordl_internal_set_m_synchronizationContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0xedebc4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::SendOrPostCallback* getStaticF_s_postCallback();

  static inline void setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContextTaskScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContextTaskScheduler(SynchronizationContextTaskScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContextTaskScheduler(SynchronizationContextTaskScheduler const&) = delete;

  /// @brief Field m_synchronizationContext, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ___m_synchronizationContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextTaskScheduler, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::SynchronizationContextTaskScheduler, ___m_synchronizationContext) == 0x18, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextTaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextTaskScheduler*, "System.Threading.Tasks", "SynchronizationContextTaskScheduler");
NEED_NO_BOX(::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__SynchronizationContextTaskScheduler____c*, "System.Threading.Tasks", "SynchronizationContextTaskScheduler/<>c");
