#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionPhase)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct LocomotionPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase);
// Type: UnityEngine.XR.Interaction.Toolkit::LocomotionPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::LocomotionPhase
struct CORDL_TYPE LocomotionPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LocomotionPhase_Unwrapped
  enum struct __LocomotionPhase_Unwrapped : int32_t {
    __E_Idle = static_cast<int32_t>(0x0),
    __E_Started = static_cast<int32_t>(0x1),
    __E_Moving = static_cast<int32_t>(0x2),
    __E_Done = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LocomotionPhase_Unwrapped() const noexcept {
    return static_cast<__LocomotionPhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocomotionPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LocomotionPhase(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Done value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Done;

  /// @brief Field Idle value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Idle;

  /// @brief Field Moving value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Moving;

  /// @brief Field Started value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const Started;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase, "UnityEngine.XR.Interaction.Toolkit", "LocomotionPhase");
