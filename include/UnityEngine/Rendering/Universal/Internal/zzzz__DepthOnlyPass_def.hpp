#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(DepthOnlyPass)
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
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass);
// Type: UnityEngine.Rendering.Universal.Internal::DepthOnlyPass
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 348, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DepthOnlyPass*
class CORDL_TYPE DepthOnlyPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field <allocateDepth>k__BackingField, offset 0x13c, size 0x1
  __declspec(property(get = __cordl_internal_get__allocateDepth_k__BackingField, put = __cordl_internal_set__allocateDepth_k__BackingField)) bool _allocateDepth_k__BackingField;

  /// @brief Field <depthAttachmentHandle>k__BackingField, offset 0xd8, size 0x30
  __declspec(property(get = __cordl_internal_get__depthAttachmentHandle_k__BackingField,
                      put = __cordl_internal_set__depthAttachmentHandle_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _depthAttachmentHandle_k__BackingField;

  /// @brief Field <descriptor>k__BackingField, offset 0x108, size 0x34
  __declspec(property(get = __cordl_internal_get__descriptor_k__BackingField,
                      put = __cordl_internal_set__descriptor_k__BackingField))::UnityEngine::RenderTextureDescriptor _descriptor_k__BackingField;

  /// @brief Field <shaderTagId>k__BackingField, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get__shaderTagId_k__BackingField,
                      put = __cordl_internal_set__shaderTagId_k__BackingField))::UnityEngine::Rendering::ShaderTagId _shaderTagId_k__BackingField;

  __declspec(property(get = get_allocateDepth, put = set_allocateDepth)) bool allocateDepth;

  __declspec(property(get = get_depthAttachmentHandle, put = set_depthAttachmentHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachmentHandle;

  __declspec(property(get = get_descriptor, put = set_descriptor))::UnityEngine::RenderTextureDescriptor descriptor;

  /// @brief Field k_ShaderTagId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_ShaderTagId, put = setStaticF_k_ShaderTagId))::UnityEngine::Rendering::ShaderTagId k_ShaderTagId;

  /// @brief Field m_FilteringSettings, offset 0x144, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  __declspec(property(get = get_shaderTagId, put = set_shaderTagId))::UnityEngine::Rendering::ShaderTagId shaderTagId;

  /// @brief Method Execute, addr 0x29b6564, size 0x208, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                       ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  /// @brief Method OnCameraCleanup, addr 0x29b676c, size 0x144, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x29b63bc, size 0x1a8, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x29b62f0, size 0xcc, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle depthAttachmentHandle);

  constexpr bool const& __cordl_internal_get__allocateDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allocateDepth_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__depthAttachmentHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__depthAttachmentHandle_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__descriptor_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__descriptor_k__BackingField();

  constexpr ::UnityEngine::Rendering::ShaderTagId const& __cordl_internal_get__shaderTagId_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ShaderTagId& __cordl_internal_get__shaderTagId_k__BackingField();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr void __cordl_internal_set__allocateDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__depthAttachmentHandle_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__descriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__shaderTagId_k__BackingField(::UnityEngine::Rendering::ShaderTagId value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  /// @brief Method .ctor, addr 0x29b6190, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_ShaderTagId();

  /// @brief Method get_allocateDepth, addr 0x29b616c, size 0x8, virtual false, abstract: false, final false
  inline bool get_allocateDepth();

  /// @brief Method get_depthAttachmentHandle, addr 0x29b60fc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_depthAttachmentHandle();

  /// @brief Method get_descriptor, addr 0x29b612c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_descriptor();

  /// @brief Method get_shaderTagId, addr 0x29b6180, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId get_shaderTagId();

  static inline void setStaticF_k_ShaderTagId(::UnityEngine::Rendering::ShaderTagId value);

  /// @brief Method set_allocateDepth, addr 0x29b6174, size 0xc, virtual false, abstract: false, final false
  inline void set_allocateDepth(bool value);

  /// @brief Method set_depthAttachmentHandle, addr 0x29b6114, size 0x18, virtual false, abstract: false, final false
  inline void set_depthAttachmentHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_descriptor, addr 0x29b614c, size 0x20, virtual false, abstract: false, final false
  inline void set_descriptor(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method set_shaderTagId, addr 0x29b6188, size 0x8, virtual false, abstract: false, final false
  inline void set_shaderTagId(::UnityEngine::Rendering::ShaderTagId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOnlyPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOnlyPass(DepthOnlyPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOnlyPass(DepthOnlyPass const&) = delete;

  /// @brief Field <depthAttachmentHandle>k__BackingField, offset: 0xd8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____depthAttachmentHandle_k__BackingField;

  /// @brief Field <descriptor>k__BackingField, offset: 0x108, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____descriptor_k__BackingField;

  /// @brief Field <allocateDepth>k__BackingField, offset: 0x13c, size: 0x1, def value: None
  bool ____allocateDepth_k__BackingField;

  /// @brief Field <shaderTagId>k__BackingField, offset: 0x140, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderTagId ____shaderTagId_k__BackingField;

  /// @brief Field m_FilteringSettings, offset: 0x144, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____depthAttachmentHandle_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____descriptor_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____allocateDepth_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____shaderTagId_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ___m_FilteringSettings) == 0x144, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*, "UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass");
