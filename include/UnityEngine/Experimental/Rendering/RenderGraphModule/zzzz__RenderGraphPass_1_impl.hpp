#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderFunc_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
template <typename PassData> constexpr PassData& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename PassData> constexpr PassData const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename PassData> constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_set_data(PassData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename PassData>
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_get_renderFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderFunc;
}
template <typename PassData>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_get_renderFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderFunc;
}
template <typename PassData>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::__cordl_internal_set_renderFunc(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename PassData>
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphContext);
}
template <typename PassData>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::Initialize(int32_t passIndex, PassData passData, ::StringW passName,
                                                                                                             ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), "Initialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<PassData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passIndex, passData, passName, sampler);
}
template <typename PassData>
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename PassData> inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::HasRenderFunc() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename PassData>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>());
}
template <typename PassData> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename PassData> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::RenderGraphPass_1() {}
