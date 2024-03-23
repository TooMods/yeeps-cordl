#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__ICache_2_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__ICache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::Internal::Util::ICache"
template <typename TKey, typename TValue> constexpr Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::operator ::Amazon::Runtime::Internal::Util::ICache*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Util::ICache"
template <typename TKey, typename TValue>
constexpr ::Amazon::Runtime::Internal::Util::ICache* Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::i___Amazon__Runtime__Internal__Util__ICache() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::ICache*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, creator);
}
template <typename TKey, typename TValue> inline TValue Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::GetValue(TKey key, ::System::Func_2<TKey, TValue>* creator, ByRef<bool> isStaleItem) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key, creator, isStaleItem);
}
template <typename TKey, typename TValue> inline void Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::Clear(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TKey>* Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::get_Keys() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
template <typename TOut>
inline TOut Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>::UseCache(TKey key, ::System::Func_1<TOut>* operation, ::System::Action* onError,
                                                                              ::System::Predicate_1<::System::Exception*>* shouldRetryForException) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::ICache_2<TKey, TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, key, operation, onError, shouldRetryForException);
}
