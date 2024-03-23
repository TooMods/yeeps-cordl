#pragma once
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_impl.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListResource_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererList_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource::*)(
    ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1bcb844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource::_ctor(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
// Ctor Parameters [CppParam { name: "desc", ty: "::UnityEngine::Rendering::RendererUtils::RendererListDesc", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererList", ty:
// "::UnityEngine::Rendering::RendererUtils::RendererList", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource::RendererListResource(::UnityEngine::Rendering::RendererUtils::RendererListDesc desc,
                                                                                                                ::UnityEngine::Rendering::RendererUtils::RendererList rendererList) noexcept {
  this->desc = desc;
  this->rendererList = rendererList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource::RendererListResource() {}
