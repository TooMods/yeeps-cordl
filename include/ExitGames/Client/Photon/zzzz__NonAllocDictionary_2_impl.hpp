#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<K>"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::operator ::System::Collections::Generic::IEnumerator_1<K>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<K>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<K>* ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::i___System__Collections__Generic__IEnumerator_1_K_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<K>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ::System::Collections::IEnumerator* ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename K, typename V> constexpr ::System::IDisposable* ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::_ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename K, typename V> inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V> ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Object* ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename K, typename V> inline K ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*",
// modifiers: "", def_value: Some("nullptr") }]
template <typename K, typename V>
constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::__NonAllocDictionary_2__KeyIterator(int32_t _index,
                                                                                                                      ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept {
  this->_index = _index;
  this->_dict = _dict;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>::__NonAllocDictionary_2__KeyIterator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<V>"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::operator ::System::Collections::Generic::IEnumerator_1<V>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<V>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<V>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<V>* ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::i___System__Collections__Generic__IEnumerator_1_V_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<V>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ::System::Collections::IEnumerator* ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename K, typename V> constexpr ::System::IDisposable* ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::_ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename K, typename V>
inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V> ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V> inline V ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Object* ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*",
// modifiers: "", def_value: Some("nullptr") }]
template <typename K, typename V>
constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::__NonAllocDictionary_2__ValueIterator(int32_t _index,
                                                                                                                          ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept {
  this->_index = _index;
  this->_dict = _dict;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>::__NonAllocDictionary_2__ValueIterator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_K_V__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr ::System::Collections::IEnumerator* ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename K, typename V> constexpr ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename K, typename V> constexpr ::System::IDisposable* ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::_ctor(::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Object* ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Collections::Generic::KeyValuePair_2<K, V> ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dict", ty: "::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>*",
// modifiers: "", def_value: Some("nullptr") }]
template <typename K, typename V>
constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::__NonAllocDictionary_2__PairIterator(int32_t _index,
                                                                                                                        ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* _dict) noexcept {
  this->_index = _index;
  this->_dict = _dict;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>::__NonAllocDictionary_2__PairIterator() {}
// Ctor Parameters [CppParam { name: "Used", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Hash", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Key", ty: "K", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Val", ty: "V", modifiers: "",
// def_value: Some("nullptr") }]
template <typename K, typename V>
constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>::__NonAllocDictionary_2__Node(bool Used, int32_t Next, uint32_t Hash, K Key, V Val) noexcept {
  this->Used = Used;
  this->Next = Next;
  this->Hash = Hash;
  this->Key = Key;
  this->Val = Val;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>::__NonAllocDictionary_2__Node() {}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<K,V>"
template <typename K, typename V> constexpr ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::operator ::System::Collections::Generic::IDictionary_2<K, V>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<K, V>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<K,V>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IDictionary_2<K, V>* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::i___System__Collections__Generic__IDictionary_2_K_V_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<K, V>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename K, typename V> constexpr ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename K, typename V> constexpr ::System::Collections::IEnumerable* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename K, typename V> constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__freeHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeHead;
}
template <typename K, typename V> constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__freeHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeHead;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__freeHead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeHead = value;
}
template <typename K, typename V> constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__freeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename K, typename V> constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__freeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeCount;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__freeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____freeCount = value;
}
template <typename K, typename V> constexpr int32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__usedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usedCount;
}
template <typename K, typename V> constexpr int32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__usedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usedCount;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__usedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usedCount = value;
}
template <typename K, typename V> constexpr uint32_t& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
template <typename K, typename V> constexpr uint32_t const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__capacity(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
template <typename K, typename V> constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename K, typename V> constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buckets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V>
constexpr ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*>&
ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename K, typename V>
constexpr ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> const&
ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename K, typename V>
constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set__nodes(
    ::ArrayW<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>, ::Array<::ExitGames::Client::Photon::__NonAllocDictionary_2__Node<K, V>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> constexpr bool& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
template <typename K, typename V> constexpr bool const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReadOnly = value;
}
template <typename K, typename V> constexpr ::System::Collections::Generic::ICollection_1<K>*& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename K, typename V>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<K>*> const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set_keys(::System::Collections::Generic::ICollection_1<K>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> constexpr ::System::Collections::Generic::ICollection_1<V>*& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename K, typename V>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<V>*> const& ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename K, typename V> constexpr void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::__cordl_internal_set_values(::System::Collections::Generic::ICollection_1<V>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::setStaticF__primeTableUInt(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "_primeTableUInt",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
template <typename K, typename V> inline ::ArrayW<uint32_t, ::Array<uint32_t>*> ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::getStaticF__primeTableUInt() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "_primeTableUInt",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get>();
}
template <typename K, typename V> inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V> ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__KeyIterator<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V>
inline ::System::Collections::Generic::ICollection_1<V>* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::System_Collections_Generic_IDictionary_K_V__get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                               "System.Collections.Generic.IDictionary<K,V>.get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<V>*, false>(this, ___internal_method);
}
template <typename K, typename V>
inline ::System::Collections::Generic::ICollection_1<K>* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::System_Collections_Generic_IDictionary_K_V__get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                               "System.Collections.Generic.IDictionary<K,V>.get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<K>*, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V> ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__ValueIterator<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V> inline int32_t ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename K, typename V> inline uint32_t ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "get_Capacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
/// @param capacity: uint32_t (default: static_cast<uint32_t>(0x800001du))
template <typename K, typename V> inline ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::New_ctor(uint32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>(capacity));
}
/// @param capacity: uint32_t (default: static_cast<uint32_t>(0x800001du))
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::_ctor(uint32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::ContainsKey(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "ContainsKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Contains(::System::Collections::Generic::KeyValuePair_2<K, V> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<K, V>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::TryGetValue(K key, ByRef<V> val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<V>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, val);
}
template <typename K, typename V> inline V ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::get_Item(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::set_Item(K key, V value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Set(K key, V val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, val);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Add(K key, V val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, val);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Add(::System::Collections::Generic::KeyValuePair_2<K, V> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<K, V>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Remove(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Remove(::System::Collections::Generic::KeyValuePair_2<K, V> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<K, V>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename K, typename V>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*
ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V> ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__NonAllocDictionary_2__PairIterator<K, V>, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Collections::IEnumerator* ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename K, typename V> inline int32_t ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::FindNode(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "FindNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Insert(K key, V val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, val);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Expand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "Expand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
                                                                             "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V>
inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_K_V___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(),
      "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<K,V>>.CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename K, typename V> inline bool ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::IsPrimeFromList(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "IsPrimeFromList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template <typename K, typename V> inline uint32_t ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::GetNextPrime(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "GetNextPrime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
template <typename K, typename V> inline void ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::_cordl_Assert(bool condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>*>::get(), "Assert",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, condition);
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::ExitGames::Client::Photon::NonAllocDictionary_2<K, V>::NonAllocDictionary_2() {}
