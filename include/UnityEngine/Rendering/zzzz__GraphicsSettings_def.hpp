#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GraphicsSettings);
// Type: UnityEngine.Rendering::GraphicsSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::GraphicsSettings*
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method GetSettingsForRenderPipeline, addr 0x2a8f9b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetSettingsForRenderPipeline(::StringW renderpipelineName);

  /// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline();

  /// @brief Method HasShaderDefine, addr 0x2a8f740, size 0x84, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method HasShaderDefine, addr 0x2a8f6fc, size 0x44, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method RegisterRenderPipeline, addr 0x2a8f930, size 0x44, virtual false, abstract: false, final false
  static inline void RegisterRenderPipeline(::StringW renderpipelineName, ::UnityEngine::Object* settings);

  /// @brief Method RegisterRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterRenderPipelineSettings(::UnityEngine::Rendering::RenderPipelineGlobalSettings* settings);

  /// @brief Method UnregisterRenderPipeline, addr 0x2a8f974, size 0x3c, virtual false, abstract: false, final false
  static inline void UnregisterRenderPipeline(::StringW renderpipelineName);

  /// @brief Method UnregisterRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnregisterRenderPipelineSettings();

  /// @brief Method get_INTERNAL_currentRenderPipeline, addr 0x2a8f7c4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline();

  /// @brief Method get_currentRenderPipeline, addr 0x2a8f7ec, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline();

  /// @brief Method get_lightsUseLinearIntensity, addr 0x2a8f5e4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_lightsUseLinearIntensity();

  /// @brief Method set_INTERNAL_defaultRenderPipeline, addr 0x2a8f8f4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_defaultRenderPipeline, addr 0x2a8f8b8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_defaultRenderingLayerMask, addr 0x2a8f684, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultRenderingLayerMask(uint32_t value);

  /// @brief Method set_lightsUseColorTemperature, addr 0x2a8f648, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseColorTemperature(bool value);

  /// @brief Method set_lightsUseLinearIntensity, addr 0x2a8f60c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseLinearIntensity(bool value);

  /// @brief Method set_renderPipelineAsset, addr 0x2a8f87c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_useScriptableRenderPipelineBatching, addr 0x2a8f6c0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_useScriptableRenderPipelineBatching(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettings(GraphicsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettings(GraphicsSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
