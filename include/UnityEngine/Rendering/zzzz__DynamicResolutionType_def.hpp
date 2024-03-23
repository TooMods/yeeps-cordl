#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicResolutionType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DynamicResolutionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DynamicResolutionType);
// Type: UnityEngine.Rendering::DynamicResolutionType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DynamicResolutionType
struct CORDL_TYPE DynamicResolutionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DynamicResolutionType_Unwrapped
  enum struct __DynamicResolutionType_Unwrapped : uint8_t {
    __E_Software = static_cast<uint8_t>(0x0u),
    __E_Hardware = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DynamicResolutionType_Unwrapped() const noexcept {
    return static_cast<__DynamicResolutionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResolutionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DynamicResolutionType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Hardware value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::Rendering::DynamicResolutionType const Hardware;

  /// @brief Field Software value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::Rendering::DynamicResolutionType const Software;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicResolutionType, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResolutionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionType, "UnityEngine.Rendering", "DynamicResolutionType");
