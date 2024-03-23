#pragma once
#include "Unity/Services/Vivox/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__KeyEventArg_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ValueEventArg_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename TK, typename T> constexpr Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename TK, typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TK, typename T> constexpr Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TK, typename T> constexpr ::System::Collections::IEnumerable* Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TK, typename T> inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T>
inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T>
inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T>
inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T>
inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::add_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T>
inline void Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::remove_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TK, typename T> inline ::System::Collections::Generic::ICollection_1<TK>* Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::get_Keys() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TK>*, false>(this, ___internal_method);
}
template <typename TK, typename T> inline T Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::get_Item(TK key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, key);
}
template <typename TK, typename T> inline bool Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::ContainsKey(TK key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TK, typename T> inline int32_t Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IReadOnlyDictionary_2<TK, T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
