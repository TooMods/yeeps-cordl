#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutPt_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::OutPt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::OutPt::*)()>(&::UnityEngine::Rendering::Universal::OutPt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e22174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::OutPt*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Idx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Idx;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Idx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Idx;
}
constexpr void UnityEngine::Rendering::Universal::OutPt::__cordl_internal_set_Idx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Idx = value;
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Pt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pt;
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint const& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Pt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pt;
}
constexpr void UnityEngine::Rendering::Universal::OutPt::__cordl_internal_set_Pt(::UnityEngine::Rendering::Universal::IntPoint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Pt = value;
}
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void UnityEngine::Rendering::Universal::OutPt::__cordl_internal_set_Next(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::OutPt::__cordl_internal_get_Prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr void UnityEngine::Rendering::Universal::OutPt::__cordl_internal_set_Prev(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::OutPt* UnityEngine::Rendering::Universal::OutPt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::OutPt*>());
}
inline void UnityEngine::Rendering::Universal::OutPt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::OutPt*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::OutPt::OutPt() {}
