#pragma once
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_impl.hpp"
#include "Photon/Chat/zzzz__ChatPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "Photon/Chat/zzzz__AuthenticationValues_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Photon::Chat::ChatPeer.get_NameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatPeer::*)()>(&::Photon::Chat::ChatPeer::get_NameServerAddress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x180b7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "get_NameServerAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatPeer.get_IsProtocolSecure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatPeer::*)()>(&::Photon::Chat::ChatPeer::get_IsProtocolSecure)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1810924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Photon::Chat::ChatPeer::*)(::ExitGames::Client::Photon::IPhotonPeerListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Chat::ChatPeer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x180b3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatPeer.ConfigUnitySockets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatPeer::*)()>(&::Photon::Chat::ChatPeer::ConfigUnitySockets)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1810944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "ConfigUnitySockets",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatPeer.GetNameServerAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Photon::Chat::ChatPeer::*)()>(&::Photon::Chat::ChatPeer::GetNameServerAddress)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18106b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "GetNameServerAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatPeer.AuthenticateOnNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatPeer::*)(::StringW, ::StringW, ::StringW, ::Photon::Chat::AuthenticationValues*)>(
    &::Photon::Chat::ChatPeer::AuthenticateOnNameServer)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x180fcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "AuthenticateOnNameServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Chat::ChatPeer::__cordl_internal_get_NameServerHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerHost;
}
constexpr ::StringW const& Photon::Chat::ChatPeer::__cordl_internal_get_NameServerHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerHost;
}
constexpr void Photon::Chat::ChatPeer::__cordl_internal_set_NameServerHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NameServerHost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint16_t& Photon::Chat::ChatPeer::__cordl_internal_get_NameServerPortOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerPortOverride;
}
constexpr uint16_t const& Photon::Chat::ChatPeer::__cordl_internal_get_NameServerPortOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NameServerPortOverride;
}
constexpr void Photon::Chat::ChatPeer::__cordl_internal_set_NameServerPortOverride(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NameServerPortOverride = value;
}
inline void Photon::Chat::ChatPeer::setStaticF_ProtocolToNameServerPort(::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*, "ProtocolToNameServerPort",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>* Photon::Chat::ChatPeer::getStaticF_ProtocolToNameServerPort() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::ExitGames::Client::Photon::ConnectionProtocol, int32_t>*, "ProtocolToNameServerPort",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get>();
}
inline ::StringW Photon::Chat::ChatPeer::get_NameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "get_NameServerAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatPeer::get_IsProtocolSecure() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Photon::Chat::ChatPeer* Photon::Chat::ChatPeer::New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Chat::ChatPeer*>(listener, protocol));
}
inline void Photon::Chat::ChatPeer::_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocol) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::IPhotonPeerListener*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::ConnectionProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, protocol);
}
inline void Photon::Chat::ChatPeer::ConfigUnitySockets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "ConfigUnitySockets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Photon::Chat::ChatPeer::GetNameServerAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "GetNameServerAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Photon::Chat::ChatPeer::AuthenticateOnNameServer(::StringW appId, ::StringW appVersion, ::StringW region, ::Photon::Chat::AuthenticationValues* authValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatPeer*>::get(), "AuthenticateOnNameServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Chat::AuthenticationValues*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, appId, appVersion, region, authValues);
}
// Ctor Parameters []
constexpr ::Photon::Chat::ChatPeer::ChatPeer() {}
