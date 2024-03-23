#pragma once
#include "Photon/Realtime/zzzz__MatchmakingMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::OpJoinRandomRoomParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::OpJoinRandomRoomParams::*)()>(&::Photon::Realtime::OpJoinRandomRoomParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::OpJoinRandomRoomParams*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::Hashtable*& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedCustomRoomProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedCustomRoomProperties;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::Hashtable*> const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedCustomRoomProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedCustomRoomProperties;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedCustomRoomProperties(::ExitGames::Client::Photon::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExpectedCustomRoomProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedMaxPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedMaxPlayers;
}
constexpr uint8_t const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedMaxPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedMaxPlayers;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedMaxPlayers(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpectedMaxPlayers = value;
}
constexpr ::Photon::Realtime::MatchmakingMode& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_MatchingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchingType;
}
constexpr ::Photon::Realtime::MatchmakingMode const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_MatchingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchingType;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_MatchingType(::Photon::Realtime::MatchmakingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MatchingType = value;
}
constexpr ::Photon::Realtime::TypedLobby*& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_TypedLobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypedLobby;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::TypedLobby*> const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_TypedLobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypedLobby;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_TypedLobby(::Photon::Realtime::TypedLobby* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypedLobby)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_SqlLobbyFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SqlLobbyFilter;
}
constexpr ::StringW const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_SqlLobbyFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SqlLobbyFilter;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_SqlLobbyFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SqlLobbyFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpectedUsers;
}
constexpr void Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedUsers(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExpectedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::OpJoinRandomRoomParams* Photon::Realtime::OpJoinRandomRoomParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::OpJoinRandomRoomParams*>());
}
inline void Photon::Realtime::OpJoinRandomRoomParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::OpJoinRandomRoomParams*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::OpJoinRandomRoomParams::OpJoinRandomRoomParams() {}
