#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DBufferRenderPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DBufferSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawDBufferSystem;
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
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferRenderPass);
// Type: UnityEngine.Rendering.Universal::DBufferRenderPass
// SizeInfo { instance_size: 424, native_size: -1, calculated_instance_size: 424, calculated_native_size: 424, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DBufferRenderPass*
class CORDL_TYPE DBufferRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field <cameraDepthAttachmentIndentifier>k__BackingField, offset 0x180, size 0x28
  __declspec(property(get = __cordl_internal_get__cameraDepthAttachmentIndentifier_k__BackingField,
                      put = __cordl_internal_set__cameraDepthAttachmentIndentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _cameraDepthAttachmentIndentifier_k__BackingField;

  /// @brief Field <cameraDepthTextureIndentifier>k__BackingField, offset 0x158, size 0x28
  __declspec(property(get = __cordl_internal_get__cameraDepthTextureIndentifier_k__BackingField,
                      put = __cordl_internal_set__cameraDepthTextureIndentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _cameraDepthTextureIndentifier_k__BackingField;

  /// @brief Field <dBufferColorIndentifiers>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__dBufferColorIndentifiers_k__BackingField, put = __cordl_internal_set__dBufferColorIndentifiers_k__BackingField))::ArrayW<
      ::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> _dBufferColorIndentifiers_k__BackingField;

  /// @brief Field <dBufferDepthIndentifier>k__BackingField, offset 0x130, size 0x28
  __declspec(property(get = __cordl_internal_get__dBufferDepthIndentifier_k__BackingField,
                      put = __cordl_internal_set__dBufferDepthIndentifier_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _dBufferDepthIndentifier_k__BackingField;

  /// @brief Field <deferredLights>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__deferredLights_k__BackingField,
                      put = __cordl_internal_set__deferredLights_k__BackingField))::UnityEngine::Rendering::Universal::Internal::DeferredLights* _deferredLights_k__BackingField;

  __declspec(property(get = get_cameraDepthAttachmentIndentifier, put = set_cameraDepthAttachmentIndentifier))::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthAttachmentIndentifier;

  __declspec(property(get = get_cameraDepthTextureIndentifier, put = set_cameraDepthTextureIndentifier))::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthTextureIndentifier;

  __declspec(
      property(get = get_dBufferColorIndentifiers,
               put = set_dBufferColorIndentifiers))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> dBufferColorIndentifiers;

  __declspec(property(get = get_dBufferDepthIndentifier, put = set_dBufferDepthIndentifier))::UnityEngine::Rendering::RenderTargetIdentifier dBufferDepthIndentifier;

  __declspec(property(get = get_deferredLights, put = set_deferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  __declspec(property(get = get_isDeferred)) bool isDeferred;

  /// @brief Field m_DBufferClear, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferClear, put = __cordl_internal_set_m_DBufferClear))::UnityW<::UnityEngine::Material> m_DBufferClear;

  /// @brief Field m_DBufferCount, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DBufferCount, put = __cordl_internal_set_m_DBufferCount)) int32_t m_DBufferCount;

  /// @brief Field m_DrawSystem, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem))::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xf0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_ProfilingSampler, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Settings, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::DBufferSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Field s_DBufferDepthName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DBufferDepthName, put = setStaticF_s_DBufferDepthName))::StringW s_DBufferDepthName;

  /// @brief Field s_DBufferNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DBufferNames, put = setStaticF_s_DBufferNames))::ArrayW<::StringW, ::Array<::StringW>*> s_DBufferNames;

  /// @brief Method ClearDBuffers, addr 0x2c66250, size 0x2d0, virtual false, abstract: false, final false
  inline void ClearDBuffers(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method Execute, addr 0x2c65ec4, size 0x38c, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::DBufferRenderPass* New_ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings,
                                                                                 ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem);

  /// @brief Method OnCameraCleanup, addr 0x2c66744, size 0x1f4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x2c65b18, size 0x3ac, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__cameraDepthAttachmentIndentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__cameraDepthAttachmentIndentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__cameraDepthTextureIndentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__cameraDepthTextureIndentifier_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const&
  __cordl_internal_get__dBufferColorIndentifiers_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get__dBufferColorIndentifiers_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__dBufferDepthIndentifier_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__dBufferDepthIndentifier_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get__deferredLights_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const& __cordl_internal_get__deferredLights_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DBufferClear() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DBufferClear();

  constexpr int32_t const& __cordl_internal_get_m_DBufferCount() const;

  constexpr int32_t& __cordl_internal_get_m_DBufferCount();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*> const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DBufferSettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr void __cordl_internal_set__cameraDepthAttachmentIndentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__cameraDepthTextureIndentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void
  __cordl_internal_set__dBufferColorIndentifiers_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set__dBufferDepthIndentifier_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__deferredLights_k__BackingField(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DBufferClear(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DBufferCount(int32_t value);

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DBufferSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x2c6571c, size 0x3fc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem);

  static inline ::StringW getStaticF_s_DBufferDepthName();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_DBufferNames();

  /// @brief Method get_cameraDepthAttachmentIndentifier, addr 0x2c656f4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthAttachmentIndentifier();

  /// @brief Method get_cameraDepthTextureIndentifier, addr 0x2c656c4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTextureIndentifier();

  /// @brief Method get_dBufferColorIndentifiers, addr 0x2c6568c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_dBufferColorIndentifiers();

  /// @brief Method get_dBufferDepthIndentifier, addr 0x2c6569c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_dBufferDepthIndentifier();

  /// @brief Method get_deferredLights, addr 0x2c6566c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights();

  /// @brief Method get_isDeferred, addr 0x2c6567c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isDeferred();

  static inline void setStaticF_s_DBufferDepthName(::StringW value);

  static inline void setStaticF_s_DBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_cameraDepthAttachmentIndentifier, addr 0x2c65708, size 0x14, virtual false, abstract: false, final false
  inline void set_cameraDepthAttachmentIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_cameraDepthTextureIndentifier, addr 0x2c656dc, size 0x18, virtual false, abstract: false, final false
  inline void set_cameraDepthTextureIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_dBufferColorIndentifiers, addr 0x2c65694, size 0x8, virtual false, abstract: false, final false
  inline void set_dBufferColorIndentifiers(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  /// @brief Method set_dBufferDepthIndentifier, addr 0x2c656b0, size 0x14, virtual false, abstract: false, final false
  inline void set_dBufferDepthIndentifier(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_deferredLights, addr 0x2c65674, size 0x8, virtual false, abstract: false, final false
  inline void set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferRenderPass(DBufferRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferRenderPass(DBufferRenderPass const&) = delete;

  /// @brief Field m_DrawSystem, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferSettings* ___m_Settings;

  /// @brief Field m_DBufferClear, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DBufferClear;

  /// @brief Field m_FilteringSettings, offset: 0xf0, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DBufferCount, offset: 0x110, size: 0x4, def value: None
  int32_t ___m_DBufferCount;

  /// @brief Field m_ProfilingSampler, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field <deferredLights>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ____deferredLights_k__BackingField;

  /// @brief Field <dBufferColorIndentifiers>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ____dBufferColorIndentifiers_k__BackingField;

  /// @brief Field <dBufferDepthIndentifier>k__BackingField, offset: 0x130, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____dBufferDepthIndentifier_k__BackingField;

  /// @brief Field <cameraDepthTextureIndentifier>k__BackingField, offset: 0x158, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____cameraDepthTextureIndentifier_k__BackingField;

  /// @brief Field <cameraDepthAttachmentIndentifier>k__BackingField, offset: 0x180, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____cameraDepthAttachmentIndentifier_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferRenderPass, 0x1a8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DrawSystem) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_Settings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DBufferClear) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_FilteringSettings) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_ShaderTagIdList) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DBufferCount) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_ProfilingSampler) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____deferredLights_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____dBufferColorIndentifiers_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____dBufferDepthIndentifier_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____cameraDepthTextureIndentifier_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____cameraDepthAttachmentIndentifier_k__BackingField) == 0x180, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferRenderPass*, "UnityEngine.Rendering.Universal", "DBufferRenderPass");
