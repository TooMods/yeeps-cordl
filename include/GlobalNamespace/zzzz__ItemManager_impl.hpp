#pragma once
#include "GlobalNamespace/zzzz__ItemTransformationData_impl.hpp"
#include "GlobalNamespace/zzzz__Item_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__ItemManager_def.hpp"
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "GlobalNamespace/zzzz__ItemManager_def.hpp"
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__PlayerItemManager_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::GlobalNamespace::__Item__Type", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ItemManager__ItemData::__ItemManager__ItemData(::StringW key, ::GlobalNamespace::__Item__Type type, ::UnityW<::UnityEngine::GameObject> prefab) noexcept {
  this->key = key;
  this->type = type;
  this->prefab = prefab;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ItemManager__ItemData::__ItemManager__ItemData() {}
//  Writing Method size for method: ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2aacc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::*)(::GlobalNamespace::PlayerItemManager*)>(
    &::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aacd7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::*)(::GlobalNamespace::PlayerItemManager*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2aacd90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aacdb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>(object, method));
}
inline void GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::Invoke(::GlobalNamespace::PlayerItemManager* playerItemManager) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerItemManager);
}
inline ::System::IAsyncResult* GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::BeginInvoke(::GlobalNamespace::PlayerItemManager* playerItemManager, ::System::AsyncCallback* callback,
                                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, playerItemManager, callback, object);
}
inline void GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated::__ItemManager__OnPlayerItemManagerCreated() {}
// Ctor Parameters [CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "maxCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw::__ItemManager__ItemRestrictionDataRaw(::StringW itemKey, int32_t maxCount) noexcept {
  this->itemKey = itemKey;
  this->maxCount = maxCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw::__ItemManager__ItemRestrictionDataRaw() {}
// Ctor Parameters [CppParam { name: "itemID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "itemTransformationData", ty: "::GlobalNamespace::ItemTransformationData", modifiers: "", def_value: Some("{}") }, CppParam { name: "customParameters", ty:
// "::GlobalNamespace::__Item__CustomParameters*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ItemManager__QueuedItemCreation::__ItemManager__QueuedItemCreation(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                                                                                  ::GlobalNamespace::__Item__CustomParameters* customParameters) noexcept {
  this->itemID = itemID;
  this->itemKey = itemKey;
  this->itemTransformationData = itemTransformationData;
  this->customParameters = customParameters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ItemManager__QueuedItemCreation::__ItemManager__QueuedItemCreation() {}
