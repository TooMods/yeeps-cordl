#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_impl.hpp"
#include "UnityEngine/zzzz__CameraType_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.SetViewAndProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2889d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewAndProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetViewMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetViewMatrix)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x288c6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetViewMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x288c720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x288c794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requireSrgbConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x288c9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_requireSrgbConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isSceneViewCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2886d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isSceneViewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isPreviewCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x288afc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isPreviewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isRenderPassSupportedCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x288cadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "get_isRenderPassSupportedCamera",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsCameraProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x288c7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "IsCameraProjectionMatrixFlipped",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewAndProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewMatrix, projectionMatrix);
}
/// @param viewIndex: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetViewMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
/// @param viewIndex: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
/// @param viewIndex: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_requireSrgbConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isSceneViewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isPreviewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isRenderPassSupportedCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "IsCameraProjectionMatrixFlipped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProjectionMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "renderType", ty:
// "::UnityEngine::Rendering::Universal::CameraRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "targetTexture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cameraTargetDescriptor", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "pixelRect", ty:
// "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "pixelWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pixelHeight", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderScale", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "imageScalingMode", ty: "::UnityEngine::Rendering::Universal::ImageScalingMode", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "upscalingFilter", ty: "::UnityEngine::Rendering::Universal::ImageUpscalingFilter", modifiers: "", def_value: Some("{}") }, CppParam { name: "fsrOverrideSharpness", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fsrSharpness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearDepth", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cameraType", ty: "::UnityEngine::CameraType", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDefaultViewport", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "isHdrEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "requiresOpaqueTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessingRequiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "xrRendering", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultOpaqueSortFlags", ty: "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "xr", ty: "::UnityEngine::Rendering::Universal::XRPass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isStereoEnabled", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "maxShadowDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessEnabled", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "captureActions", ty:
// "::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier,::UnityEngine::Rendering::CommandBuffer*>*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "volumeLayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "volumeTrigger", ty:
// "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isStopNaNEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "isDitheringEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "antialiasing", ty: "::UnityEngine::Rendering::Universal::AntialiasingMode", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "antialiasingQuality", ty: "::UnityEngine::Rendering::Universal::AntialiasingQuality", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderer", ty:
// "::UnityEngine::Rendering::Universal::ScriptableRenderer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "resolveFinalTarget", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "worldSpaceCameraPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData(
    ::UnityEngine::Matrix4x4 m_ViewMatrix, ::UnityEngine::Matrix4x4 m_ProjectionMatrix, ::UnityW<::UnityEngine::Camera> camera, ::UnityEngine::Rendering::Universal::CameraRenderType renderType,
    ::UnityW<::UnityEngine::RenderTexture> targetTexture, ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor, ::UnityEngine::Rect pixelRect, int32_t pixelWidth, int32_t pixelHeight,
    float_t aspectRatio, float_t renderScale, ::UnityEngine::Rendering::Universal::ImageScalingMode imageScalingMode, ::UnityEngine::Rendering::Universal::ImageUpscalingFilter upscalingFilter,
    bool fsrOverrideSharpness, float_t fsrSharpness, bool clearDepth, ::UnityEngine::CameraType cameraType, bool isDefaultViewport, bool isHdrEnabled, bool requiresDepthTexture,
    bool requiresOpaqueTexture, bool postProcessingRequiresDepthTexture, bool xrRendering, ::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags,
    ::UnityEngine::Rendering::Universal::XRPass* xr, bool isStereoEnabled, float_t maxShadowDistance, bool postProcessEnabled,
    ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* captureActions,
    ::UnityEngine::LayerMask volumeLayerMask, ::UnityW<::UnityEngine::Transform> volumeTrigger, bool isStopNaNEnabled, bool isDitheringEnabled,
    ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing, ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality,
    ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, bool resolveFinalTarget, ::UnityEngine::Vector3 worldSpaceCameraPos) noexcept {
  this->m_ViewMatrix = m_ViewMatrix;
  this->m_ProjectionMatrix = m_ProjectionMatrix;
  this->camera = camera;
  this->renderType = renderType;
  this->targetTexture = targetTexture;
  this->cameraTargetDescriptor = cameraTargetDescriptor;
  this->pixelRect = pixelRect;
  this->pixelWidth = pixelWidth;
  this->pixelHeight = pixelHeight;
  this->aspectRatio = aspectRatio;
  this->renderScale = renderScale;
  this->imageScalingMode = imageScalingMode;
  this->upscalingFilter = upscalingFilter;
  this->fsrOverrideSharpness = fsrOverrideSharpness;
  this->fsrSharpness = fsrSharpness;
  this->clearDepth = clearDepth;
  this->cameraType = cameraType;
  this->isDefaultViewport = isDefaultViewport;
  this->isHdrEnabled = isHdrEnabled;
  this->requiresDepthTexture = requiresDepthTexture;
  this->requiresOpaqueTexture = requiresOpaqueTexture;
  this->postProcessingRequiresDepthTexture = postProcessingRequiresDepthTexture;
  this->xrRendering = xrRendering;
  this->defaultOpaqueSortFlags = defaultOpaqueSortFlags;
  this->xr = xr;
  this->isStereoEnabled = isStereoEnabled;
  this->maxShadowDistance = maxShadowDistance;
  this->postProcessEnabled = postProcessEnabled;
  this->captureActions = captureActions;
  this->volumeLayerMask = volumeLayerMask;
  this->volumeTrigger = volumeTrigger;
  this->isStopNaNEnabled = isStopNaNEnabled;
  this->isDitheringEnabled = isDitheringEnabled;
  this->antialiasing = antialiasing;
  this->antialiasingQuality = antialiasingQuality;
  this->renderer = renderer;
  this->resolveFinalTarget = resolveFinalTarget;
  this->worldSpaceCameraPos = worldSpaceCameraPos;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData() {}
