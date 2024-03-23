#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>"
template <typename T> constexpr UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>"
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>*
UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::i___UnityEngine__XR__Interaction__Toolkit__IXRFilterList_1_T_() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRFilterList_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::get_count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(),
                                               "get_count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Remove(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(), "Remove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::MoveTo(T item, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(), "MoveTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, newIndex);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(),
                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::GetAll(::System::Collections::Generic::List_1<T>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(), "GetAll",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::GetAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(), "GetAt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
/// @param context: ::UnityEngine::Object* (default: nullptr)
template <typename T>
template <typename TObject>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::RegisterReferences(::System::Collections::Generic::List_1<TObject>* references,
                                                                                                               ::UnityEngine::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(),
                                               "RegisterReferences", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TObject>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, references, context);
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::ExposedRegistrationList_1() {}
