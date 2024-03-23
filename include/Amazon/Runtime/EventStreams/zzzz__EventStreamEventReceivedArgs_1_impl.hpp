#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamEventReceivedArgs_1_def.hpp"
template <typename T> constexpr T& Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::__cordl_internal_get__EventStreamEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventStreamEvent_k__BackingField;
}
template <typename T> constexpr T const& Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::__cordl_internal_get__EventStreamEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EventStreamEvent_k__BackingField;
}
template <typename T> constexpr void Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::__cordl_internal_set__EventStreamEvent_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EventStreamEvent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::get_EventStreamEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>::get(),
                                               "get_EventStreamEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>* Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::New_ctor(T eventStreamEvent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>(eventStreamEvent));
}
template <typename T> inline void Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::_ctor(T eventStreamEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventStreamEvent);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>::EventStreamEventReceivedArgs_1() {}
