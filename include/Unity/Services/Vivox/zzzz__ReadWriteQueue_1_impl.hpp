#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__IReadOnlyQueue_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__QueueItemAddedEventArgs_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__ReadWriteQueue_1_def.hpp"
template <typename T> constexpr T& Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::__cordl_internal_set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>* Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::_RemoveAll_b__0(T i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>*>::get(), "<RemoveAll>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::__ReadWriteQueue_1____c__DisplayClass11_0<T>::__ReadWriteQueue_1____c__DisplayClass11_0() {}
/// @brief Convert operator to "::Unity::Services::Vivox::IReadOnlyQueue_1<T>"
template <typename T> constexpr Unity::Services::Vivox::ReadWriteQueue_1<T>::operator ::Unity::Services::Vivox::IReadOnlyQueue_1<T>*() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::IReadOnlyQueue_1<T>"
template <typename T> constexpr ::Unity::Services::Vivox::IReadOnlyQueue_1<T>* Unity::Services::Vivox::ReadWriteQueue_1<T>::i___Unity__Services__Vivox__IReadOnlyQueue_1_T_() noexcept {
  return static_cast<::Unity::Services::Vivox::IReadOnlyQueue_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_set__items(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*& Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_get_AfterItemAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterItemAdded;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*> const&
Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_get_AfterItemAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterItemAdded;
}
template <typename T>
constexpr void Unity::Services::Vivox::ReadWriteQueue_1<T>::__cordl_internal_set_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AfterItemAdded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteQueue_1<T>::add_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "add_AfterItemAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteQueue_1<T>::remove_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "remove_AfterItemAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T Unity::Services::Vivox::ReadWriteQueue_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "Dequeue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteQueue_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Services::Vivox::ReadWriteQueue_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Services::Vivox::ReadWriteQueue_1<T>::Peek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "Peek",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteQueue_1<T>::Enqueue(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "Enqueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline bool Unity::Services::Vivox::ReadWriteQueue_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t Unity::Services::Vivox::ReadWriteQueue_1<T>::RemoveAll(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), "RemoveAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline ::Unity::Services::Vivox::ReadWriteQueue_1<T>* Unity::Services::Vivox::ReadWriteQueue_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::ReadWriteQueue_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ReadWriteQueue_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::ReadWriteQueue_1<T>::ReadWriteQueue_1() {}
