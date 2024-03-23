#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntersectNode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IntersectNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::IntersectNode::*)()>(
    &::UnityEngine::Rendering::Universal::IntersectNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e2210c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Edge1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Edge1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Edge1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Edge1;
}
constexpr void UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_set_Edge1(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Edge1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Edge2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Edge2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Edge2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Edge2;
}
constexpr void UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_set_Edge2(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Edge2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Pt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pt;
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint const& UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_get_Pt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pt;
}
constexpr void UnityEngine::Rendering::Universal::IntersectNode::__cordl_internal_set_Pt(::UnityEngine::Rendering::Universal::IntPoint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Pt = value;
}
inline ::UnityEngine::Rendering::Universal::IntersectNode* UnityEngine::Rendering::Universal::IntersectNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::IntersectNode*>());
}
inline void UnityEngine::Rendering::Universal::IntersectNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntersectNode*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::IntersectNode::IntersectNode() {}
