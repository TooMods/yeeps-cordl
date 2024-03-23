#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeSystemParameters)
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Experimental::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeSystemParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters);
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeSystemParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeSystemParameters
struct CORDL_TYPE ProbeVolumeSystemParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeSystemParameters();

  // Ctor Parameters [CppParam { name: "memoryBudget", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget", modifiers: "", def_value: None }, CppParam { name:
  // "probeDebugMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "probeDebugShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None
  // }, CppParam { name: "sceneData", ty: "::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData*", modifiers: "", def_value: None }, CppParam { name: "shBands", ty:
  // "::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands", modifiers: "", def_value: None }]
  constexpr ProbeVolumeSystemParameters(::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityW<::UnityEngine::Mesh> probeDebugMesh,
                                        ::UnityW<::UnityEngine::Shader> probeDebugShader, ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData,
                                        ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands) noexcept;

  /// @brief Field memoryBudget, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget;

  /// @brief Field probeDebugMesh, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> probeDebugMesh;

  /// @brief Field probeDebugShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> probeDebugShader;

  /// @brief Field sceneData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData;

  /// @brief Field shBands, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands shBands;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, memoryBudget) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, probeDebugMesh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, probeDebugShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, sceneData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, shBands) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeSystemParameters, "UnityEngine.Experimental.Rendering", "ProbeVolumeSystemParameters");
