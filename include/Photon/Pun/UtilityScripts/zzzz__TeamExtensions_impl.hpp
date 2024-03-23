#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TeamExtensions_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTeams_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TeamExtensions.GetTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::UtilityScripts::__PunTeams__Team (*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::TeamExtensions::GetTeam)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1ec76b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TeamExtensions*>::get(), "GetTeam", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TeamExtensions.SetTeam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::__PunTeams__Team)>(
    &::Photon::Pun::UtilityScripts::TeamExtensions::SetTeam)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1ec777c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TeamExtensions*>::get(), "SetTeam", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__PunTeams__Team>::get() })));
    return ___internal_method;
  }
};
inline ::Photon::Pun::UtilityScripts::__PunTeams__Team Photon::Pun::UtilityScripts::TeamExtensions::GetTeam(::Photon::Realtime::Player* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TeamExtensions*>::get(), "GetTeam", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Photon::Pun::UtilityScripts::__PunTeams__Team, false>(nullptr, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::TeamExtensions::SetTeam(::Photon::Realtime::Player* player, ::Photon::Pun::UtilityScripts::__PunTeams__Team team) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TeamExtensions*>::get(), "SetTeam", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__PunTeams__Team>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, player, team);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TeamExtensions::TeamExtensions() {}
