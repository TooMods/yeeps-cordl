#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackingRules)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PackingRules;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PackingRules);
// Type: UnityEngine.Rendering::PackingRules
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::PackingRules
struct CORDL_TYPE PackingRules {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PackingRules_Unwrapped
  enum struct __PackingRules_Unwrapped : int32_t {
    __E_Exact = static_cast<int32_t>(0x0),
    __E_Aggressive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PackingRules_Unwrapped() const noexcept {
    return static_cast<__PackingRules_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PackingRules();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PackingRules(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Aggressive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::PackingRules const Aggressive;

  /// @brief Field Exact value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::PackingRules const Exact;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PackingRules, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackingRules, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PackingRules, "UnityEngine.Rendering", "PackingRules");
