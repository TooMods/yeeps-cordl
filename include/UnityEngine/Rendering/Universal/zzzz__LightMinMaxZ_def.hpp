#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LightMinMaxZ)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightMinMaxZ;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightMinMaxZ);
// Type: UnityEngine.Rendering.Universal::LightMinMaxZ
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightMinMaxZ
struct CORDL_TYPE LightMinMaxZ {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightMinMaxZ();

  // Ctor Parameters [CppParam { name: "minZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxZ", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LightMinMaxZ(float_t minZ, float_t maxZ) noexcept;

  /// @brief Field minZ, offset: 0x0, size: 0x4, def value: None
  float_t minZ;

  /// @brief Field maxZ, offset: 0x4, size: 0x4, def value: None
  float_t maxZ;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightMinMaxZ, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightMinMaxZ, minZ) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightMinMaxZ, maxZ) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightMinMaxZ, "UnityEngine.Rendering.Universal", "LightMinMaxZ");
