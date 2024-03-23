#pragma once
#include "GlobalNamespace/zzzz__CosmeticsManager_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsManager_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticData_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticFilter_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticZone_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsZone_def.hpp"
#include "GlobalNamespace/zzzz__RecolorableCosmeticData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "zones", ty:
// "::ArrayW<::GlobalNamespace::CosmeticZone,::Array<::GlobalNamespace::CosmeticZone>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "invisibleToSelf", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "allowRecoloring", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "recolorFilterColorKey", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw::__CosmeticsManager__CosmeticDataRaw(::StringW key, ::UnityW<::UnityEngine::Mesh> mesh, ::UnityW<::UnityEngine::Material> material,
                                                                                                      ::ArrayW<::GlobalNamespace::CosmeticZone, ::Array<::GlobalNamespace::CosmeticZone>*> zones,
                                                                                                      bool invisibleToSelf, bool allowRecoloring, ::StringW recolorFilterColorKey) noexcept {
  this->key = key;
  this->mesh = mesh;
  this->material = material;
  this->zones = zones;
  this->invisibleToSelf = invisibleToSelf;
  this->allowRecoloring = allowRecoloring;
  this->recolorFilterColorKey = recolorFilterColorKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw::__CosmeticsManager__CosmeticDataRaw() {}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "zones", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "restrictive", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "manequinPrefab", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData::__CosmeticsManager__CosmeticFilterData(::StringW key,
                                                                                                            ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* zones,
                                                                                                            bool restrictive, ::UnityW<::UnityEngine::Sprite> icon,
                                                                                                            ::UnityW<::UnityEngine::GameObject> manequinPrefab) noexcept {
  this->key = key;
  this->zones = zones;
  this->restrictive = restrictive;
  this->icon = icon;
  this->manequinPrefab = manequinPrefab;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData::__CosmeticsManager__CosmeticFilterData() {}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.BuildCosmeticDatasDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsManager::BuildCosmeticDatasDictionary)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2761d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                               "BuildCosmeticDatasDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.AppendCosmeticDatasFromRawList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*,
                         ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>, ::UnityEngine::Material*)>(
        &::GlobalNamespace::CosmeticsManager::AppendCosmeticDatasFromRawList)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2761ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "AppendCosmeticDatasFromRawList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.ParseCosmeticsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&::GlobalNamespace::CosmeticsManager::ParseCosmeticsKey)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2762234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "ParseCosmeticsKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.BuildColoredCosmeticsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::GlobalNamespace::CosmeticsManager::BuildColoredCosmeticsKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2761738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "BuildColoredCosmeticsKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.TryGetCosmeticData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::CosmeticData*>)>(
    &::GlobalNamespace::CosmeticsManager::TryGetCosmeticData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2761bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetCosmeticData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.TryGetColorVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::GlobalNamespace::CosmeticsManager::TryGetColorVariants)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27622e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetColorVariants", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)()>(&::GlobalNamespace::CosmeticsManager::Start)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x27623f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)(::GlobalNamespace::AccountData*)>(
    &::GlobalNamespace::CosmeticsManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2762548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetDefaultActiveCosmeticsKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::CosmeticsManager::*)()>(
    &::GlobalNamespace::CosmeticsManager::GetDefaultActiveCosmeticsKeys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276264c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                               "GetDefaultActiveCosmeticsKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.TryCreateCosmetic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CosmeticsManager::*)(
    ::GlobalNamespace::CosmeticData*, ::UnityEngine::Transform*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*, ByRef<::UnityEngine::GameObject*>)>(
    &::GlobalNamespace::CosmeticsManager::TryCreateCosmetic)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2762654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryCreateCosmetic", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetCosmeticsFromKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::CosmeticsManager::GetCosmeticsFromKeys)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x276298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetCosmeticsFromKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetCosmeticsFromKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(&::GlobalNamespace::CosmeticsManager::GetCosmeticsFromKeys)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2762ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetCosmeticsFromKeys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetKeysFromCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(&::GlobalNamespace::CosmeticsManager::GetKeysFromCosmetics)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2762ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetKeysFromCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetConflicts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::StringW, ::System::Collections::Generic::List_1<::StringW>*, ByRef<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::CosmeticsManager::GetConflicts)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2762fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetConflicts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.FilterCosmeticsUsingAllowedZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*)>(
    &::GlobalNamespace::CosmeticsManager::FilterCosmeticsUsingAllowedZones)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x276341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterCosmeticsUsingAllowedZones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.FilterCosmeticsUsingBannedZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*)>(
    &::GlobalNamespace::CosmeticsManager::FilterCosmeticsUsingBannedZones)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x27636bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterCosmeticsUsingBannedZones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.FilterHeadCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(
        &::GlobalNamespace::CosmeticsManager::FilterHeadCosmetics)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2763960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterHeadCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.FilterVisibleToSelfCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(
        &::GlobalNamespace::CosmeticsManager::FilterVisibleToSelfCosmetics)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x27639d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterVisibleToSelfCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.FilterVisibleToSelfNoArmsCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*)>(
        &::GlobalNamespace::CosmeticsManager::FilterVisibleToSelfNoArmsCosmetics)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2763bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterVisibleToSelfNoArmsCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.SetMasterPlayerCosmeticsZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*)>(&::GlobalNamespace::CosmeticsManager::SetMasterPlayerCosmeticsZones)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2763c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "SetMasterPlayerCosmeticsZones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CosmeticsManager::*)(::GlobalNamespace::CosmeticZone, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::CosmeticsManager::IsWithinZone)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x276493c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "IsWithinZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticZone>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.IsWithinAnyZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CosmeticsManager::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::CosmeticsManager::IsWithinAnyZone)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2764b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "IsWithinAnyZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetPickupZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::CosmeticsZone> (::GlobalNamespace::CosmeticsManager::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::CosmeticsManager::GetPickupZone)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2764e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetPickupZone", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.OnActiveCosmeticsUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::CosmeticsManager::OnActiveCosmeticsUpdated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276263c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "OnActiveCosmeticsUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.RecalculateCosmeticsOccupyingZones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::CosmeticsManager::RecalculateCosmeticsOccupyingZones)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x276403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "RecalculateCosmeticsOccupyingZones", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.BuildCosmeticFiltersDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticsManager::BuildCosmeticFiltersDictionary)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2765150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                               "BuildCosmeticFiltersDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.TryGetCosmeticFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::CosmeticFilter*>)>(
    &::GlobalNamespace::CosmeticsManager::TryGetCosmeticFilter)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27652fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetCosmeticFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticFilter*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.GetUnfilteredCosmeticFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CosmeticFilter* (*)()>(&::GlobalNamespace::CosmeticsManager::GetUnfilteredCosmeticFilter)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x27653d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                               "GetUnfilteredCosmeticFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager.RecolorCosmeticsMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*, ::StringW, ::StringW)>(
    &::GlobalNamespace::CosmeticsManager::RecolorCosmeticsMesh)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2761350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "RecolorCosmeticsMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)()>(&::GlobalNamespace::CosmeticsManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27654e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsManager._Start_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CosmeticsManager::*)(::GlobalNamespace::AccountData*)>(
    &::GlobalNamespace::CosmeticsManager::_Start_b__18_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27659a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "<Start>b__18_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticPrefab;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_cosmeticPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticDatasRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticDatasRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> const&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticDatasRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticDatasRaw;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_cosmeticDatasRaw(
    ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticDatasRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CosmeticsManager::__cordl_internal_get_zipperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CosmeticsManager::__cordl_internal_get_zipperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperPrefab;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_zipperPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zipperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_zipperCosmeticDatasRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperCosmeticDatasRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> const&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_zipperCosmeticDatasRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zipperCosmeticDatasRaw;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_zipperCosmeticDatasRaw(
    ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zipperCosmeticDatasRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticsManager::__cordl_internal_get_defaultCosmeticsMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCosmeticsMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticsManager::__cordl_internal_get_defaultCosmeticsMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCosmeticsMaterial;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_defaultCosmeticsMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultCosmeticsMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::CosmeticsManager::__cordl_internal_get_defaultActiveCosmeticsKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultActiveCosmeticsKeys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::CosmeticsManager::__cordl_internal_get_defaultActiveCosmeticsKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultActiveCosmeticsKeys;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_defaultActiveCosmeticsKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultActiveCosmeticsKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>*&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_masterPlayerCosmeticsZones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerCosmeticsZones;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>*> const&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_masterPlayerCosmeticsZones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerCosmeticsZones;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_masterPlayerCosmeticsZones(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticZone, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayerCosmeticsZones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData& GlobalNamespace::CosmeticsManager::__cordl_internal_get_unfilteredCosmeticFilterData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unfilteredCosmeticFilterData;
}
constexpr ::GlobalNamespace::__CosmeticsManager__CosmeticFilterData const& GlobalNamespace::CosmeticsManager::__cordl_internal_get_unfilteredCosmeticFilterData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unfilteredCosmeticFilterData;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_unfilteredCosmeticFilterData(::GlobalNamespace::__CosmeticsManager__CosmeticFilterData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unfilteredCosmeticFilterData = value;
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*>&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticFilterDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticFilterDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> const&
GlobalNamespace::CosmeticsManager::__cordl_internal_get_cosmeticFilterDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cosmeticFilterDatas;
}
constexpr void GlobalNamespace::CosmeticsManager::__cordl_internal_set_cosmeticFilterDatas(
    ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticFilterData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cosmeticFilterDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_cosmeticDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*, "cosmeticDatas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* GlobalNamespace::CosmeticsManager::getStaticF_cosmeticDatas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*, "cosmeticDatas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_recolorableCosmeticDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>*, "recolorableCosmeticDatas",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>* GlobalNamespace::CosmeticsManager::getStaticF_recolorableCosmeticDatas() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RecolorableCosmeticData*>*, "recolorableCosmeticDatas",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_headZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*, "headZones",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* GlobalNamespace::CosmeticsManager::getStaticF_headZones() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*, "headZones",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_armZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*, "armZones",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* GlobalNamespace::CosmeticsManager::getStaticF_armZones() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*, "armZones",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_unfilteredCosmeticFilter(::GlobalNamespace::CosmeticFilter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::CosmeticFilter*, "unfilteredCosmeticFilter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::GlobalNamespace::CosmeticFilter*>(value));
}
inline ::GlobalNamespace::CosmeticFilter* GlobalNamespace::CosmeticsManager::getStaticF_unfilteredCosmeticFilter() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::CosmeticFilter*, "unfilteredCosmeticFilter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::setStaticF_cosmeticFilters(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>*, "cosmeticFilters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>* GlobalNamespace::CosmeticsManager::getStaticF_cosmeticFilters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticFilter*>*, "cosmeticFilters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get>();
}
inline void GlobalNamespace::CosmeticsManager::BuildCosmeticDatasDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                             "BuildCosmeticDatasDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticsManager::AppendCosmeticDatasFromRawList(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>* cosmeticDatas,
    ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*> cosmeticDatasRaw, ::UnityEngine::Material* fallbackMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "AppendCosmeticDatasFromRawList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::CosmeticData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw, ::Array<::GlobalNamespace::__CosmeticsManager__CosmeticDataRaw>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cosmeticDatas, cosmeticDatasRaw, fallbackMaterial);
}
inline void GlobalNamespace::CosmeticsManager::ParseCosmeticsKey(::StringW cosmeticKey, ByRef<::StringW> baseCosmeticsKey, ByRef<::StringW> colorKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "ParseCosmeticsKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cosmeticKey, baseCosmeticsKey, colorKey);
}
inline ::StringW GlobalNamespace::CosmeticsManager::BuildColoredCosmeticsKey(::StringW baseCosmeticsKey, ::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "BuildColoredCosmeticsKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, baseCosmeticsKey, colorKey);
}
inline bool GlobalNamespace::CosmeticsManager::TryGetCosmeticData(::StringW key, ByRef<::GlobalNamespace::CosmeticData*> cosmeticData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetCosmeticData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, cosmeticData);
}
inline bool GlobalNamespace::CosmeticsManager::TryGetColorVariants(::StringW key, ByRef<::System::Collections::Generic::List_1<::StringW>*> colorVariants) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetColorVariants", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, colorVariants);
}
inline void GlobalNamespace::CosmeticsManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountData);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::CosmeticsManager::GetDefaultActiveCosmeticsKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                             "GetDefaultActiveCosmeticsKeys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticsManager::TryCreateCosmetic(::GlobalNamespace::CosmeticData* cosmeticData, ::UnityEngine::Transform* container,
                                                                 ::UnityEngine::SkinnedMeshRenderer* avatarReference, ::UnityEngine::Transform* zipperAnchor,
                                                                 ByRef<::UnityEngine::GameObject*> cosmetic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryCreateCosmetic", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SkinnedMeshRenderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cosmeticData, container, avatarReference, zipperAnchor, cosmetic);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::GetCosmeticsFromKeys(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetCosmeticsFromKeys", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmeticKeys);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* GlobalNamespace::CosmeticsManager::GetCosmeticsFromKeys(::ArrayW<::StringW, ::Array<::StringW>*> cosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetCosmeticsFromKeys", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmeticKeys);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::CosmeticsManager::GetKeysFromCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetKeysFromCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, cosmetics);
}
inline bool GlobalNamespace::CosmeticsManager::GetConflicts(::StringW cosmeticKeyToAdd, ::System::Collections::Generic::List_1<::StringW>* equippedCosmeticKeys,
                                                            ByRef<::System::Collections::Generic::List_1<::StringW>*> conflictingEquippedCosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetConflicts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cosmeticKeyToAdd, equippedCosmeticKeys, conflictingEquippedCosmeticKeys);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::FilterCosmeticsUsingAllowedZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics,
                                                                    ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* allowedZones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterCosmeticsUsingAllowedZones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmetics, allowedZones);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::FilterCosmeticsUsingBannedZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics,
                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* bannedZones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterCosmeticsUsingBannedZones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmetics, bannedZones);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::FilterHeadCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterHeadCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmetics);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::FilterVisibleToSelfCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterVisibleToSelfCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmetics);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*
