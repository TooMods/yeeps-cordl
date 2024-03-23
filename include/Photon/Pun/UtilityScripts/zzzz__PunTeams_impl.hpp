#pragma once
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTeams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTeams_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::UtilityScripts::__PunTeams__Team::__PunTeams__Team(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__PunTeams__Team::__PunTeams__Team() {}
constexpr ::Photon::Pun::UtilityScripts::__PunTeams__Team Photon::Pun::UtilityScripts::__PunTeams__Team::none{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Pun::UtilityScripts::__PunTeams__Team Photon::Pun::UtilityScripts::__PunTeams__Team::red{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Pun::UtilityScripts::__PunTeams__Team Photon::Pun::UtilityScripts::__PunTeams__Team::blue{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::Start)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x1ec6d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1ec71c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnJoinedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec71d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec76a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnPlayerPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)(
    ::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PunTeams::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec76a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnPlayerLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PunTeams::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec76a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.OnPlayerEnteredRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PunTeams::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ec76ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams.UpdateTeams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::UpdateTeams)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x1ec71d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), "UpdateTeams",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTeams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTeams::*)()>(&::Photon::Pun::UtilityScripts::PunTeams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ec7774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::PunTeams::setStaticF_PlayersPerTeam(
    ::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*, "PlayersPerTeam",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*
Photon::Pun::UtilityScripts::PunTeams::getStaticF_PlayersPerTeam() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::Photon::Pun::UtilityScripts::__PunTeams__Team, ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*, "PlayersPerTeam",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get>();
}
inline void Photon::Pun::UtilityScripts::PunTeams::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnJoinedRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnLeftRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::UtilityScripts::PunTeams::OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::UtilityScripts::PunTeams::UpdateTeams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), "UpdateTeams",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PunTeams* Photon::Pun::UtilityScripts::PunTeams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::PunTeams*>());
}
inline void Photon::Pun::UtilityScripts::PunTeams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTeams*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PunTeams::PunTeams() {}
