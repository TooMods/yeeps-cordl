#pragma once
#include "Photon/Realtime/zzzz__ILobbyCallbacks_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__LobbyCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(
    &::Photon::Realtime::LobbyCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22396b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnJoinedLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)()>(
    &::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x22413b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(),
                                                                               "OnJoinedLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnLeftLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)()>(&::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2241570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(),
                                                                               "OnLeftLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnRoomListUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*)>(&::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22411f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), "OnRoomListUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnLobbyStatisticsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(
    ::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*)>(&::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22439a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), "OnLobbyStatisticsUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
constexpr Photon::Realtime::LobbyCallbacksContainer::operator ::Photon::Realtime::ILobbyCallbacks*() noexcept {
  return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
constexpr ::Photon::Realtime::ILobbyCallbacks* Photon::Realtime::LobbyCallbacksContainer::i___Photon__Realtime__ILobbyCallbacks() noexcept {
  return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Realtime::LobbyCallbacksContainer* Photon::Realtime::LobbyCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Realtime::LobbyCallbacksContainer*>(client));
}
inline void Photon::Realtime::LobbyCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient* client) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::LoadBalancingClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(),
                                                                             "OnJoinedLobby", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), "OnLeftLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), "OnRoomListUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomList);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Realtime::LobbyCallbacksContainer*>::get(), "OnLobbyStatisticsUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyStatistics);
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LobbyCallbacksContainer::LobbyCallbacksContainer() {}
