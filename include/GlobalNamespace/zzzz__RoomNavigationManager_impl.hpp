#pragma once
#include "GlobalNamespace/zzzz__RoomNavigation_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__RoomNavigationManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatusManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.GetNavigationSignPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::RoomNavigationManager::*)(
    ::GlobalNamespace::__RoomNavigation__DestinationType)>(&::GlobalNamespace::RoomNavigationManager::GetNavigationSignPrefab)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x175cd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "GetNavigationSignPrefab", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)()>(&::GlobalNamespace::RoomNavigationManager::Start)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x175e20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.InitializeFriendNavigations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::RoomNavigationManager::InitializeFriendNavigations)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x175e72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(),
                                                                               "InitializeFriendNavigations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnFriendsListUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::RoomNavigationManager::OnFriendsListUpdated)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x175ed04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnFriendsListUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnPlayerBecameOnline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus)>(
    &::GlobalNamespace::RoomNavigationManager::OnPlayerBecameOnline)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x175f6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerBecameOnline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnPlayerBecameOffline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::RoomNavigationManager::OnPlayerBecameOffline)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1760068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerBecameOffline",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnOnlinePlayerStatusesUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*)>(
    &::GlobalNamespace::RoomNavigationManager::OnOnlinePlayerStatusesUpdated)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x176014c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnOnlinePlayerStatusesUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.UpdateFriendNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, ::GlobalNamespace::RoomNavigation*)>(
    &::GlobalNamespace::RoomNavigationManager::UpdateFriendNavigation)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x175f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "UpdateFriendNavigation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.UpdateAllFriendNavigations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::RoomNavigationManager::UpdateAllFriendNavigations)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17605b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(),
                                                                               "UpdateAllFriendNavigations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.ShouldHaveFriendNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, ::StringW)>(
    &::GlobalNamespace::RoomNavigationManager::ShouldHaveFriendNavigation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x175f8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "ShouldHaveFriendNavigation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.TryCreateNavigationToTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::GlobalNamespace::RoomNavigation*>)>(
    &::GlobalNamespace::RoomNavigationManager::TryCreateNavigationToTransition)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1760694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryCreateNavigationToTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.ShouldHaveNavigationToTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::RoomNavigationManager::ShouldHaveNavigationToTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1760990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "ShouldHaveNavigationToTransition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.TryCreateNavigationToOfficialRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::GlobalNamespace::RoomNavigation*>)>(
    &::GlobalNamespace::RoomNavigationManager::TryCreateNavigationToOfficialRooms)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x17609f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryCreateNavigationToOfficialRooms", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.ShouldHaveNavigationToOfficialRooms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::RoomNavigationManager::ShouldHaveNavigationToOfficialRooms)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1760c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "ShouldHaveNavigationToOfficialRooms",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnPlayerDataAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData)>(&::GlobalNamespace::RoomNavigationManager::OnPlayerDataAdded)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x175f4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::RoomNavigationManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x175e3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.SetRoomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)(::GlobalNamespace::RoomMap*)>(
    &::GlobalNamespace::RoomNavigationManager::SetRoomMap)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x1760d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "SetRoomMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.TryBeginNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::__RoomNavigation__DestinationType, ::StringW, bool,
                                                                                           ByRef<::GlobalNamespace::RoomNavigation*>)>(&::GlobalNamespace::RoomNavigationManager::TryBeginNavigation)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x175fbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryBeginNavigation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnNavigationCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)(::GlobalNamespace::RoomNavigation*)>(
    &::GlobalNamespace::RoomNavigationManager::OnNavigationCanceled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x175e030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnNavigationCanceled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.RemoveActiveNavigationFromAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)(::GlobalNamespace::RoomNavigation*)>(
    &::GlobalNamespace::RoomNavigationManager::RemoveActiveNavigationFromAll)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1760f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "RemoveActiveNavigationFromAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager.OnBanned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)()>(&::GlobalNamespace::RoomNavigationManager::OnBanned)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1761094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnBanned",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigationManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigationManager::*)()>(&::GlobalNamespace::RoomNavigationManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17610e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomNavigationManager::__cordl_internal_get_roomNavigationDisplayPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNavigationDisplayPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomNavigationManager::__cordl_internal_get_roomNavigationDisplayPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomNavigationDisplayPrefab;
}
constexpr void GlobalNamespace::RoomNavigationManager::__cordl_internal_set_roomNavigationDisplayPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomNavigationDisplayPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType& GlobalNamespace::RoomNavigationManager::__cordl_internal_get_destinationTypeReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTypeReference;
}
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType const& GlobalNamespace::RoomNavigationManager::__cordl_internal_get_destinationTypeReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTypeReference;
}
constexpr void GlobalNamespace::RoomNavigationManager::__cordl_internal_set_destinationTypeReference(::GlobalNamespace::__RoomNavigation__DestinationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTypeReference = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::RoomNavigationManager::__cordl_internal_get_navigationSignPrefabsByType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSignPrefabsByType;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::RoomNavigationManager::__cordl_internal_get_navigationSignPrefabsByType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationSignPrefabsByType;
}
constexpr void
GlobalNamespace::RoomNavigationManager::__cordl_internal_set_navigationSignPrefabsByType(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___navigationSignPrefabsByType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_activeNavigations(::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>*, "activeNavigations",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>* GlobalNamespace::RoomNavigationManager::getStaticF_activeNavigations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::RoomNavigation*>*, "activeNavigations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_curRoomMap(::GlobalNamespace::RoomMap* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RoomMap*, "curRoomMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(
      std::forward<::GlobalNamespace::RoomMap*>(value));
}
inline ::GlobalNamespace::RoomMap* GlobalNamespace::RoomNavigationManager::getStaticF_curRoomMap() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RoomMap*, "curRoomMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_friendNavigations(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>*, "friendNavigations",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>* GlobalNamespace::RoomNavigationManager::getStaticF_friendNavigations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomNavigation*>*, "friendNavigations",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_metPlayerAccountIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "metPlayerAccountIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::RoomNavigationManager::getStaticF_metPlayerAccountIDs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "metPlayerAccountIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_hasInitializedFriendNavigations(bool value) {
  ::cordl_internals::setStaticField<bool, "hasInitializedFriendNavigations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::RoomNavigationManager::getStaticF_hasInitializedFriendNavigations() {
  return ::cordl_internals::getStaticField<bool, "hasInitializedFriendNavigations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_navigationToTransition(::GlobalNamespace::RoomNavigation* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RoomNavigation*, "navigationToTransition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(std::forward<::GlobalNamespace::RoomNavigation*>(value));
}
inline ::GlobalNamespace::RoomNavigation* GlobalNamespace::RoomNavigationManager::getStaticF_navigationToTransition() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RoomNavigation*, "navigationToTransition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline void GlobalNamespace::RoomNavigationManager::setStaticF_navigationToOfficialRooms(::GlobalNamespace::RoomNavigation* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RoomNavigation*, "navigationToOfficialRooms",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>(std::forward<::GlobalNamespace::RoomNavigation*>(value));
}
inline ::GlobalNamespace::RoomNavigation* GlobalNamespace::RoomNavigationManager::getStaticF_navigationToOfficialRooms() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RoomNavigation*, "navigationToOfficialRooms",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get>();
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::RoomNavigationManager::GetNavigationSignPrefab(::GlobalNamespace::__RoomNavigation__DestinationType destinationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "GetNavigationSignPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, destinationType);
}
inline void GlobalNamespace::RoomNavigationManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationManager::InitializeFriendNavigations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(),
                                                                             "InitializeFriendNavigations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationManager::OnFriendsListUpdated(::System::Collections::Generic::List_1<::StringW>* friendAccountIDs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnFriendsListUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, friendAccountIDs);
}
inline void GlobalNamespace::RoomNavigationManager::OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerBecameOnline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, accountID, initialStatus);
}
inline void GlobalNamespace::RoomNavigationManager::OnPlayerBecameOffline(::StringW accountID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerBecameOffline",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, accountID);
}
inline void GlobalNamespace::RoomNavigationManager::OnOnlinePlayerStatusesUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* playerStatuses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnOnlinePlayerStatusesUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerStatuses);
}
inline void GlobalNamespace::RoomNavigationManager::UpdateFriendNavigation(::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus, ::GlobalNamespace::RoomNavigation* navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "UpdateFriendNavigation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerStatus, navigation);
}
inline void GlobalNamespace::RoomNavigationManager::UpdateAllFriendNavigations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(),
                                                                             "UpdateAllFriendNavigations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomNavigationManager::ShouldHaveFriendNavigation(::GlobalNamespace::__PlayerStatusManager__PlayerStatus friendStatus, ::StringW curRoomMapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "ShouldHaveFriendNavigation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, friendStatus, curRoomMapKey);
}
inline bool GlobalNamespace::RoomNavigationManager::TryCreateNavigationToTransition(ByRef<::GlobalNamespace::RoomNavigation*> navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryCreateNavigationToTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, navigation);
}
inline bool GlobalNamespace::RoomNavigationManager::ShouldHaveNavigationToTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(),
                                                                             "ShouldHaveNavigationToTransition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::RoomNavigationManager::TryCreateNavigationToOfficialRooms(ByRef<::GlobalNamespace::RoomNavigation*> navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryCreateNavigationToOfficialRooms", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, navigation);
}
inline bool GlobalNamespace::RoomNavigationManager::ShouldHaveNavigationToOfficialRooms() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "ShouldHaveNavigationToOfficialRooms",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomNavigationManager::OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerData);
}
inline void GlobalNamespace::RoomNavigationManager::OnRoomLoaded(::GlobalNamespace::Room* room) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room);
}
inline void GlobalNamespace::RoomNavigationManager::SetRoomMap(::GlobalNamespace::RoomMap* roomMap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "SetRoomMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomMap);
}
inline bool GlobalNamespace::RoomNavigationManager::TryBeginNavigation(::StringW roomMapKey, ::StringW roomKey, ::StringW destinationName,
                                                                       ::GlobalNamespace::__RoomNavigation__DestinationType destinationType, ::StringW destinationID, bool persistant,
                                                                       ByRef<::GlobalNamespace::RoomNavigation*> navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "TryBeginNavigation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::RoomNavigation*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, roomMapKey, roomKey, destinationName, destinationType, destinationID, persistant, navigation);
}
inline void GlobalNamespace::RoomNavigationManager::OnNavigationCanceled(::GlobalNamespace::RoomNavigation* navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnNavigationCanceled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigation);
}
inline void GlobalNamespace::RoomNavigationManager::RemoveActiveNavigationFromAll(::GlobalNamespace::RoomNavigation* navigation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "RemoveActiveNavigationFromAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomNavigation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigation);
}
inline void GlobalNamespace::RoomNavigationManager::OnBanned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), "OnBanned",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomNavigationManager* GlobalNamespace::RoomNavigationManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomNavigationManager*>());
}
inline void GlobalNamespace::RoomNavigationManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigationManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomNavigationManager::RoomNavigationManager() {}
