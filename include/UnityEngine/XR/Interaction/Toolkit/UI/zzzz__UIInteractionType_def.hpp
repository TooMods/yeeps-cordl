#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIInteractionType)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct UIInteractionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType);
// Type: UnityEngine.XR.Interaction.Toolkit.UI::UIInteractionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.UI::UIInteractionType
struct CORDL_TYPE UIInteractionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UIInteractionType_Unwrapped
  enum struct __UIInteractionType_Unwrapped : int32_t {
    __E_Ray = static_cast<int32_t>(0x0),
    __E_Poke = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UIInteractionType_Unwrapped() const noexcept {
    return static_cast<__UIInteractionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIInteractionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UIInteractionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Poke value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType const Poke;

  /// @brief Field Ray value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType const Ray;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::UIInteractionType, "UnityEngine.XR.Interaction.Toolkit.UI", "UIInteractionType");
