#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledInvocation)
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class ScheduledInvocation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation);
// Type: Unity.Services.Core.Scheduler.Internal::ScheduledInvocation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Scheduler.Internal::ScheduledInvocation*
class CORDL_TYPE ScheduledInvocation : public ::System::Object {
public:
  // Declarations
  /// @brief Field Action, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Action, put = __cordl_internal_set_Action))::System::Action* Action;

  /// @brief Field ActionId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ActionId, put = __cordl_internal_set_ActionId)) int64_t ActionId;

  /// @brief Field InvocationTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InvocationTime, put = __cordl_internal_set_InvocationTime))::System::DateTime InvocationTime;

  static inline ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* New_ctor();

  constexpr ::System::Action*& __cordl_internal_get_Action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_Action() const;

  constexpr int64_t const& __cordl_internal_get_ActionId() const;

  constexpr int64_t& __cordl_internal_get_ActionId();

  constexpr ::System::DateTime const& __cordl_internal_get_InvocationTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_InvocationTime();

  constexpr void __cordl_internal_set_Action(::System::Action* value);

  constexpr void __cordl_internal_set_ActionId(int64_t value);

  constexpr void __cordl_internal_set_InvocationTime(::System::DateTime value);

  /// @brief Method .ctor, addr 0x1d41890, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScheduledInvocation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScheduledInvocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScheduledInvocation(ScheduledInvocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScheduledInvocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScheduledInvocation(ScheduledInvocation const&) = delete;

  /// @brief Field Action, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___Action;

  /// @brief Field InvocationTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___InvocationTime;

  /// @brief Field ActionId, offset: 0x20, size: 0x8, def value: None
  int64_t ___ActionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation, ___InvocationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation, ___ActionId) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*, "Unity.Services.Core.Scheduler.Internal", "ScheduledInvocation");
