#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__XRDisplaySubsystem__LateLatchNode() {}
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::Head{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::LeftHand{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::RightHand{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout::__XRDisplaySubsystem__TextureLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout::__XRDisplaySubsystem__TextureLayout() {}
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout UnityEngine::XR::__XRDisplaySubsystem__TextureLayout::Texture2DArray{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout UnityEngine::XR::__XRDisplaySubsystem__TextureLayout::SingleTexture2D{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__TextureLayout UnityEngine::XR::__XRDisplaySubsystem__TextureLayout::SeparateTexture2Ds{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousView", ty:
// "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter::__XRDisplaySubsystem__XRRenderParameter(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 projection,
                                                                                                              ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh,
                                                                                                              int32_t textureArraySlice, ::UnityEngine::Matrix4x4 previousView,
                                                                                                              bool isPreviousViewValid) noexcept {
  this->view = view;
  this->projection = projection;
  this->viewport = viewport;
  this->occlusionMesh = occlusionMesh;
  this->textureArraySlice = textureArraySlice;
  this->previousView = previousView;
  this->isPreviousViewValid = isPreviousViewValid;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter::__XRDisplaySubsystem__XRRenderParameter() {}
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass.GetRenderParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::*)(
    ::UnityEngine::Camera*, int32_t, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>)>(&::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameter)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18f8714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass.GetRenderParameterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::*)()>(
    &::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameterCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18f87cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                                                               "GetRenderParameterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass.GetRenderParameter_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>, ::UnityEngine::Camera*, int32_t, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>)>(
        &::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameter_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18f8770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameter_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass.GetRenderParameterCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>)>(
    &::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameterCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x18f8808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameterCount_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameter(::UnityEngine::Camera* camera, int32_t renderParameterIndex,
                                                                                    ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter> renderParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, renderParameterIndex, renderParameter);
}
inline int32_t UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                                                             "GetRenderParameterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameter_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass> _unity_self, ::UnityEngine::Camera* camera,
                                                                                             int32_t renderParameterIndex,
                                                                                             ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter> renderParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameter_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, camera, renderParameterIndex, renderParameter);
}
inline int32_t UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::GetRenderParameterCount_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(), "GetRenderParameterCount_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__XRDisplaySubsystem__XRRenderPass(void* displaySubsystemInstance, int32_t renderPassIndex,
                                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                                                                                    ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget,
                                                                                                    ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, bool shouldFillOutDepth,
                                                                                                    int32_t cullingPassIndex) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->renderPassIndex = renderPassIndex;
  this->renderTarget = renderTarget;
  this->renderTargetDesc = renderTargetDesc;
  this->hasMotionVectorPass = hasMotionVectorPass;
  this->motionVectorRenderTarget = motionVectorRenderTarget;
  this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
  this->shouldFillOutDepth = shouldFillOutDepth;
  this->cullingPassIndex = cullingPassIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__XRDisplaySubsystem__XRRenderPass() {}
// Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams::__XRDisplaySubsystem__XRBlitParams(::UnityW<::UnityEngine::RenderTexture> srcTex, int32_t srcTexArraySlice,
                                                                                                    ::UnityEngine::Rect srcRect, ::UnityEngine::Rect destRect) noexcept {
  this->srcTex = srcTex;
  this->srcTexArraySlice = srcTexArraySlice;
  this->srcRect = srcRect;
  this->destRect = destRect;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams::__XRDisplaySubsystem__XRBlitParams() {}
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc.GetBlitParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::*)(
    int32_t, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>)>(&::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::GetBlitParameter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f8844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>::get(), "GetBlitParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc.GetBlitParameter_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>, int32_t, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>)>(
        &::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::GetBlitParameter_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f8898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>::get(), "GetBlitParameter_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::GetBlitParameter(int32_t blitParameterIndex, ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams> blitParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>::get(), "GetBlitParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blitParameterIndex, blitParameter);
}
inline void UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::GetBlitParameter_Injected(ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc> _unity_self,
                                                                                                   int32_t blitParameterIndex,
                                                                                                   ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams> blitParameter) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>::get(), "GetBlitParameter_Injected",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::__XRDisplaySubsystem__XRBlitParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, blitParameterIndex, blitParameter);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__XRDisplaySubsystem__XRMirrorViewBlitDesc(void* displaySubsystemInstance, bool nativeBlitAvailable,
                                                                                                                    bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->nativeBlitAvailable = nativeBlitAvailable;
  this->nativeBlitInvalidStates = nativeBlitInvalidStates;
  this->blitParamsCount = blitParamsCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__XRDisplaySubsystem__XRMirrorViewBlitDesc() {}
