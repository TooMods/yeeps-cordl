#pragma once
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_impl.hpp"
#include "GlobalNamespace/zzzz__SetPoolItemsUtility_impl.hpp"
#include "GlobalNamespace/zzzz__SetPoolItemsUtility_def.hpp"
#include "GlobalNamespace/zzzz__SetPoolItemsUtility_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity::__SetPoolItemsUtility__Rarity(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity::__SetPoolItemsUtility__Rarity() {}
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity GlobalNamespace::__SetPoolItemsUtility__Rarity::Common{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity GlobalNamespace::__SetPoolItemsUtility__Rarity::Rare{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity GlobalNamespace::__SetPoolItemsUtility__Rarity::Epic{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__Rarity GlobalNamespace::__SetPoolItemsUtility__Rarity::Legendary{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType::__SetPoolItemsUtility__PoolType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType::__SetPoolItemsUtility__PoolType() {}
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::Basics{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::Outfits{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::Heads{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::Hairs{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::Zippers{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::TechWeb{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::PrivateRoomThemes{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::EasyChallenges{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::HardChallenges{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::OutfitsSnow{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::HeadsSnow{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::HairsSnow{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType GlobalNamespace::__SetPoolItemsUtility__PoolType::ZippersSnow{ static_cast<int32_t>(0xc) };
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.GetFunctionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SetPoolItemsUtility::*)()>(
    &::GlobalNamespace::SetPoolItemsUtility::GetFunctionEndpoint)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x276d938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.GetInputJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::SetPoolItemsUtility::*)(::StringW)>(
    &::GlobalNamespace::SetPoolItemsUtility::GetInputJSON)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x276d978;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.ConstructInputJSONForCosmetics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::OVRSimpleJSON::JSONNode*,
    ::ArrayW<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>, ::Array<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>>*>)>(
    &::GlobalNamespace::SetPoolItemsUtility::ConstructInputJSONForCosmetics)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2771ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "ConstructInputJSONForCosmetics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>,
                                                                           ::Array<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForBasics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForBasics)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x276dbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForBasics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForOutfits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForOutfits)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x276e09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForOutfits", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForHeads
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForHeads)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x276e660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHeads", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForHairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForHairs)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x276ef64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHairs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForZippers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForZippers)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x276f4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForZippers", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForTechWeb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForTechWeb)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x276fd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForTechWeb", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForPrivateRoomThemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForPrivateRoomThemes)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2770418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForPrivateRoomThemes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForEasyChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForEasyChallenges)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x27706a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForEasyChallenges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForHardChallenges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForHardChallenges)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x2770ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHardChallenges", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForOutfitsSnow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForOutfitsSnow)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2771370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForOutfitsSnow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForHeadsSnow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForHeadsSnow)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x27715ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHeadsSnow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForHairsSnow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForHairsSnow)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2771a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHairsSnow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility.SetupForZippersSnow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)(::OVRSimpleJSON::JSONNode*)>(
    &::GlobalNamespace::SetPoolItemsUtility::SetupForZippersSnow)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2771bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForZippersSnow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetPoolItemsUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetPoolItemsUtility::*)()>(&::GlobalNamespace::SetPoolItemsUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27720bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_poolType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolType;
}
constexpr ::GlobalNamespace::__SetPoolItemsUtility__PoolType const& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_poolType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolType;
}
constexpr void GlobalNamespace::SetPoolItemsUtility::__cordl_internal_set_poolType(::GlobalNamespace::__SetPoolItemsUtility__PoolType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolType = value;
}
constexpr bool& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_overrideExistingPrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideExistingPrices;
}
constexpr bool const& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_overrideExistingPrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideExistingPrices;
}
constexpr void GlobalNamespace::SetPoolItemsUtility::__cordl_internal_set_overrideExistingPrices(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideExistingPrices = value;
}
constexpr bool& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_resetEntireList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetEntireList;
}
constexpr bool const& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_resetEntireList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetEntireList;
}
constexpr void GlobalNamespace::SetPoolItemsUtility::__cordl_internal_set_resetEntireList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetEntireList = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_techWebPrefabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebPrefabs;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::SetPoolItemsUtility::__cordl_internal_get_techWebPrefabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___techWebPrefabs;
}
constexpr void GlobalNamespace::SetPoolItemsUtility::__cordl_internal_set_techWebPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___techWebPrefabs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::SetPoolItemsUtility::GetFunctionEndpoint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::SetPoolItemsUtility::GetInputJSON(::StringW password) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, password);
}
inline void GlobalNamespace::SetPoolItemsUtility::ConstructInputJSONForCosmetics(
    ::OVRSimpleJSON::JSONNode* inputJSON,
    ::ArrayW<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>, ::Array<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>>*>
        cosmetics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "ConstructInputJSONForCosmetics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>,
                                                                         ::Array<::System::ValueTuple_2<::StringW, ::GlobalNamespace::__SetPoolItemsUtility__Rarity>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputJSON, cosmetics);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForBasics(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForBasics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForOutfits(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForOutfits", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForHeads(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHeads", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForHairs(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHairs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForZippers(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForZippers", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForTechWeb(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForTechWeb", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForPrivateRoomThemes(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForPrivateRoomThemes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForEasyChallenges(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForEasyChallenges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForHardChallenges(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHardChallenges", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForOutfitsSnow(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForOutfitsSnow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForHeadsSnow(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHeadsSnow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForHairsSnow(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForHairsSnow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline void GlobalNamespace::SetPoolItemsUtility::SetupForZippersSnow(::OVRSimpleJSON::JSONNode* inputJSON) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), "SetupForZippersSnow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputJSON);
}
inline ::GlobalNamespace::SetPoolItemsUtility* GlobalNamespace::SetPoolItemsUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetPoolItemsUtility*>());
}
inline void GlobalNamespace::SetPoolItemsUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetPoolItemsUtility*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetPoolItemsUtility::SetPoolItemsUtility() {}
