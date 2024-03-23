#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableSynchronousBase_1_def.hpp"
/// @param useCurve: bool (default: false)
template <typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::ExecuteTween(T startValue, T targetValue, float_t tweenAmount, bool useCurve) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startValue, targetValue, tweenAmount, useCurve);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::Lerp(T from, T to, float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, from, to, t);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::IsNearlyEqual(T startValue, T targetValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startValue, targetValue);
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*
UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::TweenableVariableSynchronousBase_1() {}
