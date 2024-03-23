#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionScheduler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ITimeProvider;
}
namespace Unity::Services::Core::Scheduler::Internal {
template <typename T> class MinimumBinaryHeap_1;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ScheduledInvocation;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class ActionScheduler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::ActionScheduler);
// Type: Unity.Services.Core.Scheduler.Internal::ActionScheduler
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Scheduler.Internal::ActionScheduler*
class CORDL_TYPE ActionScheduler : public ::System::Object {
public:
  // Declarations
  /// @brief Field SchedulerLoopSystem, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_SchedulerLoopSystem, put = __cordl_internal_set_SchedulerLoopSystem))::UnityEngine::LowLevel::PlayerLoopSystem SchedulerLoopSystem;

  /// @brief Field m_ExpiredActions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExpiredActions,
                      put = __cordl_internal_set_m_ExpiredActions))::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* m_ExpiredActions;

  /// @brief Field m_IdScheduledInvocationMap, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IdScheduledInvocationMap, put = __cordl_internal_set_m_IdScheduledInvocationMap))::System::Collections::Generic::Dictionary_2<
      int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* m_IdScheduledInvocationMap;

  /// @brief Field m_Lock, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Lock, put = __cordl_internal_set_m_Lock))::System::Object* m_Lock;

  /// @brief Field m_NextId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NextId, put = __cordl_internal_set_m_NextId)) int64_t m_NextId;

  /// @brief Field m_ScheduledActions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduledActions, put = __cordl_internal_set_m_ScheduledActions))::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<
      ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* m_ScheduledActions;

  /// @brief Field m_TimeProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TimeProvider, put = __cordl_internal_set_m_TimeProvider))::Unity::Services::Core::Scheduler::Internal::ITimeProvider* m_TimeProvider;

  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Convert operator to "::Unity::Services::Core::Scheduler::Internal::IActionScheduler"
  constexpr operator ::Unity::Services::Core::Scheduler::Internal::IActionScheduler*() noexcept;

  /// @brief Method CancelAction, addr 0x1d41898, size 0x180, virtual true, abstract: false, final true
  inline void CancelAction(int64_t actionId);

  /// @brief Method ExecuteExpiredActions, addr 0x1d41a18, size 0x5bc, virtual false, abstract: false, final false
  inline void ExecuteExpiredActions();

  /// @brief Method JoinPlayerLoopSystem, addr 0x1d42054, size 0x1bc, virtual false, abstract: false, final false
  inline void JoinPlayerLoopSystem();

  static inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* New_ctor();

  static inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* New_ctor(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* timeProvider);

  /// @brief Method ScheduleAction, addr 0x1d415ac, size 0x2e4, virtual true, abstract: false, final true
  inline int64_t ScheduleAction(::System::Action* action, double_t delaySeconds);

  /// @brief Method UpdateCurrentPlayerLoopWith, addr 0x1d41fd4, size 0x80, virtual false, abstract: false, final false
  static inline void UpdateCurrentPlayerLoopWith(::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList,
                                                 ::UnityEngine::LowLevel::PlayerLoopSystem currentPlayerLoop);

  constexpr ::UnityEngine::LowLevel::PlayerLoopSystem const& __cordl_internal_get_SchedulerLoopSystem() const;

  constexpr ::UnityEngine::LowLevel::PlayerLoopSystem& __cordl_internal_get_SchedulerLoopSystem();

  constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*& __cordl_internal_get_m_ExpiredActions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
  __cordl_internal_get_m_ExpiredActions() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*& __cordl_internal_get_m_IdScheduledInvocationMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
  __cordl_internal_get_m_IdScheduledInvocationMap() const;

  constexpr ::System::Object*& __cordl_internal_get_m_Lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_m_Lock() const;

  constexpr int64_t const& __cordl_internal_get_m_NextId() const;

  constexpr int64_t& __cordl_internal_get_m_NextId();

  constexpr ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*& __cordl_internal_get_m_ScheduledActions();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*> const&
  __cordl_internal_get_m_ScheduledActions() const;

  constexpr ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*& __cordl_internal_get_m_TimeProvider();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Scheduler::Internal::ITimeProvider*> const& __cordl_internal_get_m_TimeProvider() const;

  constexpr void __cordl_internal_set_SchedulerLoopSystem(::UnityEngine::LowLevel::PlayerLoopSystem value);

  constexpr void __cordl_internal_set_m_ExpiredActions(::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value);

  constexpr void __cordl_internal_set_m_IdScheduledInvocationMap(::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value);

  constexpr void __cordl_internal_set_m_Lock(::System::Object* value);

  constexpr void __cordl_internal_set_m_NextId(int64_t value);

  constexpr void __cordl_internal_set_m_ScheduledActions(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* value);

  constexpr void __cordl_internal_set_m_TimeProvider(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* value);

  /// @brief Method .ctor, addr 0x1d412f8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d41364, size 0x240, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::Scheduler::Internal::ITimeProvider* timeProvider);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  /// @brief Convert to "::Unity::Services::Core::Scheduler::Internal::IActionScheduler"
  constexpr ::Unity::Services::Core::Scheduler::Internal::IActionScheduler* i___Unity__Services__Core__Scheduler__Internal__IActionScheduler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActionScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActionScheduler(ActionScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActionScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActionScheduler(ActionScheduler const&) = delete;

  /// @brief Field SchedulerLoopSystem, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::LowLevel::PlayerLoopSystem ___SchedulerLoopSystem;

  /// @brief Field m_TimeProvider, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Core::Scheduler::Internal::ITimeProvider* ___m_TimeProvider;

  /// @brief Field m_Lock, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___m_Lock;

  /// @brief Field m_ScheduledActions, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* ___m_ScheduledActions;

  /// @brief Field m_IdScheduledInvocationMap, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int64_t, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* ___m_IdScheduledInvocationMap;

  /// @brief Field m_ExpiredActions, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* ___m_ExpiredActions;

  /// @brief Field m_NextId, offset: 0x60, size: 0x8, def value: None
  int64_t ___m_NextId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Scheduler::Internal::ActionScheduler, 0x68>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___SchedulerLoopSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_TimeProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_Lock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_ScheduledActions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_IdScheduledInvocationMap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_ExpiredActions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ActionScheduler, ___m_NextId) == 0x60, "Offset mismatch!");

} // namespace Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::ActionScheduler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::ActionScheduler*, "Unity.Services.Core.Scheduler.Internal", "ActionScheduler");
