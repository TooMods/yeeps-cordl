#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__RegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedBufferedAdd;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedBufferedAdd;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedBufferedAdd(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnorderedBufferedAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedBufferedRemove;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedBufferedRemove;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedBufferedRemove(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnorderedBufferedRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedRegisteredSnapshot;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedRegisteredSnapshot;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedRegisteredSnapshot(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnorderedRegisteredSnapshot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedRegisteredItems;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnorderedRegisteredItems;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedRegisteredItems(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnorderedRegisteredItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::IsRegistered(T item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::IsStillRegistered(T item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Register(T item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Unregister(T item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Flush() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::GetRegisteredItems(::System::Collections::Generic::List_1<T>* results) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::GetRegisteredItemAt(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::OnItemMovedImmediately(T item, int32_t newIndex) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, newIndex);
}
template <typename T> inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::RegistrationList_1() {}