//  Writing Method size for method: ::GlobalNamespace::ItemManager.BuildItemDatasDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::ItemManager::BuildItemDatasDictionary)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2aaaff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(),
                                                                               "BuildItemDatasDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TryGetItemData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::__ItemManager__ItemData>)>(
    &::GlobalNamespace::ItemManager::TryGetItemData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aaa024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItemData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__ItemManager__ItemData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.get_masterPlayerItemManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerItemManager* (::GlobalNamespace::ItemManager::*)()>(
    &::GlobalNamespace::ItemManager::get_masterPlayerItemManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aab17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(),
                                                                               "get_masterPlayerItemManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.set_masterPlayerItemManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::GlobalNamespace::PlayerItemManager*)>(
    &::GlobalNamespace::ItemManager::set_masterPlayerItemManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aab184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "set_masterPlayerItemManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.get_hasMasterPlayerItemManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ItemManager::*)()>(&::GlobalNamespace::ItemManager::get_hasMasterPlayerItemManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2aab18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(),
                                                                               "get_hasMasterPlayerItemManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)()>(&::GlobalNamespace::ItemManager::Start)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2aab19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::GlobalNamespace::Room*)>(&::GlobalNamespace::ItemManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aab8e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.OnRoomUnloaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)()>(&::GlobalNamespace::ItemManager::OnRoomUnloaded)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2aab8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnRoomUnloaded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.OnPlayerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::ItemManager::OnPlayerCreated)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2aab658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerCreated", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.OnPlayerDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::StringW)>(&::GlobalNamespace::ItemManager::OnPlayerDestroyed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2aabe80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerDestroyed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.OnPlayerSwitchedUserIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::ItemManager::OnPlayerSwitchedUserIDs)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2aac03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerSwitchedUserIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TryGetPlayerItemManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ItemManager::*)(::StringW, ByRef<::GlobalNamespace::PlayerItemManager*>)>(
    &::GlobalNamespace::ItemManager::TryGetPlayerItemManager)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2aaa258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetPlayerItemManager", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerItemManager*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.GenerateNewItemID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::ItemManager::GenerateNewItemID)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aa9bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "GenerateNewItemID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.RegisterItemDespawnZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::GlobalNamespace::ItemDespawnZone*)>(
    &::GlobalNamespace::ItemManager::RegisterItemDespawnZone)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2aa7424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RegisterItemDespawnZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemDespawnZone*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.DeregisterItemDespawnZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)(::GlobalNamespace::ItemDespawnZone*)>(
    &::GlobalNamespace::ItemManager::DeregisterItemDespawnZone)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2aa7684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "DeregisterItemDespawnZone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemDespawnZone*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.GetOverlappingDespawnZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ItemDespawnZone> (::GlobalNamespace::ItemManager::*)(
    ::GlobalNamespace::__Item__Type, ::UnityEngine::Vector3)>(&::GlobalNamespace::ItemManager::GetOverlappingDespawnZone)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2aa4ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "GetOverlappingDespawnZone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TryGetItemRestrictionMaxCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int32_t>)>(&::GlobalNamespace::ItemManager::TryGetItemRestrictionMaxCount)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2aa813c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItemRestrictionMaxCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.QueueCreateItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::ItemTransformationData, ::GlobalNamespace::__Item__CustomParameters*)>(&::GlobalNamespace::ItemManager::QueueCreateItem)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2aac3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "QueueCreateItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemTransformationData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.RemoveQueuedItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::ItemManager::RemoveQueuedItem)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2aac62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RemoveQueuedItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TransferQueuedItemsForUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::ItemManager::TransferQueuedItemsForUser)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2aac160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TransferQueuedItemsForUser", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.ExpressQueuedItemCreationsForUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::PlayerItemManager*)>(
    &::GlobalNamespace::ItemManager::ExpressQueuedItemCreationsForUser)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2aabbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "ExpressQueuedItemCreationsForUser", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.RemoveQueuedItemsForUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ItemManager::RemoveQueuedItemsForUser)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2aabf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RemoveQueuedItemsForUser",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TryCreateVisualOnlyDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ItemManager::*)(
    ::StringW, ::GlobalNamespace::__Item__CustomParameters*, ::UnityEngine::Transform*, ByRef<::UnityEngine::Vector3>, ByRef<float_t>, ByRef<::UnityEngine::GameObject*>)>(
    &::GlobalNamespace::ItemManager::TryCreateVisualOnlyDuplicate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2aa7b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryCreateVisualOnlyDuplicate", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 6>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.TryGetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ItemManager::*)(::StringW, ByRef<::GlobalNamespace::Item*>)>(
    &::GlobalNamespace::ItemManager::TryGetItem)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2aac7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItem", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager.CalculateWorldStuffingCountOfAllItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ItemManager::*)()>(
    &::GlobalNamespace::ItemManager::CalculateWorldStuffingCountOfAllItems)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2aac974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "CalculateWorldStuffingCountOfAllItems",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemManager::*)()>(&::GlobalNamespace::ItemManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2aacad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*>& GlobalNamespace::ItemManager::__cordl_internal_get_itemDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> const& GlobalNamespace::ItemManager::__cordl_internal_get_itemDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDatas;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_itemDatas(::ArrayW<::GlobalNamespace::__ItemManager__ItemData, ::Array<::GlobalNamespace::__ItemManager__ItemData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>*& GlobalNamespace::ItemManager::__cordl_internal_get_playerItemManagers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerItemManagers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>*> const&
GlobalNamespace::ItemManager::__cordl_internal_get_playerItemManagers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerItemManagers;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_playerItemManagers(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerItemManager*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerItemManagers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerItemManager*& GlobalNamespace::ItemManager::__cordl_internal_get__masterPlayerItemManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterPlayerItemManager_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerItemManager*> const& GlobalNamespace::ItemManager::__cordl_internal_get__masterPlayerItemManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterPlayerItemManager_k__BackingField;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set__masterPlayerItemManager_k__BackingField(::GlobalNamespace::PlayerItemManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterPlayerItemManager_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*& GlobalNamespace::ItemManager::__cordl_internal_get_onPlayerItemManagerCreatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerItemManagerCreatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*> const&
GlobalNamespace::ItemManager::__cordl_internal_get_onPlayerItemManagerCreatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerItemManagerCreatedCallbacks;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_onPlayerItemManagerCreatedCallbacks(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerItemManagerCreatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*& GlobalNamespace::ItemManager::__cordl_internal_get_onMasterPlayerItemManagerCreatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerItemManagerCreatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated*> const&
GlobalNamespace::ItemManager::__cordl_internal_get_onMasterPlayerItemManagerCreatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerItemManagerCreatedCallbacks;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_onMasterPlayerItemManagerCreatedCallbacks(::GlobalNamespace::__ItemManager__OnPlayerItemManagerCreated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMasterPlayerItemManagerCreatedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>*&
GlobalNamespace::ItemManager::__cordl_internal_get_itemDespawnZones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDespawnZones;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>*> const&
GlobalNamespace::ItemManager::__cordl_internal_get_itemDespawnZones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDespawnZones;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_itemDespawnZones(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__Item__Type, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ItemDespawnZone>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemDespawnZones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*>&
GlobalNamespace::ItemManager::__cordl_internal_get_itemRestrictionDatasRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemRestrictionDatasRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> const&
GlobalNamespace::ItemManager::__cordl_internal_get_itemRestrictionDatasRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemRestrictionDatasRaw;
}
constexpr void GlobalNamespace::ItemManager::__cordl_internal_set_itemRestrictionDatasRaw(
    ::ArrayW<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw, ::Array<::GlobalNamespace::__ItemManager__ItemRestrictionDataRaw>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemRestrictionDatasRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ItemManager::setStaticF_itemDatasDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>*, "itemDatasDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>* GlobalNamespace::ItemManager::getStaticF_itemDatasDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__ItemManager__ItemData>*, "itemDatasDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>();
}
inline void GlobalNamespace::ItemManager::setStaticF_itemRestrictionMaxCounts(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "itemRestrictionMaxCounts",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* GlobalNamespace::ItemManager::getStaticF_itemRestrictionMaxCounts() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "itemRestrictionMaxCounts",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>();
}
inline void GlobalNamespace::ItemManager::setStaticF_queuedItemCreations(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>*,
                                    "queuedItemCreations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>*
GlobalNamespace::ItemManager::getStaticF_queuedItemCreations() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__ItemManager__QueuedItemCreation>*>*,
                                           "queuedItemCreations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get>();
}
inline void GlobalNamespace::ItemManager::BuildItemDatasDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "BuildItemDatasDictionary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ItemManager::TryGetItemData(::StringW itemKey, ByRef<::GlobalNamespace::__ItemManager__ItemData> itemData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItemData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__ItemManager__ItemData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, itemKey, itemData);
}
inline ::GlobalNamespace::PlayerItemManager* GlobalNamespace::ItemManager::get_masterPlayerItemManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(),
                                                                             "get_masterPlayerItemManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerItemManager*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemManager::set_masterPlayerItemManager(::GlobalNamespace::PlayerItemManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "set_masterPlayerItemManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ItemManager::get_hasMasterPlayerItemManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(),
                                                                             "get_hasMasterPlayerItemManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemManager::OnRoomLoaded(::GlobalNamespace::Room* room) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room);
}
inline void GlobalNamespace::ItemManager::OnRoomUnloaded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnRoomUnloaded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemManager::OnPlayerCreated(::GlobalNamespace::Player* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerCreated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::ItemManager::OnPlayerDestroyed(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerDestroyed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline void GlobalNamespace::ItemManager::OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "OnPlayerSwitchedUserIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldUserID, newUserID);
}
inline bool GlobalNamespace::ItemManager::TryGetPlayerItemManager(::StringW userID, ByRef<::GlobalNamespace::PlayerItemManager*> playerItemManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetPlayerItemManager", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerItemManager*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, userID, playerItemManager);
}
inline ::StringW GlobalNamespace::ItemManager::GenerateNewItemID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "GenerateNewItemID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ItemManager::RegisterItemDespawnZone(::GlobalNamespace::ItemDespawnZone* itemDespawnZone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RegisterItemDespawnZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemDespawnZone*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemDespawnZone);
}
inline void GlobalNamespace::ItemManager::DeregisterItemDespawnZone(::GlobalNamespace::ItemDespawnZone* itemDespawnZone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "DeregisterItemDespawnZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemDespawnZone*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemDespawnZone);
}
inline ::UnityW<::GlobalNamespace::ItemDespawnZone> GlobalNamespace::ItemManager::GetOverlappingDespawnZone(::GlobalNamespace::__Item__Type itemType, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "GetOverlappingDespawnZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ItemDespawnZone>, false>(this, ___internal_method, itemType, position);
}
inline bool GlobalNamespace::ItemManager::TryGetItemRestrictionMaxCount(::StringW itemKey, ByRef<int32_t> maxCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItemRestrictionMaxCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, itemKey, maxCount);
}
inline void GlobalNamespace::ItemManager::QueueCreateItem(::StringW userID, ::StringW itemID, ::StringW itemKey, ::GlobalNamespace::ItemTransformationData itemTransformationData,
                                                          ::GlobalNamespace::__Item__CustomParameters* customParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "QueueCreateItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ItemTransformationData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, itemID, itemKey, itemTransformationData, customParameters);
}
inline void GlobalNamespace::ItemManager::RemoveQueuedItem(::StringW userID, ::StringW itemID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RemoveQueuedItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, itemID);
}
inline void GlobalNamespace::ItemManager::TransferQueuedItemsForUser(::StringW oldUserID, ::StringW newUserID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TransferQueuedItemsForUser", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oldUserID, newUserID);
}
inline void GlobalNamespace::ItemManager::ExpressQueuedItemCreationsForUser(::StringW userID, ::GlobalNamespace::PlayerItemManager* playerItemManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "ExpressQueuedItemCreationsForUser", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, playerItemManager);
}
inline void GlobalNamespace::ItemManager::RemoveQueuedItemsForUser(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "RemoveQueuedItemsForUser", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline bool GlobalNamespace::ItemManager::TryCreateVisualOnlyDuplicate(::StringW itemKey, ::GlobalNamespace::__Item__CustomParameters* customParameters, ::UnityEngine::Transform* parent,
                                                                       ByRef<::UnityEngine::Vector3> boundingCenter, ByRef<float_t> boundingRadius, ByRef<::UnityEngine::GameObject*> duplicate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryCreateVisualOnlyDuplicate", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 6>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__CustomParameters*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemKey, customParameters, parent, boundingCenter, boundingRadius, duplicate);
}
inline bool GlobalNamespace::ItemManager::TryGetItem(::StringW itemID, ByRef<::GlobalNamespace::Item*> item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "TryGetItem", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Item*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemID, item);
}
inline int32_t GlobalNamespace::ItemManager::CalculateWorldStuffingCountOfAllItems() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), "CalculateWorldStuffingCountOfAllItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ItemManager* GlobalNamespace::ItemManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ItemManager*>());
}
inline void GlobalNamespace::ItemManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ItemManager::ItemManager() {}
