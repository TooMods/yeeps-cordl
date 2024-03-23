#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VirtualOffsetSettings)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct VirtualOffsetSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::VirtualOffsetSettings);
// Type: UnityEngine.Experimental.Rendering::VirtualOffsetSettings
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::VirtualOffsetSettings
struct CORDL_TYPE VirtualOffsetSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VirtualOffsetSettings();

  // Ctor Parameters [CppParam { name: "useVirtualOffset", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "outOfGeoOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "searchMultiplier", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VirtualOffsetSettings(bool useVirtualOffset, float_t outOfGeoOffset, float_t searchMultiplier) noexcept;

  /// @brief Field useVirtualOffset, offset: 0x0, size: 0x1, def value: None
  bool useVirtualOffset;

  /// @brief Field outOfGeoOffset, offset: 0x4, size: 0x4, def value: None
  float_t outOfGeoOffset;

  /// @brief Field searchMultiplier, offset: 0x8, size: 0x4, def value: None
  float_t searchMultiplier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::VirtualOffsetSettings, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::VirtualOffsetSettings, useVirtualOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::VirtualOffsetSettings, outOfGeoOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::VirtualOffsetSettings, searchMultiplier) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::VirtualOffsetSettings, "UnityEngine.Experimental.Rendering", "VirtualOffsetSettings");
