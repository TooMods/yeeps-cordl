#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__XRLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRViewCreateInfo_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRLayout.CreatePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::XRPass* (
    ::UnityEngine::Rendering::Universal::XRLayout::*)(::UnityEngine::Rendering::Universal::XRPassCreateInfo)>(&::UnityEngine::Rendering::Universal::XRLayout::CreatePass)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x288dea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRLayout>::get(), "CreatePass", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassCreateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRLayout.AddViewToPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::XRLayout::*)(
    ::UnityEngine::Rendering::Universal::XRViewCreateInfo, ::UnityEngine::Rendering::Universal::XRPass*)>(&::UnityEngine::Rendering::Universal::XRLayout::AddViewToPass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x288e278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRLayout>::get(), "AddViewToPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRViewCreateInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::XRPass* UnityEngine::Rendering::Universal::XRLayout::CreatePass(::UnityEngine::Rendering::Universal::XRPassCreateInfo passCreateInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRLayout>::get(), "CreatePass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPassCreateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::XRPass*, false>(this, ___internal_method, passCreateInfo);
}
inline void UnityEngine::Rendering::Universal::XRLayout::AddViewToPass(::UnityEngine::Rendering::Universal::XRViewCreateInfo viewCreateInfo, ::UnityEngine::Rendering::Universal::XRPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::XRLayout>::get(), "AddViewToPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRViewCreateInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewCreateInfo, pass);
}
// Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "xrSystem", ty:
// "::UnityEngine::Rendering::Universal::XRSystem*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::XRLayout::XRLayout(::UnityW<::UnityEngine::Camera> camera, ::UnityEngine::Rendering::Universal::XRSystem* xrSystem) noexcept {
  this->camera = camera;
  this->xrSystem = xrSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRLayout::XRLayout() {}
