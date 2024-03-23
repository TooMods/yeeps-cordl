#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledInvocationComparer)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ScheduledInvocation;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class ScheduledInvocationComparer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer);
// Type: Unity.Services.Core.Scheduler.Internal::ScheduledInvocationComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Scheduler.Internal::ScheduledInvocationComparer*
class CORDL_TYPE ScheduledInvocationComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*() noexcept;

  /// @brief Method Compare, addr 0x1d42218, size 0x6c, virtual true, abstract: false, final true
  inline int32_t Compare(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* x, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation* y);

  static inline ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer* New_ctor();

  /// @brief Method .ctor, addr 0x1d415a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
  constexpr ::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*
  i___System__Collections__Generic__IComparer_1___Unity__Services__Core__Scheduler__Internal__ScheduledInvocation__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScheduledInvocationComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScheduledInvocationComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScheduledInvocationComparer(ScheduledInvocationComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScheduledInvocationComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScheduledInvocationComparer(ScheduledInvocationComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*, "Unity.Services.Core.Scheduler.Internal", "ScheduledInvocationComparer");
