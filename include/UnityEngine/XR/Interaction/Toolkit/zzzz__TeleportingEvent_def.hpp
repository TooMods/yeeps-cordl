#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportingEventArgs_def.hpp"
CORDL_MODULE_EXPORT(TeleportingEvent)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class TeleportingEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent);
// Type: UnityEngine.XR.Interaction.Toolkit::TeleportingEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::TeleportingEvent*
class CORDL_TYPE TeleportingEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2cfe7e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleportingEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleportingEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleportingEvent(TeleportingEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleportingEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleportingEvent(TeleportingEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*, "UnityEngine.XR.Interaction.Toolkit", "TeleportingEvent");
