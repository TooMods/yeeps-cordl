#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(FinalBlitPass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass);
// Type: UnityEngine.Rendering.Universal.Internal::FinalBlitPass
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::FinalBlitPass*
class CORDL_TYPE FinalBlitPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_BlitMaterial, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial))::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_Source, offset 0xd8, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source))::UnityEngine::Rendering::RenderTargetIdentifier m_Source;

  /// @brief Method Execute, addr 0x29b7584, size 0xa50, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* blitMaterial);

  /// @brief Method Setup, addr 0x29b7538, size 0x4c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle colorHandle);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_Source();

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method .ctor, addr 0x29b7498, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* blitMaterial);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FinalBlitPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FinalBlitPass(FinalBlitPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FinalBlitPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FinalBlitPass(FinalBlitPass const&) = delete;

  /// @brief Field m_Source, offset: 0xd8, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_Source;

  /// @brief Field m_BlitMaterial, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, ___m_Source) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass, ___m_BlitMaterial) == 0x100, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass");
