#pragma once
#include "GlobalNamespace/zzzz__RoomManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RoomLobby_def.hpp"
#include "GlobalNamespace/zzzz__ATM_def.hpp"
#include "GlobalNamespace/zzzz__Hallway_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__NavigationSignPost_def.hpp"
#include "GlobalNamespace/zzzz__RoomEntrance_def.hpp"
#include "GlobalNamespace/zzzz__RoomInfoDisplayUI_def.hpp"
#include "GlobalNamespace/zzzz__RoomLobby_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__Theme_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomLobby____c__DisplayClass43_0::*)()>(
    &::GlobalNamespace::__RoomLobby____c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163a02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0._AttachHallway_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomLobby____c__DisplayClass43_0::*)(bool)>(
    &::GlobalNamespace::__RoomLobby____c__DisplayClass43_0::_AttachHallway_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x163a898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*>::get(), "<AttachHallway>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RoomLobby>& GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomLobby> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Hallway>& GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_get_hallway() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallway;
}
constexpr ::UnityW<::GlobalNamespace::Hallway> const& GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_get_hallway() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallway;
}
constexpr void GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__cordl_internal_set_hallway(::UnityW<::GlobalNamespace::Hallway> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hallway)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0* GlobalNamespace::__RoomLobby____c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*>());
}
inline void GlobalNamespace::__RoomLobby____c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomLobby____c__DisplayClass43_0::_AttachHallway_b__0(bool newIsPlayerWithinHallway) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomLobby____c__DisplayClass43_0*>::get(), "<AttachHallway>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsPlayerWithinHallway);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomLobby____c__DisplayClass43_0::__RoomLobby____c__DisplayClass43_0() {}
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.get_isPlayerOutsideMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::get_isPlayerOutsideMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1639f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "get_isPlayerOutsideMap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.set_isPlayerOutsideMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(bool)>(&::GlobalNamespace::RoomLobby::set_isPlayerOutsideMap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1639f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "set_isPlayerOutsideMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.AttachToRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(
    ::GlobalNamespace::Room*, ::GlobalNamespace::Theme*, ::GlobalNamespace::__RoomManager__TravelDirection, int32_t)>(&::GlobalNamespace::RoomLobby::AttachToRoom)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x162f1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "AttachToRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.RefreshPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(::GlobalNamespace::Room*)>(&::GlobalNamespace::RoomLobby::RefreshPosition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1630164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "RefreshPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.AttachHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(::GlobalNamespace::Hallway*, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::RoomLobby::AttachHallway)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x1630378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "AttachHallway", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.OnHallwayDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(::GlobalNamespace::Hallway*)>(
    &::GlobalNamespace::RoomLobby::OnHallwayDestroyed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x163a070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "OnHallwayDestroyed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.OnPlayerWithinAttachedHallwayChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(bool, ::GlobalNamespace::Hallway*)>(
    &::GlobalNamespace::RoomLobby::OnPlayerWithinAttachedHallwayChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x163a034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "OnPlayerWithinAttachedHallwayChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.DestroySelfImmediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::DestroySelfImmediate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1630b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DestroySelfImmediate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x163a134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.DoInsideUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::DoInsideUpdate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x163a230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DoInsideUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.IsWithinBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomLobby::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::RoomLobby::IsWithinBounds)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163a430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "IsWithinBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.SetUIActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(bool)>(&::GlobalNamespace::RoomLobby::SetUIActive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x163a4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetUIActive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.DoLayerTriggerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::DoLayerTriggerUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x163a350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DoLayerTriggerUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.SetIsPlayerOutsideMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(bool)>(&::GlobalNamespace::RoomLobby::SetIsPlayerOutsideMap)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x163a578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetIsPlayerOutsideMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.SetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)(int32_t)>(&::GlobalNamespace::RoomLobby::SetLayer)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x163a65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.GetSpawnPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::GetSpawnPosition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16314c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "GetSpawnPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby.GetHallwayAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::RoomLobby::*)(::GlobalNamespace::__RoomManager__TravelDirection)>(&::GlobalNamespace::RoomLobby::GetHallwayAnchor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x162f67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "GetHallwayAnchor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomLobby._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomLobby::*)()>(&::GlobalNamespace::RoomLobby::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x163a808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RoomLobby::__cordl_internal_get_layerSwitchTriggerThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerSwitchTriggerThreshold;
}
constexpr float_t const& GlobalNamespace::RoomLobby::__cordl_internal_get_layerSwitchTriggerThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerSwitchTriggerThreshold;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_layerSwitchTriggerThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerSwitchTriggerThreshold = value;
}
constexpr int32_t& GlobalNamespace::RoomLobby::__cordl_internal_get_curLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLayer;
}
constexpr int32_t const& GlobalNamespace::RoomLobby::__cordl_internal_get_curLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLayer;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_curLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curLayer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RoomLobby::__cordl_internal_get_entranceAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RoomLobby::__cordl_internal_get_entranceAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceAnchor;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_entranceAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entranceAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayAnchor;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_leftHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayBlock;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayBlock;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_leftHallwayBlock(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHallwayBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayAnchor;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_forwardHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forwardHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayBlock;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayBlock;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_forwardHallwayBlock(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forwardHallwayBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayAnchor;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_rightHallwayAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHallwayAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayBlock;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayBlock;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_rightHallwayBlock(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHallwayBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>*& GlobalNamespace::RoomLobby::__cordl_internal_get_attachedHallways() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedHallways;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>*> const&
GlobalNamespace::RoomLobby::__cordl_internal_get_attachedHallways() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedHallways;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_attachedHallways(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Hallway>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attachedHallways)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayArch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayArch;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_leftHallwayArch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHallwayArch;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_leftHallwayArch(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHallwayArch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayArch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayArch;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_forwardHallwayArch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardHallwayArch;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_forwardHallwayArch(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forwardHallwayArch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayArch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayArch;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_rightHallwayArch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHallwayArch;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_rightHallwayArch(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHallwayArch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomEntrance>& GlobalNamespace::RoomLobby::__cordl_internal_get_entrance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entrance;
}
constexpr ::UnityW<::GlobalNamespace::RoomEntrance> const& GlobalNamespace::RoomLobby::__cordl_internal_get_entrance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entrance;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_entrance(::UnityW<::GlobalNamespace::RoomEntrance> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entrance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomLobby::__cordl_internal_get_boundingCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomLobby::__cordl_internal_get_boundingCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomLobby::__cordl_internal_get_boundingHalfExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomLobby::__cordl_internal_get_boundingHalfExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingHalfExtents;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_boundingHalfExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingHalfExtents = value;
}
constexpr float_t& GlobalNamespace::RoomLobby::__cordl_internal_get_nextInsideCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextInsideCheckTime;
}
constexpr float_t const& GlobalNamespace::RoomLobby::__cordl_internal_get_nextInsideCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextInsideCheckTime;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_nextInsideCheckTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextInsideCheckTime = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::RoomLobby::__cordl_internal_get_layerChangeContainers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerChangeContainers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::RoomLobby::__cordl_internal_get_layerChangeContainers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerChangeContainers;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_layerChangeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layerChangeContainers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::RoomLobby::__cordl_internal_get_corridorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::RoomLobby::__cordl_internal_get_corridorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorRenderer;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_corridorRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___corridorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NavigationSignPost>& GlobalNamespace::RoomLobby::__cordl_internal_get_navigationSignPost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSignPost;
}
constexpr ::UnityW<::GlobalNamespace::NavigationSignPost> const& GlobalNamespace::RoomLobby::__cordl_internal_get_navigationSignPost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSignPost;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_navigationSignPost(::UnityW<::GlobalNamespace::NavigationSignPost> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___navigationSignPost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomLobby::__cordl_internal_get_playerManagement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerManagement;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomLobby::__cordl_internal_get_playerManagement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerManagement;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_playerManagement(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerManagement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::RoomLobby::__cordl_internal_get_UICanvases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UICanvases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::RoomLobby::__cordl_internal_get_UICanvases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UICanvases;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_UICanvases(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UICanvases)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI>& GlobalNamespace::RoomLobby::__cordl_internal_get_roomInfoDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomInfoDisplay;
}
constexpr ::UnityW<::GlobalNamespace::RoomInfoDisplayUI> const& GlobalNamespace::RoomLobby::__cordl_internal_get_roomInfoDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomInfoDisplay;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_roomInfoDisplay(::UnityW<::GlobalNamespace::RoomInfoDisplayUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomInfoDisplay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor>& GlobalNamespace::RoomLobby::__cordl_internal_get_controllingMobileTravelAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllingMobileTravelAnchor;
}
constexpr ::UnityW<::GlobalNamespace::MobileTravelAnchor> const& GlobalNamespace::RoomLobby::__cordl_internal_get_controllingMobileTravelAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllingMobileTravelAnchor;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_controllingMobileTravelAnchor(::UnityW<::GlobalNamespace::MobileTravelAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllingMobileTravelAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RoomLobby::__cordl_internal_get_spawnPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RoomLobby::__cordl_internal_get_spawnPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPositionOffset;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_spawnPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnPositionOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::ATM>& GlobalNamespace::RoomLobby::__cordl_internal_get_atm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atm;
}
constexpr ::UnityW<::GlobalNamespace::ATM> const& GlobalNamespace::RoomLobby::__cordl_internal_get_atm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atm;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_atm(::UnityW<::GlobalNamespace::ATM> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___atm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RoomLobby::__cordl_internal_get__isPlayerOutsideMap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlayerOutsideMap_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomLobby::__cordl_internal_get__isPlayerOutsideMap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlayerOutsideMap_k__BackingField;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set__isPlayerOutsideMap_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPlayerOutsideMap_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& GlobalNamespace::RoomLobby::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& GlobalNamespace::RoomLobby::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Theme*& GlobalNamespace::RoomLobby::__cordl_internal_get_theme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___theme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Theme*> const& GlobalNamespace::RoomLobby::__cordl_internal_get_theme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___theme;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_theme(::GlobalNamespace::Theme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___theme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::RoomLobby::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::RoomLobby::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr ::System::Random*& GlobalNamespace::RoomLobby::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::RoomLobby::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_rand(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RoomLobby::__cordl_internal_get_sqrDistToPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrDistToPlayer;
}
constexpr float_t const& GlobalNamespace::RoomLobby::__cordl_internal_get_sqrDistToPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrDistToPlayer;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_sqrDistToPlayer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sqrDistToPlayer = value;
}
constexpr bool& GlobalNamespace::RoomLobby::__cordl_internal_get_isUIActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUIActive;
}
constexpr bool const& GlobalNamespace::RoomLobby::__cordl_internal_get_isUIActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isUIActive;
}
constexpr void GlobalNamespace::RoomLobby::__cordl_internal_set_isUIActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isUIActive = value;
}
inline bool GlobalNamespace::RoomLobby::get_isPlayerOutsideMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "get_isPlayerOutsideMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomLobby::set_isPlayerOutsideMap(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "set_isPlayerOutsideMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::RoomLobby::AttachToRoom(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, ::GlobalNamespace::__RoomManager__TravelDirection direction, int32_t seed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "AttachToRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room, theme, direction, seed);
}
inline void GlobalNamespace::RoomLobby::RefreshPosition(::GlobalNamespace::Room* room) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "RefreshPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room);
}
inline void GlobalNamespace::RoomLobby::AttachHallway(::GlobalNamespace::Hallway* hallway, ::UnityEngine::Transform* anchor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "AttachHallway", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hallway, anchor);
}
inline void GlobalNamespace::RoomLobby::OnHallwayDestroyed(::GlobalNamespace::Hallway* hallway) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "OnHallwayDestroyed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hallway);
}
inline void GlobalNamespace::RoomLobby::OnPlayerWithinAttachedHallwayChanged(bool newIsPlayerWithinHallway, ::GlobalNamespace::Hallway* hallway) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "OnPlayerWithinAttachedHallwayChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Hallway*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsPlayerWithinHallway, hallway);
}
inline void GlobalNamespace::RoomLobby::DestroySelfImmediate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DestroySelfImmediate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomLobby::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomLobby::DoInsideUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DoInsideUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomLobby::IsWithinBounds(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "IsWithinBounds", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::RoomLobby::SetUIActive(bool newActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetUIActive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActive);
}
inline void GlobalNamespace::RoomLobby::DoLayerTriggerUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "DoLayerTriggerUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomLobby::SetIsPlayerOutsideMap(bool newIsPlayerOutsideMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetIsPlayerOutsideMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsPlayerOutsideMap);
}
inline void GlobalNamespace::RoomLobby::SetLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layer);
}
inline ::UnityEngine::Vector3 GlobalNamespace::RoomLobby::GetSpawnPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "GetSpawnPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::RoomLobby::GetHallwayAnchor(::GlobalNamespace::__RoomManager__TravelDirection travelDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), "GetHallwayAnchor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, travelDirection);
}
inline ::GlobalNamespace::RoomLobby* GlobalNamespace::RoomLobby::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomLobby*>());
}
inline void GlobalNamespace::RoomLobby::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomLobby*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomLobby::RoomLobby() {}
