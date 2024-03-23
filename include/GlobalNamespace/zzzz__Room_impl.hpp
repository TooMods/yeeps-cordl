#pragma once
#include "GlobalNamespace/zzzz__RoomManager_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__Hallway_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomDoorConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__RoomInfoDisplayUI_def.hpp"
#include "GlobalNamespace/zzzz__RoomLobby_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__Scenery_def.hpp"
#include "GlobalNamespace/zzzz__Theme_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Room.get_roomData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomData* (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::get_roomData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x162e2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "get_roomData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.set_roomData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)(::GlobalNamespace::RoomData*)>(&::GlobalNamespace::Room::set_roomData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x162e2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "set_roomData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.CreateWall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::Room::*)(
    ::GlobalNamespace::__RoomManager__TravelDirection, int32_t, ::GlobalNamespace::RoomDoorConfiguration*, ByRef<::UnityEngine::Transform*>)>(&::GlobalNamespace::Room::CreateWall)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x162e2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "CreateWall", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)(::GlobalNamespace::RoomData*)>(&::GlobalNamespace::Room::Initialize)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x162e6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.RefreshScenery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::RefreshScenery)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x162ec30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshScenery",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.RefreshFloorDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::RefreshFloorDepth)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x162fda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshFloorDepth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GenerateWalls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::GenerateWalls)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x162eedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GenerateWalls",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.RefreshHallways
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::RefreshHallways)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1630260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshHallways",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GenerateHallways
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::GenerateHallways)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x162f7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GenerateHallways",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.DestroySelfImmediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::DestroySelfImmediate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x16309c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "DestroySelfImmediate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GetHallwayAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Room::*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::Room::GetHallwayAnchor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1630b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetHallwayAnchor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.TryGetHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::Room::*)(::GlobalNamespace::__RoomManager__TravelDirection, ByRef<::GlobalNamespace::Hallway*>)>(&::GlobalNamespace::Room::TryGetHallway)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1630ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "TryGetHallway", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Hallway*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GetClosestHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Hallway> (::GlobalNamespace::Room::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::Room::GetClosestHallway)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1630e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetClosestHallway", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.TryGetLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Room::*)(ByRef<::GlobalNamespace::RoomLobby*>)>(&::GlobalNamespace::Room::TryGetLobby)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1631058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "TryGetLobby", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomLobby*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GetTravelAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Room::*)(::GlobalNamespace::__RoomManager__TravelDirection, bool)>(
    &::GlobalNamespace::Room::GetTravelAnchorPosition)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x16310c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetTravelAnchorPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room.GetSpawnPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::GetSpawnPosition)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x16312e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetSpawnPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Room._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Room::*)()>(&::GlobalNamespace::Room::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163153c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RoomData*& GlobalNamespace::Room::__cordl_internal_get__roomData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomData*> const& GlobalNamespace::Room::__cordl_internal_get__roomData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomData_k__BackingField;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set__roomData_k__BackingField(::GlobalNamespace::RoomData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::Room::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::Room::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_dimensions(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_useOverrideSpawnPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOverrideSpawnPosition;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_useOverrideSpawnPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOverrideSpawnPosition;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_useOverrideSpawnPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useOverrideSpawnPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Room::__cordl_internal_get_spawnPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Room::__cordl_internal_get_spawnPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_spawnPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnPosition = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_blockGameRounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockGameRounds;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_blockGameRounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockGameRounds;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_blockGameRounds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockGameRounds = value;
}
constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI>& GlobalNamespace::Room::__cordl_internal_get_roomInfoDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomInfoDisplay;
}
constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> const& GlobalNamespace::Room::__cordl_internal_get_roomInfoDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomInfoDisplay;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_roomInfoDisplay(::UnityW<::GlobalNamespace::RoomInfoDisplayUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomInfoDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_ceiling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ceiling;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_ceiling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ceiling;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_ceiling(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ceiling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_floor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_floor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___floor;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_floor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___floor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Theme*& GlobalNamespace::Room::__cordl_internal_get_theme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___theme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Theme*> const& GlobalNamespace::Room::__cordl_internal_get_theme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___theme;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_theme(::GlobalNamespace::Theme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___theme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Scenery>& GlobalNamespace::Room::__cordl_internal_get_scenery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenery;
}
constexpr ::UnityW<::GlobalNamespace::Scenery> const& GlobalNamespace::Room::__cordl_internal_get_scenery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenery;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_scenery(::UnityW<::GlobalNamespace::Scenery> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenery)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomLobby>& GlobalNamespace::Room::__cordl_internal_get_lobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobby;
}
constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& GlobalNamespace::Room::__cordl_internal_get_lobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobby;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_lobby(::UnityW<::GlobalNamespace::RoomLobby> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobby)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_upHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_upHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upHallwayAnchor;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_upHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_rightHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_rightHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayAnchor;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_rightHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_downHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_downHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downHallwayAnchor;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_downHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___downHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Room::__cordl_internal_get_leftHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Room::__cordl_internal_get_leftHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayAnchor;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_leftHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::Room::__cordl_internal_get_upHallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upHallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::Room::__cordl_internal_get_upHallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upHallway;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_upHallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upHallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::Room::__cordl_internal_get_rightHallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::Room::__cordl_internal_get_rightHallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallway;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_rightHallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::Room::__cordl_internal_get_downHallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downHallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::Room::__cordl_internal_get_downHallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downHallway;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_downHallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___downHallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::Room::__cordl_internal_get_leftHallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::Room::__cordl_internal_get_leftHallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallway;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_leftHallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::Room::__cordl_internal_get_createdWalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createdWalls;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::Room::__cordl_internal_get_createdWalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createdWalls;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_createdWalls(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createdWalls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::Room::__cordl_internal_get_lobbyDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyDirection;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::Room::__cordl_internal_get_lobbyDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyDirection;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_lobbyDirection(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lobbyDirection = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyUp;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyUp;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_isConnectedToLobbyUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectedToLobbyUp = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyRight;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyRight;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_isConnectedToLobbyRight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectedToLobbyRight = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyDown;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyDown;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_isConnectedToLobbyDown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectedToLobbyDown = value;
}
constexpr bool& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyLeft;
}
constexpr bool const& GlobalNamespace::Room::__cordl_internal_get_isConnectedToLobbyLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectedToLobbyLeft;
}
constexpr void GlobalNamespace::Room::__cordl_internal_set_isConnectedToLobbyLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectedToLobbyLeft = value;
}
inline ::GlobalNamespace::RoomData* GlobalNamespace::Room::get_roomData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "get_roomData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomData*, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::set_roomData(::GlobalNamespace::RoomData* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "set_roomData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::Room::CreateWall(::GlobalNamespace::__RoomManager__TravelDirection direction, int32_t floorDepth,
                                                                             ::GlobalNamespace::RoomDoorConfiguration* doorConfiguration, ByRef<::UnityEngine::Transform*> hallwayAnchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "CreateWall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, direction, floorDepth, doorConfiguration, hallwayAnchor);
}
inline void GlobalNamespace::Room::Initialize(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::Room::RefreshScenery() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshScenery",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::RefreshFloorDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshFloorDepth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::GenerateWalls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GenerateWalls",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::RefreshHallways() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "RefreshHallways",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::GenerateHallways() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GenerateHallways",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Room::DestroySelfImmediate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "DestroySelfImmediate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Room::GetHallwayAnchor(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetHallwayAnchor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, direction);
}
inline bool GlobalNamespace::Room::TryGetHallway(::GlobalNamespace::__RoomManager__TravelDirection direction, ByRef<::GlobalNamespace::Hallway*> hallway) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "TryGetHallway", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Hallway*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, direction, hallway);
}
inline ::UnityW<::GlobalNamespace::Hallway> GlobalNamespace::Room::GetClosestHallway(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetClosestHallway", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Hallway>, false>(this, ___internal_method, position);
}
inline bool GlobalNamespace::Room::TryGetLobby(ByRef<::GlobalNamespace::RoomLobby*> lobby) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "TryGetLobby", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomLobby*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lobby);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Room::GetTravelAnchorPosition(::GlobalNamespace::__RoomManager__TravelDirection travelDirection, bool isTravelingForward) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetTravelAnchorPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, travelDirection, isTravelingForward);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Room::GetSpawnPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), "GetSpawnPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Room* GlobalNamespace::Room::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Room*>());
}
inline void GlobalNamespace::Room::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Room*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Room::Room() {}
