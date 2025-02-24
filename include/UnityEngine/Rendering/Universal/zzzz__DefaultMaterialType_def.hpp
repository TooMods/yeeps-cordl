#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultMaterialType)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DefaultMaterialType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DefaultMaterialType);
// Type: UnityEngine.Rendering.Universal::DefaultMaterialType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::DefaultMaterialType
struct CORDL_TYPE DefaultMaterialType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DefaultMaterialType_Unwrapped
  enum struct __DefaultMaterialType_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_Particle = static_cast<int32_t>(0x1),
    __E_Terrain = static_cast<int32_t>(0x2),
    __E_Sprite = static_cast<int32_t>(0x3),
    __E_UnityBuiltinDefault = static_cast<int32_t>(0x4),
    __E_SpriteMask = static_cast<int32_t>(0x5),
    __E_Decal = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DefaultMaterialType_Unwrapped() const noexcept {
    return static_cast<__DefaultMaterialType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMaterialType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DefaultMaterialType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Decal value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Decal;

  /// @brief Field Particle value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Particle;

  /// @brief Field Sprite value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Sprite;

  /// @brief Field SpriteMask value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const SpriteMask;

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Standard;

  /// @brief Field Terrain value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const Terrain;

  /// @brief Field UnityBuiltinDefault value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::Universal::DefaultMaterialType const UnityBuiltinDefault;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DefaultMaterialType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DefaultMaterialType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DefaultMaterialType, "UnityEngine.Rendering.Universal", "DefaultMaterialType");
