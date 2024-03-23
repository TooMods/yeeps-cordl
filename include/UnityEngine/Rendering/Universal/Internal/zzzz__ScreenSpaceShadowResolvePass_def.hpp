#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceShadowResolvePass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
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
class ScreenSpaceShadowResolvePass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass);
// Type: UnityEngine.Rendering.Universal.Internal::ScreenSpaceShadowResolvePass
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 324, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::ScreenSpaceShadowResolvePass*
class CORDL_TYPE ScreenSpaceShadowResolvePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_RenderTextureDescriptor, offset 0x110, size 0x34
  __declspec(property(get = __cordl_internal_get_m_RenderTextureDescriptor, put = __cordl_internal_set_m_RenderTextureDescriptor))::UnityEngine::RenderTextureDescriptor m_RenderTextureDescriptor;

  /// @brief Field m_ScreenSpaceShadowmap, offset 0xe0, size 0x30
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceShadowmap,
                      put = __cordl_internal_set_m_ScreenSpaceShadowmap))::UnityEngine::Rendering::Universal::RenderTargetHandle m_ScreenSpaceShadowmap;

  /// @brief Field m_ScreenSpaceShadowsMaterial, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceShadowsMaterial, put = __cordl_internal_set_m_ScreenSpaceShadowsMaterial))::UnityW<::UnityEngine::Material> m_ScreenSpaceShadowsMaterial;

  /// @brief Method Configure, addr 0x16142d0, size 0xe0, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x16143b0, size 0x4cc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                      ::UnityEngine::Material* screenspaceShadowsMaterial);

  /// @brief Method OnCameraCleanup, addr 0x161487c, size 0x6c, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Setup, addr 0x1614218, size 0xb8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor);

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_RenderTextureDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_RenderTextureDescriptor();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_ScreenSpaceShadowmap() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_ScreenSpaceShadowmap();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ScreenSpaceShadowsMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ScreenSpaceShadowsMaterial();

  constexpr void __cordl_internal_set_m_RenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_ScreenSpaceShadowmap(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_ScreenSpaceShadowsMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x1614158, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* screenspaceShadowsMaterial);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowResolvePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowResolvePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowResolvePass(ScreenSpaceShadowResolvePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowResolvePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowResolvePass(ScreenSpaceShadowResolvePass const&) = delete;

  /// @brief Field m_ScreenSpaceShadowsMaterial, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ScreenSpaceShadowsMaterial;

  /// @brief Field m_ScreenSpaceShadowmap, offset: 0xe0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_ScreenSpaceShadowmap;

  /// @brief Field m_RenderTextureDescriptor, offset: 0x110, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_RenderTextureDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass, 0x148>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass, ___m_ScreenSpaceShadowsMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass, ___m_ScreenSpaceShadowmap) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass, ___m_RenderTextureDescriptor) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ScreenSpaceShadowResolvePass*, "UnityEngine.Rendering.Universal.Internal", "ScreenSpaceShadowResolvePass");
