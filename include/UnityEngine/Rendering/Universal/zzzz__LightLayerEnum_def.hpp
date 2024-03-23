#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightLayerEnum)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightLayerEnum;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightLayerEnum);
// Type: UnityEngine.Rendering.Universal::LightLayerEnum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightLayerEnum
struct CORDL_TYPE LightLayerEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightLayerEnum_Unwrapped
  enum struct __LightLayerEnum_Unwrapped : int32_t {
    __E_Nothing = static_cast<int32_t>(0x0),
    __E_LightLayerDefault = static_cast<int32_t>(0x1),
    __E_LightLayer1 = static_cast<int32_t>(0x2),
    __E_LightLayer2 = static_cast<int32_t>(0x4),
    __E_LightLayer3 = static_cast<int32_t>(0x8),
    __E_LightLayer4 = static_cast<int32_t>(0x10),
    __E_LightLayer5 = static_cast<int32_t>(0x20),
    __E_LightLayer6 = static_cast<int32_t>(0x40),
    __E_LightLayer7 = static_cast<int32_t>(0x80),
    __E_Everything = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightLayerEnum_Unwrapped() const noexcept {
    return static_cast<__LightLayerEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightLayerEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightLayerEnum(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Everything value: static_cast<int32_t>(0xff)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const Everything;

  /// @brief Field LightLayer1 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer1;

  /// @brief Field LightLayer2 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer2;

  /// @brief Field LightLayer3 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer3;

  /// @brief Field LightLayer4 value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer4;

  /// @brief Field LightLayer5 value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer5;

  /// @brief Field LightLayer6 value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer6;

  /// @brief Field LightLayer7 value: static_cast<int32_t>(0x80)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer7;

  /// @brief Field LightLayerDefault value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayerDefault;

  /// @brief Field Nothing value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const Nothing;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightLayerEnum, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightLayerEnum, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightLayerEnum, "UnityEngine.Rendering.Universal", "LightLayerEnum");
