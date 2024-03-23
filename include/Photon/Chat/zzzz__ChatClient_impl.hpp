#pragma once
#include "Photon/Chat/zzzz__ChatDisconnectCause_impl.hpp"
#include "Photon/Chat/zzzz__ChatState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Chat/zzzz__ChatClient_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "Photon/Chat/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Chat/zzzz__ChannelCreationOptions_def.hpp"
#include "Photon/Chat/zzzz__ChatAppSettings_def.hpp"
#include "Photon/Chat/zzzz__ChatChannel_def.hpp"
#include "Photon/Chat/zzzz__ChatDisconnectCause_def.hpp"
#include "Photon/Chat/zzzz__ChatPeer_def.hpp"
#include "Photon/Chat/zzzz__ChatState_def.hpp"
#include "Photon/Chat/zzzz__IChatClientListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_EnableProtocolFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180ae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_EnableProtocolFallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_EnableProtocolFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(bool)>(&::Photon::Chat::ChatClient::set_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180ae9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_EnableProtocolFallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_NameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_NameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_NameServerAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_NameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_NameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_NameServerAddress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_FrontendAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_FrontendAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_FrontendAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_FrontendAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_FrontendAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_FrontendAddress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_ChatRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_ChatRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_ChatRegion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_ChatRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_ChatRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_ChatRegion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Chat::ChatState (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_State",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::Photon::Chat::ChatState)>(&::Photon::Chat::ChatClient::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_DisconnectedCause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Chat::ChatDisconnectCause (::Photon::Chat::ChatClient::*)()>(
    &::Photon::Chat::ChatClient::get_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_DisconnectedCause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_DisconnectedCause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::Photon::Chat::ChatDisconnectCause)>(
    &::Photon::Chat::ChatClient::set_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_DisconnectedCause", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatDisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_CanChat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_CanChat)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x180aef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_CanChat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.CanChatInChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::CanChatInChannel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x180af2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "CanChatInChannel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_HasPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_HasPeer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180af1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_HasPeer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_AppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180afd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AppVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_AppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AppVersion", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_AppId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180afe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AppId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_AppId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AppId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Chat::AuthenticationValues* (::Photon::Chat::ChatClient::*)()>(
    &::Photon::Chat::ChatClient::get_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180aff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AuthValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::Photon::Chat::AuthenticationValues*)>(
    &::Photon::Chat::ChatClient::set_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180b000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x180b008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_UserId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::set_UserId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x180b020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_UserId", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_UseBackgroundWorkerForSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_UseBackgroundWorkerForSending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180b0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_UseBackgroundWorkerForSending",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_UseBackgroundWorkerForSending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(bool)>(&::Photon::Chat::ChatClient::set_UseBackgroundWorkerForSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180b0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_UseBackgroundWorkerForSending",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_TransportProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ConnectionProtocol (::Photon::Chat::ChatClient::*)()>(
    &::Photon::Chat::ChatClient::get_TransportProtocol)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x180b0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_TransportProtocol",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_TransportProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::Photon::Chat::ChatClient::set_TransportProtocol)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180b0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_TransportProtocol", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_SocketImplementationConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>* (
    ::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::get_SocketImplementationConfig)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x180b278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(),
                                                                               "get_SocketImplementationConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Chat::ChatClient::*)(::Photon::Chat::IChatClientListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Chat::ChatClient::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x180b294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::IChatClientListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ConnectUsingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::Photon::Chat::ChatAppSettings*)>(
    &::Photon::Chat::ChatClient::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x180b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectUsingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatAppSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::StringW, ::Photon::Chat::AuthenticationValues*)>(
    &::Photon::Chat::ChatClient::Connect)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x180b608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ConnectAndSetStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::StringW, ::Photon::Chat::AuthenticationValues*, int32_t, ::System::Object*)>(&::Photon::Chat::ChatClient::ConnectAndSetStatus)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x180b7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectAndSetStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::Service)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x180b894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Service",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendOutgoingInBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::SendOutgoingInBackground)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x180b90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendOutgoingInBackground",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendAcksOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::SendAcksOnly)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x180b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendAcksOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::Photon::Chat::ChatDisconnectCause)>(&::Photon::Chat::ChatClient::Disconnect)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x180b95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatDisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.StopThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::StopThread)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x180b9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "StopThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Photon::Chat::ChatClient::Subscribe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180b9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Photon::Chat::ChatClient::Subscribe)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x180bb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>, int32_t)>(
    &::Photon::Chat::ChatClient::Subscribe)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x180b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Unsubscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Photon::Chat::ChatClient::Unsubscribe)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x180c0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Unsubscribe", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.PublishMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool)>(
    &::Photon::Chat::ChatClient::PublishMessage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180c2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "PublishMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.PublishMessageUnreliable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool)>(
    &::Photon::Chat::ChatClient::PublishMessageUnreliable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180c5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "PublishMessageUnreliable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.publishMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool, bool)>(
    &::Photon::Chat::ChatClient::publishMessage)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180c2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "publishMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendPrivateMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool)>(
    &::Photon::Chat::ChatClient::SendPrivateMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180c5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendPrivateMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool, bool)>(
    &::Photon::Chat::ChatClient::SendPrivateMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180c5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendPrivateMessageUnreliable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool, bool)>(
    &::Photon::Chat::ChatClient::SendPrivateMessageUnreliable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180c898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessageUnreliable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.sendPrivateMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ::System::Object*, bool, bool, bool)>(
    &::Photon::Chat::ChatClient::sendPrivateMessage)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x180c5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "sendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SetOnlineStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(int32_t, ::System::Object*, bool)>(
    &::Photon::Chat::ChatClient::SetOnlineStatus)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x180c8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SetOnlineStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(int32_t)>(&::Photon::Chat::ChatClient::SetOnlineStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180cb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SetOnlineStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(int32_t, ::System::Object*)>(&::Photon::Chat::ChatClient::SetOnlineStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180cb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.AddFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Photon::Chat::ChatClient::AddFriends)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x180cb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "AddFriends", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.RemoveFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Photon::Chat::ChatClient::RemoveFriends)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x180ce3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "RemoveFriends", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.GetPrivateChannelNameByUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatClient::*)(::StringW)>(&::Photon::Chat::ChatClient::GetPrivateChannelNameByUser)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x180d154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "GetPrivateChannelNameByUser", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.TryGetChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, bool, ByRef<::Photon::Chat::ChatChannel*>)>(
    &::Photon::Chat::ChatClient::TryGetChannel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x180d1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetChannel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.TryGetChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ByRef<::Photon::Chat::ChatChannel*>)>(
    &::Photon::Chat::ChatClient::TryGetChannel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x180d230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetChannel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.TryGetPrivateChannelByUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, ByRef<::Photon::Chat::ChatChannel*>)>(
    &::Photon::Chat::ChatClient::TryGetPrivateChannelByUser)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180d2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetPrivateChannelByUser", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.set_DebugOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::DebugLevel)>(
    &::Photon::Chat::ChatClient::set_DebugOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x180b5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_DebugOut", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.get_DebugOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Chat::ChatClient::*)()>(
    &::Photon::Chat::ChatClient::get_DebugOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x180bf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_DebugOut",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(
    &::Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x180d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ExitGames_Client_Photon_IPhotonPeerListener_OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180d3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.OnEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x180e85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(),
                                                 "ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::StatusCode)>(
    &::Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x180f14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.TryAuthenticateOnNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::TryAuthenticateOnNameServer)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x180f764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(),
                                                                               "TryAuthenticateOnNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.SendChannelOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::ArrayW<::StringW, ::Array<::StringW>*>, uint8_t, int32_t)>(
    &::Photon::Chat::ChatClient::SendChannelOperation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180bf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendChannelOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandlePrivateMessageEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandlePrivateMessageEvent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x180d768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandlePrivateMessageEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleChatMessagesEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleChatMessagesEvent)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x180d450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleChatMessagesEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleSubscribeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleSubscribeEvent)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x180dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleSubscribeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleUnsubscribeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleUnsubscribeEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x180df04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUnsubscribeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleAuthResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Chat::ChatClient::HandleAuthResponse)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x180ea70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleAuthResponse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleStatusUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleStatusUpdate)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x180da0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleStatusUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.ConnectToFrontEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::ConnectToFrontEnd)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x180fb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectToFrontEnd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.AuthenticateOnFrontEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)()>(&::Photon::Chat::ChatClient::AuthenticateOnFrontEnd)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x180f8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "AuthenticateOnFrontEnd",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleUserUnsubscribedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleUserUnsubscribedEvent)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180e4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUserUnsubscribedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.HandleUserSubscribedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Chat::ChatClient::HandleUserSubscribedEvent)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x180e098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUserSubscribedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatClient.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatClient::*)(::StringW, int32_t, int32_t, ::Photon::Chat::ChannelCreationOptions*)>(
    &::Photon::Chat::ChatClient::Subscribe)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x180ff8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChannelCreationOptions*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr Photon::Chat::ChatClient::operator ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept {
  return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* Photon::Chat::ChatClient::i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept {
  return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
constexpr bool& Photon::Chat::ChatClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableProtocolFallback_k__BackingField;
}
constexpr bool const& Photon::Chat::ChatClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableProtocolFallback_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__EnableProtocolFallback_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnableProtocolFallback_k__BackingField = value;
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get__NameServerAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameServerAddress_k__BackingField;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get__NameServerAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameServerAddress_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__NameServerAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NameServerAddress_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get__FrontendAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FrontendAddress_k__BackingField;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get__FrontendAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FrontendAddress_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__FrontendAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FrontendAddress_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get_chatRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chatRegion;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get_chatRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chatRegion;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_chatRegion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chatRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get_ProxyServerAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServerAddress;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get_ProxyServerAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServerAddress;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_ProxyServerAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProxyServerAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Chat::ChatState& Photon::Chat::ChatClient::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::Photon::Chat::ChatState const& Photon::Chat::ChatClient::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__State_k__BackingField(::Photon::Chat::ChatState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
constexpr ::Photon::Chat::ChatDisconnectCause& Photon::Chat::ChatClient::__cordl_internal_get__DisconnectedCause_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectedCause_k__BackingField;
}
constexpr ::Photon::Chat::ChatDisconnectCause const& Photon::Chat::ChatClient::__cordl_internal_get__DisconnectedCause_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectedCause_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__DisconnectedCause_k__BackingField(::Photon::Chat::ChatDisconnectCause value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisconnectedCause_k__BackingField = value;
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get__AppVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppVersion_k__BackingField;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get__AppVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppVersion_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__AppVersion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AppVersion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatClient::__cordl_internal_get__AppId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppId_k__BackingField;
}
constexpr ::StringW const& Photon::Chat::ChatClient::__cordl_internal_get__AppId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppId_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__AppId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AppId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Chat::AuthenticationValues*& Photon::Chat::ChatClient::__cordl_internal_get__AuthValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthValues_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::AuthenticationValues*> const& Photon::Chat::ChatClient::__cordl_internal_get__AuthValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthValues_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__AuthValues_k__BackingField(::Photon::Chat::AuthenticationValues* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AuthValues_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Chat::ChatClient::__cordl_internal_get_MessageLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageLimit;
}
constexpr int32_t const& Photon::Chat::ChatClient::__cordl_internal_get_MessageLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageLimit;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_MessageLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MessageLimit = value;
}
constexpr int32_t& Photon::Chat::ChatClient::__cordl_internal_get_PrivateChatHistoryLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateChatHistoryLength;
}
constexpr int32_t const& Photon::Chat::ChatClient::__cordl_internal_get_PrivateChatHistoryLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateChatHistoryLength;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_PrivateChatHistoryLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrivateChatHistoryLength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*& Photon::Chat::ChatClient::__cordl_internal_get_PublicChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PublicChannels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*> const&
Photon::Chat::ChatClient::__cordl_internal_get_PublicChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PublicChannels;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_PublicChannels(::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PublicChannels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*& Photon::Chat::ChatClient::__cordl_internal_get_PrivateChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateChannels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>*> const&
Photon::Chat::ChatClient::__cordl_internal_get_PrivateChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateChannels;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_PrivateChannels(::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Chat::ChatChannel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrivateChannels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Photon::Chat::ChatClient::__cordl_internal_get_PublicChannelsUnsubscribing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PublicChannelsUnsubscribing;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& Photon::Chat::ChatClient::__cordl_internal_get_PublicChannelsUnsubscribing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PublicChannelsUnsubscribing;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_PublicChannelsUnsubscribing(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PublicChannelsUnsubscribing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Chat::IChatClientListener*& Photon::Chat::ChatClient::__cordl_internal_get_listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::IChatClientListener*> const& Photon::Chat::ChatClient::__cordl_internal_get_listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listener;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_listener(::Photon::Chat::IChatClientListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Chat::ChatPeer*& Photon::Chat::ChatClient::__cordl_internal_get_chatPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chatPeer;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Chat::ChatPeer*> const& Photon::Chat::ChatClient::__cordl_internal_get_chatPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chatPeer;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_chatPeer(::Photon::Chat::ChatPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chatPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Chat::ChatClient::__cordl_internal_get_didAuthenticate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAuthenticate;
}
constexpr bool const& Photon::Chat::ChatClient::__cordl_internal_get_didAuthenticate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didAuthenticate;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_didAuthenticate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didAuthenticate = value;
}
constexpr ::System::Nullable_1<int32_t>& Photon::Chat::ChatClient::__cordl_internal_get_statusToSetWhenConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusToSetWhenConnected;
}
constexpr ::System::Nullable_1<int32_t> const& Photon::Chat::ChatClient::__cordl_internal_get_statusToSetWhenConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusToSetWhenConnected;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_statusToSetWhenConnected(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusToSetWhenConnected = value;
}
constexpr ::System::Object*& Photon::Chat::ChatClient::__cordl_internal_get_messageToSetWhenConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageToSetWhenConnected;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Photon::Chat::ChatClient::__cordl_internal_get_messageToSetWhenConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageToSetWhenConnected;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_messageToSetWhenConnected(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageToSetWhenConnected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Chat::ChatClient::__cordl_internal_get_msDeltaForServiceCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msDeltaForServiceCalls;
}
constexpr int32_t const& Photon::Chat::ChatClient::__cordl_internal_get_msDeltaForServiceCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msDeltaForServiceCalls;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_msDeltaForServiceCalls(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msDeltaForServiceCalls = value;
}
constexpr int32_t& Photon::Chat::ChatClient::__cordl_internal_get_msTimestampOfLastServiceCall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msTimestampOfLastServiceCall;
}
constexpr int32_t const& Photon::Chat::ChatClient::__cordl_internal_get_msTimestampOfLastServiceCall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msTimestampOfLastServiceCall;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set_msTimestampOfLastServiceCall(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msTimestampOfLastServiceCall = value;
}
constexpr bool& Photon::Chat::ChatClient::__cordl_internal_get__UseBackgroundWorkerForSending_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseBackgroundWorkerForSending_k__BackingField;
}
constexpr bool const& Photon::Chat::ChatClient::__cordl_internal_get__UseBackgroundWorkerForSending_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseBackgroundWorkerForSending_k__BackingField;
}
constexpr void Photon::Chat::ChatClient::__cordl_internal_set__UseBackgroundWorkerForSending_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseBackgroundWorkerForSending_k__BackingField = value;
}
inline bool Photon::Chat::ChatClient::get_EnableProtocolFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_EnableProtocolFallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_EnableProtocolFallback(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_EnableProtocolFallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Chat::ChatClient::get_NameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_NameServerAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_NameServerAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_NameServerAddress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Chat::ChatClient::get_FrontendAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_FrontendAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_FrontendAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_FrontendAddress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Chat::ChatClient::get_ChatRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_ChatRegion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_ChatRegion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_ChatRegion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Chat::ChatState Photon::Chat::ChatClient::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_State",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Chat::ChatState, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_State(::Photon::Chat::ChatState value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Chat::ChatDisconnectCause Photon::Chat::ChatClient::get_DisconnectedCause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_DisconnectedCause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Chat::ChatDisconnectCause, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_DisconnectedCause(::Photon::Chat::ChatDisconnectCause value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_DisconnectedCause", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatDisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Chat::ChatClient::get_CanChat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_CanChat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatClient::CanChatInChannel(::StringW channelName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "CanChatInChannel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName);
}
inline bool Photon::Chat::ChatClient::get_HasPeer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_HasPeer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Photon::Chat::ChatClient::get_AppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AppVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_AppVersion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AppVersion", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Chat::ChatClient::get_AppId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AppId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_AppId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AppId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Chat::AuthenticationValues* Photon::Chat::ChatClient::get_AuthValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_AuthValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Chat::AuthenticationValues*, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_AuthValues(::Photon::Chat::AuthenticationValues* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Chat::ChatClient::get_UserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_UserId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_UserId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_UserId", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Chat::ChatClient::get_UseBackgroundWorkerForSending() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_UseBackgroundWorkerForSending",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_UseBackgroundWorkerForSending(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_UseBackgroundWorkerForSending",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::ConnectionProtocol Photon::Chat::ChatClient::get_TransportProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_TransportProtocol",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ConnectionProtocol, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::set_TransportProtocol(::ExitGames::Client::Photon::ConnectionProtocol value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_TransportProtocol", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>* Photon::Chat::ChatClient::get_SocketImplementationConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(),
                                                                             "get_SocketImplementationConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, ::System::Type*>*, false>(this, ___internal_method);
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline ::Photon::Chat::ChatClient* Photon::Chat::ChatClient::New_ctor(::Photon::Chat::IChatClientListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Chat::ChatClient*>(listener, protocol));
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline void Photon::Chat::ChatClient::_ctor(::Photon::Chat::IChatClientListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::IChatClientListener*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, protocol);
}
inline bool Photon::Chat::ChatClient::ConnectUsingSettings(::Photon::Chat::ChatAppSettings* appSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectUsingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatAppSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appSettings);
}
inline bool Photon::Chat::ChatClient::Connect(::StringW appId, ::StringW appVersion, ::Photon::Chat::AuthenticationValues* authValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId, appVersion, authValues);
}
/// @param status: int32_t (default: static_cast<int32_t>(0x2))
/// @param message: ::System::Object* (default: nullptr)
inline bool Photon::Chat::ChatClient::ConnectAndSetStatus(::StringW appId, ::StringW appVersion, ::Photon::Chat::AuthenticationValues* authValues, int32_t status, ::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectAndSetStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId, appVersion, authValues, status, message);
}
inline void Photon::Chat::ChatClient::Service() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Service",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatClient::SendOutgoingInBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendOutgoingInBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::SendAcksOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendAcksOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param cause: ::Photon::Chat::ChatDisconnectCause (default: static_cast<int32_t>(0xd))
inline void Photon::Chat::ChatClient::Disconnect(::Photon::Chat::ChatDisconnectCause cause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChatDisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cause);
}
inline void Photon::Chat::ChatClient::StopThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "StopThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatClient::Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels);
}
inline bool Photon::Chat::ChatClient::Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels, ::ArrayW<int32_t, ::Array<int32_t>*> lastMsgIds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels, lastMsgIds);
}
inline bool Photon::Chat::ChatClient::Subscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels, int32_t messagesFromHistory) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels, messagesFromHistory);
}
inline bool Photon::Chat::ChatClient::Unsubscribe(::ArrayW<::StringW, ::Array<::StringW>*> channels) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Unsubscribe", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::PublishMessage(::StringW channelName, ::System::Object* message, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "PublishMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName, message, forwardAsWebhook);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::PublishMessageUnreliable(::StringW channelName, ::System::Object* message, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "PublishMessageUnreliable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName, message, forwardAsWebhook);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::publishMessage(::StringW channelName, ::System::Object* message, bool reliable, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "publishMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName, message, reliable, forwardAsWebhook);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::SendPrivateMessage(::StringW target, ::System::Object* message, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, message, forwardAsWebhook);
}
inline bool Photon::Chat::ChatClient::SendPrivateMessage(::StringW target, ::System::Object* message, bool encrypt, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, message, encrypt, forwardAsWebhook);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::SendPrivateMessageUnreliable(::StringW target, ::System::Object* message, bool encrypt, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendPrivateMessageUnreliable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, message, encrypt, forwardAsWebhook);
}
/// @param forwardAsWebhook: bool (default: false)
inline bool Photon::Chat::ChatClient::sendPrivateMessage(::StringW target, ::System::Object* message, bool encrypt, bool reliable, bool forwardAsWebhook) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "sendPrivateMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, message, encrypt, reliable, forwardAsWebhook);
}
inline bool Photon::Chat::ChatClient::SetOnlineStatus(int32_t status, ::System::Object* message, bool skipMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, status, message, skipMessage);
}
inline bool Photon::Chat::ChatClient::SetOnlineStatus(int32_t status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, status);
}
inline bool Photon::Chat::ChatClient::SetOnlineStatus(int32_t status, ::System::Object* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SetOnlineStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, status, message);
}
inline bool Photon::Chat::ChatClient::AddFriends(::ArrayW<::StringW, ::Array<::StringW>*> friends) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "AddFriends", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, friends);
}
inline bool Photon::Chat::ChatClient::RemoveFriends(::ArrayW<::StringW, ::Array<::StringW>*> friends) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "RemoveFriends", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, friends);
}
inline ::StringW Photon::Chat::ChatClient::GetPrivateChannelNameByUser(::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "GetPrivateChannelNameByUser", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, userName);
}
inline bool Photon::Chat::ChatClient::TryGetChannel(::StringW channelName, bool isPrivate, ByRef<::Photon::Chat::ChatChannel*> channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetChannel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName, isPrivate, channel);
}
inline bool Photon::Chat::ChatClient::TryGetChannel(::StringW channelName, ByRef<::Photon::Chat::ChatChannel*> channel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetChannel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channelName, channel);
}
inline bool Photon::Chat::ChatClient::TryGetPrivateChannelByUser(::StringW userId, ByRef<::Photon::Chat::ChatChannel*> channel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryGetPrivateChannelByUser", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Chat::ChatChannel*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, userId, channel);
}
inline void Photon::Chat::ChatClient::set_DebugOut(::ExitGames::Client::Photon::DebugLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "set_DebugOut", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Chat::ChatClient::get_DebugOut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "get_DebugOut",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message);
}
inline void Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.OnEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void Photon::Chat::ChatClient::ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode);
}
inline void Photon::Chat::ChatClient::TryAuthenticateOnNameServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "TryAuthenticateOnNameServer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatClient::SendChannelOperation(::ArrayW<::StringW, ::Array<::StringW>*> channels, uint8_t operation, int32_t historyLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "SendChannelOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channels, operation, historyLength);
}
inline void Photon::Chat::ChatClient::HandlePrivateMessageEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandlePrivateMessageEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::HandleChatMessagesEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleChatMessagesEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::HandleSubscribeEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleSubscribeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::HandleUnsubscribeEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUnsubscribeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::HandleAuthResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleAuthResponse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void Photon::Chat::ChatClient::HandleStatusUpdate(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleStatusUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline bool Photon::Chat::ChatClient::ConnectToFrontEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "ConnectToFrontEnd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatClient::AuthenticateOnFrontEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "AuthenticateOnFrontEnd",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Chat::ChatClient::HandleUserUnsubscribedEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUserUnsubscribedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void Photon::Chat::ChatClient::HandleUserSubscribedEvent(::ExitGames::Client::Photon::EventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "HandleUserSubscribedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
/// @param lastMsgId: int32_t (default: static_cast<int32_t>(0x0))
/// @param messagesFromHistory: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param creationOptions: ::Photon::Chat::ChannelCreationOptions* (default: nullptr)
inline bool Photon::Chat::ChatClient::Subscribe(::StringW channel, int32_t lastMsgId, int32_t messagesFromHistory, ::Photon::Chat::ChannelCreationOptions* creationOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatClient*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::ChannelCreationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, channel, lastMsgId, messagesFromHistory, creationOptions);
}
// Ctor Parameters []
constexpr ::Photon::Chat::ChatClient::ChatClient() {}
