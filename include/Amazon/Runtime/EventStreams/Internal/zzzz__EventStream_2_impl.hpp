#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamDecoder_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamEventReceivedArgs_1_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamExceptionReceivedArgs_1_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__EventStreamMessage_def.hpp"
#include "Amazon/Runtime/EventStreams/zzzz__IEventStreamMessage_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename TE> constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T, typename TE> constexpr int32_t& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__BufferSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BufferSize_k__BackingField;
}
template <typename T, typename TE> constexpr int32_t const& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__BufferSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BufferSize_k__BackingField;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set__BufferSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BufferSize_k__BackingField = value;
}
template <typename T, typename TE> constexpr ::System::IO::Stream*& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__NetworkStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NetworkStream_k__BackingField;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__NetworkStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NetworkStream_k__BackingField;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set__NetworkStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NetworkStream_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__Decoder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Decoder_k__BackingField;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*> const&
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__Decoder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Decoder_k__BackingField;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set__Decoder_k__BackingField(::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Decoder_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>*&
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get_EventReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventReceived;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>*> const&
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get_EventReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventReceived;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set_EventReceived(
    ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EventReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE>
constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>*&
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get_ExceptionReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExceptionReceived;
}
template <typename T, typename TE>
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>*> const&
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get_ExceptionReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExceptionReceived;
}
template <typename T, typename TE>
constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set_ExceptionReceived(
    ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExceptionReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TE> constexpr bool& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
template <typename T, typename TE> constexpr bool const& Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
template <typename T, typename TE> constexpr void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
template <typename T, typename TE> inline int32_t Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_BufferSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "get_BufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::set_BufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "set_BufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE> inline ::System::IO::Stream* Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_NetworkStream() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "get_NetworkStream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
template <typename T, typename TE> inline ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_Decoder() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "get_Decoder",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*, false>(this, ___internal_method);
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::add_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::remove_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::add_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline void
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::remove_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, T>*>*
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_EventMapping() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, T>*>*, false>(
      this, ___internal_method);
}
template <typename T, typename TE>
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, TE>*>*
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_ExceptionMapping() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, TE>*>*, false>(
      this, ___internal_method);
}
template <typename T, typename TE> inline bool Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::get_IsProcessing() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::set_IsProcessing(bool value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>* Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>(stream));
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), ".ctor",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
template <typename T, typename TE>
inline ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::New_ctor(::System::IO::Stream* stream, ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>(stream, eventStreamDecoder));
}
template <typename T, typename TE>
inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::_ctor(::System::IO::Stream* stream, ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, eventStreamDecoder);
}
template <typename T, typename TE>
inline T Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::ConvertMessageToEvent(::Amazon::Runtime::EventStreams::EventStreamMessage* eventStreamMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "ConvertMessageToEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::EventStreams::EventStreamMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, eventStreamMessage);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::Process() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "Process",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::ProcessLoop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "ProcessLoop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::ProcessLoop(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "ProcessLoop",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::ReadFromStream(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "ReadFromStream", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
template <typename T, typename TE> inline TE Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::WrapException(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "WrapException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TE, false>(this, ___internal_method, ex);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::StartProcessing() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T, typename TE> inline void Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::_Process_b__36_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>*>::get(), "<Process>b__36_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T, typename TE> constexpr ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>::EventStream_2() {}
