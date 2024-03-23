#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessingData)
namespace UnityEngine::Rendering::Universal {
struct ColorGradingMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct PostProcessingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessingData);
// Type: UnityEngine.Rendering.Universal::PostProcessingData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 25, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::PostProcessingData
struct CORDL_TYPE PostProcessingData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingData();

  // Ctor Parameters [CppParam { name: "gradingMode", ty: "::UnityEngine::Rendering::Universal::ColorGradingMode", modifiers: "", def_value: None }, CppParam { name: "lutSize", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "useFastSRGBLinearConversion", ty: "bool", modifiers: "", def_value: None }]
  constexpr PostProcessingData(::UnityEngine::Rendering::Universal::ColorGradingMode gradingMode, int32_t lutSize, bool useFastSRGBLinearConversion) noexcept;

  /// @brief Field gradingMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ColorGradingMode gradingMode;

  /// @brief Field lutSize, offset: 0x4, size: 0x4, def value: None
  int32_t lutSize;

  /// @brief Field useFastSRGBLinearConversion, offset: 0x8, size: 0x1, def value: None
  bool useFastSRGBLinearConversion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessingData, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessingData, gradingMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessingData, lutSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessingData, useFastSRGBLinearConversion) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessingData, "UnityEngine.Rendering.Universal", "PostProcessingData");
