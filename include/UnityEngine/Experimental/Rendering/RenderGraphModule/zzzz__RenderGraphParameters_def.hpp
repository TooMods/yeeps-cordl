#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphParameters)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphParameters
struct CORDL_TYPE RenderGraphParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphParameters();

  // Ctor Parameters [CppParam { name: "executionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "rendererListCulling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scriptableRenderContext", ty: "::UnityEngine::Rendering::ScriptableRenderContext",
  // modifiers: "", def_value: None }, CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }]
  constexpr RenderGraphParameters(::StringW executionName, int32_t currentFrameIndex, bool rendererListCulling, ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext,
                                  ::UnityEngine::Rendering::CommandBuffer* commandBuffer) noexcept;

  /// @brief Field executionName, offset: 0x0, size: 0x8, def value: None
  ::StringW executionName;

  /// @brief Field currentFrameIndex, offset: 0x8, size: 0x4, def value: None
  int32_t currentFrameIndex;

  /// @brief Field rendererListCulling, offset: 0xc, size: 0x1, def value: None
  bool rendererListCulling;

  /// @brief Field scriptableRenderContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext;

  /// @brief Field commandBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, executionName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, currentFrameIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, rendererListCulling) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, scriptableRenderContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, commandBuffer) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphParameters");
