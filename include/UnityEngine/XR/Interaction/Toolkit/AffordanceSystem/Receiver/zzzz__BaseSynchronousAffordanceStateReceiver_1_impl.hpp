#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAffordanceStateReceiver_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseSynchronousAffordanceStateReceiver_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__ISynchronousAffordanceStateReceiver_def.hpp"
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
template <typename T>
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<
    T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<
    T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__ISynchronousAffordanceStateReceiver() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template <typename T>
constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<
    T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<
    T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::HandleTween(float_t tweenTarget) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tweenTarget);
}
template <typename T>
inline T UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::Interpolate(T startValue, T targetValue, float_t interpolationAmount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, startValue, targetValue, interpolationAmount);
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::BaseSynchronousAffordanceStateReceiver_1() {}
