#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderPassInput;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
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
struct RenderBufferStoreAction;
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
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderPass);
// Type: UnityEngine.Rendering.Universal::ScriptableRenderPass
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScriptableRenderPass*
class CORDL_TYPE ScriptableRenderPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <depthOnly>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__depthOnly_k__BackingField, put = __cordl_internal_set__depthOnly_k__BackingField)) bool _depthOnly_k__BackingField;

  /// @brief Field <isBlitRenderPass>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__isBlitRenderPass_k__BackingField, put = __cordl_internal_set__isBlitRenderPass_k__BackingField)) bool _isBlitRenderPass_k__BackingField;

  /// @brief Field <isLastPass>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__isLastPass_k__BackingField, put = __cordl_internal_set__isLastPass_k__BackingField)) bool _isLastPass_k__BackingField;

  /// @brief Field <overrideCameraTarget>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideCameraTarget_k__BackingField, put = __cordl_internal_set__overrideCameraTarget_k__BackingField)) bool _overrideCameraTarget_k__BackingField;

  /// @brief Field <profilingSampler>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__profilingSampler_k__BackingField,
                      put = __cordl_internal_set__profilingSampler_k__BackingField))::UnityEngine::Rendering::ProfilingSampler* _profilingSampler_k__BackingField;

  /// @brief Field <renderPassEvent>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassEvent_k__BackingField,
                      put = __cordl_internal_set__renderPassEvent_k__BackingField))::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent_k__BackingField;

  /// @brief Field <renderPassQueueIndex>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassQueueIndex_k__BackingField,
                      put = __cordl_internal_set__renderPassQueueIndex_k__BackingField)) int32_t _renderPassQueueIndex_k__BackingField;

  /// @brief Field <renderTargetFormat>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTargetFormat_k__BackingField,
                      put = __cordl_internal_set__renderTargetFormat_k__BackingField))::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                               ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> _renderTargetFormat_k__BackingField;

  /// @brief Field <renderTargetHeight>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__renderTargetHeight_k__BackingField, put = __cordl_internal_set__renderTargetHeight_k__BackingField)) int32_t _renderTargetHeight_k__BackingField;

  /// @brief Field <renderTargetSampleCount>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__renderTargetSampleCount_k__BackingField,
                      put = __cordl_internal_set__renderTargetSampleCount_k__BackingField)) int32_t _renderTargetSampleCount_k__BackingField;

  /// @brief Field <renderTargetWidth>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__renderTargetWidth_k__BackingField, put = __cordl_internal_set__renderTargetWidth_k__BackingField)) int32_t _renderTargetWidth_k__BackingField;

  /// @brief Field <useNativeRenderPass>k__BackingField, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__useNativeRenderPass_k__BackingField, put = __cordl_internal_set__useNativeRenderPass_k__BackingField)) bool _useNativeRenderPass_k__BackingField;

  __declspec(property(get = get_clearColor))::UnityEngine::Color clearColor;

  __declspec(property(get = get_clearFlag))::UnityEngine::Rendering::ClearFlag clearFlag;

  __declspec(property(get = get_colorAttachment))::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment;

  __declspec(property(get = get_colorAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments;

  __declspec(property(get = get_colorStoreActions))::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions;

  __declspec(property(get = get_depthAttachment))::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment;

  __declspec(property(get = get_depthOnly, put = set_depthOnly)) bool depthOnly;

  __declspec(property(get = get_depthStoreAction))::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction;

  __declspec(property(get = get_input))::UnityEngine::Rendering::Universal::ScriptableRenderPassInput input;

  __declspec(property(get = get_isBlitRenderPass, put = set_isBlitRenderPass)) bool isBlitRenderPass;

  __declspec(property(get = get_isLastPass, put = set_isLastPass)) bool isLastPass;

  /// @brief Field m_ClearColor, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ClearColor, put = __cordl_internal_set_m_ClearColor))::UnityEngine::Color m_ClearColor;

  /// @brief Field m_ClearFlag, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClearFlag, put = __cordl_internal_set_m_ClearFlag))::UnityEngine::Rendering::ClearFlag m_ClearFlag;

  /// @brief Field m_ColorAttachmentIndices, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ColorAttachmentIndices, put = __cordl_internal_set_m_ColorAttachmentIndices))::Unity::Collections::NativeArray_1<int32_t> m_ColorAttachmentIndices;

  /// @brief Field m_ColorAttachments, offset 0x80, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ColorAttachments,
               put = __cordl_internal_set_m_ColorAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_ColorAttachments;

  /// @brief Field m_ColorStoreActions, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ColorStoreActions,
      put = __cordl_internal_set_m_ColorStoreActions))::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> m_ColorStoreActions;

  /// @brief Field m_DepthAttachment, offset 0x98, size 0x28
  __declspec(property(get = __cordl_internal_get_m_DepthAttachment, put = __cordl_internal_set_m_DepthAttachment))::UnityEngine::Rendering::RenderTargetIdentifier m_DepthAttachment;

  /// @brief Field m_DepthStoreAction, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthStoreAction, put = __cordl_internal_set_m_DepthStoreAction))::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction;

  /// @brief Field m_Input, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input))::UnityEngine::Rendering::Universal::ScriptableRenderPassInput m_Input;

  /// @brief Field m_InputAttachmentIndices, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_InputAttachmentIndices, put = __cordl_internal_set_m_InputAttachmentIndices))::Unity::Collections::NativeArray_1<int32_t> m_InputAttachmentIndices;

  /// @brief Field m_InputAttachmentIsTransient, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAttachmentIsTransient, put = __cordl_internal_set_m_InputAttachmentIsTransient))::ArrayW<bool, ::Array<bool>*> m_InputAttachmentIsTransient;

  /// @brief Field m_InputAttachments, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_InputAttachments,
               put = __cordl_internal_set_m_InputAttachments))::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> m_InputAttachments;

  /// @brief Field m_OverriddenColorStoreActions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverriddenColorStoreActions, put = __cordl_internal_set_m_OverriddenColorStoreActions))::ArrayW<bool, ::Array<bool>*> m_OverriddenColorStoreActions;

  /// @brief Field m_OverriddenDepthStoreAction, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverriddenDepthStoreAction, put = __cordl_internal_set_m_OverriddenDepthStoreAction)) bool m_OverriddenDepthStoreAction;

  __declspec(property(get = get_overriddenColorStoreActions))::ArrayW<bool, ::Array<bool>*> overriddenColorStoreActions;

  __declspec(property(get = get_overriddenDepthStoreAction)) bool overriddenDepthStoreAction;

  __declspec(property(get = get_overrideCameraTarget, put = set_overrideCameraTarget)) bool overrideCameraTarget;

  __declspec(property(get = get_profilingSampler, put = set_profilingSampler))::UnityEngine::Rendering::ProfilingSampler* profilingSampler;

  __declspec(property(get = get_renderPassEvent, put = set_renderPassEvent))::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent;

  __declspec(property(get = get_renderPassQueueIndex, put = set_renderPassQueueIndex)) int32_t renderPassQueueIndex;

  __declspec(
      property(get = get_renderTargetFormat,
               put = set_renderTargetFormat))::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> renderTargetFormat;

  __declspec(property(get = get_renderTargetHeight, put = set_renderTargetHeight)) int32_t renderTargetHeight;

  __declspec(property(get = get_renderTargetSampleCount, put = set_renderTargetSampleCount)) int32_t renderTargetSampleCount;

  __declspec(property(get = get_renderTargetWidth, put = set_renderTargetWidth)) int32_t renderTargetWidth;

  __declspec(property(get = get_useNativeRenderPass, put = set_useNativeRenderPass)) bool useNativeRenderPass;

  /// @brief Method Blit, addr 0x2e1b73c, size 0xa8, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> data, ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Blit, addr 0x2e1b2e8, size 0x178, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                   ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Configure, addr 0x2e1b2dc, size 0x4, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method ConfigureClear, addr 0x2e1b2c8, size 0x10, virtual false, abstract: false, final false
  inline void ConfigureClear(::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method ConfigureColorStoreAction, addr 0x2e1acac, size 0x54, virtual false, abstract: false, final false
  inline void ConfigureColorStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction, uint32_t attachmentIndex);

  /// @brief Method ConfigureColorStoreActions, addr 0x2e1ad00, size 0xe4, virtual false, abstract: false, final false
  inline void ConfigureColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> storeActions);

  /// @brief Method ConfigureDepthStoreAction, addr 0x2e1ade4, size 0x10, virtual false, abstract: false, final false
  inline void ConfigureDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method ConfigureInput, addr 0x2e1aca4, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInput(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput passInput);

  /// @brief Method ConfigureInputAttachments, addr 0x2e1adf4, size 0x74, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::UnityEngine::Rendering::RenderTargetIdentifier input, bool isTransient);

  /// @brief Method ConfigureInputAttachments, addr 0x2e1ae68, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> inputs);

  /// @brief Method ConfigureInputAttachments, addr 0x2e1ae70, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> inputs,
                                        ::ArrayW<bool, ::Array<bool>*> isTransient);

  /// @brief Method ConfigureTarget, addr 0x2e1af1c, size 0xe4, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment);

  /// @brief Method ConfigureTarget, addr 0x2e1aedc, size 0x40, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);

  /// @brief Method ConfigureTarget, addr 0x2e1b000, size 0x58, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment,
                              ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method ConfigureTarget, addr 0x2e1b058, size 0x180, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height,
                              int32_t sampleCount, bool depth);

  /// @brief Method ConfigureTarget, addr 0x2e1b270, size 0x58, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments);

  /// @brief Method ConfigureTarget, addr 0x2e195b8, size 0x160, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);

  /// @brief Method ConfigureTarget, addr 0x2e1b1d8, size 0x98, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment,
                              ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> formats);

  /// @brief Method CreateDrawingSettings, addr 0x2e1b87c, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x2e19a38, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FrameCleanup, addr 0x2e1aaf8, size 0xc, virtual true, abstract: false, final false
  inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetActiveDebugHandler, addr 0x2e1ac68, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler* GetActiveDebugHandler(::UnityEngine::Rendering::Universal::RenderingData renderingData);

  /// @brief Method IsInputAttachmentTransient, addr 0x2e1aeac, size 0x30, virtual false, abstract: false, final false
  inline bool IsInputAttachmentTransient(int32_t idx);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x2e1b2e0, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x2e1b2d8, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method OnFinishCameraStackRendering, addr 0x2e1b2e4, size 0x4, virtual true, abstract: false, final false
  inline void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetInputAttachmentTransient, addr 0x2e1ae78, size 0x34, virtual false, abstract: false, final false
  inline void SetInputAttachmentTransient(int32_t idx, bool isTransient);

  constexpr bool const& __cordl_internal_get__depthOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__depthOnly_k__BackingField();

  constexpr bool const& __cordl_internal_get__isBlitRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBlitRenderPass_k__BackingField();

  constexpr bool const& __cordl_internal_get__isLastPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLastPass_k__BackingField();

  constexpr bool const& __cordl_internal_get__overrideCameraTarget_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overrideCameraTarget_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__profilingSampler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get__profilingSampler_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderPassQueueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderPassQueueIndex_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
  __cordl_internal_get__renderTargetFormat_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>&
  __cordl_internal_get__renderTargetFormat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderTargetHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderTargetHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderTargetSampleCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderTargetSampleCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderTargetWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderTargetWidth_k__BackingField();

  constexpr bool const& __cordl_internal_get__useNativeRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useNativeRenderPass_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_ClearColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_ClearColor();

  constexpr ::UnityEngine::Rendering::ClearFlag const& __cordl_internal_get_m_ClearFlag() const;

  constexpr ::UnityEngine::Rendering::ClearFlag& __cordl_internal_get_m_ClearFlag();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_ColorAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_ColorAttachmentIndices();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_m_ColorAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_m_ColorAttachments();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> const& __cordl_internal_get_m_ColorStoreActions() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>& __cordl_internal_get_m_ColorStoreActions();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get_m_DepthAttachment() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get_m_DepthAttachment();

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_m_DepthStoreAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_m_DepthStoreAction();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& __cordl_internal_get_m_Input() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& __cordl_internal_get_m_Input();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_InputAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_InputAttachmentIndices();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_InputAttachmentIsTransient() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_InputAttachmentIsTransient();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_m_InputAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_m_InputAttachments();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_OverriddenColorStoreActions() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_OverriddenColorStoreActions();

  constexpr bool const& __cordl_internal_get_m_OverriddenDepthStoreAction() const;

  constexpr bool& __cordl_internal_get_m_OverriddenDepthStoreAction();

  constexpr void __cordl_internal_set__depthOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isBlitRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isLastPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overrideCameraTarget_k__BackingField(bool value);

  constexpr void __cordl_internal_set__profilingSampler_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__renderPassEvent_k__BackingField(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set__renderPassQueueIndex_k__BackingField(int32_t value);

  constexpr void
  __cordl_internal_set__renderTargetFormat_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  constexpr void __cordl_internal_set__renderTargetHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTargetSampleCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTargetWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__useNativeRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ClearColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ClearFlag(::UnityEngine::Rendering::ClearFlag value);

  constexpr void __cordl_internal_set_m_ColorAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_ColorAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_m_ColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  constexpr void __cordl_internal_set_m_DepthAttachment(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_DepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);

  constexpr void __cordl_internal_set_m_InputAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_InputAttachmentIsTransient(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_InputAttachments(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_m_OverriddenColorStoreActions(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_OverriddenDepthStoreAction(bool value);

  /// @brief Method .ctor, addr 0x2e18d20, size 0x6b8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clearColor, addr 0x2e1ab98, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clearColor();

  /// @brief Method get_clearFlag, addr 0x2e1ab90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ClearFlag get_clearFlag();

  /// @brief Method get_colorAttachment, addr 0x2e1ab1c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_colorAttachment();

  /// @brief Method get_colorAttachments, addr 0x2e1ab14, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_colorAttachments();

  /// @brief Method get_colorStoreActions, addr 0x2e1ab68, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> get_colorStoreActions();

  /// @brief Method get_depthAttachment, addr 0x2e1ab50, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_depthAttachment();

  /// @brief Method get_depthOnly, addr 0x2e1ac20, size 0x8, virtual false, abstract: false, final false
  inline bool get_depthOnly();

  /// @brief Method get_depthStoreAction, addr 0x2e1ab70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction();

  /// @brief Method get_input, addr 0x2e1ab88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput get_input();

  /// @brief Method get_isBlitRenderPass, addr 0x2e1abc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBlitRenderPass();

  /// @brief Method get_isLastPass, addr 0x2e1ac34, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLastPass();

  /// @brief Method get_overriddenColorStoreActions, addr 0x2e1ab78, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_overriddenColorStoreActions();

  /// @brief Method get_overriddenDepthStoreAction, addr 0x2e1ab80, size 0x8, virtual false, abstract: false, final false
  inline bool get_overriddenDepthStoreAction();

  /// @brief Method get_overrideCameraTarget, addr 0x2e1abb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideCameraTarget();

  /// @brief Method get_profilingSampler, addr 0x2e1aba4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingSampler();

  /// @brief Method get_renderPassEvent, addr 0x2e1ab04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderPassEvent get_renderPassEvent();

  /// @brief Method get_renderPassQueueIndex, addr 0x2e1ac48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderPassQueueIndex();

  /// @brief Method get_renderTargetFormat, addr 0x2e1ac58, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> get_renderTargetFormat();

  /// @brief Method get_renderTargetHeight, addr 0x2e1ac00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderTargetHeight();

  /// @brief Method get_renderTargetSampleCount, addr 0x2e1ac10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderTargetSampleCount();

  /// @brief Method get_renderTargetWidth, addr 0x2e1abf0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderTargetWidth();

  /// @brief Method get_useNativeRenderPass, addr 0x2e1abdc, size 0x8, virtual false, abstract: false, final false
  inline bool get_useNativeRenderPass();

  /// @brief Method op_GreaterThan, addr 0x2e1b9d0, size 0x28, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  /// @brief Method op_LessThan, addr 0x2e1b9a8, size 0x28, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  /// @brief Method set_depthOnly, addr 0x2e1ac28, size 0xc, virtual false, abstract: false, final false
  inline void set_depthOnly(bool value);

  /// @brief Method set_isBlitRenderPass, addr 0x2e1abd0, size 0xc, virtual false, abstract: false, final false
  inline void set_isBlitRenderPass(bool value);

  /// @brief Method set_isLastPass, addr 0x2e1ac3c, size 0xc, virtual false, abstract: false, final false
  inline void set_isLastPass(bool value);

  /// @brief Method set_overrideCameraTarget, addr 0x2e1abbc, size 0xc, virtual false, abstract: false, final false
  inline void set_overrideCameraTarget(bool value);

  /// @brief Method set_profilingSampler, addr 0x2e1abac, size 0x8, virtual false, abstract: false, final false
  inline void set_profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_renderPassEvent, addr 0x2e1ab0c, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// @brief Method set_renderPassQueueIndex, addr 0x2e1ac50, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassQueueIndex(int32_t value);

  /// @brief Method set_renderTargetFormat, addr 0x2e1ac60, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetFormat(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  /// @brief Method set_renderTargetHeight, addr 0x2e1ac08, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetHeight(int32_t value);

  /// @brief Method set_renderTargetSampleCount, addr 0x2e1ac18, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetSampleCount(int32_t value);

  /// @brief Method set_renderTargetWidth, addr 0x2e1abf8, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetWidth(int32_t value);

  /// @brief Method set_useNativeRenderPass, addr 0x2e1abe4, size 0xc, virtual false, abstract: false, final false
  inline void set_useNativeRenderPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderPass(ScriptableRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderPass(ScriptableRenderPass const&) = delete;

  /// @brief Field <renderPassEvent>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ____renderPassEvent_k__BackingField;

  /// @brief Field m_ColorStoreActions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> ___m_ColorStoreActions;

  /// @brief Field m_DepthStoreAction, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction ___m_DepthStoreAction;

  /// @brief Field m_OverriddenColorStoreActions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_OverriddenColorStoreActions;

  /// @brief Field m_OverriddenDepthStoreAction, offset: 0x30, size: 0x1, def value: None
  bool ___m_OverriddenDepthStoreAction;

  /// @brief Field <profilingSampler>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____profilingSampler_k__BackingField;

  /// @brief Field <overrideCameraTarget>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____overrideCameraTarget_k__BackingField;

  /// @brief Field <isBlitRenderPass>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____isBlitRenderPass_k__BackingField;

  /// @brief Field <useNativeRenderPass>k__BackingField, offset: 0x42, size: 0x1, def value: None
  bool ____useNativeRenderPass_k__BackingField;

  /// @brief Field <renderTargetWidth>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____renderTargetWidth_k__BackingField;

  /// @brief Field <renderTargetHeight>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____renderTargetHeight_k__BackingField;

  /// @brief Field <renderTargetSampleCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____renderTargetSampleCount_k__BackingField;

  /// @brief Field <depthOnly>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____depthOnly_k__BackingField;

  /// @brief Field <isLastPass>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____isLastPass_k__BackingField;

  /// @brief Field <renderPassQueueIndex>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____renderPassQueueIndex_k__BackingField;

  /// @brief Field m_ColorAttachmentIndices, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_ColorAttachmentIndices;

  /// @brief Field m_InputAttachmentIndices, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_InputAttachmentIndices;

  /// @brief Field <renderTargetFormat>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> ____renderTargetFormat_k__BackingField;

  /// @brief Field m_ColorAttachments, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___m_ColorAttachments;

  /// @brief Field m_InputAttachments, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___m_InputAttachments;

  /// @brief Field m_InputAttachmentIsTransient, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_InputAttachmentIsTransient;

  /// @brief Field m_DepthAttachment, offset: 0x98, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ___m_DepthAttachment;

  /// @brief Field m_Input, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput ___m_Input;

  /// @brief Field m_ClearFlag, offset: 0xc4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ClearFlag ___m_ClearFlag;

  /// @brief Field m_ClearColor, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Color ___m_ClearColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderPass, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassEvent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorStoreActions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_DepthStoreAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_OverriddenColorStoreActions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_OverriddenDepthStoreAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____profilingSampler_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____overrideCameraTarget_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____isBlitRenderPass_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____useNativeRenderPass_k__BackingField) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetWidth_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetHeight_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetSampleCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____depthOnly_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____isLastPass_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassQueueIndex_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorAttachmentIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachmentIndices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetFormat_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorAttachments) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachments) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachmentIsTransient) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_DepthAttachment) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_Input) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ClearFlag) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ClearColor) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderPass");
