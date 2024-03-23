#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "Photon/Realtime/zzzz__AuthModeOption_impl.hpp"
#include "Photon/Realtime/zzzz__ClientAppType_impl.hpp"
#include "Photon/Realtime/zzzz__ClientState_impl.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_impl.hpp"
#include "Photon/Realtime/zzzz__EncryptionMode_impl.hpp"
#include "Photon/Realtime/zzzz__JoinType_impl.hpp"
#include "Photon/Realtime/zzzz__PhotonPortDefinition_impl.hpp"
#include "Photon/Realtime/zzzz__ServerConnection_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DisconnectMessage_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__ClientAppType_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__ConnectionCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__DisconnectCause_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__ErrorInfoCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__FindFriendsOptions_def.hpp"
#include "Photon/Realtime/zzzz__InRoomCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "Photon/Realtime/zzzz__LobbyCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__MatchMakingCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__RegionHandler_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
#include "Photon/Realtime/zzzz__ServerConnection_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "Photon/Realtime/zzzz__WebRpcCallbacksContainer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters::*)()>(
    &::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2244968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters* Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters*>());
}
inline void Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::__LoadBalancingClient__EncryptionDataParameters::__LoadBalancingClient__EncryptionDataParameters() {}
//  Writing Method size for method: ::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::*)(::System::Object*, bool)>(
    &::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22447b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_get_Target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_get_Target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Target;
}
constexpr void Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_set_Target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_get_AddTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AddTarget;
}
constexpr bool const& Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_get_AddTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AddTarget;
}
constexpr void Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__cordl_internal_set_AddTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AddTarget = value;
}
inline ::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange* Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::New_ctor(::System::Object* target, bool addTarget) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>(target, addTarget));
}
inline void Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::_ctor(::System::Object* target, bool addTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, addTarget);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange::__LoadBalancingClient__CallbackTargetChange() {}
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_LoadBalancingPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::LoadBalancingPeer* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_LoadBalancingPeer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22387b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_LoadBalancingPeer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_LoadBalancingPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::LoadBalancingPeer*)>(
    &::Photon::Realtime::LoadBalancingClient::set_LoadBalancingPeer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22387bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_LoadBalancingPeer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_SerializationProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::SerializationProtocol (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_SerializationProtocol)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22387c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_SerializationProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_SerializationProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::SerializationProtocol)>(
    &::Photon::Realtime::LoadBalancingClient::set_SerializationProtocol)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22387e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_SerializationProtocol", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_AppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22387fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_AppVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_AppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_AppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AppVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_AppId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223880c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_AppId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_AppId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Photon::Realtime::LoadBalancingClient::set_AppId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AppId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_ClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::ClientAppType (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_ClientType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223881c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_ClientType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_ClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::ClientAppType)>(
    &::Photon::Realtime::LoadBalancingClient::set_ClientType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_ClientType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientAppType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::AuthenticationValues* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_AuthValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_AuthValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::AuthenticationValues*)>(
    &::Photon::Realtime::LoadBalancingClient::set_AuthValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AuthenticationValues*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_ExpectedProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_ExpectedProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_ExpectedProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_ExpectedProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>)>(&::Photon::Realtime::LoadBalancingClient::set_ExpectedProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_ExpectedProtocol", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_TokenForInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_TokenForInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x223884c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_TokenForInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_IsUsingNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_IsUsingNameServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_IsUsingNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_IsUsingNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(bool)>(
    &::Photon::Realtime::LoadBalancingClient::set_IsUsingNameServer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2238874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_IsUsingNameServer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_NameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_NameServerAddress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2238880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_NameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_UseAlternativeUdpPorts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_UseAlternativeUdpPorts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_UseAlternativeUdpPorts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(bool)>(
    &::Photon::Realtime::LoadBalancingClient::set_UseAlternativeUdpPorts)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2238aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_UseAlternativeUdpPorts",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_EnableProtocolFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_EnableProtocolFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_EnableProtocolFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(bool)>(
    &::Photon::Realtime::LoadBalancingClient::set_EnableProtocolFallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2238ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_EnableProtocolFallback",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_CurrentServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_CurrentServerAddress)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2238ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_CurrentServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_MasterServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_MasterServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_MasterServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_MasterServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_MasterServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_MasterServerAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_GameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_GameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_GameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_GameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_GameServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_GameServerAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_Server
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::ServerConnection (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_Server)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_Server",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_Server
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::ServerConnection)>(
    &::Photon::Realtime::LoadBalancingClient::set_Server)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_Server", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::ClientState (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_State",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::ClientState)>(
    &::Photon::Realtime::LoadBalancingClient::set_State)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2238b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_IsConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_IsConnected)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2235604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_IsConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_IsConnectedAndReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_IsConnectedAndReady)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2238b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_IsConnectedAndReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.add_StateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*)>(&::Photon::Realtime::LoadBalancingClient::add_StateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_StateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.remove_StateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*)>(&::Photon::Realtime::LoadBalancingClient::remove_StateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_StateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.add_EventReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::EventData*>*)>(
    &::Photon::Realtime::LoadBalancingClient::add_EventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_EventReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.remove_EventReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::System::Action_1<::ExitGames::Client::Photon::EventData*>*)>(
    &::Photon::Realtime::LoadBalancingClient::remove_EventReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_EventReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.add_OpResponseReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*)>(&::Photon::Realtime::LoadBalancingClient::add_OpResponseReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_OpResponseReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.remove_OpResponseReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*)>(&::Photon::Realtime::LoadBalancingClient::remove_OpResponseReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2238ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_OpResponseReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_DisconnectedCause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::DisconnectCause (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_DisconnectedCause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_DisconnectedCause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::DisconnectCause)>(
    &::Photon::Realtime::LoadBalancingClient::set_DisconnectedCause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_DisconnectedCause", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_InLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_InLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2238fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_InLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_CurrentLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::TypedLobby* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_CurrentLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_CurrentLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_CurrentLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::TypedLobby*)>(
    &::Photon::Realtime::LoadBalancingClient::set_CurrentLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentLobby", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_LocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_LocalPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_LocalPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_LocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::Player*)>(
    &::Photon::Realtime::LoadBalancingClient::set_LocalPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2238fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_LocalPlayer", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_NickName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_NickName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2238fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_NickName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_NickName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_NickName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2238ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_NickName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2239070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_UserId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_UserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(&::Photon::Realtime::LoadBalancingClient::set_UserId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2239088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_UserId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_CurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Room* (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_CurrentRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_CurrentRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_CurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::Room*)>(
    &::Photon::Realtime::LoadBalancingClient::set_CurrentRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_InRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_InRoom)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2239120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_InRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_PlayersOnMasterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_PlayersOnMasterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_PlayersOnMasterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_PlayersOnMasterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(
    &::Photon::Realtime::LoadBalancingClient::set_PlayersOnMasterCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223914c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_PlayersOnMasterCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_PlayersInRoomsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_PlayersInRoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_PlayersInRoomsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_PlayersInRoomsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(
    &::Photon::Realtime::LoadBalancingClient::set_PlayersInRoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223915c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_PlayersInRoomsCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_RoomsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::get_RoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_RoomsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_RoomsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(
    &::Photon::Realtime::LoadBalancingClient::set_RoomsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223916c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_RoomsCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_IsFetchingFriendList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_IsFetchingFriendList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2239174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_IsFetchingFriendList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_CloudRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_CloudRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_CloudRegion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_CloudRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_CloudRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223918c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CloudRegion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.get_CurrentCluster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::get_CurrentCluster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "get_CurrentCluster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.set_CurrentCluster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::set_CurrentCluster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223919c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentCluster",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::Photon::Realtime::LoadBalancingClient::_ctor)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x22391a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::StringW, ::StringW, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Realtime::LoadBalancingClient::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22398a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.GetNameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::GetNameServerAddress)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2238884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "GetNameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ConnectUsingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::AppSettings*)>(
    &::Photon::Realtime::LoadBalancingClient::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x22398e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::Connect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2239c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Connect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ConnectToMasterServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::ConnectToMasterServer)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2239c8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ConnectToNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::ConnectToNameServer)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2239e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "ConnectToNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ConnectToRegionMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::ConnectToRegionMaster)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x223a06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ConnectToRegionMaster",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CheckConnectSetupWebGl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::CheckConnectSetupWebGl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223a660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "CheckConnectSetupWebGl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::StringW, ::Photon::Realtime::ServerConnection)>(
    &::Photon::Realtime::LoadBalancingClient::Connect)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x223a664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ReconnectToMaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::ReconnectToMaster)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x223a904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "ReconnectToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ReconnectAndRejoin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::ReconnectAndRejoin)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x223aac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "ReconnectAndRejoin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::DisconnectCause)>(
    &::Photon::Realtime::LoadBalancingClient::Disconnect)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2235630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.DisconnectToReconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::DisconnectToReconnect)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x223aca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "DisconnectToReconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.SimulateConnectionLoss
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(bool)>(
    &::Photon::Realtime::LoadBalancingClient::SimulateConnectionLoss)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x223ad74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "SimulateConnectionLoss",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CallAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::CallAuthenticate)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x223a2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "CallAuthenticate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::Service)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x223b1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Service",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpGetRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::OpGetRegions)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x223b1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpGetRegions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpFindFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::Photon::Realtime::FindFriendsOptions*)>(&::Photon::Realtime::LoadBalancingClient::OpFindFriends)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x223b254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpFindFriends", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::FindFriendsOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpJoinLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::TypedLobby*)>(
    &::Photon::Realtime::LoadBalancingClient::OpJoinLobby)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x223b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinLobby", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpLeaveLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)()>(&::Photon::Realtime::LoadBalancingClient::OpLeaveLobby)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x223b754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpLeaveLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpJoinRandomRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::OpJoinRandomRoomParams*)>(
    &::Photon::Realtime::LoadBalancingClient::OpJoinRandomRoom)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x223b7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::OpJoinRandomRoomParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpJoinRandomOrCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    ::Photon::Realtime::OpJoinRandomRoomParams*, ::Photon::Realtime::EnterRoomParams*)>(&::Photon::Realtime::LoadBalancingClient::OpJoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x223b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRandomOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::OpJoinRandomRoomParams*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::EnterRoomParams*)>(
    &::Photon::Realtime::LoadBalancingClient::OpCreateRoom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x223ba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpCreateRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpJoinOrCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::EnterRoomParams*)>(
    &::Photon::Realtime::LoadBalancingClient::OpJoinOrCreateRoom)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x223bb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpJoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::EnterRoomParams*)>(
    &::Photon::Realtime::LoadBalancingClient::OpJoinRoom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x223bc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpRejoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::OpRejoinRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x223bd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpRejoinRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpLeaveRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(bool, bool)>(
    &::Photon::Realtime::LoadBalancingClient::OpLeaveRoom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x223be80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpLeaveRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpGetGameList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::TypedLobby*, ::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::OpGetGameList)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x223bf74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpGetGameList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpSetCustomPropertiesOfActor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(
        &::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfActor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x223c07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetCustomPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpSetPropertiesOfActor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfActor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x223c478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpSetCustomPropertiesOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x223cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetCustomPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpSetPropertyOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::System::Object*)>(
    &::Photon::Realtime::LoadBalancingClient::OpSetPropertyOfRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x223cdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertyOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpSetPropertiesOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x223cc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpRaiseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Realtime::LoadBalancingClient::OpRaiseEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x223d354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpChangeGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Photon::Realtime::LoadBalancingClient::OpChangeGroups)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x223d40c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ReadoutProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, int32_t)>(&::Photon::Realtime::LoadBalancingClient::ReadoutProperties)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x223d4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReadoutProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ReadoutPropertiesForActorNr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::Hashtable* (
    ::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::Hashtable*, int32_t)>(&::Photon::Realtime::LoadBalancingClient::ReadoutPropertiesForActorNr)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x223d8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReadoutPropertiesForActorNr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ChangeLocalID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(int32_t)>(
    &::Photon::Realtime::LoadBalancingClient::ChangeLocalID)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x223d9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ChangeLocalID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.GameEnteredOnGameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::LoadBalancingClient::GameEnteredOnGameServer)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x223db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "GameEnteredOnGameServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.UpdatedActorList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Photon::Realtime::LoadBalancingClient::UpdatedActorList)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x223dddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "UpdatedActorList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CreatePlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (
    ::Photon::Realtime::LoadBalancingClient::*)(::StringW, int32_t, bool, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::LoadBalancingClient::CreatePlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x223e250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Room* (::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::Photon::Realtime::RoomOptions*)>(
    &::Photon::Realtime::LoadBalancingClient::CreateRoom)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x223e3bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CheckIfOpAllowedOnServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::Photon::Realtime::ServerConnection)>(
    &::Photon::Realtime::LoadBalancingClient::CheckIfOpAllowedOnServer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x223e434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfOpAllowedOnServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CheckIfOpCanBeSent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(uint8_t, ::Photon::Realtime::ServerConnection, ::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::CheckIfOpCanBeSent)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x223ae64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfOpCanBeSent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CheckIfClientIsReadyToCallOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(uint8_t)>(
    &::Photon::Realtime::LoadBalancingClient::CheckIfClientIsReadyToCallOperation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x223e560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfClientIsReadyToCallOperation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.DebugReturn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(
    &::Photon::Realtime::LoadBalancingClient::DebugReturn)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x223e66c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.CallbackRoomEnterFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::LoadBalancingClient::CallbackRoomEnterFailed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x223e77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CallbackRoomEnterFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnOperationResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::OperationResponse*)>(
    &::Photon::Realtime::LoadBalancingClient::OnOperationResponse)> {
  constexpr static std::size_t size = 0x1274;
  constexpr static std::size_t addrs = 0x223ed58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnStatusChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::StatusCode)>(
    &::Photon::Realtime::LoadBalancingClient::OnStatusChanged)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0x2241aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Realtime::LoadBalancingClient::OnEvent)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x224284c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(
    &::Photon::Realtime::LoadBalancingClient::OnMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2244094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnDisconnectMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::ExitGames::Client::Photon::DisconnectMessage*)>(
    &::Photon::Realtime::LoadBalancingClient::OnDisconnectMessageReceived)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2244108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OnDisconnectMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DisconnectMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OnRegionPingCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::Photon::Realtime::RegionHandler*)>(
    &::Photon::Realtime::LoadBalancingClient::OnRegionPingCompleted)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2244208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OnRegionPingCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.ReplacePortWithAlternative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint16_t)>(&::Photon::Realtime::LoadBalancingClient::ReplacePortWithAlternative)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x22403e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReplacePortWithAlternative", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.SetupEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(
    ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*)>(&::Photon::Realtime::LoadBalancingClient::SetupEncryption)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2240190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "SetupEncryption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.OpWebRpc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingClient::*)(::StringW, ::System::Object*, bool)>(
    &::Photon::Realtime::LoadBalancingClient::OpWebRpc)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2244538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpWebRpc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.AddCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(
    &::Photon::Realtime::LoadBalancingClient::AddCallbackTarget)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2244714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "AddCallbackTarget",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.RemoveCallbackTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)(::System::Object*)>(
    &::Photon::Realtime::LoadBalancingClient::RemoveCallbackTarget)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22447e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "RemoveCallbackTarget",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingClient.UpdateCallbackTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingClient::*)()>(
    &::Photon::Realtime::LoadBalancingClient::UpdateCallbackTargets)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2243db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                               "UpdateCallbackTargets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr Photon::Realtime::LoadBalancingClient::operator ::ExitGames::Client::Photon::IPhotonPeerListener*() noexcept {
  return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::ExitGames::Client::Photon::IPhotonPeerListener"
