#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct XRPassCreateInfo;
}
namespace UnityEngine::Rendering::Universal {
struct XRView;
}
namespace UnityEngine::Rendering::Universal {
class __XRPass__CustomMirrorView;
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
struct ScriptableCullingParameters;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderParameter;
}
namespace UnityEngine::XR {
struct __XRDisplaySubsystem__XRRenderPass;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class __XRPass__CustomMirrorView;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::XRPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView);
// Type: ::CustomMirrorView
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::XRPass::CustomMirrorView*
class CORDL_TYPE __XRPass__CustomMirrorView : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2890510, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::XRPass* pass, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* rt,
                                             ::UnityEngine::Rect viewport, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x28905bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x28904fc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::Universal::XRPass* pass, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* rt, ::UnityEngine::Rect viewport);

  static inline ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28903cc, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRPass__CustomMirrorView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRPass__CustomMirrorView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRPass__CustomMirrorView(__XRPass__CustomMirrorView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRPass__CustomMirrorView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRPass__CustomMirrorView(__XRPass__CustomMirrorView const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::XRPass
// SizeInfo { instance_size: 1768, native_size: -1, calculated_instance_size: 1768, calculated_native_size: 1768, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::XRPass*
class CORDL_TYPE XRPass : public ::System::Object {
public:
  // Declarations
  using CustomMirrorView = ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView;

  /// @brief Field UNITY_STEREO_MATRIX_IV, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_IV, put = setStaticF_UNITY_STEREO_MATRIX_IV)) int32_t UNITY_STEREO_MATRIX_IV;

  /// @brief Field UNITY_STEREO_MATRIX_IVP, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_IVP, put = setStaticF_UNITY_STEREO_MATRIX_IVP)) int32_t UNITY_STEREO_MATRIX_IVP;

  /// @brief Field UNITY_STEREO_MATRIX_V, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_V, put = setStaticF_UNITY_STEREO_MATRIX_V)) int32_t UNITY_STEREO_MATRIX_V;

  /// @brief Field UNITY_STEREO_MATRIX_VP, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_VP, put = setStaticF_UNITY_STEREO_MATRIX_VP)) int32_t UNITY_STEREO_MATRIX_VP;

  /// @brief Field _XRCustomMirrorProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__XRCustomMirrorProfilingSampler,
                             put = setStaticF__XRCustomMirrorProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* _XRCustomMirrorProfilingSampler;

  /// @brief Field _XROcclusionProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__XROcclusionProfilingSampler, put = setStaticF__XROcclusionProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* _XROcclusionProfilingSampler;

  /// @brief Field <canMarkLateLatch>k__BackingField, offset 0x86, size 0x1
  __declspec(property(get = __cordl_internal_get__canMarkLateLatch_k__BackingField, put = __cordl_internal_set__canMarkLateLatch_k__BackingField)) bool _canMarkLateLatch_k__BackingField;

  /// @brief Field <copyDepth>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__copyDepth_k__BackingField, put = __cordl_internal_set__copyDepth_k__BackingField)) bool _copyDepth_k__BackingField;

  /// @brief Field <cullingParams>k__BackingField, offset 0x88, size 0x628
  __declspec(property(get = __cordl_internal_get__cullingParams_k__BackingField,
                      put = __cordl_internal_set__cullingParams_k__BackingField))::UnityEngine::Rendering::ScriptableCullingParameters _cullingParams_k__BackingField;

  /// @brief Field <cullingPassId>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__cullingPassId_k__BackingField, put = __cordl_internal_set__cullingPassId_k__BackingField)) int32_t _cullingPassId_k__BackingField;

  /// @brief Field <hasMarkedLateLatch>k__BackingField, offset 0x87, size 0x1
  __declspec(property(get = __cordl_internal_get__hasMarkedLateLatch_k__BackingField, put = __cordl_internal_set__hasMarkedLateLatch_k__BackingField)) bool _hasMarkedLateLatch_k__BackingField;

  /// @brief Field <isLateLatchEnabled>k__BackingField, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get__isLateLatchEnabled_k__BackingField, put = __cordl_internal_set__isLateLatchEnabled_k__BackingField)) bool _isLateLatchEnabled_k__BackingField;

  /// @brief Field <multipassId>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__multipassId_k__BackingField, put = __cordl_internal_set__multipassId_k__BackingField)) int32_t _multipassId_k__BackingField;

  /// @brief Field <renderTargetDesc>k__BackingField, offset 0x50, size 0x34
  __declspec(property(get = __cordl_internal_get__renderTargetDesc_k__BackingField,
                      put = __cordl_internal_set__renderTargetDesc_k__BackingField))::UnityEngine::RenderTextureDescriptor _renderTargetDesc_k__BackingField;

  /// @brief Field <renderTargetIsRenderTexture>k__BackingField, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__renderTargetIsRenderTexture_k__BackingField,
                      put = __cordl_internal_set__renderTargetIsRenderTexture_k__BackingField)) bool _renderTargetIsRenderTexture_k__BackingField;

  /// @brief Field <renderTarget>k__BackingField, offset 0x28, size 0x28
  __declspec(property(get = __cordl_internal_get__renderTarget_k__BackingField,
                      put = __cordl_internal_set__renderTarget_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _renderTarget_k__BackingField;

  /// @brief Field <xrSdkEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__xrSdkEnabled_k__BackingField, put = __cordl_internal_set__xrSdkEnabled_k__BackingField)) bool _xrSdkEnabled_k__BackingField;

  __declspec(property(get = get_canMarkLateLatch, put = set_canMarkLateLatch)) bool canMarkLateLatch;

  __declspec(property(get = get_copyDepth, put = set_copyDepth)) bool copyDepth;

  __declspec(property(get = get_cullingParams, put = set_cullingParams))::UnityEngine::Rendering::ScriptableCullingParameters cullingParams;

  __declspec(property(get = get_cullingPassId, put = set_cullingPassId)) int32_t cullingPassId;

  /// @brief Field customMirrorView, offset 0x6c8, size 0x8
  __declspec(property(get = __cordl_internal_get_customMirrorView, put = __cordl_internal_set_customMirrorView))::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* customMirrorView;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_hasMarkedLateLatch, put = set_hasMarkedLateLatch)) bool hasMarkedLateLatch;

  __declspec(property(get = get_hasValidOcclusionMesh)) bool hasValidOcclusionMesh;

  /// @brief Field invalidRT, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_invalidRT, put = setStaticF_invalidRT))::UnityEngine::Rendering::RenderTargetIdentifier invalidRT;

  __declspec(property(get = get_isLateLatchEnabled, put = set_isLateLatchEnabled)) bool isLateLatchEnabled;

  __declspec(property(get = get_isOcclusionMeshSupported)) bool isOcclusionMeshSupported;

  __declspec(property(get = get_multipassId, put = set_multipassId)) int32_t multipassId;

  /// @brief Field occlusionMeshCombined, offset 0x6b8, size 0x8
  __declspec(property(get = __cordl_internal_get_occlusionMeshCombined, put = __cordl_internal_set_occlusionMeshCombined))::UnityW<::UnityEngine::Mesh> occlusionMeshCombined;

  /// @brief Field occlusionMeshCombinedHashCode, offset 0x6c0, size 0x4
  __declspec(property(get = __cordl_internal_get_occlusionMeshCombinedHashCode, put = __cordl_internal_set_occlusionMeshCombinedHashCode)) int32_t occlusionMeshCombinedHashCode;

  /// @brief Field occlusionMeshMaterial, offset 0x6b0, size 0x8
  __declspec(property(get = __cordl_internal_get_occlusionMeshMaterial, put = __cordl_internal_set_occlusionMeshMaterial))::UnityW<::UnityEngine::Material> occlusionMeshMaterial;

  __declspec(property(get = get_renderTarget, put = set_renderTarget))::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  __declspec(property(get = get_renderTargetDesc, put = set_renderTargetDesc))::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  __declspec(property(get = get_renderTargetIsRenderTexture, put = set_renderTargetIsRenderTexture)) bool renderTargetIsRenderTexture;

  __declspec(property(get = get_renderTargetValid)) bool renderTargetValid;

  __declspec(property(get = get_singlePassEnabled)) bool singlePassEnabled;

  /// @brief Field stereoCameraProjectionMatrix, offset 0x6e0, size 0x8
  __declspec(property(get = __cordl_internal_get_stereoCameraProjectionMatrix,
                      put = __cordl_internal_set_stereoCameraProjectionMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> stereoCameraProjectionMatrix;

  /// @brief Field stereoProjectionMatrix, offset 0x6d0, size 0x8
  __declspec(property(get = __cordl_internal_get_stereoProjectionMatrix,
                      put = __cordl_internal_set_stereoProjectionMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> stereoProjectionMatrix;

  /// @brief Field stereoViewMatrix, offset 0x6d8, size 0x8
  __declspec(property(get = __cordl_internal_get_stereoViewMatrix, put = __cordl_internal_set_stereoViewMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> stereoViewMatrix;

  __declspec(property(get = get_viewCount)) int32_t viewCount;

  /// @brief Field views, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_views, put = __cordl_internal_set_views))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRView>* views;

  __declspec(property(get = get_xrSdkEnabled, put = set_xrSdkEnabled)) bool xrSdkEnabled;

  /// @brief Method AddView, addr 0x288e318, size 0x98, virtual false, abstract: false, final false
  inline void AddView(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Rect vp, int32_t textureArraySlice);

  /// @brief Method AddView, addr 0x288f070, size 0x7c, virtual false, abstract: false, final false
  inline void AddView(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass xrSdkRenderPass, ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter xrSdkRenderParameter);

  /// @brief Method AddViewInternal, addr 0x288ebf4, size 0x220, virtual false, abstract: false, final false
  inline void AddViewInternal(::UnityEngine::Rendering::Universal::XRView xrView);

  /// @brief Method Create, addr 0x288df74, size 0x250, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::XRPass* Create(::UnityEngine::Rendering::Universal::XRPassCreateInfo createInfo);

  /// @brief Method Create, addr 0x288ee14, size 0x25c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::XRPass* Create(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass xrRenderPass, int32_t multipassId,
                                                                    ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters, ::UnityEngine::Material* occlusionMeshMaterial);

  /// @brief Method CreateOcclusionMeshCombined, addr 0x288f348, size 0x34c, virtual false, abstract: false, final false
  inline void CreateOcclusionMeshCombined();

  /// @brief Method EndCamera, addr 0x2887390, size 0x140, virtual false, abstract: false, final false
  inline void EndCamera(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::CameraData cameraData);

  /// @brief Method GetProjMatrix, addr 0x288ae58, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjMatrix(int32_t viewIndex);

  /// @brief Method GetTextureArraySlice, addr 0x288e6ac, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetTextureArraySlice(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x288aeec, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method GetViewport, addr 0x288e718, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetViewport(int32_t viewIndex);

  /// @brief Method MarkLateLatchShaderProperties, addr 0x288ffd8, size 0xf8, virtual false, abstract: false, final false
  inline void MarkLateLatchShaderProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  static inline ::UnityEngine::Rendering::Universal::XRPass* New_ctor();

  /// @brief Method Release, addr 0x288f0ec, size 0x6c, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::Rendering::Universal::XRPass* xrPass);

  /// @brief Method RenderOcclusionMesh, addr 0x288f990, size 0x340, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetCustomMirrorView, addr 0x288e928, size 0x8, virtual false, abstract: false, final false
  inline void SetCustomMirrorView(::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* callback);

  /// @brief Method StartSinglePass, addr 0x288f694, size 0x234, virtual false, abstract: false, final false
  inline void StartSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method StopSinglePass, addr 0x288f8c8, size 0xc8, virtual false, abstract: false, final false
  inline void StopSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method TryGetOcclusionMeshCombinedHashCode, addr 0x288f218, size 0x130, virtual false, abstract: false, final false
  inline bool TryGetOcclusionMeshCombinedHashCode(ByRef<int32_t> hashCode);

  /// @brief Method UnmarkLateLatchShaderProperties, addr 0x28900d0, size 0x70, virtual false, abstract: false, final false
  inline void UnmarkLateLatchShaderProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method UpdateCullingParams, addr 0x288ebd0, size 0x24, virtual false, abstract: false, final false
  inline void UpdateCullingParams(int32_t cullingPassId, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams);

  /// @brief Method UpdateGPUViewAndProjectionMatrices, addr 0x288fcd0, size 0x308, virtual false, abstract: false, final false
  inline void UpdateGPUViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool isRenderToTexture);

  /// @brief Method UpdateOcclusionMesh, addr 0x288f158, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateOcclusionMesh();

  /// @brief Method UpdateView, addr 0x288ea6c, size 0x164, virtual false, abstract: false, final false
  inline void UpdateView(int32_t viewId, ::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Rect vp, int32_t textureArraySlice);

  /// @brief Method UpdateView, addr 0x288e930, size 0x13c, virtual false, abstract: false, final false
  inline void UpdateView(int32_t viewId, ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass xrSdkRenderPass, ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter xrSdkRenderParameter);

  constexpr bool const& __cordl_internal_get__canMarkLateLatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__canMarkLateLatch_k__BackingField();

  constexpr bool const& __cordl_internal_get__copyDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__copyDepth_k__BackingField();

  constexpr ::UnityEngine::Rendering::ScriptableCullingParameters const& __cordl_internal_get__cullingParams_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ScriptableCullingParameters& __cordl_internal_get__cullingParams_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cullingPassId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cullingPassId_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasMarkedLateLatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasMarkedLateLatch_k__BackingField();

  constexpr bool const& __cordl_internal_get__isLateLatchEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLateLatchEnabled_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multipassId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multipassId_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__renderTargetDesc_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__renderTargetDesc_k__BackingField();

  constexpr bool const& __cordl_internal_get__renderTargetIsRenderTexture_k__BackingField() const;

  constexpr bool& __cordl_internal_get__renderTargetIsRenderTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__renderTarget_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__renderTarget_k__BackingField();

  constexpr bool const& __cordl_internal_get__xrSdkEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__xrSdkEnabled_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView*& __cordl_internal_get_customMirrorView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView*> const& __cordl_internal_get_customMirrorView() const;

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_occlusionMeshCombined() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_occlusionMeshCombined();

  constexpr int32_t const& __cordl_internal_get_occlusionMeshCombinedHashCode() const;

  constexpr int32_t& __cordl_internal_get_occlusionMeshCombinedHashCode();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_occlusionMeshMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_occlusionMeshMaterial();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_stereoCameraProjectionMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_stereoCameraProjectionMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_stereoProjectionMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_stereoProjectionMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_stereoViewMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_stereoViewMatrix();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRView>*& __cordl_internal_get_views();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRView>*> const& __cordl_internal_get_views() const;

  constexpr void __cordl_internal_set__canMarkLateLatch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__copyDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__cullingParams_k__BackingField(::UnityEngine::Rendering::ScriptableCullingParameters value);

  constexpr void __cordl_internal_set__cullingPassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__hasMarkedLateLatch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isLateLatchEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__multipassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__renderTargetIsRenderTexture_k__BackingField(bool value);

  constexpr void __cordl_internal_set__renderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__xrSdkEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set_customMirrorView(::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* value);

  constexpr void __cordl_internal_set_occlusionMeshCombined(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_occlusionMeshCombinedHashCode(int32_t value);

  constexpr void __cordl_internal_set_occlusionMeshMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_stereoCameraProjectionMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_stereoProjectionMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_stereoViewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_views(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRView>* value);

  /// @brief Method .ctor, addr 0x2890140, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_IV();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_IVP();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_V();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_VP();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__XRCustomMirrorProfilingSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__XROcclusionProfilingSampler();

  static inline ::UnityEngine::Rendering::RenderTargetIdentifier getStaticF_invalidRT();

  /// @brief Method get_canMarkLateLatch, addr 0x288e684, size 0x8, virtual false, abstract: false, final false
  inline bool get_canMarkLateLatch();

  /// @brief Method get_copyDepth, addr 0x288e510, size 0x8, virtual false, abstract: false, final false
  inline bool get_copyDepth();

  /// @brief Method get_cullingParams, addr 0x288e788, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ScriptableCullingParameters get_cullingParams();

  /// @brief Method get_cullingPassId, addr 0x288e534, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPassId();

  /// @brief Method get_enabled, addr 0x2886d14, size 0x50, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_hasMarkedLateLatch, addr 0x288e698, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasMarkedLateLatch();

  /// @brief Method get_hasValidOcclusionMesh, addr 0x288e834, size 0xf4, virtual false, abstract: false, final false
  inline bool get_hasValidOcclusionMesh();

  /// @brief Method get_isLateLatchEnabled, addr 0x288e670, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLateLatchEnabled();

  /// @brief Method get_isOcclusionMeshSupported, addr 0x288e7b0, size 0x84, virtual false, abstract: false, final false
  inline bool get_isOcclusionMeshSupported();

  /// @brief Method get_multipassId, addr 0x288e524, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multipassId();

  /// @brief Method get_renderTarget, addr 0x288e544, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_renderTarget();

  /// @brief Method get_renderTargetDesc, addr 0x288e574, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_renderTargetDesc();

  /// @brief Method get_renderTargetIsRenderTexture, addr 0x288e65c, size 0x8, virtual false, abstract: false, final false
  inline bool get_renderTargetIsRenderTexture();

  /// @brief Method get_renderTargetValid, addr 0x288e5ac, size 0xb0, virtual false, abstract: false, final false
  inline bool get_renderTargetValid();

  /// @brief Method get_singlePassEnabled, addr 0x288ae40, size 0x18, virtual false, abstract: false, final false
  inline bool get_singlePassEnabled();

  /// @brief Method get_viewCount, addr 0x288af80, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_viewCount();

  /// @brief Method get_xrSdkEnabled, addr 0x288e4fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_xrSdkEnabled();

  static inline void setStaticF_UNITY_STEREO_MATRIX_IV(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_IVP(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_V(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_VP(int32_t value);

  static inline void setStaticF__XRCustomMirrorProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF__XROcclusionProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_invalidRT(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_canMarkLateLatch, addr 0x288e68c, size 0xc, virtual false, abstract: false, final false
  inline void set_canMarkLateLatch(bool value);

  /// @brief Method set_copyDepth, addr 0x288e518, size 0xc, virtual false, abstract: false, final false
  inline void set_copyDepth(bool value);

  /// @brief Method set_cullingParams, addr 0x288e798, size 0x18, virtual false, abstract: false, final false
  inline void set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters value);

  /// @brief Method set_cullingPassId, addr 0x288e53c, size 0x8, virtual false, abstract: false, final false
  inline void set_cullingPassId(int32_t value);

  /// @brief Method set_hasMarkedLateLatch, addr 0x288e6a0, size 0xc, virtual false, abstract: false, final false
  inline void set_hasMarkedLateLatch(bool value);

  /// @brief Method set_isLateLatchEnabled, addr 0x288e678, size 0xc, virtual false, abstract: false, final false
  inline void set_isLateLatchEnabled(bool value);

  /// @brief Method set_multipassId, addr 0x288e52c, size 0x8, virtual false, abstract: false, final false
  inline void set_multipassId(int32_t value);

  /// @brief Method set_renderTarget, addr 0x288e55c, size 0x18, virtual false, abstract: false, final false
  inline void set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_renderTargetDesc, addr 0x288e590, size 0x1c, virtual false, abstract: false, final false
  inline void set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method set_renderTargetIsRenderTexture, addr 0x288e664, size 0xc, virtual false, abstract: false, final false
  inline void set_renderTargetIsRenderTexture(bool value);

  /// @brief Method set_xrSdkEnabled, addr 0x288e504, size 0xc, virtual false, abstract: false, final false
  inline void set_xrSdkEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPass(XRPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPass(XRPass const&) = delete;

  /// @brief Field views, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::XRView>* ___views;

  /// @brief Field <xrSdkEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____xrSdkEnabled_k__BackingField;

  /// @brief Field <copyDepth>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____copyDepth_k__BackingField;

  /// @brief Field <multipassId>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____multipassId_k__BackingField;

  /// @brief Field <cullingPassId>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____cullingPassId_k__BackingField;

  /// @brief Field <renderTarget>k__BackingField, offset: 0x28, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____renderTarget_k__BackingField;

  /// @brief Field <renderTargetDesc>k__BackingField, offset: 0x50, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____renderTargetDesc_k__BackingField;

  /// @brief Field <renderTargetIsRenderTexture>k__BackingField, offset: 0x84, size: 0x1, def value: None
  bool ____renderTargetIsRenderTexture_k__BackingField;

  /// @brief Field <isLateLatchEnabled>k__BackingField, offset: 0x85, size: 0x1, def value: None
  bool ____isLateLatchEnabled_k__BackingField;

  /// @brief Field <canMarkLateLatch>k__BackingField, offset: 0x86, size: 0x1, def value: None
  bool ____canMarkLateLatch_k__BackingField;

  /// @brief Field <hasMarkedLateLatch>k__BackingField, offset: 0x87, size: 0x1, def value: None
  bool ____hasMarkedLateLatch_k__BackingField;

  /// @brief Field <cullingParams>k__BackingField, offset: 0x88, size: 0x628, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters ____cullingParams_k__BackingField;

  /// @brief Field occlusionMeshMaterial, offset: 0x6b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___occlusionMeshMaterial;

  /// @brief Field occlusionMeshCombined, offset: 0x6b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___occlusionMeshCombined;

  /// @brief Field occlusionMeshCombinedHashCode, offset: 0x6c0, size: 0x4, def value: None
  int32_t ___occlusionMeshCombinedHashCode;

  /// @brief Field customMirrorView, offset: 0x6c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView* ___customMirrorView;

  /// @brief Field stereoProjectionMatrix, offset: 0x6d0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___stereoProjectionMatrix;

  /// @brief Field stereoViewMatrix, offset: 0x6d8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___stereoViewMatrix;

  /// @brief Field stereoCameraProjectionMatrix, offset: 0x6e0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___stereoCameraProjectionMatrix;

  /// @brief Field k_XRCustomMirrorTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XRCustomMirrorTag{ u"XR Custom Mirror View" };

  /// @brief Field k_XROcclusionTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_XROcclusionTag{ u"XR Occlusion Mesh" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::XRPass, 0x6e8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___views) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____xrSdkEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____copyDepth_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____multipassId_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____cullingPassId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____renderTarget_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____renderTargetDesc_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____renderTargetIsRenderTexture_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____isLateLatchEnabled_k__BackingField) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____canMarkLateLatch_k__BackingField) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____hasMarkedLateLatch_k__BackingField) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ____cullingParams_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___occlusionMeshMaterial) == 0x6b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___occlusionMeshCombined) == 0x6b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___occlusionMeshCombinedHashCode) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___customMirrorView) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___stereoProjectionMatrix) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___stereoViewMatrix) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::XRPass, ___stereoCameraProjectionMatrix) == 0x6e0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::XRPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::XRPass*, "UnityEngine.Rendering.Universal", "XRPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__XRPass__CustomMirrorView*, "UnityEngine.Rendering.Universal", "XRPass/CustomMirrorView");
