#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LocalMinima_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LocalMinima._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LocalMinima::*)()>(
    &::UnityEngine::Rendering::Universal::LocalMinima::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e22154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LocalMinima*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_Y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Y;
}
constexpr int64_t const& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_Y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Y;
}
constexpr void UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_set_Y(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Y = value;
}
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_LeftBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftBound;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_LeftBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LeftBound;
}
constexpr void UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_set_LeftBound(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LeftBound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::TEdge*& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_RightBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightBound;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_RightBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightBound;
}
constexpr void UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_set_RightBound(::UnityEngine::Rendering::Universal::TEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RightBound)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void UnityEngine::Rendering::Universal::LocalMinima::__cordl_internal_set_Next(::UnityEngine::Rendering::Universal::LocalMinima* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::LocalMinima* UnityEngine::Rendering::Universal::LocalMinima::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LocalMinima*>());
}
inline void UnityEngine::Rendering::Universal::LocalMinima::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LocalMinima*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LocalMinima::LocalMinima() {}
