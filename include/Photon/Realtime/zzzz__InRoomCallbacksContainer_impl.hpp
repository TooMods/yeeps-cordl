#pragma once
#include "Photon/Realtime/zzzz__IInRoomCallbacks_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__InRoomCallbacksContainer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(
    &::Photon::Realtime::InRoomCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2239634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerEnteredRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(
    &::Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2243408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerEnteredRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(
    &::Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x224378c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerLeftRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnRoomPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::ExitGames::Client::Photon::Hashtable*)>(
    &::Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x223d190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnRoomPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(
    ::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x223c96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnMasterClientSwitched
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(
    &::Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22435c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnMasterClientSwitched", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr Photon::Realtime::InRoomCallbacksContainer::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Realtime::InRoomCallbacksContainer::i___Photon__Realtime__IInRoomCallbacks() noexcept {
  return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::InRoomCallbacksContainer* Photon::Realtime::InRoomCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::InRoomCallbacksContainer*>(client));
}
inline void Photon::Realtime::InRoomCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerEnteredRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPlayer);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerLeftRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherPlayer);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnRoomPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPlayer, changedProp);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::InRoomCallbacksContainer*>::get(), "OnMasterClientSwitched", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMasterClient);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::InRoomCallbacksContainer::InRoomCallbacksContainer() {}
