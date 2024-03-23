#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Realtime/Demo/zzzz__ConnectAndJoinRandomLb_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::Start)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf357f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::Update)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xf35954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnConnectedToMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnConnectedToMaster)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf35a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnConnectedToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(::Photon::Realtime::DisconnectCause)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnDisconnected)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xf35b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnCustomAuthenticationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*)>(&::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCustomAuthenticationResponse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCustomAuthenticationResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnCustomAuthenticationFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(::StringW)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCustomAuthenticationFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCustomAuthenticationFailed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnRegionListReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(::Photon::Realtime::RegionHandler*)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRegionListReceived)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xf35c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRegionListReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnRoomListUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*)>(&::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRoomListUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnLobbyStatisticsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*)>(&::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnLobbyStatisticsUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnJoinedLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnJoinedLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnLeftLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLeftLobby)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnLeftLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnFriendListUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnFriendListUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnCreatedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnCreatedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnCreateRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(int16_t, ::StringW)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCreateRoomFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnJoinedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf35cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnJoinedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnJoinRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(int16_t, ::StringW)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnJoinRoomFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnJoinRandomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(int16_t, ::StringW)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf35d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnJoinRandomFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf35e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               "OnLeftRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb.OnRegionPingCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)(::Photon::Realtime::RegionHandler*)>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRegionPingCompleted)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf35e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRegionPingCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Demo::ConnectAndJoinRandomLb._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::Demo::ConnectAndJoinRandomLb::*)()>(
    &::Photon::Realtime::Demo::ConnectAndJoinRandomLb::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf35f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr Photon::Realtime::Demo::ConnectAndJoinRandomLb::operator ::Photon::Realtime::IConnectionCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* Photon::Realtime::Demo::ConnectAndJoinRandomLb::i___Photon__Realtime__IConnectionCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IConnectionCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr Photon::Realtime::Demo::ConnectAndJoinRandomLb::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Realtime::Demo::ConnectAndJoinRandomLb::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
constexpr Photon::Realtime::Demo::ConnectAndJoinRandomLb::operator ::Photon::Realtime::ILobbyCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
constexpr ::Photon::Realtime::ILobbyCallbacks* Photon::Realtime::Demo::ConnectAndJoinRandomLb::i___Photon__Realtime__ILobbyCallbacks() noexcept {
  return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::AppSettings*& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_appSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AppSettings*> const& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_appSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appSettings;
}
constexpr void Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_set_appSettings(::Photon::Realtime::AppSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_lbc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lbc;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_lbc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lbc;
}
constexpr void Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_set_lbc(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lbc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Photon::Realtime::ConnectionHandler>& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_ch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ch;
}
constexpr ::UnityW<::Photon::Realtime::ConnectionHandler> const& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_ch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ch;
}
constexpr void Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_set_ch(::UnityW<::Photon::Realtime::ConnectionHandler> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_StateUiText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateUiText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_get_StateUiText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateUiText;
}
constexpr void Photon::Realtime::Demo::ConnectAndJoinRandomLb::__cordl_internal_set_StateUiText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StateUiText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnConnectedToMaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnConnectedToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnDisconnected(::Photon::Realtime::DisconnectCause cause) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cause);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCustomAuthenticationResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(::StringW debugMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCustomAuthenticationFailed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugMessage);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRegionListReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionHandler);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRoomListUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomList);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnLobbyStatisticsUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyStatistics);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinedLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnJoinedLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLeftLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnLeftLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnFriendListUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, friendList);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCreatedRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnCreatedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnCreateRoomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnCreateRoomFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinedRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnJoinedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinRoomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnJoinRoomFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnJoinRandomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnJoinRandomFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnLeftRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(),
                                                                             "OnLeftRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::OnRegionPingCompleted(::Photon::Realtime::RegionHandler* regionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), "OnRegionPingCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionHandler);
}
inline ::Photon::Realtime::Demo::ConnectAndJoinRandomLb* Photon::Realtime::Demo::ConnectAndJoinRandomLb::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>());
}
inline void Photon::Realtime::Demo::ConnectAndJoinRandomLb::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::Demo::ConnectAndJoinRandomLb*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::Demo::ConnectAndJoinRandomLb::ConnectAndJoinRandomLb() {}
