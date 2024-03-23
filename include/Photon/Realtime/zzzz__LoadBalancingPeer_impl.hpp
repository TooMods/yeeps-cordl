#pragma once
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Pool_1_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__EncryptionMode_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__FindFriendsOptions_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::__LoadBalancingPeer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__LoadBalancingPeer____c::*)()>(&::Photon::Realtime::__LoadBalancingPeer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::__LoadBalancingPeer____c.__ctor_b__4_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (::Photon::Realtime::__LoadBalancingPeer____c::*)()>(
    &::Photon::Realtime::__LoadBalancingPeer____c::__ctor_b__4_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2247bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(),
                                                                               "<.ctor>b__4_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::__LoadBalancingPeer____c.__ctor_b__4_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::__LoadBalancingPeer____c::*)(::ExitGames::Client::Photon::ParameterDictionary*)>(
    &::Photon::Realtime::__LoadBalancingPeer____c::__ctor_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2247c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(), "<.ctor>b__4_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Realtime::__LoadBalancingPeer____c::setStaticF___9(::Photon::Realtime::__LoadBalancingPeer____c* value) {
  ::cordl_internals::setStaticField<::Photon::Realtime::__LoadBalancingPeer____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>(
      std::forward<::Photon::Realtime::__LoadBalancingPeer____c*>(value));
}
inline ::Photon::Realtime::__LoadBalancingPeer____c* Photon::Realtime::__LoadBalancingPeer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Photon::Realtime::__LoadBalancingPeer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>();
}
inline void Photon::Realtime::__LoadBalancingPeer____c::setStaticF___9__4_0(::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>(
      std::forward<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*>(value));
}
inline ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* Photon::Realtime::__LoadBalancingPeer____c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>();
}
inline void Photon::Realtime::__LoadBalancingPeer____c::setStaticF___9__4_1(::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>(
      std::forward<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*>(value));
}
inline ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* Photon::Realtime::__LoadBalancingPeer____c::getStaticF___9__4_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get>();
}
inline ::Photon::Realtime::__LoadBalancingPeer____c* Photon::Realtime::__LoadBalancingPeer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::__LoadBalancingPeer____c*>());
}
inline void Photon::Realtime::__LoadBalancingPeer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ParameterDictionary* Photon::Realtime::__LoadBalancingPeer____c::__ctor_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(),
                                                                             "<.ctor>b__4_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*, false>(this, ___internal_method);
}
inline void Photon::Realtime::__LoadBalancingPeer____c::__ctor_b__4_1(::ExitGames::Client::Photon::ParameterDictionary* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::__LoadBalancingPeer____c*>::get(), "<.ctor>b__4_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ParameterDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::__LoadBalancingPeer____c::__LoadBalancingPeer____c() {}
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.get_PingImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::Photon::Realtime::LoadBalancingPeer::get_PingImplementation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22449bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                               "get_PingImplementation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.set_PingImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::Photon::Realtime::LoadBalancingPeer::set_PingImplementation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2244a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "set_PingImplementation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::Photon::Realtime::LoadBalancingPeer::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2244a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(
    ::ExitGames::Client::Photon::IPhotonPeerListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Realtime::LoadBalancingPeer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2239834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.ConfigUnitySockets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)()>(&::Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2244c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                               "ConfigUnitySockets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpGetRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::StringW)>(&::Photon::Realtime::LoadBalancingPeer::OpGetRegions)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2244e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpJoinLobby)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2244f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpLeaveLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)()>(&::Photon::Realtime::LoadBalancingPeer::OpLeaveLobby)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2245110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.RoomOptionsToOpParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(
    ::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*, ::Photon::Realtime::RoomOptions*, bool)>(&::Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2245228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "RoomOptionsToOpParameters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpCreateRoom)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2245680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpJoinRoom)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x224595c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRandomRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::OpJoinRandomRoomParams*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2245cac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRandomOrCreateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    ::Photon::Realtime::OpJoinRandomRoomParams*, ::Photon::Realtime::EnterRoomParams*)>(&::Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2245ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpLeaveRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(bool, bool)>(&::Photon::Realtime::LoadBalancingPeer::OpLeaveRoom)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x22463a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpGetGameList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*, ::StringW)>(
    &::Photon::Realtime::LoadBalancingPeer::OpGetGameList)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x224650c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpFindFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::Photon::Realtime::FindFriendsOptions*)>(&::Photon::Realtime::LoadBalancingPeer::OpFindFriends)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x22468e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetCustomPropertiesOfActor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2246a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetCustomPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertiesOfActor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x223c5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertyOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(uint8_t, ::System::Object*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2246af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertyOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetCustomPropertiesOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::Hashtable*)>(
    &::Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2246b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetCustomPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertiesOfRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x223ce60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    ::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, bool)>(&::Photon::Realtime::LoadBalancingPeer::OpAuthenticate)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2246bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpAuthenticateOnce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    ::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, ::Photon::Realtime::EncryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol)>(
    &::Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x2246f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpChangeGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Photon::Realtime::LoadBalancingPeer::OpChangeGroups)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x22474b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpRaiseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(
    uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Realtime::LoadBalancingPeer::OpRaiseEvent)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x224765c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(bool)>(&::Photon::Realtime::LoadBalancingPeer::OpSettings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2247958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 31));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_paramDictionaryPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramDictionaryPool;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*> const&
Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_paramDictionaryPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paramDictionaryPool;
}
constexpr void Photon::Realtime::LoadBalancingPeer::__cordl_internal_set_paramDictionaryPool(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paramDictionaryPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* Photon::Realtime::LoadBalancingPeer::get_PingImplementation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                             "get_PingImplementation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingPeer::set_PingImplementation(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "set_PingImplementation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Photon::Realtime::LoadBalancingPeer* Photon::Realtime::LoadBalancingPeer::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::LoadBalancingPeer*>(protocolType));
}
inline void Photon::Realtime::LoadBalancingPeer::_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, protocolType);
}
inline ::Photon::Realtime::LoadBalancingPeer* Photon::Realtime::LoadBalancingPeer::New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener,
                                                                                            ::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::LoadBalancingPeer*>(listener, protocolType));
}
inline void Photon::Realtime::LoadBalancingPeer::_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, protocolType);
}
inline void Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(),
                                                                             "ConfigUnitySockets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpGetRegions(::StringW appId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId);
}
/// @param lobby: ::Photon::Realtime::TypedLobby* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinLobby(::Photon::Realtime::TypedLobby* lobby) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lobby);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpLeaveLobby() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param usePropertiesKey: bool (default: false)
inline void Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>* op, ::Photon::Realtime::RoomOptions* roomOptions,
                                                                           bool usePropertiesKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "RoomOptionsToOpParameters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<uint8_t, ::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, roomOptions, usePropertiesKey);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpCreateRoom(::Photon::Realtime::EnterRoomParams* opParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRoom(::Photon::Realtime::EnterRoomParams* opParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opJoinRandomRoomParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams* createRoomParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, opJoinRandomRoomParams, createRoomParams);
}
/// @param sendAuthCookie: bool (default: false)
inline bool Photon::Realtime::LoadBalancingPeer::OpLeaveRoom(bool becomeInactive, bool sendAuthCookie) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, becomeInactive, sendAuthCookie);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpGetGameList(::Photon::Realtime::TypedLobby* lobby, ::StringW queryData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lobby, queryData);
}
/// @param options: ::Photon::Realtime::FindFriendsOptions* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingPeer::OpFindFriends(::ArrayW<::StringW, ::Array<::StringW>*> friendsToFind, ::Photon::Realtime::FindFriendsOptions* options) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, friendsToFind, options);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetCustomPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, actorNr, actorProperties);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webflags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor(int32_t actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties,
                                                                        ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webflags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertiesOfActor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, actorNr, actorProperties, expectedProperties, webflags);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom(uint8_t propCode, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertyOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, propCode, value);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetCustomPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, gameProperties);
}
/// @param expectedProperties: ::ExitGames::Client::Photon::Hashtable* (default: nullptr)
/// @param webflags: ::Photon::Realtime::WebFlags* (default: nullptr)
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties,
                                                                       ::Photon::Realtime::WebFlags* webflags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), "OpSetPropertiesOfRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::WebFlags*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, gameProperties, expectedProperties, webflags);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpAuthenticate(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode,
                                                                bool getLobbyStatistics) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId, appVersion, authValues, regionCode, getLobbyStatistics);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode,
                                                                    ::Photon::Realtime::EncryptionMode encryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol expectedProtocol) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId, appVersion, authValues, regionCode, encryptionMode, expectedProtocol);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpChangeGroups(::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToRemove, ::ArrayW<uint8_t, ::Array<uint8_t>*> groupsToAdd) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupsToRemove, groupsToAdd);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpRaiseEvent(uint8_t eventCode, ::System::Object* customEventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions,
                                                              ::ExitGames::Client::Photon::SendOptions sendOptions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventCode, customEventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSettings(bool receiveLobbyStats) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LoadBalancingPeer*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, receiveLobbyStats);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LoadBalancingPeer::LoadBalancingPeer() {}
