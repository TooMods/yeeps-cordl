#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyHashSet_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__KeyEventArg_1_def.hpp"
/// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyHashSet_1<T>"
template <typename T> constexpr Unity::Services::Vivox::ReadWriteHashSet_1<T>::operator ::Unity::Services::Vivox::IReadOnlyHashSet_1<T>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyHashSet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IReadOnlyHashSet_1<T>"
template <typename T> constexpr ::Unity::Services::Vivox::IReadOnlyHashSet_1<T>* Unity::Services::Vivox::ReadWriteHashSet_1<T>::i___Unity__Services__Vivox__IReadOnlyHashSet_1_T_() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyHashSet_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_set__items(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*& Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get_AfterKeyAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterKeyAdded;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*> const&
Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get_AfterKeyAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterKeyAdded;
}
template <typename T> constexpr void Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_set_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AfterKeyAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*& Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get_BeforeKeyRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BeforeKeyRemoved;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*> const&
Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_get_BeforeKeyRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BeforeKeyRemoved;
}
template <typename T>
constexpr void Unity::Services::Vivox::ReadWriteHashSet_1<T>::__cordl_internal_set_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BeforeKeyRemoved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "add_AfterKeyAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "remove_AfterKeyAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "add_BeforeKeyRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "remove_BeforeKeyRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline bool Unity::Services::Vivox::ReadWriteHashSet_1<T>::Contains(T key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename T> inline bool Unity::Services::Vivox::ReadWriteHashSet_1<T>::Add(T key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "Add",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename T> inline bool Unity::Services::Vivox::ReadWriteHashSet_1<T>::Remove(T key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename T> inline int32_t Unity::Services::Vivox::ReadWriteHashSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Vivox::ReadWriteHashSet_1<T>* Unity::Services::Vivox::ReadWriteHashSet_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteHashSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteHashSet_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::ReadWriteHashSet_1<T>::ReadWriteHashSet_1() {}
