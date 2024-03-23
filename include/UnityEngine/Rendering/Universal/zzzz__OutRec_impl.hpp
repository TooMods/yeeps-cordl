#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutRec_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutPt_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::OutRec._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::OutRec::*)()>(&::UnityEngine::Rendering::Universal::OutRec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e2216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::OutRec*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_Idx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Idx;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_Idx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Idx;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_Idx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Idx = value;
}
constexpr bool& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_IsHole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsHole;
}
constexpr bool const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_IsHole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsHole;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_IsHole(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsHole = value;
}
constexpr bool& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_IsOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsOpen;
}
constexpr bool const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_IsOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsOpen;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_IsOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsOpen = value;
}
constexpr ::UnityEngine::Rendering::Universal::OutRec*& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_FirstLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FirstLeft;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutRec*> const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_FirstLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FirstLeft;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_FirstLeft(::UnityEngine::Rendering::Universal::OutRec* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FirstLeft)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_Pts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pts;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_Pts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pts;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_Pts(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Pts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_BottomPt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BottomPt;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_BottomPt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BottomPt;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_BottomPt(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BottomPt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::PolyNode*& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_PolyNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PolyNode;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PolyNode*> const& UnityEngine::Rendering::Universal::OutRec::__cordl_internal_get_PolyNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PolyNode;
}
constexpr void UnityEngine::Rendering::Universal::OutRec::__cordl_internal_set_PolyNode(::UnityEngine::Rendering::Universal::PolyNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PolyNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::OutRec* UnityEngine::Rendering::Universal::OutRec::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::OutRec*>());
}
inline void UnityEngine::Rendering::Universal::OutRec::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::OutRec*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::OutRec::OutRec() {}
