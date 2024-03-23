#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthBits)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DepthBits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DepthBits);
// Type: UnityEngine.Rendering::DepthBits
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DepthBits
struct CORDL_TYPE DepthBits {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DepthBits_Unwrapped
  enum struct __DepthBits_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth8 = static_cast<int32_t>(0x8),
    __E_Depth16 = static_cast<int32_t>(0x10),
    __E_Depth24 = static_cast<int32_t>(0x18),
    __E_Depth32 = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DepthBits_Unwrapped() const noexcept {
    return static_cast<__DepthBits_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthBits();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DepthBits(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Depth16 value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::DepthBits const Depth16;

  /// @brief Field Depth24 value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Rendering::DepthBits const Depth24;

  /// @brief Field Depth32 value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::DepthBits const Depth32;

  /// @brief Field Depth8 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::DepthBits const Depth8;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::DepthBits const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DepthBits, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DepthBits, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DepthBits, "UnityEngine.Rendering", "DepthBits");
