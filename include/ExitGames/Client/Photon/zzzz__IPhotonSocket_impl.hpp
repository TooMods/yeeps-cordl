#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonSocket_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketError_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonSocketState_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::__IPhotonSocket____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::__IPhotonSocket____c::*)()>(
    &::ExitGames::Client::Photon::__IPhotonSocket____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277fb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::__IPhotonSocket____c._GetIpAddresses_b__55_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::__IPhotonSocket____c::*)(::System::Net::IPAddress*)>(
    &::ExitGames::Client::Photon::__IPhotonSocket____c::_GetIpAddresses_b__55_0)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x277fb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get(), "<GetIpAddresses>b__55_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::__IPhotonSocket____c::setStaticF___9(::ExitGames::Client::Photon::__IPhotonSocket____c* value) {
  ::cordl_internals::setStaticField<::ExitGames::Client::Photon::__IPhotonSocket____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get>(
      std::forward<::ExitGames::Client::Photon::__IPhotonSocket____c*>(value));
}
inline ::ExitGames::Client::Photon::__IPhotonSocket____c* ExitGames::Client::Photon::__IPhotonSocket____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::__IPhotonSocket____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get>();
}
inline void ExitGames::Client::Photon::__IPhotonSocket____c::setStaticF___9__55_0(::System::Func_2<::System::Net::IPAddress*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Net::IPAddress*, ::StringW>*, "<>9__55_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get>(
      std::forward<::System::Func_2<::System::Net::IPAddress*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Net::IPAddress*, ::StringW>* ExitGames::Client::Photon::__IPhotonSocket____c::getStaticF___9__55_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::IPAddress*, ::StringW>*, "<>9__55_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get>();
}
inline ::ExitGames::Client::Photon::__IPhotonSocket____c* ExitGames::Client::Photon::__IPhotonSocket____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::__IPhotonSocket____c*>());
}
inline void ExitGames::Client::Photon::__IPhotonSocket____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::__IPhotonSocket____c::_GetIpAddresses_b__55_0(::System::Net::IPAddress* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::__IPhotonSocket____c*>::get(), "<GetIpAddresses>b__55_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::__IPhotonSocket____c::__IPhotonSocket____c() {}
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_Listener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::IPhotonPeerListener* (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_Listener)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x277e010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_Listener", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_MTU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_MTU)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x277e034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_MTU",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketState (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_State",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::PhotonSocketState)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PhotonSocketState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_Connected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_Connected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27791d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_Connected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_ServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ProxyServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_ProxyServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ProxyServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ProxyServerAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerIpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x277e088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_ServerIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerIpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x277e0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerIpAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_ServerPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_ServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_ServerPort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_ServerPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(int32_t)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_ServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerPort",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_AddressResolvedAsIpv6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_AddressResolvedAsIpv6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_AddressResolvedAsIpv6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(bool)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x277e134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_AddressResolvedAsIpv6",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_UrlProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_UrlProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_UrlProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_UrlProtocol",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_UrlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_UrlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_UrlPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.set_UrlPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(
    &::ExitGames::Client::Photon::IPhotonSocket::set_UrlPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_UrlPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.get_SerializationProtocol
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x277e160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "get_SerializationProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::PeerBase*)>(
    &::ExitGames::Client::Photon::IPhotonSocket::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x277e27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::Connect)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x277e304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)()>(&::ExitGames::Client::Photon::IPhotonSocket::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::IPhotonSocket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::ExitGames::Client::Photon::IPhotonSocket::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::PhotonSocketError (::ExitGames::Client::Photon::IPhotonSocket::*)(
    ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::ExitGames::Client::Photon::IPhotonSocket::Receive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.HandleReceivedDatagram
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, bool)>(
    &::ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x277ea04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "HandleReceivedDatagram", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.ReportDebugOfLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel)>(
    &::ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x277ef34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "ReportDebugOfLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.EnqueueDebugReturn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(
    &::ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x277ef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "EnqueueDebugReturn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.HandleException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)(::ExitGames::Client::Photon::StatusCode)>(
    &::ExitGames::Client::Photon::IPhotonSocket::HandleException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x277ef78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "HandleException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.TryParseAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(
    ::StringW, ByRef<::StringW>, ByRef<uint16_t>, ByRef<::StringW>, ByRef<::StringW>)>(&::ExitGames::Client::Photon::IPhotonSocket::TryParseAddress)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x277e7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "TryParseAddress", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.IpAddressTryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW, ByRef<::System::Net::IPAddress*>)>(
    &::ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x277f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "IpAddressTryParse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPAddress*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.GetIpAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> (
    ::ExitGames::Client::Photon::IPhotonSocket::*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x277f1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "GetIpAddresses",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.AddressSortComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::IPhotonSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*)>(
    &::ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x277f8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "AddressSortComparer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket.GetIpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&::ExitGames::Client::Photon::IPhotonSocket::GetIpAddress)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x277f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "GetIpAddress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonSocket._HandleException_b__52_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::IPhotonSocket::*)()>(
    &::ExitGames::Client::Photon::IPhotonSocket::_HandleException_b__52_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x277fae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                               "<HandleException>b__52_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_peerBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PeerBase*> const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_peerBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___peerBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_Protocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Protocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_Protocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Protocol;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Protocol = value;
}
constexpr bool& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_PollReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollReceive;
}
constexpr bool const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_PollReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollReceive;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_PollReceive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PollReceive = value;
}
constexpr ::ExitGames::Client::Photon::PhotonSocketState& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::ExitGames::Client::Photon::PhotonSocketState const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__State_k__BackingField(::ExitGames::Client::Photon::PhotonSocketState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_ConnectAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectAddress;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get_ConnectAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectAddress;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set_ConnectAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ServerAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ServerAddress_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ProxyServerAddress_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyServerAddress_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ProxyServerAddress_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyServerAddress_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ProxyServerAddress_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProxyServerAddress_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerPort_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__ServerPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ServerPort_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__ServerPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ServerPort_k__BackingField = value;
}
constexpr bool& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddressResolvedAsIpv6_k__BackingField;
}
constexpr bool const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__AddressResolvedAsIpv6_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AddressResolvedAsIpv6_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__AddressResolvedAsIpv6_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AddressResolvedAsIpv6_k__BackingField = value;
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlProtocol_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UrlProtocol_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlProtocol_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UrlProtocol_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__UrlProtocol_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UrlProtocol_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UrlPath_k__BackingField;
}
constexpr ::StringW const& ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_get__UrlPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UrlPath_k__BackingField;
}
constexpr void ExitGames::Client::Photon::IPhotonSocket::__cordl_internal_set__UrlPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UrlPath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void ExitGames::Client::Photon::IPhotonSocket::setStaticF__ServerIpAddress_k__BackingField(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "<ServerIpAddress>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::getStaticF__ServerIpAddress_k__BackingField() {
  return ::cordl_internals::getStaticField<::StringW, "<ServerIpAddress>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get>();
}
inline ::ExitGames::Client::Photon::IPhotonPeerListener* ExitGames::Client::Photon::IPhotonSocket::get_Listener() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_Listener",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IPhotonPeerListener*, false>(this, ___internal_method);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::get_MTU() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_MTU",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketState ExitGames::Client::Photon::IPhotonSocket::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_State",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketState, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_State(::ExitGames::Client::Photon::PhotonSocketState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PhotonSocketState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_Connected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_ServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ProxyServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_ProxyServerAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ProxyServerAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ProxyServerAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_ServerIpAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_ServerIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerIpAddress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerIpAddress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::get_ServerPort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_ServerPort", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_ServerPort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_ServerPort",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::get_AddressResolvedAsIpv6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_AddressResolvedAsIpv6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_AddressResolvedAsIpv6(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_AddressResolvedAsIpv6",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_UrlProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_UrlProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_UrlProtocol(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_UrlProtocol",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_UrlPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "get_UrlPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::IPhotonSocket::set_UrlPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "set_UrlPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::IPhotonSocket::get_SerializationProtocol() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "get_SerializationProtocol", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::IPhotonSocket* ExitGames::Client::Photon::IPhotonSocket::New_ctor(::ExitGames::Client::Photon::PeerBase* peerBase) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::IPhotonSocket*>(peerBase));
}
inline void ExitGames::Client::Photon::IPhotonSocket::_ctor(::ExitGames::Client::Photon::PeerBase* peerBase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::PeerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peerBase);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::Connect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::Disconnect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::IPhotonSocket::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data, length);
}
inline ::ExitGames::Client::Photon::PhotonSocketError ExitGames::Client::Photon::IPhotonSocket::Receive(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::PhotonSocketError, false>(this, ___internal_method, data);
}
inline void ExitGames::Client::Photon::IPhotonSocket::HandleReceivedDatagram(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuffer, int32_t length, bool willBeReused) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "HandleReceivedDatagram", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBuffer, length, willBeReused);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::ReportDebugOfLevel(::ExitGames::Client::Photon::DebugLevel levelOfMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "ReportDebugOfLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, levelOfMessage);
}
inline void ExitGames::Client::Photon::IPhotonSocket::EnqueueDebugReturn(::ExitGames::Client::Photon::DebugLevel debugLevel, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "EnqueueDebugReturn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::DebugLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugLevel, message);
}
inline void ExitGames::Client::Photon::IPhotonSocket::HandleException(::ExitGames::Client::Photon::StatusCode statusCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "HandleException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::StatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::TryParseAddress(::StringW url, ByRef<::StringW> address, ByRef<uint16_t> port, ByRef<::StringW> urlProtocol, ByRef<::StringW> urlPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "TryParseAddress", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, url, address, port, urlProtocol, urlPath);
}
inline bool ExitGames::Client::Photon::IPhotonSocket::IpAddressTryParse(::StringW strIP, ByRef<::System::Net::IPAddress*> address) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "IpAddressTryParse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPAddress*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, strIP, address);
}
inline ::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> ExitGames::Client::Photon::IPhotonSocket::GetIpAddresses(::StringW hostname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "GetIpAddresses",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>, false>(this, ___internal_method, hostname);
}
inline int32_t ExitGames::Client::Photon::IPhotonSocket::AddressSortComparer(::System::Net::IPAddress* x, ::System::Net::IPAddress* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "AddressSortComparer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::System::Net::IPAddress* ExitGames::Client::Photon::IPhotonSocket::GetIpAddress(::StringW address) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(), "GetIpAddress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(nullptr, ___internal_method, address);
}
inline void ExitGames::Client::Photon::IPhotonSocket::_HandleException_b__52_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::IPhotonSocket*>::get(),
                                                                             "<HandleException>b__52_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::IPhotonSocket::IPhotonSocket() {}
