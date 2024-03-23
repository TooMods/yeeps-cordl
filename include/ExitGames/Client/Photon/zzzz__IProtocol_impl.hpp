#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags::__IProtocol__DeserializationFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags::__IProtocol__DeserializationFlags() {}
constexpr ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags ExitGames::Client::Photon::__IProtocol__DeserializationFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags ExitGames::Client::Photon::__IProtocol__DeserializationFlags::AllowPooledByteArray{ static_cast<int32_t>(0x1) };
constexpr ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags ExitGames::Client::Photon::__IProtocol__DeserializationFlags::WrapIncomingStructs{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.get_ProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IProtocol::*)()>(&::ExitGames::Client::Photon::IProtocol::get_ProtocolType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.get_VersionBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::IProtocol::*)()>(
    &::ExitGames::Client::Photon::IProtocol::get_VersionBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::IProtocol::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(
    &::ExitGames::Client::Photon::IProtocol::SerializeShort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(
    &::ExitGames::Client::Photon::IProtocol::SerializeString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeEventData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, bool)>(
        &::ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::IProtocol::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
        &::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeShort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeByte)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::EventData* (
    ::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeEventData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationRequest* (
    ::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationResponse* (
    ::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeDisconnectMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (
    ::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::IProtocol::*)(::System::Object*)>(
    &::ExitGames::Client::Photon::IProtocol::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x277fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x277fec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ExitGames::Client::Photon::IProtocol::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x277ff14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.DeserializeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::IProtocol::DeserializeMessage)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x277ffa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "DeserializeMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol.SerializeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(
    &::ExitGames::Client::Photon::IProtocol::SerializeMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x277fff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "SerializeMessage", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IProtocol::*)()>(&::ExitGames::Client::Photon::IProtocol::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2780004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& ExitGames::Client::Photon::IProtocol::__cordl_internal_get_ByteArraySlicePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ByteArraySlicePool;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::ByteArraySlicePool*> const& ExitGames::Client::Photon::IProtocol::__cordl_internal_get_ByteArraySlicePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ByteArraySlicePool;
}
constexpr void ExitGames::Client::Photon::IProtocol::__cordl_internal_set_ByteArraySlicePool(::ExitGames::Client::Photon::ByteArraySlicePool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ByteArraySlicePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW ExitGames::Client::Photon::IProtocol::get_ProtocolType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::IProtocol::get_VersionBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IProtocol::Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeString(::ExitGames::Client::Photon::StreamBuffer* dout, ::StringW serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                            ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                            ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject,
                                                                             bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type,
                                                                           ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, din, type, flags);
}
inline int16_t ExitGames::Client::Photon::IProtocol::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, din);
}
inline uint8_t ExitGames::Client::Photon::IProtocol::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, din);
}
/// @param target: ::ExitGames::Client::Photon::EventData* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::IProtocol::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                          ::ExitGames::Client::Photon::EventData* target,
                                                                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*, false>(this, ___internal_method, din, target, flags);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::IProtocol::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                                        ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*, false>(this, ___internal_method, din, flags);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::IProtocol::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*, false>(this, ___internal_method, stream, flags);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::IProtocol::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*, false>(this, ___internal_method, stream);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::IProtocol::Serialize(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, obj);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::Deserialize(::ArrayW<uint8_t, ::Array<uint8_t>*> serializedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, serializedData);
}
inline ::System::Object* ExitGames::Client::Photon::IProtocol::DeserializeMessage(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "DeserializeMessage", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream);
}
inline void ExitGames::Client::Photon::IProtocol::SerializeMessage(::ExitGames::Client::Photon::StreamBuffer* ms, ::System::Object* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), "SerializeMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ms, msg);
}
inline ::ExitGames::Client::Photon::IProtocol* ExitGames::Client::Photon::IProtocol::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::IProtocol*>());
}
inline void ExitGames::Client::Photon::IProtocol::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IProtocol*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::IProtocol::IProtocol() {}
