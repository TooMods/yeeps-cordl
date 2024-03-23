#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeamsManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeam_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.add_PlayerJoinedTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerJoinedTeam)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1ec2f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "add_PlayerJoinedTeam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.remove_PlayerJoinedTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerJoinedTeam)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1ec301c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "remove_PlayerJoinedTeam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.add_PlayerLeftTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerLeftTeam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1ec30e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "add_PlayerLeftTeam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.remove_PlayerLeftTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerLeftTeam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1ec31b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "remove_PlayerLeftTeam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> (*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::get_Instance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1ec3288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1ec36d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ec37b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1ec380c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Init)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x1ec33fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "Init", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec3a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                 "Photon.Realtime.IMatchmakingCallbacks.OnJoinedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec3b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                 "Photon.Realtime.IMatchmakingCallbacks.OnLeftRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x1ec3b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                 "Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1ec41f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1ec4464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.UpdateTeams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::UpdateTeams)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1ec3a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "UpdateTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.ClearTeams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::ClearTeams)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1ec386c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "ClearTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamByCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    uint8_t, ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ec47a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamByCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::StringW, ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ec480c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamByName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetAvailableTeams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*, ::Array<::Photon::Pun::UtilityScripts::PhotonTeam*>*> (
    ::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetAvailableTeams)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ec4874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               "GetAvailableTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    uint8_t, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1ec48cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::StringW, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1ec4aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::Photon::Pun::UtilityScripts::PhotonTeam*, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1ec4b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMatesOfPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::Photon::Realtime::Player*, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMatesOfPlayer)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1ec4b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMatesOfPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(uint8_t)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1ec4eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::StringW)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1ec4f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Pun::UtilityScripts::PhotonTeam*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1ec4ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::PhotonTeam*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnFriendListUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                 "Photon.Realtime.IMatchmakingCallbacks.OnCreatedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnCreateRoomFailed",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnJoinRoomFailed",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnJoinRandomFailed",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::ExitGames::Client::Photon::Hashtable*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec4fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(
    &::Photon::Pun::UtilityScripts::PhotonTeamsManager::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x1ec4fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr Photon::Pun::UtilityScripts::PhotonTeamsManager::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::UtilityScripts::PhotonTeamsManager::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr Photon::Pun::UtilityScripts::PhotonTeamsManager::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Pun::UtilityScripts::PhotonTeamsManager::i___Photon__Realtime__IInRoomCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*> const&
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsList;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsList(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___teamsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsByCode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Pun::UtilityScripts::PhotonTeam*>*> const&
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsByCode;
}
constexpr void
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsByCode(::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___teamsByCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsByName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Pun::UtilityScripts::PhotonTeam*>*> const&
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teamsByName;
}
constexpr void
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsByName(::System::Collections::Generic::Dictionary_2<::StringW, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___teamsByName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*&
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_playersPerTeam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playersPerTeam;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*> const&
Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_playersPerTeam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playersPerTeam;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_playersPerTeam(
    ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playersPerTeam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerJoinedTeam",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>(
      std::forward<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>(value));
}
inline ::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_PlayerJoinedTeam() {
  return ::cordl_internals::getStaticField<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerJoinedTeam",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerLeftTeam",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>(
      std::forward<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>(value));
}
inline ::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_PlayerLeftTeam() {
  return ::cordl_internals::getStaticField<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerLeftTeam",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>(
      std::forward<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>>(value));
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "add_PlayerJoinedTeam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "remove_PlayerJoinedTeam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "add_PlayerLeftTeam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "remove_PlayerLeftTeam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> Photon::Pun::UtilityScripts::PhotonTeamsManager::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>, false>(nullptr, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                               "Photon.Realtime.IMatchmakingCallbacks.OnJoinedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                               "Photon.Realtime.IMatchmakingCallbacks.OnLeftRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer,
                                                                                                                       ::ExitGames::Client::Photon::Hashtable* changedProps) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                               "Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::UpdateTeams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "UpdateTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::ClearTeams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "ClearTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByCode(uint8_t code, ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*> team) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamByCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, code, team);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByName(::StringW teamName, ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*> team) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamByName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Photon::Pun::UtilityScripts::PhotonTeam*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, teamName, team);
}
inline ::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*, ::Array<::Photon::Pun::UtilityScripts::PhotonTeam*>*> Photon::Pun::UtilityScripts::PhotonTeamsManager::GetAvailableTeams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                                                             "GetAvailableTeams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*, ::Array<::Photon::Pun::UtilityScripts::PhotonTeam*>*>, false>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(uint8_t code, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>> members) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, code, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(::StringW teamName, ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>> members) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, teamName, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(::Photon::Pun::UtilityScripts::PhotonTeam* team,
                                                                               ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>> members) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::PhotonTeam*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, team, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMatesOfPlayer(::Photon::Realtime::Player* player,
                                                                                     ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>> teamMates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "TryGetTeamMatesOfPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::Photon::Realtime::Player*, ::Array<::Photon::Realtime::Player*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player, teamMates);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(uint8_t code) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, code);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(::Photon::Pun::UtilityScripts::PhotonTeam* team) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "GetTeamMembersCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::PhotonTeam*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, team);
}
inline void
Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnFriendListUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, friendList);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(),
                                               "Photon.Realtime.IMatchmakingCallbacks.OnCreatedRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnCreateRoomFailed",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnJoinRoomFailed",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed(int16_t returnCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IMatchmakingCallbacks.OnJoinRandomFailed",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), "Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMasterClient);
}
inline ::Photon::Pun::UtilityScripts::PhotonTeamsManager* Photon::Pun::UtilityScripts::PhotonTeamsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>());
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonTeamsManager::PhotonTeamsManager() {}
