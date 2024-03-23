#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__TargetFrameworks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__IPhotonEncryptor_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ByteArraySlicePool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DeserializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ITrafficRecorder_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NetworkSimulationSet_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerStateValue_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializeStreamMethod_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SupportClass_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStatsGameLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__TrafficStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CommandBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_CommandBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285cb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_CommandBufferSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CommandBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_CommandBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285cb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CommandBufferSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LimitOfUnreliableCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LimitOfUnreliableCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285cb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LimitOfUnreliableCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LimitOfUnreliableCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_LimitOfUnreliableCommands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285cb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LimitOfUnreliableCommands",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LocalTimeInMilliSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LocalTimeInMilliSeconds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x285cb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LocalTimeInMilliSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.CommandLogToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::CommandLogToString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x285cbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "CommandLogToString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ClientSdkIdShifted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ClientSdkIdShifted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285cc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ClientSdkIdShifted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ClientVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ClientVersion)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x285cc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ClientVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_Version)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x285cecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_Version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SerializationProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::SerializationProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_SerializationProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_SerializationProtocolType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_SerializationProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::SerializationProtocol)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_SerializationProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_SerializationProtocolType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SocketImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_SocketImplementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_SocketImplementation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_SocketImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_SocketImplementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_SocketImplementation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_Listener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_Listener",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_Listener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::IPhotonPeerListener*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_Listener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.add_OnDisconnectMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(
    ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*)>(&::ExitGames::Client::Photon::PhotonPeer::add_OnDisconnectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x285d1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "add_OnDisconnectMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.remove_OnDisconnectMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(
    ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*)>(&::ExitGames::Client::Photon::PhotonPeer::remove_OnDisconnectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x285d26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "remove_OnDisconnectMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ReuseEventInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ReuseEventInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ReuseEventInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_ReuseEventInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_ReuseEventInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x285d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_ReuseEventInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_UseByteArraySlicePoolForEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_UseByteArraySlicePoolForEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_UseByteArraySlicePoolForEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_UseByteArraySlicePoolForEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_UseByteArraySlicePoolForEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285d40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_UseByteArraySlicePoolForEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_WrapIncomingStructs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_WrapIncomingStructs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_WrapIncomingStructs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_WrapIncomingStructs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_WrapIncomingStructs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285d420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_WrapIncomingStructs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteArraySlicePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ByteArraySlicePool* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ByteArraySlicePool)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285d42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ByteArraySlicePool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_BytesIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_BytesIn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_BytesIn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_BytesOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_BytesOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_BytesOut",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteCountCurrentDispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ByteCountCurrentDispatch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ByteCountCurrentDispatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CommandInfoCurrentDispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_CommandInfoCurrentDispatch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x285d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_CommandInfoCurrentDispatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ByteCountLastOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ByteCountLastOperation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ByteCountLastOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_EnableServerTracing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_EnableServerTracing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_EnableServerTracing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_EnableServerTracing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_EnableServerTracing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285d53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_EnableServerTracing",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QuickResendAttempts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_QuickResendAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_QuickResendAttempts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_QuickResendAttempts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(uint8_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_QuickResendAttempts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x285d550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_QuickResendAttempts",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PeerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PeerStateValue (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_PeerState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x285d568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_PeerState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PeerID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_PeerID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285d598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_PeerID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QueuedIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_QueuedIncomingCommands)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285d5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_QueuedIncomingCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_QueuedOutgoingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_QueuedOutgoingCommands)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285d5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_QueuedOutgoingCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.MessageBufferPoolTrim
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolTrim)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x285d5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "MessageBufferPoolTrim",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.MessageBufferPoolSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolSize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x285d860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "MessageBufferPoolSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CrcEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::get_CrcEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285d8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_CrcEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CrcEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(&::ExitGames::Client::Photon::PhotonPeer::set_CrcEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x285d8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CrcEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PacketLossByCrc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_PacketLossByCrc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_PacketLossByCrc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PacketLossByChallenge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_PacketLossByChallenge)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285d974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_PacketLossByChallenge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_SentReliableCommandsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_SentReliableCommandsCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285d990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_SentReliableCommandsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ResentReliableCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ResentReliableCommands)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x285d9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ResentReliableCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_DisconnectTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285da5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_DisconnectTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_DisconnectTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_DisconnectTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285da64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_DisconnectTimeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerTimeInMilliSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ServerTimeInMilliSeconds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x285da88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ServerTimeInMilliSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LocalMsTimestampDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(
    ::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate*)>(&::ExitGames::Client::Photon::PhotonPeer::set_LocalMsTimestampDelegate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x285dadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LocalMsTimestampDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ConnectionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ConnectionTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ConnectionTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastSendAckTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LastSendAckTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LastSendAckTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastSendOutgoingTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LastSendOutgoingTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LastSendOutgoingTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LongestSentCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LongestSentCall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LongestSentCall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_LongestSentCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_LongestSentCall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LongestSentCall",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_RoundTripTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_RoundTripTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_RoundTripTimeVariance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_RoundTripTimeVariance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_RoundTripTimeVariance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_LastRoundTripTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_LastRoundTripTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_LastRoundTripTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TimestampOfLastSocketReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TimestampOfLastSocketReceive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dcac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_TimestampOfLastSocketReceive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ServerAddress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_ServerIpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_ServerIpAddress)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x285dce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_ServerIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_UsedProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ConnectionProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_UsedProtocol)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285da40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_UsedProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TransportProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ConnectionProtocol (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TransportProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TransportProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TransportProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_TransportProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TransportProtocol", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsSimulationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x285dd34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_IsSimulationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x285dd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_NetworkSimulationSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::NetworkSimulationSet* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_NetworkSimulationSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285dd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_NetworkSimulationSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_MaximumTransferUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_MaximumTransferUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285de8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_MaximumTransferUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_MaximumTransferUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_MaximumTransferUnit)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x285de94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_MaximumTransferUnit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsEncryptionAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_IsEncryptionAvailable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285df60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_IsEncryptionAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_IsSendingOnlyAcks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_IsSendingOnlyAcks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285df7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_IsSendingOnlyAcks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_IsSendingOnlyAcks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_IsSendingOnlyAcks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285df84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_IsSendingOnlyAcks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsIncoming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsIncoming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285df90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TrafficStatsIncoming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsIncoming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStats*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsIncoming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285df98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsIncoming", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStats*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsOutgoing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::TrafficStats* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsOutgoing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TrafficStatsOutgoing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsOutgoing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStats*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsOutgoing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsOutgoing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStats*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsGameLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::TrafficStatsGameLevel* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsGameLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TrafficStatsGameLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsGameLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::TrafficStatsGameLevel*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsGameLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsGameLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStatsGameLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsElapsedMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsElapsedMs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x285dfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TrafficStatsElapsedMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_TrafficStatsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285dfd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_TrafficStatsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_TrafficStatsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x285dfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.TrafficStatsReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::TrafficStatsReset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x285e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "TrafficStatsReset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitializeTrafficStats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::InitializeTrafficStats)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x285e03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "InitializeTrafficStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.VitalStatsToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::PhotonPeer::*)(bool)>(
    &::ExitGames::Client::Photon::PhotonPeer::VitalStatsToString)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x285e1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "VitalStatsToString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_PayloadEncryptorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_PayloadEncryptorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_PayloadEncryptorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_PayloadEncryptorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_PayloadEncryptorType)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x285e6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_PayloadEncryptorType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_EncryptorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_EncryptorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_EncryptorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_EncryptorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::System::Type*)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_EncryptorType)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x285e850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_EncryptorType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_CountDiscarded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_CountDiscarded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_CountDiscarded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_CountDiscarded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_CountDiscarded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CountDiscarded",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.get_DeltaUnreliableNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::get_DeltaUnreliableNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "get_DeltaUnreliableNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.set_DeltaUnreliableNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(int32_t)>(
    &::ExitGames::Client::Photon::PhotonPeer::set_DeltaUnreliableNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285e9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_DeltaUnreliableNumber",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::ExitGames::Client::Photon::PhotonPeer::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x285e9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(
    ::ExitGames::Client::Photon::IPhotonPeerListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::ExitGames::Client::Photon::PhotonPeer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x285ed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(::StringW, ::StringW, ::System::Object*, ::System::Object*)>(
    &::ExitGames::Client::Photon::PhotonPeer::Connect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285ed98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(::StringW, ::StringW, ::StringW, ::System::Object*, ::System::Object*)>(&::ExitGames::Client::Photon::PhotonPeer::Connect)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x285edb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.CreatePeerBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::CreatePeerBase)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x285ec38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "CreatePeerBase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::Disconnect)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x285f62c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.OnDisconnectMessageCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ExitGames::Client::Photon::DisconnectMessage*)>(
    &::ExitGames::Client::Photon::PhotonPeer::OnDisconnectMessageCall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x285f7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "OnDisconnectMessageCall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DisconnectMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.StopThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::StopThread)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x285f7c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.FetchServerTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::FetchServerTimestamp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x285f948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.EstablishEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::EstablishEncryption)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x285f96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "EstablishEncryption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitDatagramEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, bool)>(&::ExitGames::Client::Photon::PhotonPeer::InitDatagramEncryption)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x285fa90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "InitDatagramEncryption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.InitPayloadEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ExitGames::Client::Photon::PhotonPeer::InitPayloadEncryption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2860018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "InitPayloadEncryption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::Service)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2860020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOutgoingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::SendOutgoingCommands)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x286005c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendAcksOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(&::ExitGames::Client::Photon::PhotonPeer::SendAcksOnly)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2860160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.DispatchIncomingCommands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::DispatchIncomingCommands)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2860264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(
    uint8_t, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::PhotonPeer::SendOperation)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x286036c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.SendOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)(
    uint8_t, ::ExitGames::Client::Photon::ParameterDictionary*, ::ExitGames::Client::Photon::SendOptions)>(&::ExitGames::Client::Photon::PhotonPeer::SendOperation)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x2860904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.RegisterType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeMethod*,
                                                                                           ::ExitGames::Client::Photon::DeserializeMethod*)>(&::ExitGames::Client::Photon::PhotonPeer::RegisterType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2860e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "RegisterType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeMethod*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer.RegisterType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Type*, uint8_t, ::ExitGames::Client::Photon::SerializeStreamMethod*, ::ExitGames::Client::Photon::DeserializeStreamMethod*)>(&::ExitGames::Client::Photon::PhotonPeer::RegisterType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28610bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "RegisterType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeStreamMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::PhotonPeer._EstablishEncryption_b__220_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::PhotonPeer::*)()>(
    &::ExitGames::Client::Photon::PhotonPeer::_EstablishEncryption_b__220_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2861334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                               "<EstablishEncryption>b__220_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CommandBufferSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CommandBufferSize_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CommandBufferSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CommandBufferSize_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__CommandBufferSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CommandBufferSize_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__LimitOfUnreliableCommands_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LimitOfUnreliableCommands_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__LimitOfUnreliableCommands_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LimitOfUnreliableCommands_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__LimitOfUnreliableCommands_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LimitOfUnreliableCommands_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_WarningSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WarningSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_WarningSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WarningSize;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_WarningSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WarningSize = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_CommandLogSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommandLogSize;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_CommandLogSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommandLogSize;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_CommandLogSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CommandLogSize = value;
}
constexpr ::ExitGames::Client::Photon::TargetFrameworks& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TargetFramework() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetFramework;
}
constexpr ::ExitGames::Client::Photon::TargetFrameworks const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TargetFramework() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetFramework;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TargetFramework(::ExitGames::Client::Photon::TargetFrameworks value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TargetFramework = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RemoveAppIdFromWebSocketPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoveAppIdFromWebSocketPath;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RemoveAppIdFromWebSocketPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RemoveAppIdFromWebSocketPath;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RemoveAppIdFromWebSocketPath(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RemoveAppIdFromWebSocketPath = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ClientSdkId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClientSdkId;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ClientSdkId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClientSdkId;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_ClientSdkId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClientSdkId = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_UseInitV3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseInitV3;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_UseInitV3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseInitV3;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_UseInitV3(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseInitV3 = value;
}
constexpr ::ExitGames::Client::Photon::SerializationProtocol& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SerializationProtocolType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializationProtocolType_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::SerializationProtocol const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SerializationProtocolType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializationProtocolType_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__SerializationProtocolType_k__BackingField(::ExitGames::Client::Photon::SerializationProtocol value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SerializationProtocolType_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>*&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SocketImplementationConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SocketImplementationConfig;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>*> const&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SocketImplementationConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SocketImplementationConfig;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SocketImplementationConfig(
    ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SocketImplementationConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SocketImplementation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketImplementation_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__SocketImplementation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketImplementation_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__SocketImplementation_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SocketImplementation_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::DebugLevel& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DebugOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugOut;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DebugOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugOut;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_DebugOut(::ExitGames::Client::Photon::DebugLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebugOut = value;
}
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__Listener_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Listener_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::IPhotonPeerListener*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__Listener_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Listener_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__Listener_k__BackingField(::ExitGames::Client::Photon::IPhotonPeerListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Listener_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_OnDisconnectMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisconnectMessage;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*> const&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_OnDisconnectMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnDisconnectMessage;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnDisconnectMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_reuseEventInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reuseEventInstance;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_reuseEventInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reuseEventInstance;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_reuseEventInstance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reuseEventInstance = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_useByteArraySlicePoolForEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useByteArraySlicePoolForEvents;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_useByteArraySlicePoolForEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useByteArraySlicePoolForEvents;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_useByteArraySlicePoolForEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useByteArraySlicePoolForEvents = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_wrapIncomingStructs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapIncomingStructs;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_wrapIncomingStructs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapIncomingStructs;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_wrapIncomingStructs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapIncomingStructs = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendInCreationOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendInCreationOrder;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendInCreationOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendInCreationOrder;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SendInCreationOrder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SendInCreationOrder = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SequenceDeltaLimitResends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceDeltaLimitResends;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SequenceDeltaLimitResends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceDeltaLimitResends;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SequenceDeltaLimitResends(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SequenceDeltaLimitResends = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SequenceDeltaLimitSends() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceDeltaLimitSends;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SequenceDeltaLimitSends() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SequenceDeltaLimitSends;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SequenceDeltaLimitSends(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SequenceDeltaLimitSends = value;
}
constexpr ::ExitGames::Client::Photon::ITrafficRecorder*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TrafficRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrafficRecorder;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::ITrafficRecorder*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TrafficRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrafficRecorder;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TrafficRecorder(::ExitGames::Client::Photon::ITrafficRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrafficRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__EnableServerTracing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableServerTracing_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__EnableServerTracing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableServerTracing_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__EnableServerTracing_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnableServerTracing_k__BackingField = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_quickResendAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickResendAttempts;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_quickResendAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickResendAttempts;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_quickResendAttempts(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickResendAttempts = value;
}
constexpr uint8_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ChannelCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelCount;
}
constexpr uint8_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_ChannelCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelCount;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_ChannelCount(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ChannelCount = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnableEncryptedFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableEncryptedFlag;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnableEncryptedFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableEncryptedFlag;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_EnableEncryptedFlag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableEncryptedFlag = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_crcEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crcEnabled;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_crcEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crcEnabled;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_crcEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crcEnabled = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SentCountAllowance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentCountAllowance;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SentCountAllowance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentCountAllowance;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SentCountAllowance(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SentCountAllowance = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_InitialResendTimeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialResendTimeMax;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_InitialResendTimeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialResendTimeMax;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_InitialResendTimeMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialResendTimeMax = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TimePingInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimePingInterval;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_TimePingInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimePingInterval;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_TimePingInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TimePingInterval = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_disconnectTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeout;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_disconnectTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectTimeout;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_disconnectTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectTimeout = value;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TransportProtocol_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransportProtocol_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TransportProtocol_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TransportProtocol_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TransportProtocol_k__BackingField(::ExitGames::Client::Photon::ConnectionProtocol value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TransportProtocol_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mtu;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mtu;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mtu = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__IsSendingOnlyAcks_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSendingOnlyAcks_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__IsSendingOnlyAcks_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSendingOnlyAcks_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__IsSendingOnlyAcks_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSendingOnlyAcks_k__BackingField = value;
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizeSequenceNumbers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomizeSequenceNumbers;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizeSequenceNumbers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomizeSequenceNumbers;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RandomizeSequenceNumbers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RandomizeSequenceNumbers = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizedSequenceNumbers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomizedSequenceNumbers;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_RandomizedSequenceNumbers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RandomizedSequenceNumbers;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_RandomizedSequenceNumbers(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RandomizedSequenceNumbers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_GcmDatagramEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GcmDatagramEncryption;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_GcmDatagramEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GcmDatagramEncryption;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_GcmDatagramEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GcmDatagramEncryption = value;
}
constexpr ::ExitGames::Client::Photon::TrafficStats*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsIncoming_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsIncoming_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::TrafficStats*> const&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsIncoming_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsIncoming_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsIncoming_k__BackingField(::ExitGames::Client::Photon::TrafficStats* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrafficStatsIncoming_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::TrafficStats*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsOutgoing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsOutgoing_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::TrafficStats*> const&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsOutgoing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsOutgoing_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsOutgoing_k__BackingField(::ExitGames::Client::Photon::TrafficStats* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrafficStatsOutgoing_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::TrafficStatsGameLevel*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsGameLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsGameLevel_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::TrafficStatsGameLevel*> const&
ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__TrafficStatsGameLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrafficStatsGameLevel_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__TrafficStatsGameLevel_k__BackingField(::ExitGames::Client::Photon::TrafficStatsGameLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TrafficStatsGameLevel_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::Stopwatch*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsStopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trafficStatsStopwatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsStopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trafficStatsStopwatch;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_trafficStatsStopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trafficStatsStopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trafficStatsEnabled;
}
constexpr bool const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_trafficStatsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trafficStatsEnabled;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_trafficStatsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trafficStatsEnabled = value;
}
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_peerBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PeerBase*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_peerBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___peerBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendOutgoingLockObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendOutgoingLockObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_SendOutgoingLockObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SendOutgoingLockObject;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_SendOutgoingLockObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SendOutgoingLockObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DispatchLockObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DispatchLockObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_DispatchLockObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DispatchLockObject;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_DispatchLockObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DispatchLockObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnqueueLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnqueueLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_EnqueueLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnqueueLock;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_EnqueueLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EnqueueLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_payloadEncryptorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadEncryptorType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_payloadEncryptorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___payloadEncryptorType;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_payloadEncryptorType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___payloadEncryptorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PayloadEncryptionSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadEncryptionSecret;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_PayloadEncryptionSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PayloadEncryptionSecret;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_PayloadEncryptionSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PayloadEncryptionSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_encryptorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_encryptorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorType;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_encryptorType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_Encryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Encryptor;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*> const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get_Encryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Encryptor;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set_Encryptor(::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Encryptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CountDiscarded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountDiscarded_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__CountDiscarded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountDiscarded_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__CountDiscarded_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CountDiscarded_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__DeltaUnreliableNumber_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeltaUnreliableNumber_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::PhotonPeer::__cordl_internal_get__DeltaUnreliableNumber_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeltaUnreliableNumber_k__BackingField;
}
constexpr void ExitGames::Client::Photon::PhotonPeer::__cordl_internal_set__DeltaUnreliableNumber_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DeltaUnreliableNumber_k__BackingField = value;
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NoNativeCallbacks(bool value) {
  ::cordl_internals::setStaticField<bool, "NoNativeCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NoNativeCallbacks() {
  return ::cordl_internals::getStaticField<bool, "NoNativeCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_clientVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "clientVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(std::forward<::StringW>(value));
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::getStaticF_clientVersion() {
  return ::cordl_internals::getStaticField<::StringW, "clientVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativeSocketLibAvailable(bool value) {
  ::cordl_internals::setStaticField<bool, "NativeSocketLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativeSocketLibAvailable() {
  return ::cordl_internals::getStaticField<bool, "NativeSocketLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativePayloadEncryptionLibAvailable(bool value) {
  ::cordl_internals::setStaticField<bool, "NativePayloadEncryptionLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(
      std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativePayloadEncryptionLibAvailable() {
  return ::cordl_internals::getStaticField<bool, "NativePayloadEncryptionLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_NativeDatagramEncryptionLibAvailable(bool value) {
  ::cordl_internals::setStaticField<bool, "NativeDatagramEncryptionLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(
      std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_NativeDatagramEncryptionLibAvailable() {
  return ::cordl_internals::getStaticField<bool, "NativeDatagramEncryptionLibAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_OutgoingStreamBufferSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "OutgoingStreamBufferSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::getStaticF_OutgoingStreamBufferSize() {
  return ::cordl_internals::getStaticField<int32_t, "OutgoingStreamBufferSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline void ExitGames::Client::Photon::PhotonPeer::setStaticF_AsyncKeyExchange(bool value) {
  ::cordl_internals::setStaticField<bool, "AsyncKeyExchange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>(std::forward<bool>(value));
}
inline bool ExitGames::Client::Photon::PhotonPeer::getStaticF_AsyncKeyExchange() {
  return ::cordl_internals::getStaticField<bool, "AsyncKeyExchange", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get>();
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_CommandBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_CommandBufferSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CommandBufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CommandBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LimitOfUnreliableCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LimitOfUnreliableCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LimitOfUnreliableCommands(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LimitOfUnreliableCommands",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LocalTimeInMilliSeconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LocalTimeInMilliSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::CommandLogToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "CommandLogToString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline uint8_t ExitGames::Client::Photon::PhotonPeer::get_ClientSdkIdShifted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ClientSdkIdShifted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ClientVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ClientVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::ExitGames::Client::Photon::SerializationProtocol ExitGames::Client::Photon::PhotonPeer::get_SerializationProtocolType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_SerializationProtocolType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::SerializationProtocol, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_SerializationProtocolType(::ExitGames::Client::Photon::SerializationProtocol value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_SerializationProtocolType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_SocketImplementation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_SocketImplementation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_SocketImplementation(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_SocketImplementation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::IPhotonPeerListener* ExitGames::Client::Photon::PhotonPeer::get_Listener() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_Listener",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IPhotonPeerListener*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_Listener(::ExitGames::Client::Photon::IPhotonPeerListener* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_Listener", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::add_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "add_OnDisconnectMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::remove_OnDisconnectMessage(::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "remove_OnDisconnectMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::DisconnectMessage*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_ReuseEventInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ReuseEventInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_ReuseEventInstance(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_ReuseEventInstance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_UseByteArraySlicePoolForEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_UseByteArraySlicePoolForEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_UseByteArraySlicePoolForEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_UseByteArraySlicePoolForEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_WrapIncomingStructs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_WrapIncomingStructs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_WrapIncomingStructs(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_WrapIncomingStructs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::ByteArraySlicePool* ExitGames::Client::Photon::PhotonPeer::get_ByteArraySlicePool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ByteArraySlicePool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ByteArraySlicePool*, false>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_BytesIn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_BytesIn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_BytesOut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_BytesOut",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ByteCountCurrentDispatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ByteCountCurrentDispatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_CommandInfoCurrentDispatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_CommandInfoCurrentDispatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ByteCountLastOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ByteCountLastOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_EnableServerTracing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_EnableServerTracing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_EnableServerTracing(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_EnableServerTracing",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint8_t ExitGames::Client::Photon::PhotonPeer::get_QuickResendAttempts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_QuickResendAttempts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_QuickResendAttempts(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_QuickResendAttempts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::PeerStateValue ExitGames::Client::Photon::PhotonPeer::get_PeerState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_PeerState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PeerStateValue, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_PeerID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_PeerID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_QueuedIncomingCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_QueuedIncomingCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_QueuedOutgoingCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_QueuedOutgoingCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolTrim(int32_t countOfBuffers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "MessageBufferPoolTrim",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, countOfBuffers);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::MessageBufferPoolSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "MessageBufferPoolSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_CrcEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "get_CrcEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CrcEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CrcEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_PacketLossByCrc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_PacketLossByCrc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_PacketLossByChallenge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_PacketLossByChallenge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_SentReliableCommandsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_SentReliableCommandsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ResentReliableCommands() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ResentReliableCommands", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_DisconnectTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_DisconnectTimeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_DisconnectTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_DisconnectTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ServerTimeInMilliSeconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ServerTimeInMilliSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LocalMsTimestampDelegate(::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LocalMsTimestampDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_ConnectionTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ConnectionTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastSendAckTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LastSendAckTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastSendOutgoingTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LastSendOutgoingTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LongestSentCall() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LongestSentCall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_LongestSentCall(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_LongestSentCall",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_RoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_RoundTripTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_RoundTripTimeVariance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_RoundTripTimeVariance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_LastRoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_LastRoundTripTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_TimestampOfLastSocketReceive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TimestampOfLastSocketReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::get_ServerIpAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_ServerIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::PhotonPeer::get_UsedProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_UsedProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ConnectionProtocol, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ConnectionProtocol ExitGames::Client::Photon::PhotonPeer::get_TransportProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TransportProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ConnectionProtocol, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TransportProtocol", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsSimulationEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_IsSimulationEnabled(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::NetworkSimulationSet* ExitGames::Client::Photon::PhotonPeer::get_NetworkSimulationSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_NetworkSimulationSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NetworkSimulationSet*, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_MaximumTransferUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_MaximumTransferUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_MaximumTransferUnit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_MaximumTransferUnit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsEncryptionAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_IsEncryptionAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_IsSendingOnlyAcks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_IsSendingOnlyAcks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_IsSendingOnlyAcks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_IsSendingOnlyAcks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsIncoming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TrafficStatsIncoming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsIncoming(::ExitGames::Client::Photon::TrafficStats* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsIncoming", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStats* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsOutgoing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TrafficStatsOutgoing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStats*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsOutgoing(::ExitGames::Client::Photon::TrafficStats* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsOutgoing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStats*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::TrafficStatsGameLevel* ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsGameLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TrafficStatsGameLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::TrafficStatsGameLevel*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsGameLevel(::ExitGames::Client::Photon::TrafficStatsGameLevel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsGameLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::TrafficStatsGameLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsElapsedMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TrafficStatsElapsedMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::get_TrafficStatsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_TrafficStatsEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_TrafficStatsEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_TrafficStatsEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::PhotonPeer::TrafficStatsReset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "TrafficStatsReset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::InitializeTrafficStats() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "InitializeTrafficStats", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::PhotonPeer::VitalStatsToString(bool all) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "VitalStatsToString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, all);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_PayloadEncryptorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_PayloadEncryptorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_PayloadEncryptorType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_PayloadEncryptorType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* ExitGames::Client::Photon::PhotonPeer::get_EncryptorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_EncryptorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_EncryptorType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_EncryptorType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_CountDiscarded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_CountDiscarded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_CountDiscarded(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_CountDiscarded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::PhotonPeer::get_DeltaUnreliableNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "get_DeltaUnreliableNumber", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::set_DeltaUnreliableNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "set_DeltaUnreliableNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::PhotonPeer* ExitGames::Client::Photon::PhotonPeer::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::PhotonPeer*>(protocolType));
}
inline void ExitGames::Client::Photon::PhotonPeer::_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolType);
}
inline ::ExitGames::Client::Photon::PhotonPeer* ExitGames::Client::Photon::PhotonPeer::New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener,
                                                                                                ::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::PhotonPeer*>(listener, protocolType));
}
inline void ExitGames::Client::Photon::PhotonPeer::_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, protocolType);
}
/// @param photonToken: ::System::Object* (default: nullptr)
/// @param customInitData: ::System::Object* (default: nullptr)
inline bool ExitGames::Client::Photon::PhotonPeer::Connect(::StringW serverAddress, ::StringW appId, ::System::Object* photonToken, ::System::Object* customInitData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serverAddress, appId, photonToken, customInitData);
}
/// @param customInitData: ::System::Object* (default: nullptr)
inline bool ExitGames::Client::Photon::PhotonPeer::Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::StringW appId, ::System::Object* photonToken, ::System::Object* customInitData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serverAddress, proxyServerAddress, appId, photonToken, customInitData);
}
inline void ExitGames::Client::Photon::PhotonPeer::CreatePeerBase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "CreatePeerBase",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::OnDisconnectMessageCall(::ExitGames::Client::Photon::DisconnectMessage* dm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "OnDisconnectMessageCall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DisconnectMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dm);
}
inline void ExitGames::Client::Photon::PhotonPeer::StopThread() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::PhotonPeer::FetchServerTimestamp() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::EstablishEncryption() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "EstablishEncryption", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param randomizedSequenceNumbers: bool (default: false)
/// @param chainingModeGCM: bool (default: false)
inline bool ExitGames::Client::Photon::PhotonPeer::InitDatagramEncryption(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptionSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> hmacSecret,
                                                                          bool randomizedSequenceNumbers, bool chainingModeGCM) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "InitDatagramEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, encryptionSecret, hmacSecret, randomizedSequenceNumbers, chainingModeGCM);
}
inline void ExitGames::Client::Photon::PhotonPeer::InitPayloadEncryption(::ArrayW<uint8_t, ::Array<uint8_t>*> secret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "InitPayloadEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret);
}
inline void ExitGames::Client::Photon::PhotonPeer::Service() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOutgoingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendAcksOnly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::DispatchIncomingCommands() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOperation(uint8_t operationCode, ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* operationParameters,
                                                                 ::ExitGames::Client::Photon::SendOptions sendOptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, operationCode, operationParameters, sendOptions);
}
inline bool ExitGames::Client::Photon::PhotonPeer::SendOperation(uint8_t operationCode, ::ExitGames::Client::Photon::ParameterDictionary* operationParameters,
                                                                 ::ExitGames::Client::Photon::SendOptions sendOptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, operationCode, operationParameters, sendOptions);
}
inline bool ExitGames::Client::Photon::PhotonPeer::RegisterType(::System::Type* customType, uint8_t code, ::ExitGames::Client::Photon::SerializeMethod* serializeMethod,
                                                                ::ExitGames::Client::Photon::DeserializeMethod* constructor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "RegisterType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, customType, code, serializeMethod, constructor);
}
inline bool ExitGames::Client::Photon::PhotonPeer::RegisterType(::System::Type* customType, uint8_t code, ::ExitGames::Client::Photon::SerializeStreamMethod* serializeMethod,
                                                                ::ExitGames::Client::Photon::DeserializeStreamMethod* constructor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(), "RegisterType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializeStreamMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DeserializeStreamMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, customType, code, serializeMethod, constructor);
}
inline bool ExitGames::Client::Photon::PhotonPeer::_EstablishEncryption_b__220_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::PhotonPeer*>::get(),
                                                                             "<EstablishEncryption>b__220_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::PhotonPeer::PhotonPeer() {}
