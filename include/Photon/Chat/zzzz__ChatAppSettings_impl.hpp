#pragma once
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Chat/zzzz__ChatAppSettings_def.hpp"
//  Writing Method size for method: ::Photon::Chat::ChatAppSettings.get_IsDefaultNameServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Chat::ChatAppSettings::*)()>(&::Photon::Chat::ChatAppSettings::get_IsDefaultNameServer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180a340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatAppSettings*>::get(),
                                                                               "get_IsDefaultNameServer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Chat::ChatAppSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Chat::ChatAppSettings::*)()>(&::Photon::Chat::ChatAppSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180a34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatAppSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Chat::ChatAppSettings::__cordl_internal_get_AppIdChat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppIdChat;
}
constexpr ::StringW const& Photon::Chat::ChatAppSettings::__cordl_internal_get_AppIdChat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppIdChat;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_AppIdChat(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AppIdChat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatAppSettings::__cordl_internal_get_AppVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppVersion;
}
constexpr ::StringW const& Photon::Chat::ChatAppSettings::__cordl_internal_get_AppVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppVersion;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_AppVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AppVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatAppSettings::__cordl_internal_get_FixedRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FixedRegion;
}
constexpr ::StringW const& Photon::Chat::ChatAppSettings::__cordl_internal_get_FixedRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FixedRegion;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_FixedRegion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FixedRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Chat::ChatAppSettings::__cordl_internal_get_Server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr ::StringW const& Photon::Chat::ChatAppSettings::__cordl_internal_get_Server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Server;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_Server(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint16_t& Photon::Chat::ChatAppSettings::__cordl_internal_get_Port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr uint16_t const& Photon::Chat::ChatAppSettings::__cordl_internal_get_Port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Port;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_Port(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Port = value;
}
constexpr ::StringW& Photon::Chat::ChatAppSettings::__cordl_internal_get_ProxyServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServer;
}
constexpr ::StringW const& Photon::Chat::ChatAppSettings::__cordl_internal_get_ProxyServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProxyServer;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_ProxyServer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProxyServer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol& Photon::Chat::ChatAppSettings::__cordl_internal_get_Protocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Protocol;
}
constexpr ::ExitGames::Client::Photon::ConnectionProtocol const& Photon::Chat::ChatAppSettings::__cordl_internal_get_Protocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Protocol;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_Protocol(::ExitGames::Client::Photon::ConnectionProtocol value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Protocol = value;
}
constexpr bool& Photon::Chat::ChatAppSettings::__cordl_internal_get_EnableProtocolFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableProtocolFallback;
}
constexpr bool const& Photon::Chat::ChatAppSettings::__cordl_internal_get_EnableProtocolFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableProtocolFallback;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_EnableProtocolFallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableProtocolFallback = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Chat::ChatAppSettings::__cordl_internal_get_NetworkLogging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLogging;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Chat::ChatAppSettings::__cordl_internal_get_NetworkLogging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLogging;
}
constexpr void Photon::Chat::ChatAppSettings::__cordl_internal_set_NetworkLogging(::ExitGames::Client::Photon::DebugLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NetworkLogging = value;
}
inline bool Photon::Chat::ChatAppSettings::get_IsDefaultNameServer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatAppSettings*>::get(), "get_IsDefaultNameServer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Photon::Chat::ChatAppSettings* Photon::Chat::ChatAppSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Chat::ChatAppSettings*>());
}
inline void Photon::Chat::ChatAppSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Chat::ChatAppSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Chat::ChatAppSettings::ChatAppSettings() {}
