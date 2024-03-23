#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeShadingParameters)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeShadingParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters);
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeShadingParameters
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeShadingParameters
struct CORDL_TYPE ProbeVolumeShadingParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeShadingParameters();

  // Ctor Parameters [CppParam { name: "normalBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "viewBias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "scaleBiasByMinDistanceBetweenProbes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "samplingNoise", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeShadingParameters(float_t normalBias, float_t viewBias, bool scaleBiasByMinDistanceBetweenProbes, float_t samplingNoise) noexcept;

  /// @brief Field normalBias, offset: 0x0, size: 0x4, def value: None
  float_t normalBias;

  /// @brief Field viewBias, offset: 0x4, size: 0x4, def value: None
  float_t viewBias;

  /// @brief Field scaleBiasByMinDistanceBetweenProbes, offset: 0x8, size: 0x1, def value: None
  bool scaleBiasByMinDistanceBetweenProbes;

  /// @brief Field samplingNoise, offset: 0xc, size: 0x4, def value: None
  float_t samplingNoise;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, normalBias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, viewBias) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, scaleBiasByMinDistanceBetweenProbes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, samplingNoise) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeShadingParameters, "UnityEngine.Experimental.Rendering", "ProbeVolumeShadingParameters");
