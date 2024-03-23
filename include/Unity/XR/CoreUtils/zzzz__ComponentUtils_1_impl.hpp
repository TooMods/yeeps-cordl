#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ComponentUtils_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template <typename T> inline void Unity::XR::CoreUtils::ComponentUtils_1<T>::setStaticF_k_RetrievalList(::System::Collections::Generic::List_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "k_RetrievalList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>::get>(
      std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* Unity::XR::CoreUtils::ComponentUtils_1<T>::getStaticF_k_RetrievalList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "k_RetrievalList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>::get>();
}
template <typename T> inline T Unity::XR::CoreUtils::ComponentUtils_1<T>::GetComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>::get(), "GetComponent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gameObject);
}
template <typename T> inline T Unity::XR::CoreUtils::ComponentUtils_1<T>::GetComponentInChildren(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>::get(), "GetComponentInChildren", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::ComponentUtils_1<T>::ComponentUtils_1() {}
