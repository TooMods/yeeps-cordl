#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TurnExtensions_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.SetTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Room*, int32_t, bool)>(&::Photon::Pun::UtilityScripts::TurnExtensions::SetTurn)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1ecaec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "SetTurn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Room*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Photon::Realtime::RoomInfo*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetTurn)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1ecad14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetTurn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetTurnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Photon::Realtime::RoomInfo*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1ecb0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetTurnStart", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.GetFinishedTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1ecbf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetFinishedTurn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TurnExtensions.SetFinishedTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1ecb764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "SetFinishedTurn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_TurnPropKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TurnPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_TurnPropKey() {
  return ::cordl_internals::getStaticField<::StringW, "TurnPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>();
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_TurnStartPropKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TurnStartPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_TurnStartPropKey() {
  return ::cordl_internals::getStaticField<::StringW, "TurnStartPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>();
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::setStaticF_FinishedTurnPropKey(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "FinishedTurnPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Photon::Pun::UtilityScripts::TurnExtensions::getStaticF_FinishedTurnPropKey() {
  return ::cordl_internals::getStaticField<::StringW, "FinishedTurnPropKey", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get>();
}
/// @param setStartTime: bool (default: false)
inline void Photon::Pun::UtilityScripts::TurnExtensions::SetTurn(::Photon::Realtime::Room* room, int32_t turn, bool setStartTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "SetTurn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Room*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, room, turn, setStartTime);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetTurn(::Photon::Realtime::RoomInfo* room) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetTurn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, room);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetTurnStart(::Photon::Realtime::RoomInfo* room) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetTurnStart", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::RoomInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, room);
}
inline int32_t Photon::Pun::UtilityScripts::TurnExtensions::GetFinishedTurn(::Photon::Realtime::Player* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "GetFinishedTurn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::TurnExtensions::SetFinishedTurn(::Photon::Realtime::Player* player, int32_t turn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TurnExtensions*>::get(), "SetFinishedTurn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, player, turn);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TurnExtensions::TurnExtensions() {}
