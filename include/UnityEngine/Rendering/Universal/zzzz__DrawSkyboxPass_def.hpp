#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DrawSkyboxPass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawSkyboxPass);
// Type: UnityEngine.Rendering.Universal::DrawSkyboxPass
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DrawSkyboxPass*
class CORDL_TYPE DrawSkyboxPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Method Execute, addr 0x27280c4, size 0x380, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method .ctor, addr 0x2728030, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawSkyboxPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawSkyboxPass(DrawSkyboxPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawSkyboxPass(DrawSkyboxPass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawSkyboxPass, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawSkyboxPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawSkyboxPass*, "UnityEngine.Rendering.Universal", "DrawSkyboxPass");
