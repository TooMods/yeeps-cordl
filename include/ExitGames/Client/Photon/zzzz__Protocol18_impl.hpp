#pragma once
#include "ExitGames/Client/Photon/zzzz__IProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlice_def.hpp"
#include "ExitGames/Client/Photon/zzzz__CustomType_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationRequest_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Protocol18_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType::__Protocol18__GpType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType::__Protocol18__GpType() {}
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Unknown{ static_cast<uint8_t>(0x0u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Boolean{ static_cast<uint8_t>(0x2u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Byte{ static_cast<uint8_t>(0x3u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Short{ static_cast<uint8_t>(0x4u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Float{ static_cast<uint8_t>(0x5u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Double{ static_cast<uint8_t>(0x6u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::String{ static_cast<uint8_t>(0x7u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Null{ static_cast<uint8_t>(0x8u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CompressedInt{ static_cast<uint8_t>(0x9u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CompressedLong{ static_cast<uint8_t>(0xau) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Int1{ static_cast<uint8_t>(0xbu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Int1_{ static_cast<uint8_t>(0xcu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Int2{ static_cast<uint8_t>(0xdu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Int2_{ static_cast<uint8_t>(0xeu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::L1{ static_cast<uint8_t>(0xfu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::L1_{ static_cast<uint8_t>(0x10u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::L2{ static_cast<uint8_t>(0x11u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::L2_{ static_cast<uint8_t>(0x12u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Custom{ static_cast<uint8_t>(0x13u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CustomTypeSlim{ static_cast<uint8_t>(0x80u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Dictionary{ static_cast<uint8_t>(0x14u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Hashtable{ static_cast<uint8_t>(0x15u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::ObjectArray{ static_cast<uint8_t>(0x17u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::OperationRequest{ static_cast<uint8_t>(0x18u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::OperationResponse{ static_cast<uint8_t>(0x19u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::EventData{ static_cast<uint8_t>(0x1au) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::BooleanFalse{ static_cast<uint8_t>(0x1bu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::BooleanTrue{ static_cast<uint8_t>(0x1cu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::ShortZero{ static_cast<uint8_t>(0x1du) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::IntZero{ static_cast<uint8_t>(0x1eu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::LongZero{ static_cast<uint8_t>(0x1fu) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::FloatZero{ static_cast<uint8_t>(0x20u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::DoubleZero{ static_cast<uint8_t>(0x21u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::ByteZero{ static_cast<uint8_t>(0x22u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::Array{ static_cast<uint8_t>(0x40u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::BooleanArray{ static_cast<uint8_t>(0x42u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::ByteArray{ static_cast<uint8_t>(0x43u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::ShortArray{ static_cast<uint8_t>(0x44u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::DoubleArray{ static_cast<uint8_t>(0x46u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::FloatArray{ static_cast<uint8_t>(0x45u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::StringArray{ static_cast<uint8_t>(0x47u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::HashtableArray{ static_cast<uint8_t>(0x55u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::DictionaryArray{ static_cast<uint8_t>(0x54u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CustomTypeArray{ static_cast<uint8_t>(0x53u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CompressedIntArray{ static_cast<uint8_t>(0x49u) };
constexpr ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::__Protocol18__GpType::CompressedLongArray{ static_cast<uint8_t>(0x4au) };
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.get_ProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol18::*)()>(
    &::ExitGames::Client::Photon::Protocol18::get_ProtocolType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x286972c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.get_VersionBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::Protocol18::*)()>(
    &::ExitGames::Client::Photon::Protocol18::get_VersionBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286976c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2869774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::SerializeShort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28697ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(
    &::ExitGames::Client::Photon::Protocol18::SerializeString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2869864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
        &::ExitGames::Client::Photon::Protocol18::Deserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28699b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::DeserializeShort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286a490;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::DeserializeByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x286a4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetAllowedDictionaryKeyTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::ExitGames::Client::Photon::__Protocol18__GpType)>(
    &::ExitGames::Client::Photon::Protocol18::GetAllowedDictionaryKeyTypes)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x286a528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetAllowedDictionaryKeyTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetClrArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::ExitGames::Client::Photon::__Protocol18__GpType)>(
    &::ExitGames::Client::Photon::Protocol18::GetClrArrayType)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x286a6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetClrArrayType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetCodeOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::__Protocol18__GpType (::ExitGames::Client::Photon::Protocol18::*)(::System::Type*)>(
    &::ExitGames::Client::Photon::Protocol18::GetCodeOfType)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x286a9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetCodeOfType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetCodeOfTypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::__Protocol18__GpType (::ExitGames::Client::Photon::Protocol18::*)(::System::TypeCode)>(
    &::ExitGames::Client::Photon::Protocol18::GetCodeOfTypeCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x286b014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetCodeOfTypeCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                                               ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::Read)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x286b07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                                               ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::Read)> {
  constexpr static std::size_t size = 0xad4;
  constexpr static std::size_t addrs = 0x28699bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadBoolean)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x286b3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadBoolean", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadByte)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x286a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadByte", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadInt16)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x286a494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadUShort)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x286c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadUShort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x286c994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x286ca34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadSingle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x286b41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadSingle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadDouble)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x286b4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDouble", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadNonAllocByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ByteArraySlice* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadNonAllocByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x286cb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadNonAllocByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadByteArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x286bc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadByteArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCustomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCustomType)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x286b0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCustomType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::EventData* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol18::DeserializeEventData)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x286cf10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*,
                                                ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::ReadParameterTable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x286d108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadParameterDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*,
                                                ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(&::ExitGames::Client::Photon::Protocol18::ReadParameterDictionary)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x286d25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadParameterDictionary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadHashtable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::Hashtable* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadHashtable)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x286b66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadHashtable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadIntArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadIntArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x286d380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadIntArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationRequest* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol18::DeserializeOperationRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x286d430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::OperationResponse* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags)>(
    &::ExitGames::Client::Photon::Protocol18::DeserializeOperationResponse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x286d4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DeserializeDisconnectMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DisconnectMessage* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::DeserializeDisconnectMessage)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x286d5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x286b534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCustomTypeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCustomTypeArray)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x286c23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCustomTypeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>,
                                                                             ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryType)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x286d6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadDictionaryType)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x286d968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.GetDictArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::GetDictArrayType)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x286dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetDictArrayType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionary)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x286b7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionary", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__Protocol18__GpType, ::ExitGames::Client::Photon::__Protocol18__GpType, ::System::Collections::IDictionary*,
    ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryElements)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x286dca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags, ::ExitGames::Client::Photon::ParameterDictionary*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadObjectArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x286b8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadObjectArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadWrapperArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>*> (
        ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                    ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadWrapperArray)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x286de14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadWrapperArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadBooleanArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<bool, ::Array<bool>*> (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadBooleanArray)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x286b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadBooleanArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt16Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int16_t, ::Array<int16_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadInt16Array)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x286bc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt16Array", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadSingleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadSingleArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x286bde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadSingleArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDoubleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<double_t, ::Array<double_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadDoubleArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x286bd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDoubleArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadStringArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadStringArray)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x286be8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadStringArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadHashtableArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ExitGames::Client::Photon::Hashtable*, ::Array<::ExitGames::Client::Photon::Hashtable*>*> (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadHashtableArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x286bf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadHashtableArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadDictionaryArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*> (
    ::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadDictionaryArray)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x286c06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadArrayInArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Array* (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags,
                                                                              ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::ReadArrayInArray)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x286c7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadArrayInArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool)>(
    &::ExitGames::Client::Photon::Protocol18::ReadInt1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x286b5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadInt2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool)>(
    &::ExitGames::Client::Photon::Protocol18::ReadInt2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x286b614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCompressedInt32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x286b634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCompressedUInt32)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x286cbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCompressedInt64)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x286b650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*)>(
    &::ExitGames::Client::Photon::Protocol18::ReadCompressedUInt64)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x286dff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedUInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt32Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt32Array)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x286c66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt32Array", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.ReadCompressedInt64Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int64_t, ::Array<int64_t>*> (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*)>(&::ExitGames::Client::Photon::Protocol18::ReadCompressedInt64Array)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x286c724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt64Array", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DecodeZigZag32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(uint32_t)>(
    &::ExitGames::Client::Photon::Protocol18::DecodeZigZag32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286dfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "DecodeZigZag32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.DecodeZigZag64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::Protocol18::*)(uint64_t)>(
    &::ExitGames::Client::Photon::Protocol18::DecodeZigZag64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x286e0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "DecodeZigZag64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x286977c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, ::ExitGames::Client::Photon::__Protocol18__GpType, bool)>(&::ExitGames::Client::Photon::Protocol18::Write)> {
  constexpr static std::size_t size = 0xb9c;
  constexpr static std::size_t addrs = 0x286e0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::EventData*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeEventData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28709bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*)>(&::ExitGames::Client::Photon::Protocol18::WriteParameterTable)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2870be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteParameterTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ParameterDictionary*)>(&::ExitGames::Client::Photon::Protocol18::WriteParameterTable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2870a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteParameterTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationRequest*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x286ff90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "SerializeOperationRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, bool)>(
    &::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2870ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2870e48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.SerializeOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::OperationResponse*, bool)>(&::ExitGames::Client::Photon::Protocol18::SerializeOperationResponse)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2870eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint8_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x286ee10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, bool, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteBoolean)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x286edd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteBoolean", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint16_t)>(
    &::ExitGames::Client::Photon::Protocol18::WriteUShort)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2870f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteUShort", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int16_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteInt16)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x28697f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt16", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, double_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteDouble)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x286f1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, float_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteSingle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x286f0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteSingle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::StringW, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteString)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x286986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteHashtable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteHashtable)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x286fc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteHashtable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteByteArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x286ffbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByteArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArraySegmentByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::ArraySegment_1<uint8_t>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteArraySegmentByte)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x286ed04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArraySegmentByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteByteArraySlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ExitGames::Client::Photon::ByteArraySlice*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteByteArraySlice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x286ec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByteArraySlice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ByteArraySlice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt32ArrayCompressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int32_t, ::Array<int32_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt32ArrayCompressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x286fe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt32ArrayCompressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt64ArrayCompressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int64_t, ::Array<int64_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt64ArrayCompressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x286feec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt64ArrayCompressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int64_t, ::Array<int64_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteBoolArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<bool, ::Array<bool>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteBoolArray)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x28705d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteBoolArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteInt16Array
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<int16_t, ::Array<int16_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteInt16Array)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2870534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt16Array", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteSingleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<float_t, ::Array<float_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteSingleArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2870390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteSingleArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDoubleArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<double_t, ::Array<double_t>*>, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDoubleArray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28702f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDoubleArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteStringArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteStringArray)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2870838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteStringArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteObjectArray)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2870f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteObjectArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteObjectArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IList*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteObjectArray)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2870024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteObjectArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayInArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteArrayInArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x286fa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayInArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomTypeBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::CustomType*, ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomTypeBody)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2871024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomTypeBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::CustomType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomType)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x286f330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCustomTypeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteCustomTypeArray)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x286f534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomTypeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*)>(
    &::ExitGames::Client::Photon::Protocol18::WriteArrayHeader)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28714c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Collections::IDictionary*, ::ExitGames::Client::Photon::__Protocol18__GpType, ::ExitGames::Client::Photon::__Protocol18__GpType)>(
    &::ExitGames::Client::Photon::Protocol18::WriteDictionaryElements)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2871578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteDictionary)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x286fb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>)>(
    &::ExitGames::Client::Photon::Protocol18::WriteDictionaryHeader)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2871960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteArrayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Type*, ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>)>(&::ExitGames::Client::Photon::Protocol18::WriteArrayType)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2871d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteHashtableArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::System::Object*, bool)>(&::ExitGames::Client::Photon::Protocol18::WriteHashtableArray)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2870428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteHashtableArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteDictionaryArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(
    ::ExitGames::Client::Photon::StreamBuffer*, ::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*>, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteDictionaryArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2870200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteIntLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t)>(
    &::ExitGames::Client::Photon::Protocol18::WriteIntLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2870f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteIntLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteVarInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteVarInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2872218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteVarInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int32_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteCompressedInt32)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x286ee68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, int64_t, bool)>(
    &::ExitGames::Client::Photon::Protocol18::WriteCompressedInt64)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x286ef90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint32_t)>(
    &::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2872128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Protocol18::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint32_t)>(
    &::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x287144c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.WriteCompressedUInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)(::ExitGames::Client::Photon::StreamBuffer*, uint64_t)>(
    &::ExitGames::Client::Photon::Protocol18::WriteCompressedUInt64)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2872238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.EncodeZigZag32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::ExitGames::Client::Photon::Protocol18::*)(int32_t)>(
    &::ExitGames::Client::Photon::Protocol18::EncodeZigZag32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2872220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "EncodeZigZag32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18.EncodeZigZag64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::ExitGames::Client::Photon::Protocol18::*)(int64_t)>(
    &::ExitGames::Client::Photon::Protocol18::EncodeZigZag64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "EncodeZigZag64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Protocol18._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Protocol18::*)()>(&::ExitGames::Client::Photon::Protocol18::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28723c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_versionBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionBytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_versionBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___versionBytes;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_versionBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___versionBytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<double_t, ::Array<double_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memDoubleBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlock;
}
constexpr ::ArrayW<double_t, ::Array<double_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memDoubleBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memDoubleBlock;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memDoubleBlock(::ArrayW<double_t, ::Array<double_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memDoubleBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memFloatBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memFloatBlock;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memFloatBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memFloatBlock;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memFloatBlock(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memFloatBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCustomTypeBodyLengthSerialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCustomTypeBodyLengthSerialized;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCustomTypeBodyLengthSerialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCustomTypeBodyLengthSerialized;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCustomTypeBodyLengthSerialized(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memCustomTypeBodyLengthSerialized)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt32() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCompressedUInt32;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt32() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCompressedUInt32;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCompressedUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memCompressedUInt32)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt64() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCompressedUInt64;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::Protocol18::__cordl_internal_get_memCompressedUInt64() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memCompressedUInt64;
}
constexpr void ExitGames::Client::Photon::Protocol18::__cordl_internal_set_memCompressedUInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memCompressedUInt64)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void ExitGames::Client::Photon::Protocol18::setStaticF_boolMasks(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "boolMasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol18::getStaticF_boolMasks() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "boolMasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get>();
}
inline ::StringW ExitGames::Client::Photon::Protocol18::get_ProtocolType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol18::get_VersionBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::Protocol18::Serialize(::ExitGames::Client::Photon::StreamBuffer* dout, ::System::Object* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeShort(::ExitGames::Client::Photon::StreamBuffer* dout, int16_t serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeString(::ExitGames::Client::Photon::StreamBuffer* dout, ::StringW serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dout, serObject, setType);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Deserialize(::ExitGames::Client::Photon::StreamBuffer* din, uint8_t type,
                                                                            ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, din, type, flags);
}
inline int16_t ExitGames::Client::Photon::Protocol18::DeserializeShort(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, din);
}
inline uint8_t ExitGames::Client::Photon::Protocol18::DeserializeByte(::ExitGames::Client::Photon::StreamBuffer* din) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, din);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetAllowedDictionaryKeyTypes(::ExitGames::Client::Photon::__Protocol18__GpType gpType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetAllowedDictionaryKeyTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, gpType);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetClrArrayType(::ExitGames::Client::Photon::__Protocol18__GpType gpType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetClrArrayType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, gpType);
}
inline ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::Protocol18::GetCodeOfType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetCodeOfType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__Protocol18__GpType, false>(this, ___internal_method, type);
}
inline ::ExitGames::Client::Photon::__Protocol18__GpType ExitGames::Client::Photon::Protocol18::GetCodeOfTypeCode(::System::TypeCode type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetCodeOfTypeCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::__Protocol18__GpType, false>(this, ___internal_method, type);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Read(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                     ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream, flags, parameters);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
/// @param parameters: ::ExitGames::Client::Photon::ParameterDictionary* (default: nullptr)
inline ::System::Object* ExitGames::Client::Photon::Protocol18::Read(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t gpType,
                                                                     ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                     ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream, gpType, flags, parameters);
}
inline bool ExitGames::Client::Photon::Protocol18::ReadBoolean(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadBoolean", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream);
}
inline uint8_t ExitGames::Client::Photon::Protocol18::ReadByte(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadByte", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, stream);
}
inline int16_t ExitGames::Client::Photon::Protocol18::ReadInt16(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt16", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, stream);
}
inline uint16_t ExitGames::Client::Photon::Protocol18::ReadUShort(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadUShort", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method, stream);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt32(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream);
}
inline int64_t ExitGames::Client::Photon::Protocol18::ReadInt64(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, stream);
}
inline float_t ExitGames::Client::Photon::Protocol18::ReadSingle(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadSingle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, stream);
}
inline double_t ExitGames::Client::Photon::Protocol18::ReadDouble(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDouble", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, stream);
}
inline ::ExitGames::Client::Photon::ByteArraySlice* ExitGames::Client::Photon::Protocol18::ReadNonAllocByteArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadNonAllocByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlice*, false>(this, ___internal_method, stream);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Protocol18::ReadByteArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadByteArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, stream);
}
/// @param gpType: uint8_t (default: static_cast<uint8_t>(0x0u))
inline ::System::Object* ExitGames::Client::Photon::Protocol18::ReadCustomType(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t gpType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCustomType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream, gpType);
}
/// @param target: ::ExitGames::Client::Photon::EventData* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::EventData* ExitGames::Client::Photon::Protocol18::DeserializeEventData(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                           ::ExitGames::Client::Photon::EventData* target,
                                                                                                           ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::EventData*, false>(this, ___internal_method, din, target, flags);
}
/// @param target: ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*
ExitGames::Client::Photon::Protocol18::ReadParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* target,
                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, false>(this, ___internal_method, stream, target, flags);
}
/// @param target: ::ExitGames::Client::Photon::ParameterDictionary* (default: nullptr)
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::ParameterDictionary* ExitGames::Client::Photon::Protocol18::ReadParameterDictionary(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                        ::ExitGames::Client::Photon::ParameterDictionary* target,
                                                                                                                        ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadParameterDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*, false>(this, ___internal_method, stream, target, flags);
}
inline ::ExitGames::Client::Photon::Hashtable* ExitGames::Client::Photon::Protocol18::ReadHashtable(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                    ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                                    ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadHashtable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*, false>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> ExitGames::Client::Photon::Protocol18::ReadIntArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadIntArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, stream);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::OperationRequest* ExitGames::Client::Photon::Protocol18::DeserializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* din,
                                                                                                                         ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationRequest*, false>(this, ___internal_method, din, flags);
}
/// @param flags: ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags (default: static_cast<int32_t>(0x0))
inline ::ExitGames::Client::Photon::OperationResponse* ExitGames::Client::Photon::Protocol18::DeserializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                           ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::OperationResponse*, false>(this, ___internal_method, stream, flags);
}
inline ::ExitGames::Client::Photon::DisconnectMessage* ExitGames::Client::Photon::Protocol18::DeserializeDisconnectMessage(::ExitGames::Client::Photon::StreamBuffer* stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DisconnectMessage*, false>(this, ___internal_method, stream);
}
inline ::StringW ExitGames::Client::Photon::Protocol18::ReadString(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, stream);
}
inline ::System::Object* ExitGames::Client::Photon::Protocol18::ReadCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCustomTypeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, stream);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                 ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> keyReadType,
                                                                                 ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> valueReadType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, stream, keyReadType, valueReadType);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::ReadDictionaryType(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, stream);
}
inline ::System::Type* ExitGames::Client::Photon::Protocol18::GetDictArrayType(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "GetDictArrayType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, stream);
}
inline ::System::Collections::IDictionary* ExitGames::Client::Photon::Protocol18::ReadDictionary(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                 ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                                 ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionary", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, stream, flags, parameters);
}
inline bool ExitGames::Client::Photon::Protocol18::ReadDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__Protocol18__GpType keyReadType,
                                                                          ::ExitGames::Client::Photon::__Protocol18__GpType valueReadType, ::System::Collections::IDictionary* dictionary,
                                                                          ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                          ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream, keyReadType, valueReadType, dictionary, flags, parameters);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ExitGames::Client::Photon::Protocol18::ReadObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                                                                       ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                                                       ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadObjectArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>*>
ExitGames::Client::Photon::Protocol18::ReadWrapperArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                        ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadWrapperArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper*>*>, false>(
      this, ___internal_method, stream, flags, parameters);
}
inline ::ArrayW<bool, ::Array<bool>*> ExitGames::Client::Photon::Protocol18::ReadBooleanArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadBooleanArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<int16_t, ::Array<int16_t>*> ExitGames::Client::Photon::Protocol18::ReadInt16Array(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt16Array", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t, ::Array<int16_t>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<float_t, ::Array<float_t>*> ExitGames::Client::Photon::Protocol18::ReadSingleArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadSingleArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<double_t, ::Array<double_t>*> ExitGames::Client::Photon::Protocol18::ReadDoubleArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDoubleArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t, ::Array<double_t>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> ExitGames::Client::Photon::Protocol18::ReadStringArray(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadStringArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<::ExitGames::Client::Photon::Hashtable*, ::Array<::ExitGames::Client::Photon::Hashtable*>*>
ExitGames::Client::Photon::Protocol18::ReadHashtableArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                          ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadHashtableArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ExitGames::Client::Photon::Hashtable*, ::Array<::ExitGames::Client::Photon::Hashtable*>*>, false>(this, ___internal_method, stream, flags,
                                                                                                                                                          parameters);
}
inline ::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*>
ExitGames::Client::Photon::Protocol18::ReadDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                           ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadDictionaryArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*>, false>(this, ___internal_method, stream, flags, parameters);
}
inline ::System::Array* ExitGames::Client::Photon::Protocol18::ReadArrayInArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::__IProtocol__DeserializationFlags flags,
                                                                                ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadArrayInArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__IProtocol__DeserializationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*, false>(this, ___internal_method, stream, flags, parameters);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt1(::ExitGames::Client::Photon::StreamBuffer* stream, bool signNegative) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream, signNegative);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadInt2(::ExitGames::Client::Photon::StreamBuffer* stream, bool signNegative) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadInt2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream, signNegative);
}
inline int32_t ExitGames::Client::Photon::Protocol18::ReadCompressedInt32(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream);
}
inline uint32_t ExitGames::Client::Photon::Protocol18::ReadCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, stream);
}
inline int64_t ExitGames::Client::Photon::Protocol18::ReadCompressedInt64(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, stream);
}
inline uint64_t ExitGames::Client::Photon::Protocol18::ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedUInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, stream);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> ExitGames::Client::Photon::Protocol18::ReadCompressedInt32Array(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt32Array", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, stream);
}
inline ::ArrayW<int64_t, ::Array<int64_t>*> ExitGames::Client::Photon::Protocol18::ReadCompressedInt64Array(::ExitGames::Client::Photon::StreamBuffer* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "ReadCompressedInt64Array", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t, ::Array<int64_t>*>, false>(this, ___internal_method, stream);
}
inline int32_t ExitGames::Client::Photon::Protocol18::DecodeZigZag32(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "DecodeZigZag32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline int64_t ExitGames::Client::Photon::Protocol18::DecodeZigZag64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "DecodeZigZag64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::Protocol18::Write(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::Write(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, ::ExitGames::Client::Photon::__Protocol18__GpType gpType,
                                                         bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, gpType, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeEventData(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::EventData* serObject, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                       ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol18::WriteParameterTable(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ParameterDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteParameterTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, parameters);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationRequest* operation,
                                                                             bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "SerializeOperationRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operation, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                             ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationRequest(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t operationCode,
                                                                             ::ExitGames::Client::Photon::ParameterDictionary* parameters, bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, operationCode, parameters, setType);
}
inline void ExitGames::Client::Photon::Protocol18::SerializeOperationResponse(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::OperationResponse* serObject,
                                                                              bool setType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, serObject, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByte(::ExitGames::Client::Photon::StreamBuffer* stream, uint8_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteBoolean(::ExitGames::Client::Photon::StreamBuffer* stream, bool value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteBoolean", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteUShort(::ExitGames::Client::Photon::StreamBuffer* stream, uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteUShort", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt16(::ExitGames::Client::Photon::StreamBuffer* stream, int16_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt16", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDouble(::ExitGames::Client::Photon::StreamBuffer* stream, double_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteSingle(::ExitGames::Client::Photon::StreamBuffer* stream, float_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteSingle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteString(::ExitGames::Client::Photon::StreamBuffer* stream, ::StringW value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteHashtable(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteHashtable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByteArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByteArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteArraySegmentByte(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::ArraySegment_1<uint8_t> seg, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArraySegmentByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ArraySegment_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, seg, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteByteArraySlice(::ExitGames::Client::Photon::StreamBuffer* stream, ::ExitGames::Client::Photon::ByteArraySlice* buffer, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteByteArraySlice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ByteArraySlice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, buffer, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt32ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int32_t, ::Array<int32_t>*> value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt32ArrayCompressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt64ArrayCompressed(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int64_t, ::Array<int64_t>*> values, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt64ArrayCompressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int64_t, ::Array<int64_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteBoolArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<bool, ::Array<bool>*> value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteBoolArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteInt16Array(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<int16_t, ::Array<int16_t>*> value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteInt16Array", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteSingleArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<float_t, ::Array<float_t>*> values, bool setType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteSingleArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDoubleArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::ArrayW<double_t, ::Array<double_t>*> values, bool setType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDoubleArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<double_t, ::Array<double_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, values, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteStringArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value0, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteStringArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value0, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* array, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteObjectArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, array, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteObjectArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::IList* array, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteObjectArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, array, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteArrayInArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayInArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomTypeBody(::ExitGames::Client::Photon::CustomType* customType, ::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                       ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomTypeBody", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::CustomType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customType, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomType(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCustomTypeArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCustomTypeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline bool ExitGames::Client::Photon::Protocol18::WriteArrayHeader(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream, type);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryElements(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Collections::IDictionary* dictionary,
                                                                           ::ExitGames::Client::Photon::__Protocol18__GpType keyWriteType,
                                                                           ::ExitGames::Client::Photon::__Protocol18__GpType valueWriteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__Protocol18__GpType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, dictionary, keyWriteType, valueWriteType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionary(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* dict, bool setType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, dict, setType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryHeader(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type,
                                                                         ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> keyWriteType,
                                                                         ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> valueWriteType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, type, keyWriteType, valueWriteType);
}
inline bool ExitGames::Client::Photon::Protocol18::WriteArrayType(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Type* type,
                                                                  ByRef<::ExitGames::Client::Photon::__Protocol18__GpType> writeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteArrayType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ExitGames::Client::Photon::__Protocol18__GpType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stream, type, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteHashtableArray(::ExitGames::Client::Photon::StreamBuffer* stream, ::System::Object* value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteHashtableArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteDictionaryArray(::ExitGames::Client::Photon::StreamBuffer* stream,
                                                                        ::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*> dictArray, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteDictionaryArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::IDictionary*, ::Array<::System::Collections::IDictionary*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, dictArray, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteIntLength(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteIntLength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteVarInt32(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteVarInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedInt32(::ExitGames::Client::Photon::StreamBuffer* stream, int32_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedInt64(::ExitGames::Client::Photon::StreamBuffer* stream, int64_t value, bool writeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value, writeType);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32(::ExitGames::Client::Photon::StreamBuffer* stream, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value);
}
inline int32_t ExitGames::Client::Photon::Protocol18::WriteCompressedUInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, value);
}
inline void ExitGames::Client::Photon::Protocol18::WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer* stream, uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "WriteCompressedUInt64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StreamBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, value);
}
inline uint32_t ExitGames::Client::Photon::Protocol18::EncodeZigZag32(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "EncodeZigZag32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, value);
}
inline uint64_t ExitGames::Client::Photon::Protocol18::EncodeZigZag64(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), "EncodeZigZag64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::Protocol18* ExitGames::Client::Photon::Protocol18::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::Protocol18*>());
}
inline void ExitGames::Client::Photon::Protocol18::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Protocol18*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Protocol18::Protocol18() {}
