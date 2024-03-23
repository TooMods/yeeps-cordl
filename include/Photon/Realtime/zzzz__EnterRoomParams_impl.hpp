#pragma once
#include "Photon/Realtime/zzzz__JoinMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::EnterRoomParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::EnterRoomParams::*)()>(&::Photon::Realtime::EnterRoomParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x223b924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::EnterRoomParams*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomName;
}
constexpr ::StringW const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomName;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::RoomOptions*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomOptions;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::RoomOptions*> const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomOptions;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomOptions(::Photon::Realtime::RoomOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Realtime::TypedLobby*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Lobby;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Lobby;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_Lobby(::Photon::Realtime::TypedLobby* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Lobby)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerProperties;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PlayerProperties;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_PlayerProperties(::ExitGames::Client::Photon::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PlayerProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnGameServer;
}
constexpr bool const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnGameServer;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_OnGameServer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnGameServer = value;
}
constexpr ::Photon::Realtime::JoinMode& Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JoinMode;
}
constexpr ::Photon::Realtime::JoinMode const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___JoinMode;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_JoinMode(::Photon::Realtime::JoinMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___JoinMode = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_ExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExpectedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::EnterRoomParams* Photon::Realtime::EnterRoomParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::EnterRoomParams*>());
}
inline void Photon::Realtime::EnterRoomParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::EnterRoomParams*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::EnterRoomParams::EnterRoomParams() {}
