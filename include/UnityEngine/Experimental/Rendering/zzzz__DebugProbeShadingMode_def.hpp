#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugProbeShadingMode)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct DebugProbeShadingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::DebugProbeShadingMode);
// Type: UnityEngine.Experimental.Rendering::DebugProbeShadingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::DebugProbeShadingMode
struct CORDL_TYPE DebugProbeShadingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugProbeShadingMode_Unwrapped
  enum struct __DebugProbeShadingMode_Unwrapped : int32_t {
    __E_SH = static_cast<int32_t>(0x0),
    __E_Validity = static_cast<int32_t>(0x1),
    __E_ValidityOverDilationThreshold = static_cast<int32_t>(0x2),
    __E_Size = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugProbeShadingMode_Unwrapped() const noexcept {
    return static_cast<__DebugProbeShadingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugProbeShadingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugProbeShadingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field SH value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const SH;

  /// @brief Field Size value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const Size;

  /// @brief Field Validity value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const Validity;

  /// @brief Field ValidityOverDilationThreshold value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::DebugProbeShadingMode const ValidityOverDilationThreshold;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::DebugProbeShadingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::DebugProbeShadingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::DebugProbeShadingMode, "UnityEngine.Experimental.Rendering", "DebugProbeShadingMode");
