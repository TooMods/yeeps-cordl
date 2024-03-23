#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DepthNormalOnlyPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
class DepthNormalOnlyPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass);
// Type: UnityEngine.Rendering.Universal.Internal::DepthNormalOnlyPass
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 460, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DepthNormalOnlyPass*
class CORDL_TYPE DepthNormalOnlyPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field <allocateDepth>k__BackingField, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get__allocateDepth_k__BackingField, put = __cordl_internal_set__allocateDepth_k__BackingField)) bool _allocateDepth_k__BackingField;

  /// @brief Field <allocateNormal>k__BackingField, offset 0x141, size 0x1
  __declspec(property(get = __cordl_internal_get__allocateNormal_k__BackingField, put = __cordl_internal_set__allocateNormal_k__BackingField)) bool _allocateNormal_k__BackingField;

  /// @brief Field <depthDescriptor>k__BackingField, offset 0x10c, size 0x34
  __declspec(property(get = __cordl_internal_get__depthDescriptor_k__BackingField,
                      put = __cordl_internal_set__depthDescriptor_k__BackingField))::UnityEngine::RenderTextureDescriptor _depthDescriptor_k__BackingField;

  /// @brief Field <depthHandle>k__BackingField, offset 0x150, size 0x30
  __declspec(property(get = __cordl_internal_get__depthHandle_k__BackingField,
                      put = __cordl_internal_set__depthHandle_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _depthHandle_k__BackingField;

  /// @brief Field <normalDescriptor>k__BackingField, offset 0xd8, size 0x34
  __declspec(property(get = __cordl_internal_get__normalDescriptor_k__BackingField,
                      put = __cordl_internal_set__normalDescriptor_k__BackingField))::UnityEngine::RenderTextureDescriptor _normalDescriptor_k__BackingField;

  /// @brief Field <normalHandle>k__BackingField, offset 0x180, size 0x30
  __declspec(property(get = __cordl_internal_get__normalHandle_k__BackingField,
                      put = __cordl_internal_set__normalHandle_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _normalHandle_k__BackingField;

  /// @brief Field <shaderTagIds>k__BackingField, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderTagIds_k__BackingField,
                      put = __cordl_internal_set__shaderTagIds_k__BackingField))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* _shaderTagIds_k__BackingField;

  __declspec(property(get = get_allocateDepth, put = set_allocateDepth)) bool allocateDepth;

  __declspec(property(get = get_allocateNormal, put = set_allocateNormal)) bool allocateNormal;

  __declspec(property(get = get_depthDescriptor, put = set_depthDescriptor))::UnityEngine::RenderTextureDescriptor depthDescriptor;

  __declspec(property(get = get_depthHandle, put = set_depthHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle depthHandle;

  /// @brief Field k_DepthNormals, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DepthNormals, put = setStaticF_k_DepthNormals))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* k_DepthNormals;

  /// @brief Field m_FilteringSettings, offset 0x1b0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_RendererMSAASamples, offset 0x1c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RendererMSAASamples, put = __cordl_internal_set_m_RendererMSAASamples)) int32_t m_RendererMSAASamples;

  __declspec(property(get = get_normalDescriptor, put = set_normalDescriptor))::UnityEngine::RenderTextureDescriptor normalDescriptor;

  __declspec(property(get = get_normalHandle, put = set_normalHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle normalHandle;

  __declspec(property(get = get_shaderTagIds, put = set_shaderTagIds))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIds;

  /// @brief Method Execute, addr 0x29b5be0, size 0x208, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                             ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  /// @brief Method OnCameraCleanup, addr 0x29b5de8, size 0x16c, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x29b5898, size 0x348, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x29b56fc, size 0x19c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle depthHandle,
                    ::UnityEngine::Rendering::Universal::RenderTargetHandle normalHandle);

  constexpr bool const& __cordl_internal_get__allocateDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allocateDepth_k__BackingField();

  constexpr bool const& __cordl_internal_get__allocateNormal_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allocateNormal_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__depthDescriptor_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__depthDescriptor_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__depthHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__depthHandle_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__normalDescriptor_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__normalDescriptor_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__normalHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__normalHandle_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get__shaderTagIds_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get__shaderTagIds_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr int32_t const& __cordl_internal_get_m_RendererMSAASamples() const;

  constexpr int32_t& __cordl_internal_get_m_RendererMSAASamples();

  constexpr void __cordl_internal_set__allocateDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__allocateNormal_k__BackingField(bool value);

  constexpr void __cordl_internal_set__depthDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__depthHandle_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__normalDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__normalHandle_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__shaderTagIds_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_RendererMSAASamples(int32_t value);

  /// @brief Method .ctor, addr 0x29b55cc, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_DepthNormals();

  /// @brief Method get_allocateDepth, addr 0x29b5544, size 0x8, virtual false, abstract: false, final false
  inline bool get_allocateDepth();

  /// @brief Method get_allocateNormal, addr 0x29b5558, size 0x8, virtual false, abstract: false, final false
  inline bool get_allocateNormal();

  /// @brief Method get_depthDescriptor, addr 0x29b5504, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_depthDescriptor();

  /// @brief Method get_depthHandle, addr 0x29b557c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_depthHandle();

  /// @brief Method get_normalDescriptor, addr 0x29b54bc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_normalDescriptor();

  /// @brief Method get_normalHandle, addr 0x29b55a4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_normalHandle();

  /// @brief Method get_shaderTagIds, addr 0x29b556c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* get_shaderTagIds();

  static inline void setStaticF_k_DepthNormals(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method set_allocateDepth, addr 0x29b554c, size 0xc, virtual false, abstract: false, final false
  inline void set_allocateDepth(bool value);

  /// @brief Method set_allocateNormal, addr 0x29b5560, size 0xc, virtual false, abstract: false, final false
  inline void set_allocateNormal(bool value);

  /// @brief Method set_depthDescriptor, addr 0x29b5524, size 0x20, virtual false, abstract: false, final false
  inline void set_depthDescriptor(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method set_depthHandle, addr 0x29b5590, size 0x14, virtual false, abstract: false, final false
  inline void set_depthHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_normalDescriptor, addr 0x29b54e0, size 0x24, virtual false, abstract: false, final false
  inline void set_normalDescriptor(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method set_normalHandle, addr 0x29b55b8, size 0x14, virtual false, abstract: false, final false
  inline void set_normalHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_shaderTagIds, addr 0x29b5574, size 0x8, virtual false, abstract: false, final false
  inline void set_shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthNormalOnlyPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthNormalOnlyPass(DepthNormalOnlyPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthNormalOnlyPass(DepthNormalOnlyPass const&) = delete;

  /// @brief Field <normalDescriptor>k__BackingField, offset: 0xd8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____normalDescriptor_k__BackingField;

  /// @brief Field <depthDescriptor>k__BackingField, offset: 0x10c, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____depthDescriptor_k__BackingField;

  /// @brief Field <allocateDepth>k__BackingField, offset: 0x140, size: 0x1, def value: None
  bool ____allocateDepth_k__BackingField;

  /// @brief Field <allocateNormal>k__BackingField, offset: 0x141, size: 0x1, def value: None
  bool ____allocateNormal_k__BackingField;

  /// @brief Field <shaderTagIds>k__BackingField, offset: 0x148, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ____shaderTagIds_k__BackingField;

  /// @brief Field <depthHandle>k__BackingField, offset: 0x150, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____depthHandle_k__BackingField;

  /// @brief Field <normalHandle>k__BackingField, offset: 0x180, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____normalHandle_k__BackingField;

  /// @brief Field m_FilteringSettings, offset: 0x1b0, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_RendererMSAASamples, offset: 0x1c8, size: 0x4, def value: None
  int32_t ___m_RendererMSAASamples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, 0x1d0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____normalDescriptor_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____depthDescriptor_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____allocateDepth_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____allocateNormal_k__BackingField) == 0x141, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____shaderTagIds_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____depthHandle_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____normalHandle_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ___m_FilteringSettings) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ___m_RendererMSAASamples) == 0x1c8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*, "UnityEngine.Rendering.Universal.Internal", "DepthNormalOnlyPass");
