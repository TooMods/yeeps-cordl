#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
template <typename T>
inline void
UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>(value));
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>::get>();
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::__cctor_b__30_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>::get(),
                                               "<.cctor>b__30_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::__cctor_b__30_1(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>*>::get(), "<.cctor>b__30_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::__BaseRegistrationList_1____c<T>::__BaseRegistrationList_1____c() {}
template <typename T>
constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get__registeredSnapshot_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredSnapshot_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get__registeredSnapshot_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredSnapshot_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set__registeredSnapshot_k__BackingField(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registeredSnapshot_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferedAdd;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferedAdd;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set_m_BufferedAdd(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BufferedAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferedRemove;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferedRemove;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set_m_BufferedRemove(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BufferedRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::setStaticF_s_BufferedListPool(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*, "s_BufferedListPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*
UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::getStaticF_s_BufferedListPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*, "s_BufferedListPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_registeredSnapshot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "get_registeredSnapshot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_flushedCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "get_flushedCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_bufferedAddCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "get_bufferedAddCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_bufferedRemoveCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "get_bufferedRemoveCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::AddToBufferedAdd(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), "AddToBufferedAdd",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::RemoveFromBufferedAdd(T item) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), "RemoveFromBufferedAdd",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::ClearBufferedAdd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "ClearBufferedAdd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::AddToBufferedRemove(T item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), "AddToBufferedRemove",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::RemoveFromBufferedRemove(T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), "RemoveFromBufferedRemove",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::ClearBufferedRemove() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "ClearBufferedRemove", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::IsRegistered(T item) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::IsStillRegistered(T item) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Register(T item) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Unregister(T item) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Flush() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::GetRegisteredItems(::System::Collections::Generic::List_1<T>* results) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::GetRegisteredItemAt(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::MoveItemImmediately(T item, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), "MoveItemImmediately",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, newIndex);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::OnItemMovedImmediately(T item, int32_t newIndex) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, newIndex);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::UnregisterAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "UnregisterAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::EnsureCapacity(::System::Collections::Generic::List_1<T>* list, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(),
                                               "EnsureCapacity", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, capacity);
}
template <typename T> inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::BaseRegistrationList_1() {}
