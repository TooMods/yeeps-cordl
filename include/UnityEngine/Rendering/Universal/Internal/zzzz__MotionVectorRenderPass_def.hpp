#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MotionVectorRenderPass)
namespace UnityEngine::Rendering::Universal::Internal {
class PreviousFrameData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class MotionVectorRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass);
// Type: UnityEngine.Rendering.Universal.Internal::MotionVectorRenderPass
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::MotionVectorRenderPass*
class CORDL_TYPE MotionVectorRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_CameraMaterial, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraMaterial, put = __cordl_internal_set_m_CameraMaterial))::UnityW<::UnityEngine::Material> m_CameraMaterial;

  /// @brief Field m_MotionData, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionData, put = __cordl_internal_set_m_MotionData))::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* m_MotionData;

  /// @brief Field m_MotionVectorHandle, offset 0xd8, size 0x30
  __declspec(property(get = __cordl_internal_get_m_MotionVectorHandle, put = __cordl_internal_set_m_MotionVectorHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle m_MotionVectorHandle;

  /// @brief Field m_ObjectMaterial, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectMaterial, put = __cordl_internal_set_m_ObjectMaterial))::UnityW<::UnityEngine::Material> m_ObjectMaterial;

  /// @brief Field m_ProfilingSampler, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field s_ShaderTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ShaderTags, put = setStaticF_s_ShaderTags))::ArrayW<::StringW, ::Array<::StringW>*> s_ShaderTags;

  /// @brief Method Configure, addr 0x29ba4d0, size 0x158, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method DrawCameraMotionVectors, addr 0x29ba9d8, size 0xb8, virtual false, abstract: false, final false
  inline void DrawCameraMotionVectors(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera);

  /// @brief Method DrawObjectMotionVectors, addr 0x29baa90, size 0x164, virtual false, abstract: false, final false
  inline void DrawObjectMotionVectors(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                      ::UnityEngine::Camera* camera);

  /// @brief Method Execute, addr 0x29ba628, size 0x370, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteCommand, addr 0x29ba998, size 0x40, virtual false, abstract: false, final false
  inline void ExecuteCommand(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method FrameCleanup, addr 0x29bae1c, size 0x13c, virtual true, abstract: false, final false
  inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetDrawingSettings, addr 0x29babf4, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings GetDrawingSettings(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* New_ctor(::UnityEngine::Material* cameraMaterial, ::UnityEngine::Material* objectMaterial);

  /// @brief Method Setup, addr 0x29ba4c8, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* frameData);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMaterial();

  constexpr ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*& __cordl_internal_get_m_MotionData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*> const& __cordl_internal_get_m_MotionData() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_MotionVectorHandle() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_MotionVectorHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ObjectMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ObjectMaterial();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr void __cordl_internal_set_m_CameraMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_MotionData(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* value);

  constexpr void __cordl_internal_set_m_MotionVectorHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_ObjectMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x29ba450, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* cameraMaterial, ::UnityEngine::Material* objectMaterial);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_ShaderTags();

  static inline void setStaticF_s_ShaderTags(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRenderPass(MotionVectorRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRenderPass(MotionVectorRenderPass const&) = delete;

  /// @brief Field m_MotionVectorHandle, offset: 0xd8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_MotionVectorHandle;

  /// @brief Field m_CameraMaterial, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CameraMaterial;

  /// @brief Field m_ObjectMaterial, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ObjectMaterial;

  /// @brief Field m_MotionData, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* ___m_MotionData;

  /// @brief Field m_ProfilingSampler, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field kMotionVectorTexture offset 0xffffffff size 0x8
  static constexpr ::ConstString kMotionVectorTexture{ u"_MotionVectorTexture" };

  /// @brief Field kPreviousViewProjectionMatrix offset 0xffffffff size 0x8
  static constexpr ::ConstString kPreviousViewProjectionMatrix{ u"_PrevViewProjMatrix" };

  /// @brief Field kPreviousViewProjectionMatrixStero offset 0xffffffff size 0x8
  static constexpr ::ConstString kPreviousViewProjectionMatrixStero{ u"_PrevViewProjMStereo" };

  /// @brief Field m_TargetFormat value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const m_TargetFormat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, ___m_MotionVectorHandle) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, ___m_CameraMaterial) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, ___m_ObjectMaterial) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, ___m_MotionData) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass, ___m_ProfilingSampler) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass*, "UnityEngine.Rendering.Universal.Internal", "MotionVectorRenderPass");
