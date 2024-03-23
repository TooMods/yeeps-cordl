#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightStats)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightStats);
// Type: UnityEngine.Rendering.Universal::LightStats
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::LightStats
struct CORDL_TYPE LightStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightStats();

  // Ctor Parameters [CppParam { name: "totalLights", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalNormalMapUsage", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "totalVolumetricUsage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "blendStylesUsed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "blendStylesWithLights", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr LightStats(int32_t totalLights, int32_t totalNormalMapUsage, int32_t totalVolumetricUsage, uint32_t blendStylesUsed, uint32_t blendStylesWithLights) noexcept;

  /// @brief Field totalLights, offset: 0x0, size: 0x4, def value: None
  int32_t totalLights;

  /// @brief Field totalNormalMapUsage, offset: 0x4, size: 0x4, def value: None
  int32_t totalNormalMapUsage;

  /// @brief Field totalVolumetricUsage, offset: 0x8, size: 0x4, def value: None
  int32_t totalVolumetricUsage;

  /// @brief Field blendStylesUsed, offset: 0xc, size: 0x4, def value: None
  uint32_t blendStylesUsed;

  /// @brief Field blendStylesWithLights, offset: 0x10, size: 0x4, def value: None
  uint32_t blendStylesWithLights;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightStats, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightStats, totalLights) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightStats, totalNormalMapUsage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightStats, totalVolumetricUsage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightStats, blendStylesUsed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightStats, blendStylesWithLights) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightStats, "UnityEngine.Rendering.Universal", "LightStats");
