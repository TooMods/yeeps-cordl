#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RoomNavigationDisplay_def.hpp"
#include "GlobalNamespace/zzzz__Hallway_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)(::GlobalNamespace::RoomNavigation*, ::GlobalNamespace::Hallway*)>(
    &::GlobalNamespace::RoomNavigationDisplay::Initialize)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x175d2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.SetHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)(::GlobalNamespace::Hallway*, bool)>(
    &::GlobalNamespace::RoomNavigationDisplay::SetHallway)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x175d4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "SetHallway", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)()>(&::GlobalNamespace::RoomNavigationDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x175d54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.OnMasterPlayerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::RoomNavigationDisplay::OnMasterPlayerCreated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175d7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.OnRoomPositionShift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::RoomNavigationDisplay::OnRoomPositionShift)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x175d7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnRoomPositionShift", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)()>(&::GlobalNamespace::RoomNavigationDisplay::DestroySelf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x175d884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)()>(&::GlobalNamespace::RoomNavigationDisplay::Update)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x175d8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay.MoveToTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)(::UnityEngine::Vector3, bool)>(
    &::GlobalNamespace::RoomNavigationDisplay::MoveToTarget)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x175b150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "MoveToTarget", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationDisplay::*)()>(&::GlobalNamespace::RoomNavigationDisplay::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x175db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_distanceToSizeRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToSizeRatio;
}
constexpr float_t const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_distanceToSizeRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceToSizeRatio;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_distanceToSizeRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distanceToSizeRatio = value;
}
constexpr float_t& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_minSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSize;
}
constexpr float_t const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_minSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minSize;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_minSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minSize = value;
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_hallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_hallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallway;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_hallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Player>& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::Player> const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_isMovingToTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingToTarget;
}
constexpr bool const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_isMovingToTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isMovingToTarget;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_isMovingToTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isMovingToTarget = value;
}
constexpr float_t& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetP;
}
constexpr float_t const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetP;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_moveToTargetP(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveToTargetP = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetCurve;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_moveToTargetCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___moveToTargetCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetStartPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetStartPosition;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_moveToTargetStartPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveToTargetStartPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetEndPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetEndPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomNavigationDisplay::__cordl_internal_get_moveToTargetEndPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveToTargetEndPosition;
}
constexpr void GlobalNamespace::RoomNavigationDisplay::__cordl_internal_set_moveToTargetEndPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveToTargetEndPosition = value;
}
inline void GlobalNamespace::RoomNavigationDisplay::Initialize(::GlobalNamespace::RoomNavigation* navigation, ::GlobalNamespace::Hallway* initialHallway) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigation, initialHallway);
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::RoomNavigationDisplay::SetHallway(::GlobalNamespace::Hallway* hallway, bool instant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "SetHallway", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hallway, instant);
}
inline void GlobalNamespace::RoomNavigationDisplay::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationDisplay::OnMasterPlayerCreated(::GlobalNamespace::Player* masterPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnMasterPlayerCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, masterPlayer);
}
inline void GlobalNamespace::RoomNavigationDisplay::OnRoomPositionShift(::UnityEngine::Vector3 shift) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "OnRoomPositionShift", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shift);
}
inline void GlobalNamespace::RoomNavigationDisplay::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationDisplay::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationDisplay::MoveToTarget(::UnityEngine::Vector3 newTargetPosition, bool instant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), "MoveToTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTargetPosition, instant);
}
inline ::GlobalNamespace::RoomNavigationDisplay* GlobalNamespace::RoomNavigationDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomNavigationDisplay*>());
}
inline void GlobalNamespace::RoomNavigationDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomNavigationDisplay::RoomNavigationDisplay() {}
