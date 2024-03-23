#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamEventReceivedArgs_1_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamExceptionReceivedArgs_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename TE> constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T, typename TE> inline int32_t Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::get_BufferSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::set_BufferSize(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::add_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::remove_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void
Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::add_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void
Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::remove_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>::StartProcessing() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
