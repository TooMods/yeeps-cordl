#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceShadows)
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsSettings;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceShadows__ScreenSpaceShadowsPass;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceShadows__ScreenSpaceShadowsPostPass;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceShadows__ScreenSpaceShadowsPass;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceShadows__ScreenSpaceShadowsPostPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadows);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass);
// Type: ::ScreenSpaceShadowsPass
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScreenSpaceShadows::ScreenSpaceShadowsPass*
class CORDL_TYPE __ScreenSpaceShadows__ScreenSpaceShadowsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_CurrentSettings, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSettings, put = __cordl_internal_set_m_CurrentSettings))::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_CurrentSettings;

  /// @brief Field m_Material, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material))::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_ProfilerTag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilerTag, put = setStaticF_m_ProfilerTag))::StringW m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_RenderTarget, offset 0x120, size 0x30
  __declspec(property(get = __cordl_internal_get_m_RenderTarget, put = __cordl_internal_set_m_RenderTarget))::UnityEngine::Rendering::Universal::RenderTargetHandle m_RenderTarget;

  /// @brief Field m_RenderTextureDescriptor, offset 0xe8, size 0x34
  __declspec(property(get = __cordl_internal_get_m_RenderTextureDescriptor, put = __cordl_internal_set_m_RenderTextureDescriptor))::UnityEngine::RenderTextureDescriptor m_RenderTextureDescriptor;

  /// @brief Method Execute, addr 0x272d964, size 0x664, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x272dfc8, size 0x6c, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x272d5fc, size 0x18c, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x272d4b8, size 0x78, virtual false, abstract: false, final false
  inline bool Setup(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* featureSettings, ::UnityEngine::Material* material);

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& __cordl_internal_get_m_CurrentSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*> const& __cordl_internal_get_m_CurrentSettings() const;

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_RenderTarget() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_RenderTarget();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_RenderTextureDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_RenderTextureDescriptor();

  constexpr void __cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_RenderTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_RenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method .ctor, addr 0x272d0dc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_m_ProfilerTag();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline void setStaticF_m_ProfilerTag(::StringW value);

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceShadows__ScreenSpaceShadowsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceShadows__ScreenSpaceShadowsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenSpaceShadows__ScreenSpaceShadowsPass(__ScreenSpaceShadows__ScreenSpaceShadowsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceShadows__ScreenSpaceShadowsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenSpaceShadows__ScreenSpaceShadowsPass(__ScreenSpaceShadows__ScreenSpaceShadowsPass const&) = delete;

  /// @brief Field m_Material, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_CurrentSettings, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* ___m_CurrentSettings;

  /// @brief Field m_RenderTextureDescriptor, offset: 0xe8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_RenderTextureDescriptor;

  /// @brief Field m_RenderTarget, offset: 0x120, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_RenderTarget;

  /// @brief Field k_SSShadowsTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SSShadowsTextureName{ u"_ScreenSpaceShadowmapTexture" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass, 0x150>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass, ___m_Material) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass, ___m_CurrentSettings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass, ___m_RenderTextureDescriptor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass, ___m_RenderTarget) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::ScreenSpaceShadowsPostPass
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScreenSpaceShadows::ScreenSpaceShadowsPostPass*
class CORDL_TYPE __ScreenSpaceShadows__ScreenSpaceShadowsPostPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_ProfilerTag, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilerTag, put = setStaticF_m_ProfilerTag))::StringW m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Method Configure, addr 0x272e0e8, size 0x4c, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x272e134, size 0x214, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass* New_ctor();

  /// @brief Method .ctor, addr 0x272d16c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_m_ProfilerTag();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline void setStaticF_m_ProfilerTag(::StringW value);

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceShadows__ScreenSpaceShadowsPostPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceShadows__ScreenSpaceShadowsPostPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenSpaceShadows__ScreenSpaceShadowsPostPass(__ScreenSpaceShadows__ScreenSpaceShadowsPostPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceShadows__ScreenSpaceShadowsPostPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenSpaceShadows__ScreenSpaceShadowsPostPass(__ScreenSpaceShadows__ScreenSpaceShadowsPostPass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ScreenSpaceShadows
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScreenSpaceShadows*
class CORDL_TYPE ScreenSpaceShadows : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using ScreenSpaceShadowsPass = ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass;

  using ScreenSpaceShadowsPostPass = ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass;

  /// @brief Field m_Material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material))::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_SSShadowsPass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSShadowsPass,
                      put = __cordl_internal_set_m_SSShadowsPass))::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass* m_SSShadowsPass;

  /// @brief Field m_SSShadowsPostPass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSShadowsPostPass,
                      put = __cordl_internal_set_m_SSShadowsPostPass))::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass* m_SSShadowsPostPass;

  /// @brief Field m_Settings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_Settings;

  /// @brief Field m_Shader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader))::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Method AddRenderPasses, addr 0x272d2c0, size 0x1f8, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x272d018, size 0xc4, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x272d530, size 0x5c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method LoadMaterial, addr 0x272d174, size 0x14c, virtual false, abstract: false, final false
  inline bool LoadMaterial();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass*& __cordl_internal_get_m_SSShadowsPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass*> const& __cordl_internal_get_m_SSShadowsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass*& __cordl_internal_get_m_SSShadowsPostPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass*> const& __cordl_internal_get_m_SSShadowsPostPass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SSShadowsPass(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass* value);

  constexpr void __cordl_internal_set_m_SSShadowsPostPass(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x272d58c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadows();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadows(ScreenSpaceShadows&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadows(ScreenSpaceShadows const&) = delete;

  /// @brief Field m_Shader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_Settings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* ___m_Settings;

  /// @brief Field m_Material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_SSShadowsPass, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass* ___m_SSShadowsPass;

  /// @brief Field m_SSShadowsPostPass, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass* ___m_SSShadowsPostPass;

  /// @brief Field k_ShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShaderName{ u"Hidden/Universal Render Pipeline/ScreenSpaceShadows" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadows, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Shader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_SSShadowsPass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_SSShadowsPostPass) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScreenSpaceShadows__ScreenSpaceShadowsPostPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPostPass");
