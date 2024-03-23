#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugAction)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugAction);
// Type: UnityEngine.Rendering::DebugAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DebugAction
struct CORDL_TYPE DebugAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugAction_Unwrapped
  enum struct __DebugAction_Unwrapped : int32_t {
    __E_EnableDebugMenu = static_cast<int32_t>(0x0),
    __E_PreviousDebugPanel = static_cast<int32_t>(0x1),
    __E_NextDebugPanel = static_cast<int32_t>(0x2),
    __E_Action = static_cast<int32_t>(0x3),
    __E_MakePersistent = static_cast<int32_t>(0x4),
    __E_MoveVertical = static_cast<int32_t>(0x5),
    __E_MoveHorizontal = static_cast<int32_t>(0x6),
    __E_Multiplier = static_cast<int32_t>(0x7),
    __E_ResetAll = static_cast<int32_t>(0x8),
    __E_DebugActionCount = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugAction_Unwrapped() const noexcept {
    return static_cast<__DebugAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Action value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::DebugAction const Action;

  /// @brief Field DebugActionCount value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::DebugAction const DebugActionCount;

  /// @brief Field EnableDebugMenu value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::DebugAction const EnableDebugMenu;

  /// @brief Field MakePersistent value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::DebugAction const MakePersistent;

  /// @brief Field MoveHorizontal value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::DebugAction const MoveHorizontal;

  /// @brief Field MoveVertical value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::DebugAction const MoveVertical;

  /// @brief Field Multiplier value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::DebugAction const Multiplier;

  /// @brief Field NextDebugPanel value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::DebugAction const NextDebugPanel;

  /// @brief Field PreviousDebugPanel value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::DebugAction const PreviousDebugPanel;

  /// @brief Field ResetAll value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::DebugAction const ResetAll;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugAction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugAction, "UnityEngine.Rendering", "DebugAction");
