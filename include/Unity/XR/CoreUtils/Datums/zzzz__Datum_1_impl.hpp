#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableAlloc_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
template <typename T> constexpr ::StringW& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Comments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Comments;
}
template <typename T> constexpr ::StringW const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Comments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Comments;
}
template <typename T> constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_Comments(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Comments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_ReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
template <typename T> constexpr bool const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_ReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadOnly;
}
template <typename T> constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_ReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadOnly = value;
}
template <typename T> constexpr T& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename T> constexpr T const& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
template <typename T> constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*& Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_BindableVariableReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindableVariableReference;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*> const&
Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_get_m_BindableVariableReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindableVariableReference;
}
template <typename T>
constexpr void Unity::XR::CoreUtils::Datums::Datum_1<T>::__cordl_internal_set_m_BindableVariableReference(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindableVariableReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::StringW Unity::XR::CoreUtils::Datums::Datum_1<T>::get_Comments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "get_Comments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_Comments(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "set_Comments", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool Unity::XR::CoreUtils::Datums::Datum_1<T>::get_ReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "get_ReadOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_ReadOnly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "set_ReadOnly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* Unity::XR::CoreUtils::Datums::Datum_1<T>::get_BindableVariableReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(),
                                                                             "get_BindableVariableReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline T Unity::XR::CoreUtils::Datums::Datum_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "set_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::XR::CoreUtils::Datums::Datum_1<T>* Unity::XR::CoreUtils::Datums::Datum_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>());
}
template <typename T> inline void Unity::XR::CoreUtils::Datums::Datum_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::Datum_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::XR::CoreUtils::Datums::Datum_1<T>::Datum_1() {}
