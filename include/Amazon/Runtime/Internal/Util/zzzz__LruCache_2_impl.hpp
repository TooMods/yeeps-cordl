#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruCache_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruListItem_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__LruList_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue> constexpr ::System::Object*& Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_cacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheLock;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_cacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cacheLock;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_set_cacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cacheLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>*&
Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>*> const&
Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_set_cache(
    ::System::Collections::Generic::Dictionary_2<TKey, ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*& Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_lruList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lruList;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>*> const&
Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get_lruList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lruList;
}
template <typename TKey, typename TValue>
constexpr void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_set_lruList(::Amazon::Runtime::Internal::Util::LruList_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lruList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr int32_t& Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get__MaxEntries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxEntries_k__BackingField;
}
template <typename TKey, typename TValue> constexpr int32_t const& Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_get__MaxEntries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxEntries_k__BackingField;
}
template <typename TKey, typename TValue> constexpr void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::__cordl_internal_set__MaxEntries_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxEntries_k__BackingField = value;
}
template <typename TKey, typename TValue> inline int32_t Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::get_MaxEntries() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "get_MaxEntries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::set_MaxEntries(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "set_MaxEntries",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline int32_t Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::New_ctor(int32_t maxEntries) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>(maxEntries));
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::_ctor(int32_t maxEntries) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxEntries);
}
template <typename TKey, typename TValue> inline ::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>* Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::FindOldestItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "FindOldestItem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Util::LruListItem_2<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::EvictExpiredLRUListItems(int32_t validityInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "EvictExpiredLRUListItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, validityInSeconds);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::AddOrUpdate(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "AddOrUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::Evict(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "Evict",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::GetOrAdd(TKey key, ::System::Func_2<TKey, TValue>* factory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "GetOrAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, factory);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Amazon::Runtime::Internal::Util::LruCache_2<TKey, TValue>::LruCache_2() {}
