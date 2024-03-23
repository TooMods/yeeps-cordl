#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
template <typename T> inline void GlobalNamespace::Singleton_1<T>::setStaticF_cachedInstance(T value) {
  ::cordl_internals::setStaticField<T, "cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get>(std::forward<T>(value));
}
template <typename T> inline T GlobalNamespace::Singleton_1<T>::getStaticF_cachedInstance() {
  return ::cordl_internals::getStaticField<T, "cachedInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::Singleton_1<T>::setStaticF_hasSearched(bool value) {
  ::cordl_internals::setStaticField<bool, "hasSearched", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get>(std::forward<bool>(value));
}
template <typename T> inline bool GlobalNamespace::Singleton_1<T>::getStaticF_hasSearched() {
  return ::cordl_internals::getStaticField<bool, "hasSearched", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get>();
}
template <typename T> inline T GlobalNamespace::Singleton_1<T>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::Singleton_1<T>::OnSceneLoaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get(), "OnSceneLoaded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::Singleton_1<T>* GlobalNamespace::Singleton_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Singleton_1<T>*>());
}
template <typename T> inline void GlobalNamespace::Singleton_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Singleton_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Singleton_1<T>::Singleton_1() {}
