#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IActionScheduler)
namespace System {
class Action;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class IActionScheduler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::IActionScheduler);
// Type: Unity.Services.Core.Scheduler.Internal::IActionScheduler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Scheduler.Internal::IActionScheduler*
class CORDL_TYPE IActionScheduler {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method CancelAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAction(int64_t actionId);

  /// @brief Method ScheduleAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ScheduleAction(::System::Action* action, double_t delaySeconds);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IActionScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IActionScheduler(IActionScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IActionScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IActionScheduler(IActionScheduler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::IActionScheduler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::IActionScheduler*, "Unity.Services.Core.Scheduler.Internal", "IActionScheduler");
