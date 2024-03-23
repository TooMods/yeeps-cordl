#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PixelPerfectBackgroundPass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PixelPerfectBackgroundPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass);
// Type: UnityEngine.Rendering.Universal::PixelPerfectBackgroundPass
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PixelPerfectBackgroundPass*
class CORDL_TYPE PixelPerfectBackgroundPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_ProfilingScope, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingScope, put = setStaticF_m_ProfilingScope))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingScope;

  /// @brief Method Execute, addr 0x2f37c1c, size 0x1d4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method .ctor, addr 0x2f37bf4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingScope();

  static inline void setStaticF_m_ProfilingScope(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PixelPerfectBackgroundPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectBackgroundPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PixelPerfectBackgroundPass(PixelPerfectBackgroundPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectBackgroundPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PixelPerfectBackgroundPass(PixelPerfectBackgroundPass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass*, "UnityEngine.Rendering.Universal", "PixelPerfectBackgroundPass");
