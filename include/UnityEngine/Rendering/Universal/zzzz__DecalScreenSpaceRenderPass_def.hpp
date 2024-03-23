#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DecalScreenSpaceRenderPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawScreenSpaceSystem;
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
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass);
// Type: UnityEngine.Rendering.Universal::DecalScreenSpaceRenderPass
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalScreenSpaceRenderPass*
class CORDL_TYPE DecalScreenSpaceRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_DrawSystem, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem))::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xd8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_ProfilingSampler, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Settings, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method Execute, addr 0x2e19fa8, size 0x358, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                          ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem);

  /// @brief Method OnCameraCleanup, addr 0x2e1a300, size 0x11c, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*> const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x2e19d74, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceRenderPass(DecalScreenSpaceRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceRenderPass(DecalScreenSpaceRenderPass const&) = delete;

  /// @brief Field m_FilteringSettings, offset: 0xd8, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ProfilingSampler, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_ShaderTagIdList, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DrawSystem, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___m_Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, 0x110>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_FilteringSettings) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_ProfilingSampler) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_ShaderTagIdList) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_DrawSystem) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_Settings) == 0x108, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceRenderPass");
