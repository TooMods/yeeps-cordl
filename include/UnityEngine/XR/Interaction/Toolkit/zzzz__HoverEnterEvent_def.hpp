#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
CORDL_MODULE_EXPORT(HoverEnterEvent)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent);
// Type: UnityEngine.XR.Interaction.Toolkit::HoverEnterEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::HoverEnterEvent*
class CORDL_TYPE HoverEnterEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*> {
public:
  // Declarations
  static inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2cedfc4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverEnterEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverEnterEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverEnterEvent(HoverEnterEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverEnterEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverEnterEvent(HoverEnterEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*, "UnityEngine.XR.Interaction.Toolkit", "HoverEnterEvent");
