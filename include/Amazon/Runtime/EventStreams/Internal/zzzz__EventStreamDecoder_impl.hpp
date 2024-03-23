#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamDecoder_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamDecoder_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamDecoder_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__EventStreamMessageReceivedEventArgs_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamDecoder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Ionic/Zlib/zzzz__CrcCalculatorStream_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::*)(::System::Object*, void*)>(
    &::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2025b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20263a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x20263b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::*)(::System::IAsyncResult*)>(
    &::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2026460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead* Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::New_ctor(::System::Object* object,
                                                                                                                                                                          void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>(object, method));
}
inline void Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::Invoke(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline ::System::IAsyncResult* Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::BeginInvoke(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, data, offset, length, callback, object);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead::__EventStreamDecoder__ProcessRead() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::__EventStreamDecoder__DecoderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::__EventStreamDecoder__DecoderState() {}
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::Start{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::ReadPrelude{ static_cast<int32_t>(
    0x1) };
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::ProcessPrelude{
  static_cast<int32_t>(0x2)
};
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::ReadMessage{ static_cast<int32_t>(
    0x3) };
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState::Error{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.add_MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::add_MessageReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2025780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "add_MessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.remove_MessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*)>(
        &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::remove_MessageReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2025830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "remove_MessageReceived",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.get_MessageReceivedContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)()>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::get_MessageReceivedContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20258e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(),
                                                 "get_MessageReceivedContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.set_MessageReceivedContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(::System::Object*)>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::set_MessageReceivedContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20258e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "set_MessageReceivedContext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)()>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x20258f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2025c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.ReadPrelude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ReadPrelude)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2025ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ReadPrelude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.ProcessPrelude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessPrelude)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2025dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessPrelude", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.ReadMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ReadMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2026030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ReadMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.ProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)()>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessMessage)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x20260f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessMessage",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Error)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2026224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Error", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.ProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2026270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)(bool)>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20262fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::*)()>(
    &::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2026338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder"
constexpr Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::operator ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder"
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::i___Amazon__Runtime__EventStreams__Internal__IEventStreamDecoder() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get_MessageReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageReceived;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*> const&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get_MessageReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageReceived;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set_MessageReceived(
    ::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MessageReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__MessageReceivedContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MessageReceivedContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__MessageReceivedContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MessageReceivedContext_k__BackingField;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__MessageReceivedContext_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MessageReceivedContext_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*>&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__stateFns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFns;
}
constexpr ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> const&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__stateFns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateFns;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__stateFns(
    ::ArrayW<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*, ::Array<::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__ProcessRead*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateFns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__state(::Amazon::Runtime::EventStreams::Internal::__EventStreamDecoder__DecoderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr int32_t& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__currentMessageLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMessageLength;
}
constexpr int32_t const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__currentMessageLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMessageLength;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__currentMessageLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentMessageLength = value;
}
constexpr int32_t& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__amountBytesRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____amountBytesRead;
}
constexpr int32_t const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__amountBytesRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____amountBytesRead;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__amountBytesRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____amountBytesRead = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__workingMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingMessage;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__workingMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingMessage;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__workingMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workingMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__workingBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__workingBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____workingBuffer;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__workingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ThirdParty::Ionic::Zlib::CrcCalculatorStream*& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__runningChecksumStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningChecksumStream;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Ionic::Zlib::CrcCalculatorStream*> const&
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get__runningChecksumStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runningChecksumStream;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set__runningChecksumStream(::ThirdParty::Ionic::Zlib::CrcCalculatorStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runningChecksumStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::__cordl_internal_set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
inline void
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::add_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "add_MessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::remove_MessageReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "remove_MessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Amazon::Runtime::EventStreams::Internal::EventStreamMessageReceivedEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::get_MessageReceivedContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(),
                                               "get_MessageReceivedContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::set_MessageReceivedContext(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "set_MessageReceivedContext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder* Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>());
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Start(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ReadPrelude(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ReadPrelude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessPrelude(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessPrelude", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ReadMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ReadMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessMessage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessMessage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Error(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Error", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, length);
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "ProcessData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length);
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EventStreams::Internal::EventStreamDecoder::EventStreamDecoder() {}
