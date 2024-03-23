#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamDecoder_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamMessageReceivedEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder.add_MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::*)(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*)>(
        &::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::add_MessageReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder.remove_MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::*)(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*)>(
        &::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::remove_MessageReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder.ProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::ProcessData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void
Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::add_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::remove_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder::ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length);
}
