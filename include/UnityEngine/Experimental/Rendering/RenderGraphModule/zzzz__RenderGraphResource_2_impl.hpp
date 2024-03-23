#pragma once
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
template <typename DescType, typename ResType> constexpr DescType& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename DescType, typename ResType>
constexpr DescType const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename DescType, typename ResType>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_desc(DescType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___desc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename DescType, typename ResType>
constexpr ResType& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_graphicsResource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsResource;
}
template <typename DescType, typename ResType>
constexpr ResType const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_graphicsResource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsResource;
}
template <typename DescType, typename ResType>
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_graphicsResource(ResType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphicsResource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename DescType, typename ResType>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>());
}
template <typename DescType, typename ResType> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename DescType, typename ResType>
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename DescType, typename ResType> inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::IsCreated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename DescType, typename ResType> inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::ReleaseGraphicsResource() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename DescType, typename ResType> constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::RenderGraphResource_2() {}
