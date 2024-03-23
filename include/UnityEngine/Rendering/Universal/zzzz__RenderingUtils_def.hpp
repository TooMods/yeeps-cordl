#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class __RenderingUtils__StereoConstants;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
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
class Camera;
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
struct RenderTextureFormat;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderingUtils;
}
namespace UnityEngine::Rendering::Universal {
class __RenderingUtils__StereoConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderingUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants);
// Type: ::StereoConstants
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::RenderingUtils::StereoConstants*
class CORDL_TYPE __RenderingUtils__StereoConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field invCameraProjMatrix, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_invCameraProjMatrix,
                      put = __cordl_internal_set_invCameraProjMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> invCameraProjMatrix;

  /// @brief Field invProjMatrix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_invProjMatrix, put = __cordl_internal_set_invProjMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> invProjMatrix;

  /// @brief Field invViewMatrix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_invViewMatrix, put = __cordl_internal_set_invViewMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> invViewMatrix;

  /// @brief Field invViewProjMatrix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_invViewProjMatrix,
                      put = __cordl_internal_set_invViewProjMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> invViewProjMatrix;

  /// @brief Field viewProjMatrix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_viewProjMatrix, put = __cordl_internal_set_viewProjMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewProjMatrix;

  /// @brief Field worldSpaceCameraPos, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_worldSpaceCameraPos,
                      put = __cordl_internal_set_worldSpaceCameraPos))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> worldSpaceCameraPos;

  static inline ::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_invCameraProjMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_invCameraProjMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_invProjMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_invProjMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_invViewMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_invViewMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_invViewProjMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_invViewProjMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_viewProjMatrix() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_viewProjMatrix();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_worldSpaceCameraPos() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_worldSpaceCameraPos();

  constexpr void __cordl_internal_set_invCameraProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_invProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_invViewMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_invViewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_viewProjMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_worldSpaceCameraPos(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method .ctor, addr 0x2730364, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderingUtils__StereoConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderingUtils__StereoConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderingUtils__StereoConstants(__RenderingUtils__StereoConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderingUtils__StereoConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderingUtils__StereoConstants(__RenderingUtils__StereoConstants const&) = delete;

  /// @brief Field viewProjMatrix, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___viewProjMatrix;

  /// @brief Field invViewMatrix, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___invViewMatrix;

  /// @brief Field invProjMatrix, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___invProjMatrix;

  /// @brief Field invViewProjMatrix, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___invViewProjMatrix;

  /// @brief Field invCameraProjMatrix, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___invCameraProjMatrix;

  /// @brief Field worldSpaceCameraPos, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___worldSpaceCameraPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___viewProjMatrix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___invViewMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___invProjMatrix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___invViewProjMatrix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___invCameraProjMatrix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants, ___worldSpaceCameraPos) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::RenderingUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::RenderingUtils*
class CORDL_TYPE RenderingUtils : public ::System::Object {
public:
  // Declarations
  using StereoConstants = ::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants;

  /// @brief Field UNITY_STEREO_CAMERA_INV_PROJECTION, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_CAMERA_INV_PROJECTION, put = setStaticF_UNITY_STEREO_CAMERA_INV_PROJECTION)) int32_t UNITY_STEREO_CAMERA_INV_PROJECTION;

  /// @brief Field UNITY_STEREO_CAMERA_PROJECTION, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_CAMERA_PROJECTION, put = setStaticF_UNITY_STEREO_CAMERA_PROJECTION)) int32_t UNITY_STEREO_CAMERA_PROJECTION;

  /// @brief Field UNITY_STEREO_MATRIX_IP, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_IP, put = setStaticF_UNITY_STEREO_MATRIX_IP)) int32_t UNITY_STEREO_MATRIX_IP;

  /// @brief Field UNITY_STEREO_MATRIX_IV, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_IV, put = setStaticF_UNITY_STEREO_MATRIX_IV)) int32_t UNITY_STEREO_MATRIX_IV;

  /// @brief Field UNITY_STEREO_MATRIX_IVP, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_IVP, put = setStaticF_UNITY_STEREO_MATRIX_IVP)) int32_t UNITY_STEREO_MATRIX_IVP;

  /// @brief Field UNITY_STEREO_MATRIX_P, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_P, put = setStaticF_UNITY_STEREO_MATRIX_P)) int32_t UNITY_STEREO_MATRIX_P;

  /// @brief Field UNITY_STEREO_MATRIX_V, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_V, put = setStaticF_UNITY_STEREO_MATRIX_V)) int32_t UNITY_STEREO_MATRIX_V;

  /// @brief Field UNITY_STEREO_MATRIX_VP, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_MATRIX_VP, put = setStaticF_UNITY_STEREO_MATRIX_VP)) int32_t UNITY_STEREO_MATRIX_VP;

  /// @brief Field UNITY_STEREO_VECTOR_CAMPOS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNITY_STEREO_VECTOR_CAMPOS, put = setStaticF_UNITY_STEREO_VECTOR_CAMPOS)) int32_t UNITY_STEREO_VECTOR_CAMPOS;

  /// @brief Field m_GraphicsFormatSupport, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_GraphicsFormatSupport, put = setStaticF_m_GraphicsFormatSupport))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, bool>*>* m_GraphicsFormatSupport;

  /// @brief Field m_LegacyShaderPassNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_LegacyShaderPassNames,
                             put = setStaticF_m_LegacyShaderPassNames))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_LegacyShaderPassNames;

  /// @brief Field m_RenderTextureFormatSupport, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_RenderTextureFormatSupport,
                             put = setStaticF_m_RenderTextureFormatSupport))::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* m_RenderTextureFormatSupport;

  /// @brief Field s_EmptyAttachment, offset 0xffffffff, size 0x78
  static __declspec(property(get = getStaticF_s_EmptyAttachment, put = setStaticF_s_EmptyAttachment))::UnityEngine::Rendering::AttachmentDescriptor s_EmptyAttachment;

  /// @brief Field s_ErrorMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ErrorMaterial, put = setStaticF_s_ErrorMaterial))::UnityW<::UnityEngine::Material> s_ErrorMaterial;

  /// @brief Field s_FullscreenMesh, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FullscreenMesh, put = setStaticF_s_FullscreenMesh))::UnityW<::UnityEngine::Mesh> s_FullscreenMesh;

  /// @brief Field stereoConstants, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stereoConstants, put = setStaticF_stereoConstants))::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants* stereoConstants;

  /// @brief Method Blit, addr 0x272f008, size 0x2b4, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                          ::UnityEngine::Material* material, int32_t passIndex, bool useDrawProcedural, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                          ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                          ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method ClearSystemInfoCache, addr 0x272f55c, size 0xa4, virtual false, abstract: false, final false
  static inline void ClearSystemInfoCache();

  /// @brief Method Contains, addr 0x272fc10, size 0xc, virtual false, abstract: false, final false
  static inline bool Contains(::UnityEngine::Rendering::ClearFlag a, ::UnityEngine::Rendering::ClearFlag b);

  /// @brief Method Contains, addr 0x272f8e0, size 0xac, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> source,
                              ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method CountDistinct, addr 0x272fa34, size 0x120, virtual false, abstract: false, final false
  static inline uint32_t CountDistinct(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> source,
                                       ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method GetLastValidColorBufferIndex, addr 0x272f6f8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetLastValidColorBufferIndex(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers);

  /// @brief Method GetValidColorBufferCount, addr 0x272f7b0, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t GetValidColorBufferCount(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers);

  /// @brief Method IndexOf, addr 0x272f98c, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> source,
                                ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method IsMRT, addr 0x272f880, size 0x60, virtual false, abstract: false, final false
  static inline bool IsMRT(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers);

  /// @brief Method LastValid, addr 0x272fb54, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t LastValid(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> source);

  /// @brief Method RenderObjectsWithError, addr 0x272f2bc, size 0x2a0, virtual false, abstract: false, final false
  static inline void RenderObjectsWithError(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ::UnityEngine::Camera* camera,
                                            ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::SortingCriteria sortFlags);

  /// @brief Method SequenceEqual, addr 0x272fc1c, size 0xe0, virtual false, abstract: false, final false
  static inline bool SequenceEqual(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> left,
                                   ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> right);

  /// @brief Method SetScaleBiasRt, addr 0x272ee9c, size 0x16c, virtual false, abstract: false, final false
  static inline void SetScaleBiasRt(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetStereoViewAndProjectionMatrices, addr 0x272e8f4, size 0x5a8, virtual false, abstract: false, final false
  static inline void SetStereoViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewMatrix,
                                                        ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projMatrix,
                                                        ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> cameraProjMatrix, bool setInverseMatrices);

  /// @brief Method SetViewAndProjectionMatrices, addr 0x272e610, size 0x2e4, virtual false, abstract: false, final false
  static inline void SetViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                  bool setInverseMatrices);

  /// @brief Method SupportsGraphicsFormat, addr 0x272d788, size 0x1dc, virtual false, abstract: false, final false
  static inline bool SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method SupportsLightLayers, addr 0x272e468, size 0xc, virtual false, abstract: false, final false
  static inline bool SupportsLightLayers(::UnityEngine::Rendering::GraphicsDeviceType type);

  /// @brief Method SupportsRenderTextureFormat, addr 0x272f600, size 0xf8, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  static inline int32_t getStaticF_UNITY_STEREO_CAMERA_INV_PROJECTION();

  static inline int32_t getStaticF_UNITY_STEREO_CAMERA_PROJECTION();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_IP();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_IV();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_IVP();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_P();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_V();

  static inline int32_t getStaticF_UNITY_STEREO_MATRIX_VP();

  static inline int32_t getStaticF_UNITY_STEREO_VECTOR_CAMPOS();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                             ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, bool>*>*
  getStaticF_m_GraphicsFormatSupport();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_m_LegacyShaderPassNames();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* getStaticF_m_RenderTextureFormatSupport();

  static inline ::UnityEngine::Rendering::AttachmentDescriptor getStaticF_s_EmptyAttachment();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ErrorMaterial();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_FullscreenMesh();

  static inline ::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants* getStaticF_stereoConstants();

  /// @brief Method get_emptyAttachment, addr 0x272e3fc, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AttachmentDescriptor get_emptyAttachment();

  /// @brief Method get_errorMaterial, addr 0x272e474, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_errorMaterial();

  /// @brief Method get_fullscreenMesh, addr 0x272c66c, size 0x5d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> get_fullscreenMesh();

  /// @brief Method get_useStructuredBuffer, addr 0x272e460, size 0x8, virtual false, abstract: false, final false
  static inline bool get_useStructuredBuffer();

  static inline void setStaticF_UNITY_STEREO_CAMERA_INV_PROJECTION(int32_t value);

  static inline void setStaticF_UNITY_STEREO_CAMERA_PROJECTION(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_IP(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_IV(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_IVP(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_P(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_V(int32_t value);

  static inline void setStaticF_UNITY_STEREO_MATRIX_VP(int32_t value);

  static inline void setStaticF_UNITY_STEREO_VECTOR_CAMPOS(int32_t value);

  static inline void
  setStaticF_m_GraphicsFormatSupport(::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::FormatUsage, bool>*>* value);

  static inline void setStaticF_m_LegacyShaderPassNames(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  static inline void setStaticF_m_RenderTextureFormatSupport(::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* value);

  static inline void setStaticF_s_EmptyAttachment(::UnityEngine::Rendering::AttachmentDescriptor value);

  static inline void setStaticF_s_ErrorMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF_stereoConstants(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingUtils(RenderingUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingUtils(RenderingUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderingUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderingUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderingUtils*, "UnityEngine.Rendering.Universal", "RenderingUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__RenderingUtils__StereoConstants*, "UnityEngine.Rendering.Universal", "RenderingUtils/StereoConstants");
