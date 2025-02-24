#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderPassInput)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderPassInput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput);
// Type: UnityEngine.Rendering.Universal::ScriptableRenderPassInput
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::ScriptableRenderPassInput
struct CORDL_TYPE ScriptableRenderPassInput {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScriptableRenderPassInput_Unwrapped
  enum struct __ScriptableRenderPassInput_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Color = static_cast<int32_t>(0x4),
    __E_Motion = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScriptableRenderPassInput_Unwrapped() const noexcept {
    return static_cast<__ScriptableRenderPassInput_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderPassInput();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptableRenderPassInput(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Color value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const Color;

  /// @brief Field Depth value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const Depth;

  /// @brief Field Motion value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const Motion;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const Normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderPassInput, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput, "UnityEngine.Rendering.Universal", "ScriptableRenderPassInput");
