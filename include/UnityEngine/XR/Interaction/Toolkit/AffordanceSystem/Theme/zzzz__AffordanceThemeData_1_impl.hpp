#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__AffordanceThemeData_1_def.hpp"
template <typename T> constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_stateName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateName;
}
template <typename T> constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_stateName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateName;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_set_stateName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_animationStateStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationStateStartValue;
}
template <typename T> constexpr T const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_animationStateStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationStateStartValue;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_set_animationStateStartValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationStateStartValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_animationStateEndValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationStateEndValue;
}
template <typename T> constexpr T const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_get_animationStateEndValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationStateEndValue;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::__cordl_internal_set_animationStateEndValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationStateEndValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>::AffordanceThemeData_1() {}
