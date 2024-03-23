#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UtcTimeProvider)
namespace System {
struct DateTime;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ITimeProvider;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class UtcTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider);
// Type: Unity.Services.Core.Scheduler.Internal::UtcTimeProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Scheduler.Internal::UtcTimeProvider*
class CORDL_TYPE UtcTimeProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Now))::System::DateTime Now;

  /// @brief Convert operator to "::Unity::Services::Core::Scheduler::Internal::ITimeProvider"
  constexpr operator ::Unity::Services::Core::Scheduler::Internal::ITimeProvider*() noexcept;

  static inline ::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider* New_ctor();

  /// @brief Method .ctor, addr 0x1d4135c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Now, addr 0x1d42284, size 0x4dee0, virtual true, abstract: false, final true
  inline ::System::DateTime get_Now();

  /// @brief Convert to "::Unity::Services::Core::Scheduler::Internal::ITimeProvider"
  constexpr ::Unity::Services::Core::Scheduler::Internal::ITimeProvider* i___Unity__Services__Core__Scheduler__Internal__ITimeProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UtcTimeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UtcTimeProvider(UtcTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UtcTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UtcTimeProvider(UtcTimeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::UtcTimeProvider*, "Unity.Services.Core.Scheduler.Internal", "UtcTimeProvider");
