#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Maxima_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Maxima._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Maxima::*)()>(&::UnityEngine::Rendering::Universal::Maxima::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e22164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Maxima*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_X() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr int64_t const& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_X() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___X;
}
constexpr void UnityEngine::Rendering::Universal::Maxima::__cordl_internal_set_X(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___X = value;
}
constexpr ::UnityEngine::Rendering::Universal::Maxima*& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void UnityEngine::Rendering::Universal::Maxima::__cordl_internal_set_Next(::UnityEngine::Rendering::Universal::Maxima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Maxima*& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_Prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& UnityEngine::Rendering::Universal::Maxima::__cordl_internal_get_Prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr void UnityEngine::Rendering::Universal::Maxima::__cordl_internal_set_Prev(::UnityEngine::Rendering::Universal::Maxima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::Maxima* UnityEngine::Rendering::Universal::Maxima::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Maxima*>());
}
inline void UnityEngine::Rendering::Universal::Maxima::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Maxima*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Maxima::Maxima() {}
