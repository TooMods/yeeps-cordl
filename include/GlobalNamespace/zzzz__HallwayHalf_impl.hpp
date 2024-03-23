#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HallwayHalf_def.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomEntranceConsole_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomsEntranceBlocker_def.hpp"
#include "GlobalNamespace/zzzz__PublicWorldEntranceConsole_def.hpp"
#include "GlobalNamespace/zzzz__RoomEntrance_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__Theme_def.hpp"
#include "GlobalNamespace/zzzz__TransitionPortal_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(
    ::GlobalNamespace::Room*, ::StringW, bool, bool, ::GlobalNamespace::__RoomManager__TravelDirection, bool)>(&::GlobalNamespace::HallwayHalf::Initialize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x175a2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(
    ::GlobalNamespace::Room*, ::GlobalNamespace::Theme*, bool, bool, ::GlobalNamespace::__RoomManager__TravelDirection, bool)>(&::GlobalNamespace::HallwayHalf::Initialize)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x175bbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.SetUIActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(bool)>(&::GlobalNamespace::HallwayHalf::SetUIActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x175af74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetUIActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(bool)>(&::GlobalNamespace::HallwayHalf::SetActive)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x175af8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.SetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(int32_t)>(&::GlobalNamespace::HallwayHalf::SetLayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x175b2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.IsWithinBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HallwayHalf::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HallwayHalf::IsWithinBounds)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x175a9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "IsWithinBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.IsWithinBacktrackTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::HallwayHalf::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::HallwayHalf::IsWithinBacktrackTrigger)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x175ab70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "IsWithinBacktrackTrigger", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.GetSpawnPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::HallwayHalf::*)()>(&::GlobalNamespace::HallwayHalf::GetSpawnPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x175b530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "GetSpawnPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.GetWaypointAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::HallwayHalf::GetWaypointAnchor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x175b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "GetWaypointAnchor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf.MarkMobileAnchorsAsFarHalf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)()>(&::GlobalNamespace::HallwayHalf::MarkMobileAnchorsAsFarHalf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x175bf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(),
                                                                               "MarkMobileAnchorsAsFarHalf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HallwayHalf._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HallwayHalf::*)()>(&::GlobalNamespace::HallwayHalf::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175bfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::HallwayHalf::__cordl_internal_get_boundingBoxCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingBoxCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HallwayHalf::__cordl_internal_get_boundingBoxCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingBoxCenter;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_boundingBoxCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingBoxCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HallwayHalf::__cordl_internal_get_boundingBoxHalfExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingBoxHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HallwayHalf::__cordl_internal_get_boundingBoxHalfExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingBoxHalfExtents;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_boundingBoxHalfExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingBoxHalfExtents = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::HallwayHalf::__cordl_internal_get_layerChangeContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerChangeContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_layerChangeContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerChangeContainers;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_layerChangeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layerChangeContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::HallwayHalf::__cordl_internal_get_corridorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_corridorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorRenderer;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_corridorRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___corridorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HallwayHalf::__cordl_internal_get_blocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_blocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocker;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_blocker(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HallwayHalf::__cordl_internal_get_blockerBacktrackTriggerCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockerBacktrackTriggerCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HallwayHalf::__cordl_internal_get_blockerBacktrackTriggerCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockerBacktrackTriggerCenter;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_blockerBacktrackTriggerCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockerBacktrackTriggerCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HallwayHalf::__cordl_internal_get_blockerBacktrackTriggerHalfExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockerBacktrackTriggerHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HallwayHalf::__cordl_internal_get_blockerBacktrackTriggerHalfExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockerBacktrackTriggerHalfExtents;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_blockerBacktrackTriggerHalfExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockerBacktrackTriggerHalfExtents = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HallwayHalf::__cordl_internal_get_deadendBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadendBlocker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_deadendBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deadendBlocker;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_deadendBlocker(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deadendBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HallwayHalf::__cordl_internal_get_voidObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voidObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_voidObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voidObject;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_voidObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___voidObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HallwayHalf::__cordl_internal_get_exitAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_exitAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitAnchor;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_exitAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exitAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>&
GlobalNamespace::HallwayHalf::__cordl_internal_get_mobileTravelAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileTravelAnchors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> const&
GlobalNamespace::HallwayHalf::__cordl_internal_get_mobileTravelAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileTravelAnchors;
}
constexpr void
GlobalNamespace::HallwayHalf::__cordl_internal_set_mobileTravelAnchors(::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileTravelAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& GlobalNamespace::HallwayHalf::__cordl_internal_get_mobileHallwayTransitionAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileHallwayTransitionAnchor;
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_mobileHallwayTransitionAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileHallwayTransitionAnchor;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_mobileHallwayTransitionAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileHallwayTransitionAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole>& GlobalNamespace::HallwayHalf::__cordl_internal_get_privateRoomEntranceConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomEntranceConsole;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_privateRoomEntranceConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomEntranceConsole;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_privateRoomEntranceConsole(::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomEntranceConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& GlobalNamespace::HallwayHalf::__cordl_internal_get_privateRoomsEntranceBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceBlocker;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_privateRoomsEntranceBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceBlocker;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_privateRoomsEntranceBlocker(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsEntranceBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole>& GlobalNamespace::HallwayHalf::__cordl_internal_get_publicWorldEntranceConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicWorldEntranceConsole;
}
constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_publicWorldEntranceConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicWorldEntranceConsole;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_publicWorldEntranceConsole(::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicWorldEntranceConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TransitionPortal>& GlobalNamespace::HallwayHalf::__cordl_internal_get_transitionPortal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionPortal;
}
constexpr ::UnityW<::GlobalNamespace::TransitionPortal> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_transitionPortal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionPortal;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_transitionPortal(::UnityW<::GlobalNamespace::TransitionPortal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionPortal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomEntrance>& GlobalNamespace::HallwayHalf::__cordl_internal_get_entrance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entrance;
}
constexpr ::UnityW<::GlobalNamespace::RoomEntrance> const& GlobalNamespace::HallwayHalf::__cordl_internal_get_entrance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entrance;
}
constexpr void GlobalNamespace::HallwayHalf::__cordl_internal_set_entrance(::UnityW<::GlobalNamespace::RoomEntrance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entrance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HallwayHalf::Initialize(::GlobalNamespace::Room* room, ::StringW themeKey, bool isCloseHalf, bool isConnectedToPlayspace,
                                                     ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, bool isDeadend) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room, themeKey, isCloseHalf, isConnectedToPlayspace, travelDirection, isDeadend);
}
inline void GlobalNamespace::HallwayHalf::Initialize(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, bool isCloseHalf, bool isConnectedToPlayspace,
                                                     ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, bool isDeadend) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room, theme, isCloseHalf, isConnectedToPlayspace, travelDirection, isDeadend);
}
inline void GlobalNamespace::HallwayHalf::SetUIActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetUIActive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::HallwayHalf::SetActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetActive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::HallwayHalf::SetLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layer);
}
inline bool GlobalNamespace::HallwayHalf::IsWithinBounds(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "IsWithinBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool GlobalNamespace::HallwayHalf::IsWithinBacktrackTrigger(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "IsWithinBacktrackTrigger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HallwayHalf::GetSpawnPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "GetSpawnPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::HallwayHalf::GetWaypointAnchor(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), "GetWaypointAnchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::HallwayHalf::MarkMobileAnchorsAsFarHalf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(),
                                                                             "MarkMobileAnchorsAsFarHalf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HallwayHalf* GlobalNamespace::HallwayHalf::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HallwayHalf*>());
}
inline void GlobalNamespace::HallwayHalf::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HallwayHalf*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HallwayHalf::HallwayHalf() {}
