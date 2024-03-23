#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderingData)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct LightData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowData;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderingData);
// Type: UnityEngine.Rendering.Universal::RenderingData
// SizeInfo { instance_size: 536, native_size: -1, calculated_instance_size: 536, calculated_native_size: 549, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::RenderingData
struct CORDL_TYPE RenderingData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingData();

  // Ctor Parameters [CppParam { name: "cullResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: None }, CppParam { name: "cameraData", ty:
  // "::UnityEngine::Rendering::Universal::CameraData", modifiers: "", def_value: None }, CppParam { name: "lightData", ty: "::UnityEngine::Rendering::Universal::LightData", modifiers: "", def_value:
  // None }, CppParam { name: "shadowData", ty: "::UnityEngine::Rendering::Universal::ShadowData", modifiers: "", def_value: None }, CppParam { name: "postProcessingData", ty:
  // "::UnityEngine::Rendering::Universal::PostProcessingData", modifiers: "", def_value: None }, CppParam { name: "supportsDynamicBatching", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "perObjectData", ty: "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: None }, CppParam { name: "postProcessingEnabled", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderingData(::UnityEngine::Rendering::CullingResults cullResults, ::UnityEngine::Rendering::Universal::CameraData cameraData, ::UnityEngine::Rendering::Universal::LightData lightData,
                          ::UnityEngine::Rendering::Universal::ShadowData shadowData, ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData, bool supportsDynamicBatching,
                          ::UnityEngine::Rendering::PerObjectData perObjectData, bool postProcessingEnabled) noexcept;

  /// @brief Field cullResults, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults cullResults;

  /// @brief Field cameraData, offset: 0x10, size: 0x168, def value: None
  ::UnityEngine::Rendering::Universal::CameraData cameraData;

  /// @brief Field lightData, offset: 0x178, size: 0x38, def value: None
  ::UnityEngine::Rendering::Universal::LightData lightData;

  /// @brief Field shadowData, offset: 0x1b0, size: 0x50, def value: None
  ::UnityEngine::Rendering::Universal::ShadowData shadowData;

  /// @brief Field postProcessingData, offset: 0x200, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData;

  /// @brief Field supportsDynamicBatching, offset: 0x20c, size: 0x1, def value: None
  bool supportsDynamicBatching;

  /// @brief Field perObjectData, offset: 0x210, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData perObjectData;

  /// @brief Field postProcessingEnabled, offset: 0x214, size: 0x1, def value: None
  bool postProcessingEnabled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingData, 0x218>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, cullResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, lightData) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, shadowData) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, postProcessingData) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, supportsDynamicBatching) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, perObjectData) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderingData, postProcessingEnabled) == 0x214, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingData, "UnityEngine.Rendering.Universal", "RenderingData");
