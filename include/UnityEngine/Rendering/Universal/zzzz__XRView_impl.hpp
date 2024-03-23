#pragma once
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRView_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRView::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, int32_t)>(&::UnityEngine::Rendering::Universal::XRView::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x288e3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRView::*)(
    ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass, ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter)>(&::UnityEngine::Rendering::Universal::XRView::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x288e3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::XRView::_ctor(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view, ::UnityEngine::Rect vp, int32_t dstSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proj, view, vp, dstSlice);
}
inline void UnityEngine::Rendering::Universal::XRView::_ctor(::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass renderPass,
                                                             ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter renderParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRView>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::__XRDisplaySubsystem__XRRenderParameter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderPass, renderParameter);
}
// Ctor Parameters [CppParam { name: "projMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::XRView::XRView(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Rect viewport,
                                                              ::UnityW<::UnityEngine::Mesh> occlusionMesh, int32_t textureArraySlice) noexcept {
  this->projMatrix = projMatrix;
  this->viewMatrix = viewMatrix;
  this->viewport = viewport;
  this->occlusionMesh = occlusionMesh;
  this->textureArraySlice = textureArraySlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRView::XRView() {}
