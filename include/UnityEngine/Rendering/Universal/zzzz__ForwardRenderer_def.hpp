#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ForwardRenderer)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class ForwardRendererData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ForwardRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ForwardRenderer);
// Type: UnityEngine.Rendering.Universal::ForwardRenderer
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 393, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ForwardRenderer*
class CORDL_TYPE ForwardRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
  // Declarations
  /// @brief Field k_ErrorMessage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ErrorMessage, put = setStaticF_k_ErrorMessage))::StringW k_ErrorMessage;

  /// @brief Method FinishRendering, addr 0x2e1c514, size 0x6c, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraColorFrontBuffer, addr 0x2e1c5ec, size 0x40, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::Universal::ForwardRenderer* New_ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* data);

  /// @brief Method Setup, addr 0x2e1c3d0, size 0x6c, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x2e1c4a8, size 0x6c, virtual true, abstract: false, final false
  inline void SetupCullingParameters(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupLights, addr 0x2e1c43c, size 0x6c, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SwapColorBuffer, addr 0x2e1c580, size 0x6c, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method .ctor, addr 0x2e1b9f8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* data);

  static inline ::StringW getStaticF_k_ErrorMessage();

  static inline void setStaticF_k_ErrorMessage(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForwardRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForwardRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForwardRenderer(ForwardRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForwardRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForwardRenderer(ForwardRenderer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ForwardRenderer, 0x190>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ForwardRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ForwardRenderer*, "UnityEngine.Rendering.Universal", "ForwardRenderer");
