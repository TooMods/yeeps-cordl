#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__ITweenJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
/// @brief Convert operator to "::Unity::Jobs::IJob"
template <typename T> constexpr UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::operator ::Unity::Jobs::IJob*() noexcept {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Jobs::IJob"
template <typename T> constexpr ::Unity::Jobs::IJob* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::i___Unity__Jobs__IJob() noexcept {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(this));
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::get_jobData() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::Lerp(T from, T to, float_t t) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, from, to, t);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::IsNearlyEqual(T from, T to) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, from, to);
}
