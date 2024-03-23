#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeDilationSettings)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct ProbeDilationSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::ProbeDilationSettings);
// Type: UnityEngine.Experimental.Rendering::ProbeDilationSettings
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 33, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeDilationSettings
struct CORDL_TYPE ProbeDilationSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeDilationSettings();

  // Ctor Parameters [CppParam { name: "enableDilation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dilationDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "dilationValidityThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dilationIterations", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "squaredDistWeighting", ty: "bool", modifiers: "", def_value: None }]
  constexpr ProbeDilationSettings(bool enableDilation, float_t dilationDistance, float_t dilationValidityThreshold, int32_t dilationIterations, bool squaredDistWeighting) noexcept;

  /// @brief Field enableDilation, offset: 0x0, size: 0x1, def value: None
  bool enableDilation;

  /// @brief Field dilationDistance, offset: 0x4, size: 0x4, def value: None
  float_t dilationDistance;

  /// @brief Field dilationValidityThreshold, offset: 0x8, size: 0x4, def value: None
  float_t dilationValidityThreshold;

  /// @brief Field dilationIterations, offset: 0xc, size: 0x4, def value: None
  int32_t dilationIterations;

  /// @brief Field squaredDistWeighting, offset: 0x10, size: 0x1, def value: None
  bool squaredDistWeighting;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeDilationSettings, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, enableDilation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, dilationDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, dilationValidityThreshold) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, dilationIterations) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, squaredDistWeighting) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeDilationSettings, "UnityEngine.Experimental.Rendering", "ProbeDilationSettings");
