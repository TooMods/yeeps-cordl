#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SynchronizationContextAwaitTaskContinuation)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __SynchronizationContextAwaitTaskContinuation____c;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class __SynchronizationContextAwaitTaskContinuation____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
MARK_REF_PTR_T(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::SynchronizationContextAwaitTaskContinuation::<>c*
class CORDL_TYPE __SynchronizationContextAwaitTaskContinuation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* __9;

  static inline ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* New_ctor();

  /// @brief Method <.cctor>b__7_0, addr 0xedcf24, size 0x6c, virtual false, abstract: false, final false
  inline void __cctor_b__7_0(::System::Object* state);

  /// @brief Method .ctor, addr 0xedcf1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* getStaticF___9();

  static inline void setStaticF___9(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SynchronizationContextAwaitTaskContinuation____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SynchronizationContextAwaitTaskContinuation____c(__SynchronizationContextAwaitTaskContinuation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SynchronizationContextAwaitTaskContinuation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SynchronizationContextAwaitTaskContinuation____c(__SynchronizationContextAwaitTaskContinuation____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::SynchronizationContextAwaitTaskContinuation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::SynchronizationContextAwaitTaskContinuation*
class CORDL_TYPE SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
  // Declarations
  using __c = ::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c;

  /// @brief Field m_syncContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_syncContext, put = __cordl_internal_set_m_syncContext))::System::Threading::SynchronizationContext* m_syncContext;

  /// @brief Field s_postActionCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_postActionCallback, put = setStaticF_s_postActionCallback))::System::Threading::ContextCallback* s_postActionCallback;

  /// @brief Field s_postCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_postCallback, put = setStaticF_s_postCallback))::System::Threading::SendOrPostCallback* s_postCallback;

  /// @brief Method GetPostActionCallback, addr 0xedcd2c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Threading::ContextCallback* GetPostActionCallback();

  static inline ::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation* New_ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action,
                                                                                                  bool flowExecutionContext);

  /// @brief Method PostAction, addr 0xedcc98, size 0x94, virtual false, abstract: false, final false
  static inline void PostAction(::System::Object* state);

  /// @brief Method Run, addr 0xedc930, size 0x1ec, virtual true, abstract: false, final true
  inline void Run(::System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_m_syncContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __cordl_internal_get_m_syncContext() const;

  constexpr void __cordl_internal_set_m_syncContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0xed86f8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::SynchronizationContext* context, ::System::Action* action, bool flowExecutionContext);

  static inline ::System::Threading::ContextCallback* getStaticF_s_postActionCallback();

  static inline ::System::Threading::SendOrPostCallback* getStaticF_s_postCallback();

  static inline void setStaticF_s_postActionCallback(::System::Threading::ContextCallback* value);

  static inline void setStaticF_s_postCallback(::System::Threading::SendOrPostCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContextAwaitTaskContinuation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation const&) = delete;

  /// @brief Field m_syncContext, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ___m_syncContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, ___m_syncContext) == 0x20, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__SynchronizationContextAwaitTaskContinuation____c*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
