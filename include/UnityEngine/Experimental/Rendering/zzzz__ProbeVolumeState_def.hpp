#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeState)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::ProbeVolumeState);
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeState
struct CORDL_TYPE ProbeVolumeState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolumeState_Unwrapped
  enum struct __ProbeVolumeState_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Invalid = static_cast<int32_t>(0x3e7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolumeState_Unwrapped() const noexcept {
    return static_cast<__ProbeVolumeState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::ProbeVolumeState const Default;

  /// @brief Field Invalid value: static_cast<int32_t>(0x3e7)
  static ::UnityEngine::Experimental::Rendering::ProbeVolumeState const Invalid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeState, "UnityEngine.Experimental.Rendering", "ProbeVolumeState");
