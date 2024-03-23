#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Unity/Services/Vivox/zzzz__QueueItemAddedEventArgs_1_def.hpp"
template <typename T> constexpr T& Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename T> constexpr T const& Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::__cordl_internal_set__Value_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>* Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::New_ctor(T item) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>(item));
}
template <typename T> inline void Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::_ctor(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>::QueueItemAddedEventArgs_1() {}
