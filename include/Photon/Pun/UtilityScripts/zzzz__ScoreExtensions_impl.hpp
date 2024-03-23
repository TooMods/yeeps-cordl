#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__ScoreExtensions_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.SetScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::SetScore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1ec6b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "SetScore", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.AddScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::AddScore)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1ec6bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "AddScore", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.GetScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::GetScore)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1ec6cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "GetScore", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::ScoreExtensions::SetScore(::Photon::Realtime::Player* player, int32_t newScore) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "SetScore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, player, newScore);
}
inline void Photon::Pun::UtilityScripts::ScoreExtensions::AddScore(::Photon::Realtime::Player* player, int32_t scoreToAddToCurrent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "AddScore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, player, scoreToAddToCurrent);
}
inline int32_t Photon::Pun::UtilityScripts::ScoreExtensions::GetScore(::Photon::Realtime::Player* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::ScoreExtensions*>::get(), "GetScore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, player);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::ScoreExtensions::ScoreExtensions() {}
