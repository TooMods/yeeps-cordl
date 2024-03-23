#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Join_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__OutPt_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Join._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Join::*)()>(&::UnityEngine::Rendering::Universal::Join::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e2217c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Join*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OutPt1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutPt1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OutPt1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutPt1;
}
constexpr void UnityEngine::Rendering::Universal::Join::__cordl_internal_set_OutPt1(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OutPt1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::OutPt*& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OutPt2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutPt2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OutPt2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutPt2;
}
constexpr void UnityEngine::Rendering::Universal::Join::__cordl_internal_set_OutPt2(::UnityEngine::Rendering::Universal::OutPt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OutPt2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OffPt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffPt;
}
constexpr ::UnityEngine::Rendering::Universal::IntPoint const& UnityEngine::Rendering::Universal::Join::__cordl_internal_get_OffPt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OffPt;
}
constexpr void UnityEngine::Rendering::Universal::Join::__cordl_internal_set_OffPt(::UnityEngine::Rendering::Universal::IntPoint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OffPt = value;
}
inline ::UnityEngine::Rendering::Universal::Join* UnityEngine::Rendering::Universal::Join::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Join*>());
}
inline void UnityEngine::Rendering::Universal::Join::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Join*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Join::Join() {}
