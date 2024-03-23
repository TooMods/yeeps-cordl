#pragma once
#include "GlobalNamespace/zzzz__RoomManager_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Hallway_def.hpp"
#include "GlobalNamespace/zzzz__HallwayHalf_def.hpp"
#include "GlobalNamespace/zzzz__Hallway_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomEntranceConsole_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomsEntranceBlocker_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomsExpansionBlocker_def.hpp"
#include "GlobalNamespace/zzzz__PublicWorldEntranceConsole_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomLobby_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigationDisplay_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "GlobalNamespace/zzzz__Theme_def.hpp"
#include "GlobalNamespace/zzzz__TransitionPortal_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x175ba64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::*)(bool)>(
    &::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x175bb28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x175bb40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x175bbc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>(object, method));
}
inline void GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::Invoke(bool isPlayerWithinHallway) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPlayerWithinHallway);
}
inline ::System::IAsyncResult* GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::BeginInvoke(bool isPlayerWithinHallway, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, isPlayerWithinHallway, callback, object);
}
inline void GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged::__Hallway__OnPlayerWithinHallwayChanged() {}
//  Writing Method size for method: ::GlobalNamespace::Hallway.get_isPlayerWithinHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::get_isPlayerWithinHallway)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175958c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "get_isPlayerWithinHallway",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.set_isPlayerWithinHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::set_isPlayerWithinHallway)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1759594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "set_isPlayerWithinHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.AttachToRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(
    ::GlobalNamespace::Room*, ::GlobalNamespace::Theme*, ::GlobalNamespace::RoomLobby*, ::GlobalNamespace::__RoomManager__TravelDirection)>(&::GlobalNamespace::Hallway::AttachToRoom)> {
  constexpr static std::size_t size = 0xd2c;
  constexpr static std::size_t addrs = 0x17595a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "AttachToRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomLobby*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.DestroySelfImmediate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::DestroySelfImmediate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x175a3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DestroySelfImmediate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::LateUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x175a45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.DoInsideUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::DoInsideUpdate)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x175a590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoInsideUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.SetIsPlayerWithinHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::SetIsPlayerWithinHallway)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x175ad48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsPlayerWithinHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.DoLayerTriggerUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::DoLayerTriggerUpdate)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x175a870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoLayerTriggerUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.SetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(int32_t)>(&::GlobalNamespace::Hallway::SetLayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x175b1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.IsWithinTransitionTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Hallway::*)(::UnityEngine::Vector3, bool)>(
    &::GlobalNamespace::Hallway::IsWithinTransitionTrigger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x175aa38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "IsWithinTransitionTrigger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.SetIsInTransitionTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::SetIsInTransitionTrigger)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x175ab28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsInTransitionTrigger",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.DoTransitionTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::DoTransitionTrigger)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x175abdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoTransitionTrigger",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.OnGoToRoomSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(::GlobalNamespace::RoomData*)>(&::GlobalNamespace::Hallway::OnGoToRoomSuccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175b3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "OnGoToRoomSuccess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.OnGoToRoomFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(::StringW, bool)>(&::GlobalNamespace::Hallway::OnGoToRoomFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175b3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "OnGoToRoomFailure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.SetIsLoadingNextRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::SetIsLoadingNextRoom)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x175b318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsLoadingNextRoom",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetTravelAnchorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Hallway::*)(bool)>(&::GlobalNamespace::Hallway::GetTravelAnchorPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x175b3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetTravelAnchorPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetOffsetFromTravelingAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Hallway::*)(bool, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::Hallway::GetOffsetFromTravelingAnchor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x175b3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetOffsetFromTravelingAnchor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetSpawnPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::GetSpawnPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x175b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetSpawnPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetMobileTravelAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::GetMobileTravelAnchors)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x175b5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetMobileTravelAnchors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetMobileHallwayTransitionAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MobileTravelAnchor> (::GlobalNamespace::Hallway::*)()>(
    &::GlobalNamespace::Hallway::GetMobileHallwayTransitionAnchor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17553d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetMobileHallwayTransitionAnchor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.RegisterRoomNavigationDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(::GlobalNamespace::RoomNavigationDisplay*, bool)>(
    &::GlobalNamespace::Hallway::RegisterRoomNavigationDisplay)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x175b82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "RegisterRoomNavigationDisplay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigationDisplay*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.DeregisterRoomNavigationDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)(::GlobalNamespace::RoomNavigationDisplay*)>(
    &::GlobalNamespace::Hallway::DeregisterRoomNavigationDisplay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x175b954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DeregisterRoomNavigationDisplay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigationDisplay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway.GetWaypointPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Hallway::*)(int32_t, int32_t)>(
    &::GlobalNamespace::Hallway::GetWaypointPosition)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x175afb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetWaypointPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Hallway._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Hallway::*)()>(&::GlobalNamespace::Hallway::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x175ba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::Hallway::__cordl_internal_get_layerSwitchTriggerThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerSwitchTriggerThreshold;
}
constexpr float_t const& GlobalNamespace::Hallway::__cordl_internal_get_layerSwitchTriggerThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layerSwitchTriggerThreshold;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_layerSwitchTriggerThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layerSwitchTriggerThreshold = value;
}
constexpr int32_t& GlobalNamespace::Hallway::__cordl_internal_get_curLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLayer;
}
constexpr int32_t const& GlobalNamespace::Hallway::__cordl_internal_get_curLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLayer;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_curLayer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curLayer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_entranceHalfContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceHalfContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_entranceHalfContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceHalfContainer;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_entranceHalfContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entranceHalfContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_exitHalfContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitHalfContainer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_exitHalfContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitHalfContainer;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_exitHalfContainer(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exitHalfContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& GlobalNamespace::Hallway::__cordl_internal_get_entranceHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceHalf;
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& GlobalNamespace::Hallway::__cordl_internal_get_entranceHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceHalf;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_entranceHalf(::UnityW<::GlobalNamespace::HallwayHalf> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entranceHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& GlobalNamespace::Hallway::__cordl_internal_get_exitHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitHalf;
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& GlobalNamespace::Hallway::__cordl_internal_get_exitHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitHalf;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_exitHalf(::UnityW<::GlobalNamespace::HallwayHalf> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exitHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& GlobalNamespace::Hallway::__cordl_internal_get_closeHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeHalf;
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& GlobalNamespace::Hallway::__cordl_internal_get_closeHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeHalf;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_closeHalf(::UnityW<::GlobalNamespace::HallwayHalf> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closeHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf>& GlobalNamespace::Hallway::__cordl_internal_get_farHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farHalf;
}
constexpr ::UnityW<::GlobalNamespace::HallwayHalf> const& GlobalNamespace::Hallway::__cordl_internal_get_farHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___farHalf;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_farHalf(::UnityW<::GlobalNamespace::HallwayHalf> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___farHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_entraceAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entraceAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_entraceAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entraceAnchor;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_entraceAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entraceAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_exitAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_exitAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitAnchor;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_exitAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exitAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_entranceBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceBlocker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_entranceBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entranceBlocker;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_entranceBlocker(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entranceBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_exitBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitBlocker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_exitBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitBlocker;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_exitBlocker(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exitBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerExitLocalCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerExitLocalCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerExitLocalCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerExitLocalCenter;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerExitLocalCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTriggerExitLocalCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerExitHalfExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerExitHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerExitHalfExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerExitHalfExtents;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerExitHalfExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTriggerExitHalfExtents = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerEnterLocalCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerEnterLocalCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerEnterLocalCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerEnterLocalCenter;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerEnterLocalCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTriggerEnterLocalCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerEnterHalfExtents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerEnterHalfExtents;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerEnterHalfExtents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerEnterHalfExtents;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerEnterHalfExtents(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTriggerEnterHalfExtents = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerAnchor;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionTriggerAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Hallway::__cordl_internal_get_transitionTriggerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionTriggerPosition;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionTriggerPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transitionTriggerPosition = value;
}
constexpr bool& GlobalNamespace::Hallway::__cordl_internal_get_doTransitionTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doTransitionTrigger;
}
constexpr bool const& GlobalNamespace::Hallway::__cordl_internal_get_doTransitionTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doTransitionTrigger;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_doTransitionTrigger(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doTransitionTrigger = value;
}
constexpr float_t& GlobalNamespace::Hallway::__cordl_internal_get_nextTriggerCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTriggerCheckTime;
}
constexpr float_t const& GlobalNamespace::Hallway::__cordl_internal_get_nextTriggerCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTriggerCheckTime;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_nextTriggerCheckTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextTriggerCheckTime = value;
}
constexpr bool& GlobalNamespace::Hallway::__cordl_internal_get_isInTransitionTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInTransitionTrigger;
}
constexpr bool const& GlobalNamespace::Hallway::__cordl_internal_get_isInTransitionTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInTransitionTrigger;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_isInTransitionTrigger(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInTransitionTrigger = value;
}
constexpr float_t& GlobalNamespace::Hallway::__cordl_internal_get_triggerStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggerStartTime;
}
constexpr float_t const& GlobalNamespace::Hallway::__cordl_internal_get_triggerStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___triggerStartTime;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_triggerStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___triggerStartTime = value;
}
constexpr float_t& GlobalNamespace::Hallway::__cordl_internal_get_nextTriggerValidTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTriggerValidTime;
}
constexpr float_t const& GlobalNamespace::Hallway::__cordl_internal_get_nextTriggerValidTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextTriggerValidTime;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_nextTriggerValidTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextTriggerValidTime = value;
}
constexpr bool& GlobalNamespace::Hallway::__cordl_internal_get__isPlayerWithinHallway_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlayerWithinHallway_k__BackingField;
}
constexpr bool const& GlobalNamespace::Hallway::__cordl_internal_get__isPlayerWithinHallway_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPlayerWithinHallway_k__BackingField;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set__isPlayerWithinHallway_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPlayerWithinHallway_k__BackingField = value;
}
constexpr ::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*& GlobalNamespace::Hallway::__cordl_internal_get_onPlayerWithinHallwayChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerWithinHallwayChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged*> const&
GlobalNamespace::Hallway::__cordl_internal_get_onPlayerWithinHallwayChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerWithinHallwayChangedCallbacks;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_onPlayerWithinHallwayChangedCallbacks(::GlobalNamespace::__Hallway__OnPlayerWithinHallwayChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerWithinHallwayChangedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& GlobalNamespace::Hallway::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& GlobalNamespace::Hallway::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomLobby>& GlobalNamespace::Hallway::__cordl_internal_get_attachedLobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedLobby;
}
constexpr ::UnityW<::GlobalNamespace::RoomLobby> const& GlobalNamespace::Hallway::__cordl_internal_get_attachedLobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachedLobby;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_attachedLobby(::UnityW<::GlobalNamespace::RoomLobby> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attachedLobby)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::Hallway::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::Hallway::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole>& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomEntranceConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomEntranceConsole;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> const& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomEntranceConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomEntranceConsole;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_privateRoomEntranceConsole(::UnityW<::GlobalNamespace::PrivateRoomEntranceConsole> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomEntranceConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker>& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomsEntranceBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceBlocker;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> const& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomsEntranceBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceBlocker;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_privateRoomsEntranceBlocker(::UnityW<::GlobalNamespace::PrivateRoomsEntranceBlocker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsEntranceBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker>& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomsExpansionBlocker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExpansionBlocker;
}
constexpr ::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> const& GlobalNamespace::Hallway::__cordl_internal_get_privateRoomsExpansionBlocker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExpansionBlocker;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_privateRoomsExpansionBlocker(::UnityW<::GlobalNamespace::PrivateRoomsExpansionBlocker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsExpansionBlocker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole>& GlobalNamespace::Hallway::__cordl_internal_get_publicWorldEntranceConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicWorldEntranceConsole;
}
constexpr ::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> const& GlobalNamespace::Hallway::__cordl_internal_get_publicWorldEntranceConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicWorldEntranceConsole;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_publicWorldEntranceConsole(::UnityW<::GlobalNamespace::PublicWorldEntranceConsole> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicWorldEntranceConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TransitionPortal>& GlobalNamespace::Hallway::__cordl_internal_get_transitionPortal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionPortal;
}
constexpr ::UnityW<::GlobalNamespace::TransitionPortal> const& GlobalNamespace::Hallway::__cordl_internal_get_transitionPortal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionPortal;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_transitionPortal(::UnityW<::GlobalNamespace::TransitionPortal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionPortal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Hallway::__cordl_internal_get_voidObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voidObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Hallway::__cordl_internal_get_voidObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___voidObject;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_voidObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___voidObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>*& GlobalNamespace::Hallway::__cordl_internal_get_roomNavigationDisplays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNavigationDisplays;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>*> const&
GlobalNamespace::Hallway::__cordl_internal_get_roomNavigationDisplays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNavigationDisplays;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_roomNavigationDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RoomNavigationDisplay>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomNavigationDisplays)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::Hallway::__cordl_internal_get_hasDoneForcedUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDoneForcedUpdate;
}
constexpr bool const& GlobalNamespace::Hallway::__cordl_internal_get_hasDoneForcedUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDoneForcedUpdate;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_hasDoneForcedUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDoneForcedUpdate = value;
}
constexpr float_t& GlobalNamespace::Hallway::__cordl_internal_get_sqrDistToPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrDistToPlayer;
}
constexpr float_t const& GlobalNamespace::Hallway::__cordl_internal_get_sqrDistToPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sqrDistToPlayer;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_sqrDistToPlayer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sqrDistToPlayer = value;
}
constexpr bool& GlobalNamespace::Hallway::__cordl_internal_get_isLoadingNextRoom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLoadingNextRoom;
}
constexpr bool const& GlobalNamespace::Hallway::__cordl_internal_get_isLoadingNextRoom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLoadingNextRoom;
}
constexpr void GlobalNamespace::Hallway::__cordl_internal_set_isLoadingNextRoom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLoadingNextRoom = value;
}
inline bool GlobalNamespace::Hallway::get_isPlayerWithinHallway() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "get_isPlayerWithinHallway",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::Hallway::set_isPlayerWithinHallway(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "set_isPlayerWithinHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::Hallway::AttachToRoom(::GlobalNamespace::Room* room, ::GlobalNamespace::Theme* theme, ::GlobalNamespace::RoomLobby* attachedLobby,
                                                   ::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "AttachToRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomLobby*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room, theme, attachedLobby, direction);
}
inline void GlobalNamespace::Hallway::DestroySelfImmediate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DestroySelfImmediate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Hallway::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param forceUpdate: bool (default: false)
inline void GlobalNamespace::Hallway::DoInsideUpdate(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoInsideUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void GlobalNamespace::Hallway::SetIsPlayerWithinHallway(bool newIsPlayerWithinHallway) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsPlayerWithinHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsPlayerWithinHallway);
}
inline void GlobalNamespace::Hallway::DoLayerTriggerUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoLayerTriggerUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Hallway::SetLayer(int32_t newLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetLayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLayer);
}
inline bool GlobalNamespace::Hallway::IsWithinTransitionTrigger(::UnityEngine::Vector3 playerHeadPosition, bool useEnterTrigger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "IsWithinTransitionTrigger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, playerHeadPosition, useEnterTrigger);
}
inline void GlobalNamespace::Hallway::SetIsInTransitionTrigger(bool newIsInTrigger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsInTransitionTrigger",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsInTrigger);
}
inline void GlobalNamespace::Hallway::DoTransitionTrigger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DoTransitionTrigger",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Hallway::OnGoToRoomSuccess(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "OnGoToRoomSuccess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::Hallway::OnGoToRoomFailure(::StringW errType, bool isFatal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "OnGoToRoomFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType, isFatal);
}
inline void GlobalNamespace::Hallway::SetIsLoadingNextRoom(bool newIsLoadingNextRoom) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "SetIsLoadingNextRoom",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLoadingNextRoom);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Hallway::GetTravelAnchorPosition(bool isForward) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetTravelAnchorPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, isForward);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Hallway::GetOffsetFromTravelingAnchor(bool isForward, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetOffsetFromTravelingAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, isForward, position);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Hallway::GetSpawnPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetSpawnPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* GlobalNamespace::Hallway::GetMobileTravelAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetMobileTravelAnchors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MobileTravelAnchor> GlobalNamespace::Hallway::GetMobileHallwayTransitionAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(),
                                                                             "GetMobileHallwayTransitionAnchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MobileTravelAnchor>, false>(this, ___internal_method);
}
inline void GlobalNamespace::Hallway::RegisterRoomNavigationDisplay(::GlobalNamespace::RoomNavigationDisplay* roomNavigationDisplay, bool moveInstant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "RegisterRoomNavigationDisplay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigationDisplay*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomNavigationDisplay, moveInstant);
}
inline void GlobalNamespace::Hallway::DeregisterRoomNavigationDisplay(::GlobalNamespace::RoomNavigationDisplay* roomNavigationDisplay) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "DeregisterRoomNavigationDisplay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigationDisplay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomNavigationDisplay);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Hallway::GetWaypointPosition(int32_t index, int32_t waypointCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), "GetWaypointPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, index, waypointCount);
}
inline ::GlobalNamespace::Hallway* GlobalNamespace::Hallway::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Hallway*>());
}
inline void GlobalNamespace::Hallway::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Hallway*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Hallway::Hallway() {}
