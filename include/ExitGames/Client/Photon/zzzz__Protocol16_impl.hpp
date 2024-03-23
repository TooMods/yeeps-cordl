#pragma once
#include "ExitGames/Client/Photon/zzzz__IProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol16_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol16_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType::__Protocol16__GpType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType::__Protocol16__GpType() {}
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Unknown{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Array{ static_cast<uint8_t>(0x79u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Boolean{ static_cast<uint8_t>(0x6fu) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Byte{ static_cast<uint8_t>(0x62u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::ByteArray{ static_cast<uint8_t>(0x78u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::ObjectArray{ static_cast<uint8_t>(0x7au) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Short{ static_cast<uint8_t>(0x6bu) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Float{ static_cast<uint8_t>(0x66u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Dictionary{ static_cast<uint8_t>(0x44u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Double{ static_cast<uint8_t>(0x64u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Hashtable{ static_cast<uint8_t>(0x68u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Integer{ static_cast<uint8_t>(0x69u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::IntegerArray{ static_cast<uint8_t>(0x6eu) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Long{ static_cast<uint8_t>(0x6cu) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::String{ static_cast<uint8_t>(0x73u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::StringArray{ static_cast<uint8_t>(0x61u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Custom{ static_cast<uint8_t>(0x63u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::Null{ static_cast<uint8_t>(0x2au) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::EventData{ static_cast<uint8_t>(0x65u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::OperationRequest{ static_cast<uint8_t>(0x71u) };
constexpr ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::__Protocol16__GpType::OperationResponse{ static_cast<uint8_t>(0x70u) };
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.get_ProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol16::*)()>(
    &::ExitGames::Client::Photon::Protocol16::get_ProtocolType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2862c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.get_VersionBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::Protocol16::*)()>(
    &::ExitGames::Client::Photon::Protocol16::get_VersionBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2862c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeCustom)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x2862c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeCustom", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
        &::ExitGames::Client::Photon::Protocol16::DeserializeCustom)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2863324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeCustom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.GetTypeOfCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol16::*)(uint8_t)>(
    &::ExitGames::Client::Photon::Protocol16::GetTypeOfCode)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2863664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "GetTypeOfCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.GetCodeOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::__Protocol16__GpType (::ExitGames::Client::Photon::Protocol16::*)(::System::Type*)>(
    &::ExitGames::Client::Photon::Protocol16::GetCodeOfType)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x28639d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "GetCodeOfType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.CreateArrayByType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol16::*)(uint8_t, int16_t)>(
    &::ExitGames::Client::Photon::Protocol16::CreateArrayByType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2863d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "CreateArrayByType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationRequest*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2863d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeOperationRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2863d50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2863fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationRequest* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2864240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28643ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDisconnectMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x28644a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationResponse* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x28646dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeEventData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2864804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::EventData* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeEventData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2864864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*)>(&::ExitGames::Client::Photon::Protocol16::SerializeParameterTable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2863dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol16::SerializeParameterTable)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2864048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeParameterTable)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28645b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeParameterDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*,
                                                ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol16::DeserializeParameterDictionary)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x28642e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeParameterDictionary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol16::Serialize)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0x2864914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28651e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, bool, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeBoolean)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x286522c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeBoolean", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeShort)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x286694c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeLengthAsShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, ::StringW)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeLengthAsShort)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2863184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeLengthAsShort", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeInteger)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2865278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, int64_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeLong)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x28653dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeLong", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, float_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeFloat)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2865610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, double_t, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeDouble)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x28658fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2866a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Array*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeArray)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x2866184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2865d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeByteArraySegment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeByteArraySegment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28668bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByteArraySegment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeIntArrayOptimized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int32_t, ::Array<int32_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeIntArrayOptimized)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2865fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeIntArrayOptimized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeStringArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<::StringW, ::Array<::StringW>*>, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeStringArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28673d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeStringArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IList*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeObjectArray)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2865dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeObjectArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::Hashtable*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeHashTable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2865b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeHashTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionary)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2866844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*)>(
    &::ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28674a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, ByRef<bool>, ByRef<bool>)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2866bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.SerializeDictionaryElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool, bool)>(&::ExitGames::Client::Photon::Protocol16::SerializeDictionaryElements)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x2866ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
        &::ExitGames::Client::Photon::Protocol16::Deserialize)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x28674c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28690a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeBoolean)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28683dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeBoolean", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeShort)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28690bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeInteger)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2867a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeInteger", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeLong)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2868404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeLong", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeFloat)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x286863c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeDouble)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2868800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2867bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol16::DeserializeArray)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2868a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(&::ExitGames::Client::Photon::Protocol16::DeserializeByteArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2867de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeIntArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(&::ExitGames::Client::Photon::Protocol16::DeserializeIntArray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2867e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeIntArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeStringArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeStringArray)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2867cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeStringArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeObjectArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2868f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeObjectArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::Hashtable* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeHashTable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2867f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeHashTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionary)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2868068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionaryArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol16::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, int16_t, ByRef<::System::Array*>)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionaryArray)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x28691e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionaryArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Array*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16.DeserializeDictionaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (
    ::ExitGames::Client::Photon::Protocol16::*)(::ExitGames::Client::Photon::StreamBuffer*, ByRef<uint8_t>, ByRef<uint8_t>)>(&::ExitGames::Client::Photon::Protocol16::DeserializeDictionaryType)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x286942c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionaryType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol16::*)()>(&::ExitGames::Client::Photon::Protocol16::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x286216c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_versionBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_versionBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_versionBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___versionBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memShort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memShort;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memShort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memShort;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memShort(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memShort)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLongBlock;
}
constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLongBlock;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLongBlock(::ArrayW<int64_t, ::Array<int64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memLongBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlockBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLongBlockBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLongBlockBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLongBlockBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLongBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memLongBlockBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<double_t, ::Array<double_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlock;
}
constexpr ::ArrayW<double_t, ::Array<double_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlock;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDoubleBlock(::ArrayW<double_t, ::Array<double_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memDoubleBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlockBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlockBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDoubleBlockBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlockBytes;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDoubleBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memDoubleBlockBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memInteger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memInteger;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memInteger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memInteger;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memInteger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLong;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memLong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memLong;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memLong(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memLong)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memFloat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memFloat;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memFloat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memFloat;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memFloat(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memFloat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDouble() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDouble;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol16::__cordl_internal_get_memDouble() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDouble;
}
constexpr void ExitGames::Client::Photon::Protocol16::__cordl_internal_set_memDouble(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memDouble)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void ExitGames::Client::Photon::Protocol16::setStaticF_memFloatBlock(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "memFloatBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> ExitGames::Client::Photon::Protocol16::getStaticF_memFloatBlock() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "memFloatBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get>();
}
inline void ExitGames::Client::Photon::Protocol16::setStaticF_memFloatBlockBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "memFloatBlockBytes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol16::getStaticF_memFloatBlockBytes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "memFloatBlockBytes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get>();
}
inline ::StringW ExitGames::Client::Photon::Protocol16::get_ProtocolType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol16::get_VersionBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::Protocol16::SerializeCustom(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeCustom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dout, serObject);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::System::Object* ExitGames::Client::Photon::Protocol16::DeserializeCustom(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t customTypeCode,
                                                                                  ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeCustom", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, din, customTypeCode, flags);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol16::GetTypeOfCode(uint8_t typeCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "GetTypeOfCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, typeCode);
}
inline ::ExitGames::Client::Photon::__Protocol16__GpType ExitGames::Client::Photon::Protocol16::GetCodeOfType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "GetCodeOfType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__Protocol16__GpType, false>(this, ___internal_method, type);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol16::CreateArrayByType(uint8_t arrayType, int16_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "CreateArrayByType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, arrayType, length);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationRequest* operation,
                                                                             bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeOperationRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operation, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                             ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                             ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::Protocol16::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                                         ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*, false>(this, ___internal_method, din, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject,
                                                                              bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::Protocol16::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*, false>(this, ___internal_method, stream);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::Protocol16::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                           ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*, false>(this, ___internal_method, stream, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
/// @param target: ::ExitGames::Client::Photon::EventData* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::Protocol16::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                           ::ExitGames::Client::Photon::EventData* target,
                                                                                                           ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*, false>(this, ___internal_method, din, target, flags);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                           ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, parameters);
}
/// @param target: ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* (default: nullptr)
inline ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*
ExitGames::Client::Photon::Protocol16::DeserializeParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, false>(this, ___internal_method, stream, target);
}
/// @param target: ::ExitGames::Client::Photon::ParameterDictionary* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::ParameterDictionary* ExitGames::Client::Photon::Protocol16::DeserializeParameterDictionary(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                               ::ExitGames::Client::Photon::ParameterDictionary* target,
                                                                                                                               ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeParameterDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*, false>(this, ___internal_method, stream, target, flags);
}
inline void ExitGames::Client::Photon::Protocol16::Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByte(::ExitGames::Client::Photon::StreamBuffer* dout, uint8_t serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeBoolean(::ExitGames::Client::Photon::StreamBuffer* dout, bool serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeBoolean", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeLengthAsShort(::ExitGames::Client::Photon::StreamBuffer* dout, int32_t serObject, ::StringW type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeLengthAsShort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, type);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeInteger(::ExitGames::Client::Photon::StreamBuffer* dout, int32_t serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeLong(::ExitGames::Client::Photon::StreamBuffer* dout, int64_t serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeLong", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeFloat(::ExitGames::Client::Photon::StreamBuffer* dout, float_t serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDouble(::ExitGames::Client::Photon::StreamBuffer* dout, double_t serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeString(::ExitGames::Client::Photon::StreamBuffer* stream, ::StringW value, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Array* serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByteArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<uint8_t, ::Array<uint8_t>*> serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeByteArraySegment(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<uint8_t, ::Array<uint8_t>*> serObject, int32_t offset,
                                                                             int32_t count, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeByteArraySegment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, offset, count, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeIntArrayOptimized(::ExitGames::Client::Photon::StreamBuffer* inWriter, ::ArrayW<int32_t, ::Array<int32_t>*> serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeIntArrayOptimized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inWriter, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeStringArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::ArrayW<::StringW, ::Array<::StringW>*> serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeStringArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeObjectArray(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Collections::IList* objects, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeObjectArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, objects, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeHashTable(::ExitGames::Client::Photon::StreamBuffer* dout, ::ExitGames::Client::Photon::Hashtable* serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeHashTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionary(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Collections::IDictionary* serObject, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Type* dictType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, dictType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Object* dict, ByRef<bool> setKeyType,
                                                                             ByRef<bool> setValueType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, dict, setKeyType, setValueType);
}
inline void ExitGames::Client::Photon::Protocol16::SerializeDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* writer, ::System::Object* dict, bool setKeyType, bool setValueType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "SerializeDictionaryElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, dict, setKeyType, setValueType);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::System::Object* ExitGames::Client::Photon::Protocol16::Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type,
                                                                            ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, din, type, flags);
}
inline uint8_t ExitGames::Client::Photon::Protocol16::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, din);
}
inline bool ExitGames::Client::Photon::Protocol16::DeserializeBoolean(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeBoolean", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, din);
}
inline int16_t ExitGames::Client::Photon::Protocol16::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, din);
}
inline int32_t ExitGames::Client::Photon::Protocol16::DeserializeInteger(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, din);
}
inline int64_t ExitGames::Client::Photon::Protocol16::DeserializeLong(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeLong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, din);
}
inline float_t ExitGames::Client::Photon::Protocol16::DeserializeFloat(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeFloat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, din);
}
inline double_t ExitGames::Client::Photon::Protocol16::DeserializeDouble(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDouble", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, din);
}
inline ::StringW ExitGames::Client::Photon::Protocol16::DeserializeString(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeString", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, din);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol16::DeserializeArray(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, din);
}
/// @param size: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol16::DeserializeByteArray(::ExitGames::Client::Photon::StreamBuffer* din, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, din, size);
}
/// @param size: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::ArrayW<int32_t, ::Array<int32_t>*> ExitGames::Client::Photon::Protocol16::DeserializeIntArray(::ExitGames::Client::Photon::StreamBuffer* din, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeIntArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, din, size);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> ExitGames::Client::Photon::Protocol16::DeserializeStringArray(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeStringArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, din);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ExitGames::Client::Photon::Protocol16::DeserializeObjectArray(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeObjectArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, din);
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Protocol16::DeserializeHashTable(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeHashTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*, false>(this, ___internal_method, din);
}
inline ::System::Collections::IDictionary* ExitGames::Client::Photon::Protocol16::DeserializeDictionary(::ExitGames::Client::Photon::StreamBuffer* din) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, din);
}
inline bool ExitGames::Client::Photon::Protocol16::DeserializeDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* din, int16_t size, ByRef<::System::Array*> arrayResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionaryArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Array*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, din, size, arrayResult);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol16::DeserializeDictionaryType(::ExitGames::Client::Photon::StreamBuffer* reader, ByRef<uint8_t> keyTypeCode, ByRef<uint8_t> valTypeCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), "DeserializeDictionaryType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, reader, keyTypeCode, valTypeCode);
}
inline ::ExitGames::Client::Photon::Protocol16* ExitGames::Client::Photon::Protocol16::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::Protocol16*>());
}
inline void ExitGames::Client::Photon::Protocol16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol16*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Protocol16::Protocol16() {}