constexpr ::ExitGames::Client::Photon::IPhotonPeerListener* Photon::Realtime::LoadBalancingClient::i___ExitGames__Client__Photon__IPhotonPeerListener() noexcept {
  return static_cast<::ExitGames::Client::Photon::IPhotonPeerListener*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingPeer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LoadBalancingPeer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadBalancingPeer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingPeer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LoadBalancingPeer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LoadBalancingPeer_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__LoadBalancingPeer_k__BackingField(::Photon::Realtime::LoadBalancingPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoadBalancingPeer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppVersion_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppVersion_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AppVersion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AppVersion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppId_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AppId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AppId_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AppId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AppId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ClientAppType& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ClientType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientType_k__BackingField;
}
constexpr ::Photon::Realtime::ClientAppType const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ClientType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientType_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__ClientType_k__BackingField(::Photon::Realtime::ClientAppType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientType_k__BackingField = value;
}
constexpr ::Photon::Realtime::AuthenticationValues*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AuthValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthValues_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::AuthenticationValues*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__AuthValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AuthValues_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__AuthValues_k__BackingField(::Photon::Realtime::AuthenticationValues* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AuthValues_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::AuthModeOption& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AuthMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AuthMode;
}
constexpr ::Photon::Realtime::AuthModeOption const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_AuthMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AuthMode;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_AuthMode(::Photon::Realtime::AuthModeOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AuthMode = value;
}
constexpr ::Photon::Realtime::EncryptionMode& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EncryptionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EncryptionMode;
}
constexpr ::Photon::Realtime::EncryptionMode const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EncryptionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EncryptionMode;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EncryptionMode(::Photon::Realtime::EncryptionMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EncryptionMode = value;
}
constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ExpectedProtocol_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpectedProtocol_k__BackingField;
}
constexpr ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__ExpectedProtocol_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpectedProtocol_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__ExpectedProtocol_k__BackingField(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExpectedProtocol_k__BackingField = value;
}
constexpr ::System::Object*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_tokenCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_tokenCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tokenCache;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_tokenCache(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tokenCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__IsUsingNameServer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsUsingNameServer_k__BackingField;
}
constexpr bool const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__IsUsingNameServer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsUsingNameServer_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__IsUsingNameServer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsUsingNameServer_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerHost;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerHost;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_NameServerHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NameServerHost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseAlternativeUdpPorts_k__BackingField;
}
constexpr bool const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__UseAlternativeUdpPorts_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseAlternativeUdpPorts_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__UseAlternativeUdpPorts_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseAlternativeUdpPorts_k__BackingField = value;
}
constexpr ::Photon::Realtime::PhotonPortDefinition& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ServerPortOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServerPortOverrides;
}
constexpr ::Photon::Realtime::PhotonPortDefinition const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ServerPortOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServerPortOverrides;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ServerPortOverrides(::Photon::Realtime::PhotonPortDefinition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ServerPortOverrides = value;
}
constexpr bool& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableProtocolFallback_k__BackingField;
}
constexpr bool const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__EnableProtocolFallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnableProtocolFallback_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__EnableProtocolFallback_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnableProtocolFallback_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__MasterServerAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MasterServerAddress_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__MasterServerAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MasterServerAddress_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__MasterServerAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MasterServerAddress_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__GameServerAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameServerAddress_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__GameServerAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GameServerAddress_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__GameServerAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GameServerAddress_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ServerConnection& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__Server_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Server_k__BackingField;
}
constexpr ::Photon::Realtime::ServerConnection const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__Server_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Server_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__Server_k__BackingField(::Photon::Realtime::ServerConnection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Server_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ProxyServerAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServerAddress;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ProxyServerAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServerAddress;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ProxyServerAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProxyServerAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ClientState& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::Photon::Realtime::ClientState const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_state(::Photon::Realtime::ClientState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_StateChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_StateChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StateChanged;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::EventData*>*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EventReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventReceived;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ExitGames::Client::Photon::EventData*>*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EventReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EventReceived;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EventReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_OpResponseReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpResponseReceived;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_OpResponseReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OpResponseReceived;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OpResponseReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ConnectionCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ConnectionCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::ConnectionCallbacksContainer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ConnectionCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ConnectionCallbackTargets(::Photon::Realtime::ConnectionCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::MatchMakingCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_MatchMakingCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchMakingCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::MatchMakingCallbacksContainer*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_MatchMakingCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchMakingCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_MatchMakingCallbackTargets(::Photon::Realtime::MatchMakingCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchMakingCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::InRoomCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_InRoomCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InRoomCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::InRoomCallbacksContainer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_InRoomCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InRoomCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_InRoomCallbackTargets(::Photon::Realtime::InRoomCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InRoomCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::LobbyCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_LobbyCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbyCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LobbyCallbacksContainer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_LobbyCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbyCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_LobbyCallbackTargets(::Photon::Realtime::LobbyCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LobbyCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::WebRpcCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_WebRpcCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WebRpcCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::WebRpcCallbacksContainer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_WebRpcCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WebRpcCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_WebRpcCallbackTargets(::Photon::Realtime::WebRpcCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WebRpcCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::ErrorInfoCallbacksContainer*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ErrorInfoCallbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorInfoCallbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::ErrorInfoCallbacksContainer*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_ErrorInfoCallbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ErrorInfoCallbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_ErrorInfoCallbackTargets(::Photon::Realtime::ErrorInfoCallbacksContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ErrorInfoCallbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::DisconnectCause& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__DisconnectedCause_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectedCause_k__BackingField;
}
constexpr ::Photon::Realtime::DisconnectCause const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__DisconnectedCause_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectedCause_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__DisconnectedCause_k__BackingField(::Photon::Realtime::DisconnectCause value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisconnectedCause_k__BackingField = value;
}
constexpr ::Photon::Realtime::TypedLobby*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentLobby_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentLobby_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentLobby_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentLobby_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentLobby_k__BackingField(::Photon::Realtime::TypedLobby* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentLobby_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EnableLobbyStatistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableLobbyStatistics;
}
constexpr bool const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_EnableLobbyStatistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableLobbyStatistics;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_EnableLobbyStatistics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableLobbyStatistics = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lobbyStatistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyStatistics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lobbyStatistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyStatistics;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_lobbyStatistics(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobbyStatistics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::Player*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LocalPlayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPlayer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__LocalPlayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPlayer_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__LocalPlayer_k__BackingField(::Photon::Realtime::Player* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LocalPlayer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::Room*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentRoom_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentRoom_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Room*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentRoom_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentRoom_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentRoom_k__BackingField(::Photon::Realtime::Room* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentRoom_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersOnMasterCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayersOnMasterCount_k__BackingField;
}
constexpr int32_t const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersOnMasterCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayersOnMasterCount_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__PlayersOnMasterCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PlayersOnMasterCount_k__BackingField = value;
}
constexpr int32_t& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersInRoomsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayersInRoomsCount_k__BackingField;
}
constexpr int32_t const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__PlayersInRoomsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PlayersInRoomsCount_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__PlayersInRoomsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PlayersInRoomsCount_k__BackingField = value;
}
constexpr int32_t& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__RoomsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoomsCount_k__BackingField;
}
constexpr int32_t const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__RoomsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RoomsCount_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__RoomsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RoomsCount_k__BackingField = value;
}
constexpr ::Photon::Realtime::JoinType& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lastJoinType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastJoinType;
}
constexpr ::Photon::Realtime::JoinType const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_lastJoinType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastJoinType;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_lastJoinType(::Photon::Realtime::JoinType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastJoinType = value;
}
constexpr ::Photon::Realtime::EnterRoomParams*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_enterRoomParamsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enterRoomParamsCache;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::EnterRoomParams*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_enterRoomParamsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enterRoomParamsCache;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_enterRoomParamsCache(::Photon::Realtime::EnterRoomParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enterRoomParamsCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::OperationResponse*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_failedRoomEntryOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedRoomEntryOperation;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::OperationResponse*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_failedRoomEntryOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedRoomEntryOperation;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_failedRoomEntryOperation(::ExitGames::Client::Photon::OperationResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___failedRoomEntryOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_friendListRequested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___friendListRequested;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_friendListRequested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___friendListRequested;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_friendListRequested(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___friendListRequested)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CloudRegion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloudRegion_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CloudRegion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CloudRegion_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CloudRegion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CloudRegion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentCluster_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentCluster_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get__CurrentCluster_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentCluster_k__BackingField;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set__CurrentCluster_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentCluster_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::RegionHandler*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_RegionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RegionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::RegionHandler*> const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_RegionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RegionHandler;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_RegionHandler(::Photon::Realtime::RegionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RegionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_bestRegionSummaryFromStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRegionSummaryFromStorage;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_bestRegionSummaryFromStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bestRegionSummaryFromStorage;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_bestRegionSummaryFromStorage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bestRegionSummaryFromStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SummaryToCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SummaryToCache;
}
constexpr ::StringW const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_SummaryToCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SummaryToCache;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_SummaryToCache(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SummaryToCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_connectToBestRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectToBestRegion;
}
constexpr bool const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_connectToBestRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectToBestRegion;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_connectToBestRegion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectToBestRegion = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>*&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargetChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackTargetChanges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargetChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackTargetChanges;
}
constexpr void
Photon::Realtime::LoadBalancingClient::__cordl_internal_set_callbackTargetChanges(::System::Collections::Generic::Queue_1<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callbackTargetChanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackTargets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> const&
Photon::Realtime::LoadBalancingClient::__cordl_internal_get_callbackTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callbackTargets;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_callbackTargets(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callbackTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerPortInAppSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerPortInAppSettings;
}
constexpr int32_t const& Photon::Realtime::LoadBalancingClient::__cordl_internal_get_NameServerPortInAppSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerPortInAppSettings;
}
constexpr void Photon::Realtime::LoadBalancingClient::__cordl_internal_set_NameServerPortInAppSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NameServerPortInAppSettings = value;
}
inline void Photon::Realtime::LoadBalancingClient::setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*, "ProtocolToNameServerPort",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* Photon::Realtime::LoadBalancingClient::getStaticF_ProtocolToNameServerPort() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*, "ProtocolToNameServerPort",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get>();
}
inline ::Photon::Realtime::LoadBalancingPeer* Photon::Realtime::LoadBalancingClient::get_LoadBalancingPeer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_LoadBalancingPeer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::LoadBalancingPeer*, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_LoadBalancingPeer(::Photon::Realtime::LoadBalancingPeer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_LoadBalancingPeer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::SerializationProtocol Photon::Realtime::LoadBalancingClient::get_SerializationProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_SerializationProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::SerializationProtocol, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_SerializationProtocol(::ExitGames::Client::Photon::SerializationProtocol value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_SerializationProtocol", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_AppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_AppVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_AppVersion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AppVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_AppId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_AppId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_AppId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AppId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::ClientAppType Photon::Realtime::LoadBalancingClient::get_ClientType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_ClientType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ClientAppType, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_ClientType(::Photon::Realtime::ClientAppType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_ClientType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientAppType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::AuthenticationValues* Photon::Realtime::LoadBalancingClient::get_AuthValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_AuthValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::AuthenticationValues*, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_AuthValues(::Photon::Realtime::AuthenticationValues* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_AuthValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::AuthenticationValues*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> Photon::Realtime::LoadBalancingClient::get_ExpectedProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_ExpectedProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_ExpectedProtocol(::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_ExpectedProtocol", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::ExitGames::Client::Photon::ConnectionProtocol>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* Photon::Realtime::LoadBalancingClient::get_TokenForInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_TokenForInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::get_IsUsingNameServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_IsUsingNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_IsUsingNameServer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_IsUsingNameServer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_NameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_NameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::get_UseAlternativeUdpPorts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_UseAlternativeUdpPorts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_UseAlternativeUdpPorts(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_UseAlternativeUdpPorts",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Realtime::LoadBalancingClient::get_EnableProtocolFallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_EnableProtocolFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_EnableProtocolFallback(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_EnableProtocolFallback",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_CurrentServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_CurrentServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_MasterServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_MasterServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_MasterServerAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_MasterServerAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_GameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_GameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_GameServerAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_GameServerAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::ServerConnection Photon::Realtime::LoadBalancingClient::get_Server() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_Server",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ServerConnection, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_Server(::Photon::Realtime::ServerConnection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_Server", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::ClientState Photon::Realtime::LoadBalancingClient::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_State",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ClientState, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_State(::Photon::Realtime::ClientState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ClientState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Realtime::LoadBalancingClient::get_IsConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_IsConnected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::get_IsConnectedAndReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_IsConnectedAndReady", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::add_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_StateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingClient::remove_StateChanged(::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_StateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingClient::add_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_EventReceived", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingClient::remove_EventReceived(::System::Action_1<::ExitGames::Client::Photon::EventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_EventReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::EventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingClient::add_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "add_OpResponseReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingClient::remove_OpResponseReceived(::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "remove_OpResponseReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ExitGames::Client::Photon::OperationResponse*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::DisconnectCause Photon::Realtime::LoadBalancingClient::get_DisconnectedCause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_DisconnectedCause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::DisconnectCause, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_DisconnectedCause(::Photon::Realtime::DisconnectCause value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_DisconnectedCause", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Realtime::LoadBalancingClient::get_InLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_InLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Photon::Realtime::TypedLobby* Photon::Realtime::LoadBalancingClient::get_CurrentLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_CurrentLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::TypedLobby*, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_CurrentLobby(::Photon::Realtime::TypedLobby* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentLobby", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Player* Photon::Realtime::LoadBalancingClient::get_LocalPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_LocalPlayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_LocalPlayer(::Photon::Realtime::Player* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_LocalPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_NickName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_NickName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_NickName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_NickName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_UserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_UserId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_UserId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_UserId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Photon::Realtime::Room* Photon::Realtime::LoadBalancingClient::get_CurrentRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_CurrentRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Room*, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_CurrentRoom(::Photon::Realtime::Room* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Realtime::LoadBalancingClient::get_InRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_InRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Photon::Realtime::LoadBalancingClient::get_PlayersOnMasterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_PlayersOnMasterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_PlayersOnMasterCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_PlayersOnMasterCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Realtime::LoadBalancingClient::get_PlayersInRoomsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_PlayersInRoomsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_PlayersInRoomsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_PlayersInRoomsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Photon::Realtime::LoadBalancingClient::get_RoomsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_RoomsCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_RoomsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_RoomsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Photon::Realtime::LoadBalancingClient::get_IsFetchingFriendList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_IsFetchingFriendList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_CloudRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "get_CloudRegion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_CloudRegion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CloudRegion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::get_CurrentCluster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "get_CurrentCluster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::set_CurrentCluster(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "set_CurrentCluster",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline ::Photon::Realtime::LoadBalancingClient* Photon::Realtime::LoadBalancingClient::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::LoadBalancingClient*>(protocol));
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline void Photon::Realtime::LoadBalancingClient::_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocol);
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline ::Photon::Realtime::LoadBalancingClient* Photon::Realtime::LoadBalancingClient::New_ctor(::StringW masterAddress, ::StringW appId, ::StringW gameVersion,
                                                                                                ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::LoadBalancingClient*>(masterAddress, appId, gameVersion, protocol));
}
/// @param protocol: ::ExitGames::Client::Photon::ConnectionProtocol (default: static_cast<uint8_t>(0x0u))
inline void Photon::Realtime::LoadBalancingClient::_ctor(::StringW masterAddress, ::StringW appId, ::StringW gameVersion, ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, masterAddress, appId, gameVersion, protocol);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::GetNameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "GetNameServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::ConnectUsingSettings(::Photon::Realtime::AppSettings* appSettings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appSettings);
}
inline bool Photon::Realtime::LoadBalancingClient::Connect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Connect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::ConnectToMasterServer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::ConnectToNameServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "ConnectToNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::ConnectToRegionMaster(::StringW region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ConnectToRegionMaster",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, region);
}
inline void Photon::Realtime::LoadBalancingClient::CheckConnectSetupWebGl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "CheckConnectSetupWebGl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::Connect(::StringW serverAddress, ::StringW proxyServerAddress, ::Photon::Realtime::ServerConnection serverType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serverAddress, proxyServerAddress, serverType);
}
inline bool Photon::Realtime::LoadBalancingClient::ReconnectToMaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "ReconnectToMaster", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::ReconnectAndRejoin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "ReconnectAndRejoin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param cause: ::Photon::Realtime::DisconnectCause (default: static_cast<int32_t>(0xf))
inline void Photon::Realtime::LoadBalancingClient::Disconnect(::Photon::Realtime::DisconnectCause cause) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::DisconnectCause>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cause);
}
inline void Photon::Realtime::LoadBalancingClient::DisconnectToReconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "DisconnectToReconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::SimulateConnectionLoss(bool simulateTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "SimulateConnectionLoss",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, simulateTimeout);
}
inline bool Photon::Realtime::LoadBalancingClient::CallAuthenticate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "CallAuthenticate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingClient::Service() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "Service",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingClient::OpGetRegions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpGetRegions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param options: ::Photon::Realtime::FindFriendsOptions* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpFindFriends(::ArrayW<::StringW, ::Array<::StringW>*> friendsToFind, ::Photon::Realtime::FindFriendsOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpFindFriends", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::FindFriendsOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, friendsToFind, options);
}
inline bool Photon::Realtime::LoadBalancingClient::OpJoinLobby(::Photon::Realtime::TypedLobby* lobby) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinLobby", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lobby);
}
inline bool Photon::Realtime::LoadBalancingClient::OpLeaveLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpLeaveLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param opJoinRandomRoomParams: ::Photon::Realtime::OpJoinRandomRoomParams* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRandomRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::OpJoinRandomRoomParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opJoinRandomRoomParams);
}
inline bool Photon::Realtime::LoadBalancingClient::OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams* createRoomParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRandomOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::OpJoinRandomRoomParams*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opJoinRandomRoomParams, createRoomParams);
}
inline bool Photon::Realtime::LoadBalancingClient::OpCreateRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpCreateRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enterRoomParams);
}
inline bool Photon::Realtime::LoadBalancingClient::OpJoinOrCreateRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinOrCreateRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enterRoomParams);
}
inline bool Photon::Realtime::LoadBalancingClient::OpJoinRoom(::Photon::Realtime::EnterRoomParams* enterRoomParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpJoinRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::EnterRoomParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enterRoomParams);
}
inline bool Photon::Realtime::LoadBalancingClient::OpRejoinRoom(::StringW roomName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpRejoinRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, roomName);
}
/// @param sendAuthCookie: bool (default: false)
inline bool Photon::Realtime::LoadBalancingClient::OpLeaveRoom(bool becomeInactive, bool sendAuthCookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpLeaveRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, becomeInactive, sendAuthCookie);
}
inline bool Photon::Realtime::LoadBalancingClient::OpGetGameList(::Photon::Realtime::TypedLobby* typedLobby, ::StringW sqlLobbyFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpGetGameList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::TypedLobby*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, typedLobby, sqlLobbyFilter);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webFlags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* propertiesToSet,
                                                                                ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetCustomPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, actorNr, propertiesToSet, expectedProperties, webFlags);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webFlags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties,
                                                                          ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, actorNr, actorProperties, expectedProperties, webFlags);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webFlags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                                                               ::Photon::Realtime::WebFlags* webFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetCustomPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propertiesToSet, expectedProperties, webFlags);
}
inline bool Photon::Realtime::LoadBalancingClient::OpSetPropertyOfRoom(uint8_t propCode, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertyOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propCode, value);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webFlags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingClient::OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                                                         ::Photon::Realtime::WebFlags* webFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpSetPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, gameProperties, expectedProperties, webFlags);
}
inline bool Photon::Realtime::LoadBalancingClient::OpRaiseEvent(uint8_t eventCode, ::System::Object* customEventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions,
                                                                ::ExitGames::Client::Photon::SendOptions sendOptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventCode, customEventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Realtime::LoadBalancingClient::OpChangeGroups(::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToRemove, ::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToAdd) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupsToRemove, groupsToAdd);
}
inline void Photon::Realtime::LoadBalancingClient::ReadoutProperties(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* actorProperties,
                                                                     int32_t targetActorNr) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReadoutProperties", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameProperties, actorProperties, targetActorNr);
}
inline ::ExitGames::Client::Photon::Hashtable* Photon::Realtime::LoadBalancingClient::ReadoutPropertiesForActorNr(::ExitGames::Client::Photon::Hashtable* actorProperties, int32_t actorNr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReadoutPropertiesForActorNr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::Hashtable*, false>(this, ___internal_method, actorProperties, actorNr);
}
inline void Photon::Realtime::LoadBalancingClient::ChangeLocalID(int32_t newID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ChangeLocalID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newID);
}
inline void Photon::Realtime::LoadBalancingClient::GameEnteredOnGameServer(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "GameEnteredOnGameServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void Photon::Realtime::LoadBalancingClient::UpdatedActorList(::ArrayW<int32_t, ::Array<int32_t>*> actorsInGame) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "UpdatedActorList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actorsInGame);
}
inline ::Photon::Realtime::Player* Photon::Realtime::LoadBalancingClient::CreatePlayer(::StringW actorName, int32_t actorNumber, bool isLocal,
                                                                                       ::ExitGames::Client::Photon::Hashtable* actorProperties) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*, false>(this, ___internal_method, actorName, actorNumber, isLocal, actorProperties);
}
inline ::Photon::Realtime::Room* Photon::Realtime::LoadBalancingClient::CreateRoom(::StringW roomName, ::Photon::Realtime::RoomOptions* opt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Room*, false>(this, ___internal_method, roomName, opt);
}
inline bool Photon::Realtime::LoadBalancingClient::CheckIfOpAllowedOnServer(uint8_t opCode, ::Photon::Realtime::ServerConnection serverConnection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfOpAllowedOnServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opCode, serverConnection);
}
inline bool Photon::Realtime::LoadBalancingClient::CheckIfOpCanBeSent(uint8_t opCode, ::Photon::Realtime::ServerConnection serverConnection, ::StringW opName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfOpCanBeSent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::ServerConnection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opCode, serverConnection, opName);
}
inline bool Photon::Realtime::LoadBalancingClient::CheckIfClientIsReadyToCallOperation(uint8_t opCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CheckIfClientIsReadyToCallOperation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opCode);
}
inline void Photon::Realtime::LoadBalancingClient::DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message);
}
inline void Photon::Realtime::LoadBalancingClient::CallbackRoomEnterFailed(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "CallbackRoomEnterFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::OperationResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void Photon::Realtime::LoadBalancingClient::OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operationResponse);
}
inline void Photon::Realtime::LoadBalancingClient::OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode);
}
inline void Photon::Realtime::LoadBalancingClient::OnEvent(::ExitGames::Client::Photon::EventData* photonEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, photonEvent);
}
inline void Photon::Realtime::LoadBalancingClient::OnMessage(::System::Object* message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void Photon::Realtime::LoadBalancingClient::OnDisconnectMessageReceived(::ExitGames::Client::Photon::DisconnectMessage* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OnDisconnectMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DisconnectMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void Photon::Realtime::LoadBalancingClient::OnRegionPingCompleted(::Photon::Realtime::RegionHandler* regionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OnRegionPingCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RegionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionHandler);
}
inline ::StringW Photon::Realtime::LoadBalancingClient::ReplacePortWithAlternative(::StringW address, uint16_t replacementPort) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "ReplacePortWithAlternative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, address, replacementPort);
}
inline void Photon::Realtime::LoadBalancingClient::SetupEncryption(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* encryptionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "SetupEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionData);
}
/// @param sendAuthCookie: bool (default: false)
inline bool Photon::Realtime::LoadBalancingClient::OpWebRpc(::StringW uriPath, ::System::Object* parameters, bool sendAuthCookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "OpWebRpc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uriPath, parameters, sendAuthCookie);
}
inline void Photon::Realtime::LoadBalancingClient::AddCallbackTarget(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "AddCallbackTarget",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void Photon::Realtime::LoadBalancingClient::RemoveCallbackTarget(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "RemoveCallbackTarget",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void Photon::Realtime::LoadBalancingClient::UpdateCallbackTargets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(),
                                                                             "UpdateCallbackTargets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Photon::Realtime::LoadBalancingClient::UpdateCallbackTarget(::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange* change, ::System::Collections::Generic::List_1<T>* container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingClient*>::get(), "UpdateCallbackTarget",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::__LoadBalancingClient__CallbackTargetChange*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, change, container);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LoadBalancingClient::LoadBalancingClient() {}
