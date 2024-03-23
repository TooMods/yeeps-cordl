#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cad38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ScriptableRenderContext& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_renderContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderContext;
}
constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_renderContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderContext;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_set_renderContext(::UnityEngine::Rendering::ScriptableRenderContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderContext = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_cmd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_cmd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cmd;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_set_cmd(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cmd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_renderGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderGraphPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_renderGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderGraphPool;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_set_renderGraphPool(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderGraphPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_defaultResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultResources;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_get_defaultResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultResources;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::__cordl_internal_set_defaultResources(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext::RenderGraphContext() {}
