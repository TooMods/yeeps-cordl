#pragma once
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTurnManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__IPunTurnManagerCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_Turn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_Turn)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1ecac90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_Turn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.set_Turn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(int32_t)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::set_Turn)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1ecae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "set_Turn", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_ElapsedTimeInTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_ElapsedTimeInTurn)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1ecb044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_ElapsedTimeInTurn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_RemainingSecondsInTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_RemainingSecondsInTurn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ecb1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_RemainingSecondsInTurn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsCompletedByAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_IsCompletedByAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1ecb220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_IsCompletedByAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsFinishedByMe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_IsFinishedByMe)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1ecb2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_IsFinishedByMe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.get_IsOver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::get_IsOver)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1ecb35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "get_IsOver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ecb38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1ecb390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.BeginTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::BeginTurn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1ecb490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                               "BeginTurn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.SendMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::System::Object*, bool)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::SendMove)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x1ecb4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "SendMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.GetPlayerFinishedTurn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::Photon::Realtime::Player*)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::GetPlayerFinishedTurn)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1ecbc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "GetPlayerFinishedTurn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.ProcessOnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(uint8_t, ::System::Object*, int32_t)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::ProcessOnEvent)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1ecb8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "ProcessOnEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::ExitGames::Client::Photon::EventData*)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::OnEvent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1ecbd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "OnEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager.OnRoomPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)(::ExitGames::Client::Photon::Hashtable*)>(
    &::Photon::Pun::UtilityScripts::PunTurnManager::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1ecbd60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunTurnManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::PunTurnManager::*)()>(&::Photon::Pun::UtilityScripts::PunTurnManager::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1ecbe84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr Photon::Pun::UtilityScripts::PunTurnManager::operator ::Photon::Realtime::IOnEventCallback*() noexcept {
  return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* Photon::Pun::UtilityScripts::PunTurnManager::i___Photon__Realtime__IOnEventCallback() noexcept {
  return static_cast<::Photon::Realtime::IOnEventCallback*>(static_cast<void*>(this));
}
constexpr ::Photon::Realtime::Player*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::Player*> const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sender;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_sender(::Photon::Realtime::Player* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TurnDuration;
}
constexpr float_t const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TurnDuration;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_TurnDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TurnDuration = value;
}
constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnManagerListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TurnManagerListener;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*> const&
Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_TurnManagerListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TurnManagerListener;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_TurnManagerListener(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TurnManagerListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_finishedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedPlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*> const&
Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get_finishedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedPlayers;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set_finishedPlayers(::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get__isOverCallProcessed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverCallProcessed;
}
constexpr bool const& Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_get__isOverCallProcessed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverCallProcessed;
}
constexpr void Photon::Pun::UtilityScripts::PunTurnManager::__cordl_internal_set__isOverCallProcessed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOverCallProcessed = value;
}
inline int32_t Photon::Pun::UtilityScripts::PunTurnManager::get_Turn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "get_Turn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::set_Turn(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "set_Turn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t Photon::Pun::UtilityScripts::PunTurnManager::get_ElapsedTimeInTurn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                             "get_ElapsedTimeInTurn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t Photon::Pun::UtilityScripts::PunTurnManager::get_RemainingSecondsInTurn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                             "get_RemainingSecondsInTurn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsCompletedByAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                             "get_IsCompletedByAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsFinishedByMe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                             "get_IsFinishedByMe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::get_IsOver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(),
                                                                             "get_IsOver", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::BeginTurn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "BeginTurn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::SendMove(::System::Object* move, bool finished) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "SendMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, move, finished);
}
inline bool Photon::Pun::UtilityScripts::PunTurnManager::GetPlayerFinishedTurn(::Photon::Realtime::Player* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "GetPlayerFinishedTurn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::ProcessOnEvent(uint8_t eventCode, ::System::Object* content, int32_t senderId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "ProcessOnEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventCode, content, senderId);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::OnEvent(::ExitGames::Client::Photon::EventData* photonEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), "OnEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, photonEvent);
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertiesThatChanged);
}
inline ::Photon::Pun::UtilityScripts::PunTurnManager* Photon::Pun::UtilityScripts::PunTurnManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::PunTurnManager*>());
}
inline void Photon::Pun::UtilityScripts::PunTurnManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::PunTurnManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PunTurnManager::PunTurnManager() {}
