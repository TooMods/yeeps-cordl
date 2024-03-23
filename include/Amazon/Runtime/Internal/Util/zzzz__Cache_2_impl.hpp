#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Cache_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Cache_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ICache_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ICache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
template <typename TKey, typename TValue, typename T> constexpr T& Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue, typename T> constexpr T const& Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue, typename T> constexpr void Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue, typename T>
constexpr ::System::DateTime& Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_get__LastUseTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastUseTime_k__BackingField;
}
template <typename TKey, typename TValue, typename T>
constexpr ::System::DateTime const& Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_get__LastUseTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastUseTime_k__BackingField;
}
template <typename TKey, typename TValue, typename T>
constexpr void Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__cordl_internal_set__LastUseTime_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastUseTime_k__BackingField = value;
}
template <typename TKey, typename TValue, typename T> inline T Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename T> inline void Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>::get(), "set_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue, typename T> inline ::System::DateTime Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::get_LastUseTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>::get(),
                                               "get_LastUseTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename T> inline void Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::set_LastUseTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>::get(), "set_LastUseTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue, typename T>
inline ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>* Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::New_ctor(T value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>(value));
}
template <typename TKey, typename TValue, typename T> inline void Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename T> constexpr ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, T>::__Cache_2__CacheItem_1() {}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::operator ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>* Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::i___Amazon__Runtime__Internal__Util__ICache_2_TKey_TValue_() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache"
template <typename TKey, typename TValue> constexpr Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::operator ::Amazon::Runtime::Internal::Util::ICache*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache"
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::ICache* Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::i___Amazon__Runtime__Internal__Util__ICache() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>*&
Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_Contents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Contents;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>*> const&
Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_Contents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Contents;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_set_Contents(
    ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Contents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Object*& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_CacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CacheLock;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_CacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CacheLock;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_set_CacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CacheLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::DateTime& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get__LastCacheClean_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastCacheClean_k__BackingField;
}
template <typename TKey, typename TValue> constexpr ::System::DateTime const& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get__LastCacheClean_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastCacheClean_k__BackingField;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_set__LastCacheClean_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastCacheClean_k__BackingField = value;
}
template <typename TKey, typename TValue> constexpr ::System::TimeSpan& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_maximumItemLifespan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximumItemLifespan;
}
template <typename TKey, typename TValue> constexpr ::System::TimeSpan const& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_maximumItemLifespan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximumItemLifespan;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_set_maximumItemLifespan(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maximumItemLifespan = value;
}
template <typename TKey, typename TValue> constexpr ::System::TimeSpan& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_cacheClearPeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheClearPeriod;
}
template <typename TKey, typename TValue> constexpr ::System::TimeSpan const& Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_get_cacheClearPeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheClearPeriod;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::__cordl_internal_set_cacheClearPeriod(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cacheClearPeriod = value;
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::setStaticF_DefaultMaximumItemLifespan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "DefaultMaximumItemLifespan",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get>(std::forward<::System::TimeSpan>(value));
}
template <typename TKey, typename TValue> inline ::System::TimeSpan Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::getStaticF_DefaultMaximumItemLifespan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "DefaultMaximumItemLifespan",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::setStaticF_DefaultCacheClearPeriod(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "DefaultCacheClearPeriod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get>(std::forward<::System::TimeSpan>(value));
}
template <typename TKey, typename TValue> inline ::System::TimeSpan Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::getStaticF_DefaultCacheClearPeriod() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "DefaultCacheClearPeriod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get>();
}
/// @param keyComparer: ::System::Collections::Generic::IEqualityComparer_1<TKey>* (default: nullptr)
template <typename TKey, typename TValue>
inline ::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*
Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>(keyComparer));
}
/// @param keyComparer: ::System::Collections::Generic::IEqualityComparer_1<TKey>* (default: nullptr)
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* keyComparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyComparer);
}
template <typename TKey, typename TValue> inline ::System::DateTime Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::get_LastCacheClean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "get_LastCacheClean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::set_LastCacheClean(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "set_LastCacheClean",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, creator);
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator, ByRef<bool> isStaleItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, creator, isStaleItem);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::Clear(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TKey>* Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::TimeSpan Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::get_MaximumItemLifespan() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "get_MaximumItemLifespan", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::set_MaximumItemLifespan(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "set_MaximumItemLifespan",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::TimeSpan Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::get_CacheClearPeriod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "get_CacheClearPeriod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::set_CacheClearPeriod(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "set_CacheClearPeriod",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline int32_t Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::get_ItemCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "get_ItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
template <typename TOut>
inline TOut Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::UseCache(TKey key, ::System::Func_1<TOut>* operation, ::System::Action* onError,
                                                                             ::System::Predicate_1<::System::Exception*>* shouldRetryForException) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "UseCache",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOut>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TOut>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::System::Exception*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOut>::get() }));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, key, operation, onError, shouldRetryForException);
}
/// @param creator: ::System::Func_2<TKey,TValue>* (default: nullptr)
template <typename TKey, typename TValue>
inline TValue Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::GetValueHelper(TKey key, ByRef<bool> isStaleItem, ::System::Func_2<TKey, TValue>* creator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "GetValueHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, isStaleItem, creator);
}
template <typename TKey, typename TValue>
inline bool Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::IsValidItem(::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(), "IsValidItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Util::__Cache_2__CacheItem_1<TKey, TValue, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::RemoveOldItems_Locked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "RemoveOldItems_Locked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::DateTime Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::GetCorrectedLocalTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>*>::get(),
                                                                             "GetCorrectedLocalTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Amazon::Runtime::Internal::Util::Cache_2<TKey, TValue>::Cache_2() {}
