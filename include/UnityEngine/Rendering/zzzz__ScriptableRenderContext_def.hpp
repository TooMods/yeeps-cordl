#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListStatus;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
// Type: UnityEngine.Rendering::ScriptableRenderContext
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext {
public:
  // Declarations
  /// @brief Field kRenderTypeTag, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kRenderTypeTag, put = setStaticF_kRenderTypeTag))::UnityEngine::Rendering::ShaderTagId kRenderTypeTag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*();

  /// @brief Method BeginRenderPass, addr 0x2a96ba0, size 0xfc, virtual false, abstract: false, final false
  inline void BeginRenderPass(int32_t width, int32_t height, int32_t samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                              int32_t depthAttachmentIndex);

  /// @brief Method BeginRenderPass_Internal, addr 0x2a96c9c, size 0x84, virtual false, abstract: false, final false
  static inline void BeginRenderPass_Internal(void* self, int32_t width, int32_t height, int32_t samples, void* colors, int32_t colorCount, int32_t depthAttachmentIndex);

  /// @brief Method BeginSubPass, addr 0x2a96d20, size 0x10c, virtual false, abstract: false, final false
  inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, ::Unity::Collections::NativeArray_1<int32_t> inputs, bool isDepthStencilReadOnly);

  /// @brief Method BeginSubPass, addr 0x2a96eb0, size 0x108, virtual false, abstract: false, final false
  inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, bool isDepthStencilReadOnly);

  /// @brief Method BeginSubPass_Internal, addr 0x2a96e2c, size 0x84, virtual false, abstract: false, final false
  static inline void BeginSubPass_Internal(void* self, void* colors, int32_t colorCount, void* inputs, int32_t inputCount, bool isDepthReadOnly, bool isStencilReadOnly);

  /// @brief Method CreateRendererList, addr 0x2a97fa4, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererUtils::RendererList CreateRendererList(::UnityEngine::Rendering::RendererUtils::RendererListDesc desc);

  /// @brief Method CreateRendererList_Internal, addr 0x2a98198, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererUtils::RendererList CreateRendererList_Internal(void* cullResults, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                           ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                           ::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, void* tagValues, void* stateBlocks,
                                                                                           int32_t stateCount);

  /// @brief Method CreateRendererList_Internal_Injected, addr 0x2a9874c, size 0xa4, virtual false, abstract: false, final false
  static inline void CreateRendererList_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, void* cullResults,
                                                          ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                          ByRef<::UnityEngine::Rendering::ShaderTagId> tagName, bool isPassTagName, void* tagValues, void* stateBlocks, int32_t stateCount,
                                                          ByRef<::UnityEngine::Rendering::RendererUtils::RendererList> ret);

  /// @brief Method Cull, addr 0x2a97d90, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingResults Cull(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters);

  /// @brief Method DrawRenderers, addr 0x2a9729c, size 0xb0, virtual false, abstract: false, final false
  inline void DrawRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                            ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings);

  /// @brief Method DrawRenderers, addr 0x2a97424, size 0xc0, virtual false, abstract: false, final false
  inline void DrawRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                            ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ByRef<::UnityEngine::Rendering::RenderStateBlock> stateBlock);

  /// @brief Method DrawRenderers, addr 0x2a974e4, size 0x2cc, virtual false, abstract: false, final false
  inline void DrawRenderers(::UnityEngine::Rendering::CullingResults cullingResults, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                            ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShaderTagId> tagValues,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::RenderStateBlock> stateBlocks);

  /// @brief Method DrawRenderers_Internal, addr 0x2a9734c, size 0xd8, virtual false, abstract: false, final false
  inline void DrawRenderers_Internal(void* cullResults, ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                     ::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, void* tagValues, void* stateBlocks, int32_t stateCount);

  /// @brief Method DrawRenderers_Internal_Injected, addr 0x2a984b4, size 0x9c, virtual false, abstract: false, final false
  static inline void DrawRenderers_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, void* cullResults,
                                                     ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                     ByRef<::UnityEngine::Rendering::ShaderTagId> tagName, bool isPassTagName, void* tagValues, void* stateBlocks, int32_t stateCount);

  /// @brief Method DrawShadows, addr 0x2a977b0, size 0x24, virtual false, abstract: false, final false
  inline void DrawShadows(ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings);

  /// @brief Method DrawShadows_Internal, addr 0x2a977d4, size 0x84, virtual false, abstract: false, final false
  inline void DrawShadows_Internal(void* shadowDrawingSettings);

  /// @brief Method DrawShadows_Internal_Injected, addr 0x2a98550, size 0x44, virtual false, abstract: false, final false
  static inline void DrawShadows_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, void* shadowDrawingSettings);

  /// @brief Method DrawSkybox, addr 0x2a97c08, size 0x4, virtual false, abstract: false, final false
  inline void DrawSkybox(::UnityEngine::Camera* camera);

  /// @brief Method DrawSkybox_Internal, addr 0x2a97c0c, size 0x84, virtual false, abstract: false, final false
  inline void DrawSkybox_Internal(::UnityEngine::Camera* camera);

  /// @brief Method DrawSkybox_Internal_Injected, addr 0x2a98688, size 0x44, virtual false, abstract: false, final false
  static inline void DrawSkybox_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::UnityEngine::Camera* camera);

  /// @brief Method DrawWireOverlay, addr 0x2a97d08, size 0x4, virtual false, abstract: false, final false
  inline void DrawWireOverlay(::UnityEngine::Camera* camera);

  /// @brief Method DrawWireOverlay_Impl, addr 0x2a97d0c, size 0x84, virtual false, abstract: false, final false
  inline void DrawWireOverlay_Impl(::UnityEngine::Camera* camera);

  /// @brief Method DrawWireOverlay_Impl_Injected, addr 0x2a98708, size 0x44, virtual false, abstract: false, final false
  static inline void DrawWireOverlay_Impl_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::UnityEngine::Camera* camera);

  /// @brief Method EndRenderPass, addr 0x2a9706c, size 0x78, virtual false, abstract: false, final false
  inline void EndRenderPass();

  /// @brief Method EndRenderPass_Internal, addr 0x2a970e4, size 0x3c, virtual false, abstract: false, final false
  static inline void EndRenderPass_Internal(void* self);

  /// @brief Method EndSubPass, addr 0x2a96fb8, size 0x78, virtual false, abstract: false, final false
  inline void EndSubPass();

  /// @brief Method EndSubPass_Internal, addr 0x2a97030, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSubPass_Internal(void* self);

  /// @brief Method Equals, addr 0x2a97f24, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a97eb4, size 0x70, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);

  /// @brief Method ExecuteCommandBuffer, addr 0x2a97858, size 0xf0, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBufferAsync, addr 0x2a979cc, size 0x100, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBufferAsync_Internal, addr 0x2a97acc, size 0x8c, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBufferAsync_Internal_Injected, addr 0x2a985d8, size 0x54, virtual false, abstract: false, final false
  static inline void ExecuteCommandBufferAsync_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::UnityEngine::Rendering::CommandBuffer* commandBuffer,
                                                                 ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBuffer_Internal, addr 0x2a97948, size 0x84, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBuffer_Internal_Injected, addr 0x2a98594, size 0x44, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method GetCameras, addr 0x2a91b8c, size 0x8c, virtual false, abstract: false, final false
  inline void GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* results);

  /// @brief Method GetCameras_Internal, addr 0x2a97210, size 0x8c, virtual false, abstract: false, final false
  inline void GetCameras_Internal(::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetCameras_Internal_Injected, addr 0x2a98460, size 0x54, virtual false, abstract: false, final false
  static inline void GetCameras_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetHashCode, addr 0x2a97f9c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InitializeSortSettings, addr 0x2a93fb0, size 0x44, virtual false, abstract: false, final false
  static inline void InitializeSortSettings(::UnityEngine::Camera* camera, ByRef<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  /// @brief Method Internal_Cull, addr 0x2a97e24, size 0x90, virtual false, abstract: false, final false
  static inline void Internal_Cull(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, void* results);

  /// @brief Method Internal_Cull_Injected, addr 0x2a98394, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_Cull_Injected(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ByRef<::UnityEngine::Rendering::ScriptableRenderContext> renderLoop,
                                            void* results);

  /// @brief Method InvokeOnRenderObjectCallback, addr 0x2a97c90, size 0x4, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallback();

  /// @brief Method InvokeOnRenderObjectCallback_Internal, addr 0x2a97c94, size 0x74, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallback_Internal();

  /// @brief Method InvokeOnRenderObjectCallback_Internal_Injected, addr 0x2a986cc, size 0x3c, virtual false, abstract: false, final false
  static inline void InvokeOnRenderObjectCallback_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self);

  /// @brief Method PrepareRendererListsAsync, addr 0x2a98280, size 0x4, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>* rendererLists);

  /// @brief Method PrepareRendererListsAsync_Internal, addr 0x2a98284, size 0x84, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync_Internal(::System::Object* rendererLists);

  /// @brief Method PrepareRendererListsAsync_Internal_Injected, addr 0x2a987f0, size 0x44, virtual false, abstract: false, final false
  static inline void PrepareRendererListsAsync_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::Object* rendererLists);

  /// @brief Method QueryRendererListStatus, addr 0x2a98308, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererUtils::RendererListStatus QueryRendererListStatus(::UnityEngine::Rendering::RendererUtils::RendererList rendererList);

  /// @brief Method QueryRendererListStatus_Internal, addr 0x2a9830c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererUtils::RendererListStatus QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererUtils::RendererList handle);

  /// @brief Method QueryRendererListStatus_Internal_Injected, addr 0x2a98834, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererUtils::RendererListStatus QueryRendererListStatus_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                                      ByRef<::UnityEngine::Rendering::RendererUtils::RendererList> handle);

  /// @brief Method SetupCameraProperties, addr 0x2a97b58, size 0xc, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup);

  /// @brief Method SetupCameraProperties, addr 0x2a97b64, size 0x8, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);

  /// @brief Method SetupCameraProperties_Internal, addr 0x2a97b6c, size 0x9c, virtual false, abstract: false, final false
  inline void SetupCameraProperties_Internal(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);

  /// @brief Method SetupCameraProperties_Internal_Injected, addr 0x2a9862c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetupCameraProperties_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);

  /// @brief Method Submit, addr 0x2a97120, size 0x4, virtual false, abstract: false, final false
  inline void Submit();

  /// @brief Method SubmitForRenderPassValidation, addr 0x2a97198, size 0x4, virtual false, abstract: false, final false
  inline bool SubmitForRenderPassValidation();

  /// @brief Method SubmitForRenderPassValidation_Internal, addr 0x2a9719c, size 0x74, virtual false, abstract: false, final false
  inline bool SubmitForRenderPassValidation_Internal();

  /// @brief Method SubmitForRenderPassValidation_Internal_Injected, addr 0x2a98424, size 0x3c, virtual false, abstract: false, final false
  static inline bool SubmitForRenderPassValidation_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self);

  /// @brief Method Submit_Internal, addr 0x2a97124, size 0x74, virtual false, abstract: false, final false
  inline void Submit_Internal();

  /// @brief Method Submit_Internal_Injected, addr 0x2a983e8, size 0x3c, virtual false, abstract: false, final false
  static inline void Submit_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self);

  /// @brief Method .ctor, addr 0x2a91b84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* ptr);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_();

  static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr ScriptableRenderContext(void* m_Ptr) noexcept;

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
