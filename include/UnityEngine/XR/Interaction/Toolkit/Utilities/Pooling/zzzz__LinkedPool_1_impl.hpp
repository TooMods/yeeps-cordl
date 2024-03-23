#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__PooledObject_1_def.hpp"
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_get_poolNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolNext;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_get_poolNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolNext;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_set_poolNext(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poolNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*>());
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>::__LinkedPool_1__LinkedPoolItem() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_CreateFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CreateFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnGet(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnGet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnRelease)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_ActionOnDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_ActionOnDestroy(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnDestroy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_Limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Limit;
}
template <typename T> constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_Limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Limit;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_Limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Limit = value;
}
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoolFirst;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoolFirst;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_PoolFirst(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PoolFirst)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_NextAvailableListItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextAvailableListItem;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_NextAvailableListItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextAvailableListItem;
}
template <typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_NextAvailableListItem(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::__LinkedPool_1__LinkedPoolItem<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NextAvailableListItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CollectionCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get_m_CollectionCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set_m_CollectionCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectionCheck = value;
}
template <typename T> constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get__countInactive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countInactive_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_get__countInactive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countInactive_k__BackingField;
}
template <typename T> constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::__cordl_internal_set__countInactive_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countInactive_k__BackingField = value;
}
/// @param actionOnGet: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnRelease: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: nullptr)
/// @param collectionCheck: bool (default: true)
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*
UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                                                     ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t maxSize) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, maxSize));
}
/// @param actionOnGet: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnRelease: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: nullptr)
/// @param collectionCheck: bool (default: true)
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template <typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet,
                                                                                              ::System::Action_1<T>* actionOnRelease, ::System::Action_1<T>* actionOnDestroy, bool collectionCheck,
                                                                                              int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, maxSize);
}
template <typename T> inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::get_countInactive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(),
                                               "get_countInactive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::set_countInactive(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "set_countInactive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Get() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "Get",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T> UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Get(ByRef<T> v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "Get",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>, false>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Release(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>::LinkedPool_1() {}
