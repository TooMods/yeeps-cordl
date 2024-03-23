#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicResUpscaleFilter)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DynamicResUpscaleFilter;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DynamicResUpscaleFilter);
// Type: UnityEngine.Rendering::DynamicResUpscaleFilter
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DynamicResUpscaleFilter
struct CORDL_TYPE DynamicResUpscaleFilter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DynamicResUpscaleFilter_Unwrapped
  enum struct __DynamicResUpscaleFilter_Unwrapped : uint8_t {
    __E_Bilinear = static_cast<uint8_t>(0x0u),
    __E_CatmullRom = static_cast<uint8_t>(0x1u),
    __E_Lanczos = static_cast<uint8_t>(0x2u),
    __E_ContrastAdaptiveSharpen = static_cast<uint8_t>(0x3u),
    __E_EdgeAdaptiveScalingUpres = static_cast<uint8_t>(0x4u),
    __E_TAAU = static_cast<uint8_t>(0x5u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DynamicResUpscaleFilter_Unwrapped() const noexcept {
    return static_cast<__DynamicResUpscaleFilter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicResUpscaleFilter();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DynamicResUpscaleFilter(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Bilinear value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const Bilinear;

  /// @brief Field CatmullRom value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const CatmullRom;

  /// @brief Field ContrastAdaptiveSharpen value: static_cast<uint8_t>(0x3u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const ContrastAdaptiveSharpen;

  /// @brief Field EdgeAdaptiveScalingUpres value: static_cast<uint8_t>(0x4u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const EdgeAdaptiveScalingUpres;

  /// @brief Field Lanczos value: static_cast<uint8_t>(0x2u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const Lanczos;

  /// @brief Field TAAU value: static_cast<uint8_t>(0x5u)
  static ::UnityEngine::Rendering::DynamicResUpscaleFilter const TAAU;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicResUpscaleFilter, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DynamicResUpscaleFilter, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResUpscaleFilter, "UnityEngine.Rendering", "DynamicResUpscaleFilter");
