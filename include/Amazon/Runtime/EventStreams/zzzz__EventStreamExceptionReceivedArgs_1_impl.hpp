#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamExceptionReceivedArgs_1_def.hpp"
template <typename T> constexpr T& Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::__cordl_internal_get__EventStreamException_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventStreamException_k__BackingField;
}
template <typename T> constexpr T const& Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::__cordl_internal_get__EventStreamException_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventStreamException_k__BackingField;
}
template <typename T> constexpr void Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::__cordl_internal_set__EventStreamException_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EventStreamException_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::get_EventStreamException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>*>::get(),
                                               "get_EventStreamException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>* Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::New_ctor(T eventStreamException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>*>(eventStreamException));
}
template <typename T> inline void Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::_ctor(T eventStreamException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventStreamException);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<T>::EventStreamExceptionReceivedArgs_1() {}
