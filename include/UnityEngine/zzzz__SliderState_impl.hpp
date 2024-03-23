#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SliderState_def.hpp"
//  Writing Method size for method: ::UnityEngine::SliderState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SliderState::*)()>(&::UnityEngine::SliderState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0f9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SliderState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::SliderState::__cordl_internal_get_dragStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragStartPos;
}
constexpr float_t const& UnityEngine::SliderState::__cordl_internal_get_dragStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragStartPos;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_dragStartPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dragStartPos = value;
}
constexpr float_t& UnityEngine::SliderState::__cordl_internal_get_dragStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragStartValue;
}
constexpr float_t const& UnityEngine::SliderState::__cordl_internal_get_dragStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragStartValue;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_dragStartValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dragStartValue = value;
}
constexpr bool& UnityEngine::SliderState::__cordl_internal_get_isDragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDragging;
}
constexpr bool const& UnityEngine::SliderState::__cordl_internal_get_isDragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDragging;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_isDragging(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDragging = value;
}
inline ::UnityEngine::SliderState* UnityEngine::SliderState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::SliderState*>());
}
inline void UnityEngine::SliderState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SliderState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::SliderState::SliderState() {}
