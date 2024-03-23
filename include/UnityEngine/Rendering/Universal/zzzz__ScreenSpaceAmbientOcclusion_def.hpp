#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusion)
namespace GlobalNamespace {
struct __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass;
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
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusion;
}
namespace UnityEngine::Rendering::Universal {
class __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass);
// Type: ::ShaderPasses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScreenSpaceAmbientOcclusion::ScreenSpaceAmbientOcclusionPass::ShaderPasses
struct CORDL_TYPE __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses_Unwrapped
  enum struct ____ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses_Unwrapped : int32_t {
    __E_AO = static_cast<int32_t>(0x0),
    __E_BlurHorizontal = static_cast<int32_t>(0x1),
    __E_BlurVertical = static_cast<int32_t>(0x2),
    __E_BlurFinal = static_cast<int32_t>(0x3),
    __E_AfterOpaque = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses_Unwrapped() const noexcept {
    return static_cast<____ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AO value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses const AO;

  /// @brief Field AfterOpaque value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses const AfterOpaque;

  /// @brief Field BlurFinal value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses const BlurFinal;

  /// @brief Field BlurHorizontal value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses const BlurHorizontal;

  /// @brief Field BlurVertical value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses const BlurVertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScreenSpaceAmbientOcclusionPass
// SizeInfo { instance_size: 616, native_size: -1, calculated_instance_size: 616, calculated_native_size: 616, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ScreenSpaceAmbientOcclusion::ScreenSpaceAmbientOcclusionPass*
class CORDL_TYPE __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using ShaderPasses = ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses;

  __declspec(property(get = get_isRendererDeferred)) bool isRendererDeferred;

  /// @brief Field m_AOPassDescriptor, offset 0x1c0, size 0x34
  __declspec(property(get = __cordl_internal_get_m_AOPassDescriptor, put = __cordl_internal_set_m_AOPassDescriptor))::UnityEngine::RenderTextureDescriptor m_AOPassDescriptor;

  /// @brief Field m_BlurPassesDescriptor, offset 0x1f4, size 0x34
  __declspec(property(get = __cordl_internal_get_m_BlurPassesDescriptor, put = __cordl_internal_set_m_BlurPassesDescriptor))::UnityEngine::RenderTextureDescriptor m_BlurPassesDescriptor;

  /// @brief Field m_CameraTopLeftCorner, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraTopLeftCorner,
                      put = __cordl_internal_set_m_CameraTopLeftCorner))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraTopLeftCorner;

  /// @brief Field m_CameraViewProjections, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraViewProjections,
                      put = __cordl_internal_set_m_CameraViewProjections))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_CameraViewProjections;

  /// @brief Field m_CameraXExtent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraXExtent, put = __cordl_internal_set_m_CameraXExtent))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraXExtent;

  /// @brief Field m_CameraYExtent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraYExtent, put = __cordl_internal_set_m_CameraYExtent))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraYExtent;

  /// @brief Field m_CameraZExtent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraZExtent, put = __cordl_internal_set_m_CameraZExtent))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_CameraZExtent;

  /// @brief Field m_CurrentSettings, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSettings,
                      put = __cordl_internal_set_m_CurrentSettings))::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_CurrentSettings;

  /// @brief Field m_FinalDescriptor, offset 0x228, size 0x34
  __declspec(property(get = __cordl_internal_get_m_FinalDescriptor, put = __cordl_internal_set_m_FinalDescriptor))::UnityEngine::RenderTextureDescriptor m_FinalDescriptor;

  /// @brief Field m_Material, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material))::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_ProfilingSampler, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_Renderer, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer, put = __cordl_internal_set_m_Renderer))::UnityEngine::Rendering::Universal::ScriptableRenderer* m_Renderer;

  /// @brief Field m_SSAOTexture1Target, offset 0x120, size 0x28
  __declspec(property(get = __cordl_internal_get_m_SSAOTexture1Target, put = __cordl_internal_set_m_SSAOTexture1Target))::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture1Target;

  /// @brief Field m_SSAOTexture2Target, offset 0x148, size 0x28
  __declspec(property(get = __cordl_internal_get_m_SSAOTexture2Target, put = __cordl_internal_set_m_SSAOTexture2Target))::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture2Target;

  /// @brief Field m_SSAOTexture3Target, offset 0x170, size 0x28
  __declspec(property(get = __cordl_internal_get_m_SSAOTexture3Target, put = __cordl_internal_set_m_SSAOTexture3Target))::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTexture3Target;

  /// @brief Field m_SSAOTextureFinalTarget, offset 0x198, size 0x28
  __declspec(property(get = __cordl_internal_get_m_SSAOTextureFinalTarget,
                      put = __cordl_internal_set_m_SSAOTextureFinalTarget))::UnityEngine::Rendering::RenderTargetIdentifier m_SSAOTextureFinalTarget;

  /// @brief Field m_SupportsR8RenderTextureFormat, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsR8RenderTextureFormat, put = __cordl_internal_set_m_SupportsR8RenderTextureFormat)) bool m_SupportsR8RenderTextureFormat;

  /// @brief Field s_BaseMapID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_BaseMapID, put = setStaticF_s_BaseMapID)) int32_t s_BaseMapID;

  /// @brief Field s_CameraViewProjectionsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraViewProjectionsID, put = setStaticF_s_CameraViewProjectionsID)) int32_t s_CameraViewProjectionsID;

  /// @brief Field s_CameraViewTopLeftCornerID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraViewTopLeftCornerID, put = setStaticF_s_CameraViewTopLeftCornerID)) int32_t s_CameraViewTopLeftCornerID;

  /// @brief Field s_CameraViewXExtentID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraViewXExtentID, put = setStaticF_s_CameraViewXExtentID)) int32_t s_CameraViewXExtentID;

  /// @brief Field s_CameraViewYExtentID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraViewYExtentID, put = setStaticF_s_CameraViewYExtentID)) int32_t s_CameraViewYExtentID;

  /// @brief Field s_CameraViewZExtentID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CameraViewZExtentID, put = setStaticF_s_CameraViewZExtentID)) int32_t s_CameraViewZExtentID;

  /// @brief Field s_ProjectionParams2ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ProjectionParams2ID, put = setStaticF_s_ProjectionParams2ID)) int32_t s_ProjectionParams2ID;

  /// @brief Field s_SSAOParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SSAOParamsID, put = setStaticF_s_SSAOParamsID)) int32_t s_SSAOParamsID;

  /// @brief Field s_SSAOTexture1ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SSAOTexture1ID, put = setStaticF_s_SSAOTexture1ID)) int32_t s_SSAOTexture1ID;

  /// @brief Field s_SSAOTexture2ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SSAOTexture2ID, put = setStaticF_s_SSAOTexture2ID)) int32_t s_SSAOTexture2ID;

  /// @brief Field s_SSAOTexture3ID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SSAOTexture3ID, put = setStaticF_s_SSAOTexture3ID)) int32_t s_SSAOTexture3ID;

  /// @brief Field s_SSAOTextureFinalID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SSAOTextureFinalID, put = setStaticF_s_SSAOTextureFinalID)) int32_t s_SSAOTextureFinalID;

  /// @brief Method Execute, addr 0x272bd68, size 0x6dc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x272cc44, size 0x160, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x272b2bc, size 0xaac, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x272c444, size 0x148, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier target,
                     ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses pass);

  /// @brief Method RenderAndSetBaseMap, addr 0x272c58c, size 0xe0, virtual false, abstract: false, final false
  inline void RenderAndSetBaseMap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier baseMap, ::UnityEngine::Rendering::RenderTargetIdentifier target,
                                  ::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses pass);

  /// @brief Method Setup, addr 0x272b000, size 0x160, virtual false, abstract: false, final false
  inline bool Setup(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* featureSettings, ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                    ::UnityEngine::Material* material);

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_AOPassDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_AOPassDescriptor();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_BlurPassesDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_BlurPassesDescriptor();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraTopLeftCorner() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraTopLeftCorner();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_CameraViewProjections() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_CameraViewProjections();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraXExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraXExtent();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraYExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraYExtent();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_CameraZExtent() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_CameraZExtent();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& __cordl_internal_get_m_CurrentSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> const& __cordl_internal_get_m_CurrentSettings() const;

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_FinalDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_FinalDescriptor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_m_Renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScriptableRenderer*> const& __cordl_internal_get_m_Renderer() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_SSAOTexture1Target() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_SSAOTexture1Target();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_SSAOTexture2Target() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_SSAOTexture2Target();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_SSAOTexture3Target() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_SSAOTexture3Target();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_SSAOTextureFinalTarget() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_SSAOTextureFinalTarget();

  constexpr bool const& __cordl_internal_get_m_SupportsR8RenderTextureFormat() const;

  constexpr bool& __cordl_internal_get_m_SupportsR8RenderTextureFormat();

  constexpr void __cordl_internal_set_m_AOPassDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_BlurPassesDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_CameraTopLeftCorner(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraViewProjections(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_CameraXExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraYExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CameraZExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value);

  constexpr void __cordl_internal_set_m_FinalDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_Renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  constexpr void __cordl_internal_set_m_SSAOTexture1Target(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_SSAOTexture2Target(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_SSAOTexture3Target(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_SSAOTextureFinalTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_SupportsR8RenderTextureFormat(bool value);

  /// @brief Method .ctor, addr 0x272aab8, size 0x284, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_BaseMapID();

  static inline int32_t getStaticF_s_CameraViewProjectionsID();

  static inline int32_t getStaticF_s_CameraViewTopLeftCornerID();

  static inline int32_t getStaticF_s_CameraViewXExtentID();

  static inline int32_t getStaticF_s_CameraViewYExtentID();

  static inline int32_t getStaticF_s_CameraViewZExtentID();

  static inline int32_t getStaticF_s_ProjectionParams2ID();

  static inline int32_t getStaticF_s_SSAOParamsID();

  static inline int32_t getStaticF_s_SSAOTexture1ID();

  static inline int32_t getStaticF_s_SSAOTexture2ID();

  static inline int32_t getStaticF_s_SSAOTexture3ID();

  static inline int32_t getStaticF_s_SSAOTextureFinalID();

  /// @brief Method get_isRendererDeferred, addr 0x272b250, size 0x6c, virtual false, abstract: false, final false
  inline bool get_isRendererDeferred();

  static inline void setStaticF_s_BaseMapID(int32_t value);

  static inline void setStaticF_s_CameraViewProjectionsID(int32_t value);

  static inline void setStaticF_s_CameraViewTopLeftCornerID(int32_t value);

  static inline void setStaticF_s_CameraViewXExtentID(int32_t value);

  static inline void setStaticF_s_CameraViewYExtentID(int32_t value);

  static inline void setStaticF_s_CameraViewZExtentID(int32_t value);

  static inline void setStaticF_s_ProjectionParams2ID(int32_t value);

  static inline void setStaticF_s_SSAOParamsID(int32_t value);

  static inline void setStaticF_s_SSAOTexture1ID(int32_t value);

  static inline void setStaticF_s_SSAOTexture2ID(int32_t value);

  static inline void setStaticF_s_SSAOTexture3ID(int32_t value);

  static inline void setStaticF_s_SSAOTextureFinalID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass(__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass(__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass const&) = delete;

  /// @brief Field m_SupportsR8RenderTextureFormat, offset: 0xd8, size: 0x1, def value: None
  bool ___m_SupportsR8RenderTextureFormat;

  /// @brief Field m_Material, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_CameraTopLeftCorner, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraTopLeftCorner;

  /// @brief Field m_CameraXExtent, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraXExtent;

  /// @brief Field m_CameraYExtent, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraYExtent;

  /// @brief Field m_CameraZExtent, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_CameraZExtent;

  /// @brief Field m_CameraViewProjections, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_CameraViewProjections;

  /// @brief Field m_ProfilingSampler, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_Renderer, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* ___m_Renderer;

  /// @brief Field m_SSAOTexture1Target, offset: 0x120, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_SSAOTexture1Target;

  /// @brief Field m_SSAOTexture2Target, offset: 0x148, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_SSAOTexture2Target;

  /// @brief Field m_SSAOTexture3Target, offset: 0x170, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_SSAOTexture3Target;

  /// @brief Field m_SSAOTextureFinalTarget, offset: 0x198, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_SSAOTextureFinalTarget;

  /// @brief Field m_AOPassDescriptor, offset: 0x1c0, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_AOPassDescriptor;

  /// @brief Field m_BlurPassesDescriptor, offset: 0x1f4, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_BlurPassesDescriptor;

  /// @brief Field m_FinalDescriptor, offset: 0x228, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_FinalDescriptor;

  /// @brief Field m_CurrentSettings, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* ___m_CurrentSettings;

  /// @brief Field k_SSAOAmbientOcclusionParamName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SSAOAmbientOcclusionParamName{ u"_AmbientOcclusionParam" };

  /// @brief Field k_SSAOTextureName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SSAOTextureName{ u"_ScreenSpaceOcclusionTexture" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, 0x268>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_SupportsR8RenderTextureFormat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_Material) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CameraTopLeftCorner) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CameraXExtent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CameraYExtent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CameraZExtent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CameraViewProjections) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_ProfilingSampler) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_Renderer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_SSAOTexture1Target) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_SSAOTexture2Target) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_SSAOTexture3Target) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_SSAOTextureFinalTarget) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_AOPassDescriptor) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_BlurPassesDescriptor) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_FinalDescriptor) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass, ___m_CurrentSettings) == 0x260, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ScreenSpaceAmbientOcclusion
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScreenSpaceAmbientOcclusion*
class CORDL_TYPE ScreenSpaceAmbientOcclusion : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using ScreenSpaceAmbientOcclusionPass = ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass;

  __declspec(property(get = get_afterOpaque)) bool afterOpaque;

  /// @brief Field m_Material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material))::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_SSAOPass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSAOPass,
                      put = __cordl_internal_set_m_SSAOPass))::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass* m_SSAOPass;

  /// @brief Field m_Settings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_Settings;

  /// @brief Field m_Shader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader))::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Method AddRenderPasses, addr 0x272ae88, size 0x178, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x272aa50, size 0x68, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x272b160, size 0x5c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetMaterial, addr 0x272ad3c, size 0x14c, virtual false, abstract: false, final false
  inline bool GetMaterial();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*& __cordl_internal_get_m_SSAOPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*> const& __cordl_internal_get_m_SSAOPass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SSAOPass(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x272b1bc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_afterOpaque, addr 0x272aa34, size 0x1c, virtual false, abstract: false, final false
  inline bool get_afterOpaque();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusion(ScreenSpaceAmbientOcclusion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusion(ScreenSpaceAmbientOcclusion const&) = delete;

  /// @brief Field m_Shader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_Settings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* ___m_Settings;

  /// @brief Field m_Material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_SSAOPass, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass* ___m_SSAOPass;

  /// @brief Field k_NormalReconstructionHighKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NormalReconstructionHighKeyword{ u"_RECONSTRUCT_NORMAL_HIGH" };

  /// @brief Field k_NormalReconstructionLowKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NormalReconstructionLowKeyword{ u"_RECONSTRUCT_NORMAL_LOW" };

  /// @brief Field k_NormalReconstructionMediumKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_NormalReconstructionMediumKeyword{ u"_RECONSTRUCT_NORMAL_MEDIUM" };

  /// @brief Field k_OrthographicCameraKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OrthographicCameraKeyword{ u"_ORTHOGRAPHIC" };

  /// @brief Field k_ShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShaderName{ u"Hidden/Universal Render Pipeline/ScreenSpaceAmbientOcclusion" };

  /// @brief Field k_SourceDepthKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthKeyword{ u"_SOURCE_DEPTH" };

  /// @brief Field k_SourceDepthNormalsKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthNormalsKeyword{ u"_SOURCE_DEPTH_NORMALS" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Shader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_SSAOPass) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass__ShaderPasses, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusion/ScreenSpaceAmbientOcclusionPass/ShaderPasses");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusion");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusion__ScreenSpaceAmbientOcclusionPass*, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusion/ScreenSpaceAmbientOcclusionPass");
