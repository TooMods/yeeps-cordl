#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButton)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct ControllerButton;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::ControllerButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::ControllerButton
struct CORDL_TYPE ControllerButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ControllerButton_Unwrapped
  enum struct __ControllerButton_Unwrapped : int32_t {
    __E_PrimaryButton = static_cast<int32_t>(0x0),
    __E_PrimaryTouch = static_cast<int32_t>(0x1),
    __E_SecondaryButton = static_cast<int32_t>(0x2),
    __E_SecondaryTouch = static_cast<int32_t>(0x3),
    __E_GripButton = static_cast<int32_t>(0x4),
    __E_TriggerButton = static_cast<int32_t>(0x5),
    __E_MenuButton = static_cast<int32_t>(0x6),
    __E_Primary2DAxisClick = static_cast<int32_t>(0x7),
    __E_Primary2DAxisTouch = static_cast<int32_t>(0x8),
    __E_Secondary2DAxisClick = static_cast<int32_t>(0x9),
    __E_Secondary2DAxisTouch = static_cast<int32_t>(0xa),
    __E_UserPresence = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ControllerButton_Unwrapped() const noexcept {
    return static_cast<__ControllerButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ControllerButton(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field GripButton value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const GripButton;

  /// @brief Field MenuButton value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const MenuButton;

  /// @brief Field Primary2DAxisClick value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const Primary2DAxisClick;

  /// @brief Field Primary2DAxisTouch value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const Primary2DAxisTouch;

  /// @brief Field PrimaryButton value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const PrimaryButton;

  /// @brief Field PrimaryTouch value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const PrimaryTouch;

  /// @brief Field Secondary2DAxisClick value: static_cast<int32_t>(0x9)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const Secondary2DAxisClick;

  /// @brief Field Secondary2DAxisTouch value: static_cast<int32_t>(0xa)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const Secondary2DAxisTouch;

  /// @brief Field SecondaryButton value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const SecondaryButton;

  /// @brief Field SecondaryTouch value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const SecondaryTouch;

  /// @brief Field TriggerButton value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const TriggerButton;

  /// @brief Field UserPresence value: static_cast<int32_t>(0xb)
  static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton const UserPresence;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "ControllerButton");
