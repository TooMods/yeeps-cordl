#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonDeltaState)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::ButtonDeltaState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::ButtonDeltaState
struct CORDL_TYPE ButtonDeltaState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ButtonDeltaState_Unwrapped
  enum struct __ButtonDeltaState_Unwrapped : int32_t {
    __E_NoChange = static_cast<int32_t>(0x0),
    __E_Pressed = static_cast<int32_t>(0x1),
    __E_Released = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ButtonDeltaState_Unwrapped() const noexcept {
    return static_cast<__ButtonDeltaState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonDeltaState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ButtonDeltaState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NoChange value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const NoChange;

  /// @brief Field Pressed value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const Pressed;

  /// @brief Field Released value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState const Released;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, "UnityEngine.XR.Interaction.Toolkit.UI", "ButtonDeltaState");
