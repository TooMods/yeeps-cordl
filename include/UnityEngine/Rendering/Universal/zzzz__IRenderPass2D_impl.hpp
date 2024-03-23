#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__IRenderPass2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Renderer2DData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IRenderPass2D.get_rendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> (
    ::UnityEngine::Rendering::Universal::IRenderPass2D::*)()>(&::UnityEngine::Rendering::Universal::IRenderPass2D::get_rendererData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData> UnityEngine::Rendering::Universal::IRenderPass2D::get_rendererData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IRenderPass2D*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::Renderer2DData>, false>(this, ___internal_method);
}
