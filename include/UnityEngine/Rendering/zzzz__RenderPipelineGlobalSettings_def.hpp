#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RenderPipelineGlobalSettings)
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGlobalSettings);
// Type: UnityEngine.Rendering::RenderPipelineGlobalSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RenderPipelineGlobalSettings*
class CORDL_TYPE RenderPipelineGlobalSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::RenderPipelineGlobalSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2a96498, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGlobalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGlobalSettings(RenderPipelineGlobalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGlobalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGlobalSettings(RenderPipelineGlobalSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineGlobalSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineGlobalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineGlobalSettings*, "UnityEngine.Rendering", "RenderPipelineGlobalSettings");
