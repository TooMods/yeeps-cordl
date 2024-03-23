#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionUpdateOrder)
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionUpdateOrder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder);
// Type: ::UpdatePhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRInteractionUpdateOrder::UpdatePhase
struct CORDL_TYPE __XRInteractionUpdateOrder__UpdatePhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRInteractionUpdateOrder__UpdatePhase_Unwrapped
  enum struct ____XRInteractionUpdateOrder__UpdatePhase_Unwrapped : int32_t {
    __E_Fixed = static_cast<int32_t>(0x0),
    __E_Dynamic = static_cast<int32_t>(0x1),
    __E_Late = static_cast<int32_t>(0x2),
    __E_OnBeforeRender = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRInteractionUpdateOrder__UpdatePhase_Unwrapped() const noexcept {
    return static_cast<____XRInteractionUpdateOrder__UpdatePhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRInteractionUpdateOrder__UpdatePhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRInteractionUpdateOrder__UpdatePhase(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase const Dynamic;

  /// @brief Field Fixed value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase const Fixed;

  /// @brief Field Late value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase const Late;

  /// @brief Field OnBeforeRender value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase const OnBeforeRender;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRInteractionUpdateOrder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRInteractionUpdateOrder*
class CORDL_TYPE XRInteractionUpdateOrder : public ::System::Object {
public:
  // Declarations
  using UpdatePhase = ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRInteractionUpdateOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionUpdateOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRInteractionUpdateOrder(XRInteractionUpdateOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRInteractionUpdateOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRInteractionUpdateOrder(XRInteractionUpdateOrder const&) = delete;

  /// @brief Field k_BeforeRenderLineVisual offset 0xffffffff size 0x4
  static constexpr int32_t k_BeforeRenderLineVisual{ static_cast<int32_t>(0x65) };

  /// @brief Field k_BeforeRenderOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_BeforeRenderOrder{ static_cast<int32_t>(0x64) };

  /// @brief Field k_ControllerRecorder offset 0xffffffff size 0x4
  static constexpr int32_t k_ControllerRecorder{ static_cast<int32_t>(0xffff8ad0) };

  /// @brief Field k_Controllers offset 0xffffffff size 0x4
  static constexpr int32_t k_Controllers{ static_cast<int32_t>(0xffff8ada) };

  /// @brief Field k_DeviceSimulator offset 0xffffffff size 0x4
  static constexpr int32_t k_DeviceSimulator{ static_cast<int32_t>(0xffff8ad9) };

  /// @brief Field k_InteractableSnapVolume offset 0xffffffff size 0x4
  static constexpr int32_t k_InteractableSnapVolume{ static_cast<int32_t>(0xffffff9d) };

  /// @brief Field k_Interactables offset 0xffffffff size 0x4
  static constexpr int32_t k_Interactables{ static_cast<int32_t>(0xffffff9e) };

  /// @brief Field k_InteractionGroups offset 0xffffffff size 0x4
  static constexpr int32_t k_InteractionGroups{ static_cast<int32_t>(0xffffff9c) };

  /// @brief Field k_InteractionManager offset 0xffffffff size 0x4
  static constexpr int32_t k_InteractionManager{ static_cast<int32_t>(0xffffff97) };

  /// @brief Field k_Interactors offset 0xffffffff size 0x4
  static constexpr int32_t k_Interactors{ static_cast<int32_t>(0xffffff9d) };

  /// @brief Field k_LineVisual offset 0xffffffff size 0x4
  static constexpr int32_t k_LineVisual{ static_cast<int32_t>(0x64) };

  /// @brief Field k_LocomotionProviders offset 0xffffffff size 0x4
  static constexpr int32_t k_LocomotionProviders{ static_cast<int32_t>(0xffffff2e) };

  /// @brief Field k_TwoHandedGrabMoveProviders offset 0xffffffff size 0x4
  static constexpr int32_t k_TwoHandedGrabMoveProviders{ static_cast<int32_t>(0xffffff2f) };

  /// @brief Field k_UIInputModule offset 0xffffffff size 0x4
  static constexpr int32_t k_UIInputModule{ static_cast<int32_t>(0xffffff38) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder/UpdatePhase");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRInteractionUpdateOrder*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionUpdateOrder");
