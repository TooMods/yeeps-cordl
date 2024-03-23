#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/zzzz__ScriptableSettingsBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/zzzz__ScriptableSettingsBase_1_def.hpp"
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::setStaticF_k_HasCustomPath(bool value) {
  ::cordl_internals::setStaticField<bool, "k_HasCustomPath",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get>(
      std::forward<bool>(value));
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::getStaticF_k_HasCustomPath() {
  return ::cordl_internals::getStaticField<bool, "k_HasCustomPath",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::setStaticF_s_Instance(T value) {
  ::cordl_internals::setStaticField<T, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get>(
      std::forward<T>(value));
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<T, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get>();
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::Save(::StringW savePathFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get(), "Save",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, savePathFormat);
}
template <typename T> inline ::StringW UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::GetFilePath() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>*>::get(),
                                  "GetFilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>::ScriptableSettingsBase_1() {}
