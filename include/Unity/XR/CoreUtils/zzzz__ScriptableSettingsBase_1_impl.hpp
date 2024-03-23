#pragma once
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_1_def.hpp"
template <typename T> inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::setStaticF_HasCustomPath(bool value) {
  ::cordl_internals::setStaticField<bool, "HasCustomPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get>(
      std::forward<bool>(value));
}
template <typename T> inline bool Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::getStaticF_HasCustomPath() {
  return ::cordl_internals::getStaticField<bool, "HasCustomPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get>();
}
template <typename T> inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::setStaticF_BaseInstance(T value) {
  ::cordl_internals::setStaticField<T, "BaseInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get>(std::forward<T>(value));
}
template <typename T> inline T Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::getStaticF_BaseInstance() {
  return ::cordl_internals::getStaticField<T, "BaseInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get>();
}
template <typename T> inline ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>* Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>());
}
template <typename T> inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::Save(::StringW savePathFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, savePathFormat);
}
template <typename T> inline ::StringW Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::GetFilePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>*>::get(),
                                                                             "GetFilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>::ScriptableSettingsBase_1() {}
