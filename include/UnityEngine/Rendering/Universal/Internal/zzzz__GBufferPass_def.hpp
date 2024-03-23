#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GBufferPass)
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
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
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::GBufferPass);
// Type: UnityEngine.Rendering.Universal.Internal::GBufferPass
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 380, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::GBufferPass*
class CORDL_TYPE GBufferPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_DeferredLights, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_FilteringSettings, offset 0xf8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_ProfilingSampler, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_RenderStateBlock, offset 0x110, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock))::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field m_RenderStateBlocks, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlocks,
                      put = __cordl_internal_set_m_RenderStateBlocks))::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> m_RenderStateBlocks;

  /// @brief Field m_ShaderTagValues, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagValues,
                      put = __cordl_internal_set_m_ShaderTagValues))::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> m_ShaderTagValues;

  /// @brief Field s_CameraNormalsTextureID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraNormalsTextureID, put = setStaticF_s_CameraNormalsTextureID)) int32_t s_CameraNormalsTextureID;

  /// @brief Field s_ShaderTagLit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderTagLit, put = setStaticF_s_ShaderTagLit))::UnityEngine::Rendering::ShaderTagId s_ShaderTagLit;

  /// @brief Field s_ShaderTagSimpleLit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderTagSimpleLit, put = setStaticF_s_ShaderTagSimpleLit))::UnityEngine::Rendering::ShaderTagId s_ShaderTagSimpleLit;

  /// @brief Field s_ShaderTagUniversalGBuffer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderTagUniversalGBuffer, put = setStaticF_s_ShaderTagUniversalGBuffer))::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalGBuffer;

  /// @brief Field s_ShaderTagUniversalMaterialType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderTagUniversalMaterialType,
                             put = setStaticF_s_ShaderTagUniversalMaterialType))::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalMaterialType;

  /// @brief Field s_ShaderTagUnlit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderTagUnlit, put = setStaticF_s_ShaderTagUnlit))::UnityEngine::Rendering::ShaderTagId s_ShaderTagUnlit;

  /// @brief Method Configure, addr 0x29b8470, size 0x248, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x29b86b8, size 0x394, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                     ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                     ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                                     ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  /// @brief Method OnCameraCleanup, addr 0x29b8a4c, size 0xc4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> const& __cordl_internal_get_m_RenderStateBlocks() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*>& __cordl_internal_get_m_RenderStateBlocks();

  constexpr ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagValues() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*>& __cordl_internal_get_m_ShaderTagValues();

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  constexpr void __cordl_internal_set_m_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> value);

  constexpr void __cordl_internal_set_m_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> value);

  /// @brief Method .ctor, addr 0x29b7fd4, size 0x49c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                    ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  static inline int32_t getStaticF_s_CameraNormalsTextureID();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagLit();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagSimpleLit();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUniversalGBuffer();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUniversalMaterialType();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUnlit();

  static inline void setStaticF_s_CameraNormalsTextureID(int32_t value);

  static inline void setStaticF_s_ShaderTagLit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagSimpleLit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUniversalGBuffer(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUniversalMaterialType(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUnlit(::UnityEngine::Rendering::ShaderTagId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GBufferPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GBufferPass(GBufferPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GBufferPass(GBufferPass const&) = delete;

  /// @brief Field m_ProfilingSampler, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_DeferredLights, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_ShaderTagValues, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> ___m_ShaderTagValues;

  /// @brief Field m_RenderStateBlocks, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> ___m_RenderStateBlocks;

  /// @brief Field m_FilteringSettings, offset: 0xf8, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_RenderStateBlock, offset: 0x110, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::GBufferPass, 0x180>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_ProfilingSampler) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_DeferredLights) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_ShaderTagValues) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_RenderStateBlocks) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_FilteringSettings) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_RenderStateBlock) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass");
