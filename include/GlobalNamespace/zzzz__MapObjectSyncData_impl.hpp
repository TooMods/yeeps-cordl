#pragma once
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__MapObjectSyncData_def.hpp"
#include "GlobalNamespace/zzzz__MapObjectSyncDataCompressed_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectSyncData::*)(
    ::StringW, ::UnityEngine::Vector3Int, ::GlobalNamespace::__MapObject__Facing, ::GlobalNamespace::__MapObject__Facing, ::StringW, ::StringW)>(&::GlobalNamespace::MapObjectSyncData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x307a4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapObjectSyncData::*)(
    ::GlobalNamespace::MapObjectSyncDataCompressed, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::MapObjectSyncData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x307a504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObjectSyncDataCompressed>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MapObjectSyncData.GetPlacedDirectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::MapObjectSyncData::*)()>(&::GlobalNamespace::MapObjectSyncData::GetPlacedDirectionData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x307a5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(),
                                                                               "GetPlacedDirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MapObjectSyncData::_ctor(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing,
                                                      ::GlobalNamespace::__MapObject__Facing placedUpFacing, ::StringW colorKey, ::StringW ownerUserID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, placedPosition, placedForwardFacing, placedUpFacing, colorKey, ownerUserID);
}
inline void GlobalNamespace::MapObjectSyncData::_ctor(::GlobalNamespace::MapObjectSyncDataCompressed compressesdData, ::ArrayW<::StringW, ::Array<::StringW>*> keys,
                                                      ::ArrayW<::StringW, ::Array<::StringW>*> colorKeys, ::ArrayW<::StringW, ::Array<::StringW>*> ownerUserIDs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObjectSyncDataCompressed>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compressesdData, keys, colorKeys, ownerUserIDs);
}
inline uint8_t GlobalNamespace::MapObjectSyncData::GetPlacedDirectionData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapObjectSyncData>::get(),
                                                                             "GetPlacedDirectionData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "placedPosition", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "placedForwardFacing", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "placedUpFacing", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "colorKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ownerUserID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::MapObjectSyncData::MapObjectSyncData(::StringW key, ::UnityEngine::Vector3Int placedPosition, int32_t placedForwardFacing, int32_t placedUpFacing, ::StringW colorKey,
                                                                  ::StringW ownerUserID) noexcept {
  this->key = key;
  this->placedPosition = placedPosition;
  this->placedForwardFacing = placedForwardFacing;
  this->placedUpFacing = placedUpFacing;
  this->colorKey = colorKey;
  this->ownerUserID = ownerUserID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapObjectSyncData::MapObjectSyncData() {}
