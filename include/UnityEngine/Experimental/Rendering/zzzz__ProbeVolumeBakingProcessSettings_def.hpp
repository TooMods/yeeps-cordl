#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeBakingProcessSettings)
namespace UnityEngine::Experimental::Rendering {
struct ProbeDilationSettings;
}
namespace UnityEngine::Experimental::Rendering {
struct VirtualOffsetSettings;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct ProbeVolumeBakingProcessSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings);
// Type: UnityEngine.Experimental.Rendering::ProbeVolumeBakingProcessSettings
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering::ProbeVolumeBakingProcessSettings
struct CORDL_TYPE ProbeVolumeBakingProcessSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingProcessSettings();

  // Ctor Parameters [CppParam { name: "dilationSettings", ty: "::UnityEngine::Experimental::Rendering::ProbeDilationSettings", modifiers: "", def_value: None }, CppParam { name:
  // "virtualOffsetSettings", ty: "::UnityEngine::Experimental::Rendering::VirtualOffsetSettings", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingProcessSettings(::UnityEngine::Experimental::Rendering::ProbeDilationSettings dilationSettings,
                                             ::UnityEngine::Experimental::Rendering::VirtualOffsetSettings virtualOffsetSettings) noexcept;

  /// @brief Field dilationSettings, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::Experimental::Rendering::ProbeDilationSettings dilationSettings;

  /// @brief Field virtualOffsetSettings, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Experimental::Rendering::VirtualOffsetSettings virtualOffsetSettings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings, dilationSettings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings, virtualOffsetSettings) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings, "UnityEngine.Experimental.Rendering", "ProbeVolumeBakingProcessSettings");
