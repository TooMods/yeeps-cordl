#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DecalGBufferRenderPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawGBufferSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
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
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass);
// Type: UnityEngine.Rendering.Universal::DecalGBufferRenderPass
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalGBufferRenderPass*
class CORDL_TYPE DecalGBufferRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_DeferredLights, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DrawSystem, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem))::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xd8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_GbufferAttachments, offset 0x118, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_GbufferAttachments,
      put = __cordl_internal_set_m_GbufferAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_GbufferAttachments;

  /// @brief Field m_ProfilingSampler, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Settings, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method Execute, addr 0x2e19718, size 0x320, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                      ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem);

  /// @brief Method OnCameraCleanup, addr 0x2e19be4, size 0x11c, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x2e193e0, size 0x1d8, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x2e193d8, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*> const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_m_GbufferAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_m_GbufferAttachments();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x2e18af0, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalGBufferRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalGBufferRenderPass(DecalGBufferRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalGBufferRenderPass(DecalGBufferRenderPass const&) = delete;

  /// @brief Field m_FilteringSettings, offset: 0xd8, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ProfilingSampler, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_ShaderTagIdList, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DrawSystem, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___m_Settings;

  /// @brief Field m_DeferredLights, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_GbufferAttachments, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___m_GbufferAttachments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_FilteringSettings) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_ProfilingSampler) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_ShaderTagIdList) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_DrawSystem) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_Settings) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_DeferredLights) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_GbufferAttachments) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*, "UnityEngine.Rendering.Universal", "DecalGBufferRenderPass");