GlobalNamespace::CosmeticsManager::FilterVisibleToSelfNoArmsCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "FilterVisibleToSelfNoArmsCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*, false>(nullptr, ___internal_method, cosmetics);
}
inline void GlobalNamespace::CosmeticsManager::SetMasterPlayerCosmeticsZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>* cosmeticsZones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "SetMasterPlayerCosmeticsZones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticsZone>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cosmeticsZones);
}
inline bool GlobalNamespace::CosmeticsManager::IsWithinZone(::GlobalNamespace::CosmeticZone zone, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "IsWithinZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CosmeticZone>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, zone, position);
}
inline bool GlobalNamespace::CosmeticsManager::IsWithinAnyZone(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "IsWithinAnyZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline ::UnityW<::GlobalNamespace::CosmeticsZone> GlobalNamespace::CosmeticsManager::GetPickupZone(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "GetPickupZone", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CosmeticsZone>, false>(this, ___internal_method, position);
}
inline void GlobalNamespace::CosmeticsManager::OnActiveCosmeticsUpdated(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                                                        ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "OnActiveCosmeticsUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newActiveCosmeticKeys, removedConflictingCosmeticKeys);
}
inline void GlobalNamespace::CosmeticsManager::RecalculateCosmeticsOccupyingZones(::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "RecalculateCosmeticsOccupyingZones", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeCosmeticKeys);
}
inline void GlobalNamespace::CosmeticsManager::BuildCosmeticFiltersDictionary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                             "BuildCosmeticFiltersDictionary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::CosmeticsManager::TryGetCosmeticFilter(::StringW key, ByRef<::GlobalNamespace::CosmeticFilter*> cosmeticFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "TryGetCosmeticFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::CosmeticFilter*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key, cosmeticFilter);
}
inline ::GlobalNamespace::CosmeticFilter* GlobalNamespace::CosmeticsManager::GetUnfilteredCosmeticFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(),
                                                                             "GetUnfilteredCosmeticFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticFilter*, false>(nullptr, ___internal_method);
}
/// @param filterColorKey: ::StringW (default: nullptr)
inline ::UnityW<::UnityEngine::Mesh> GlobalNamespace::CosmeticsManager::RecolorCosmeticsMesh(::UnityEngine::Mesh* mesh, ::StringW colorKey, ::StringW filterColorKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "RecolorCosmeticsMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method, mesh, colorKey, filterColorKey);
}
inline ::GlobalNamespace::CosmeticsManager* GlobalNamespace::CosmeticsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CosmeticsManager*>());
}
inline void GlobalNamespace::CosmeticsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticsManager::_Start_b__18_0(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CosmeticsManager*>::get(), "<Start>b__18_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsManager::CosmeticsManager() {}
