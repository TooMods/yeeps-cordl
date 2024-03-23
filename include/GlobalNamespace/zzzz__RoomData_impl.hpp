#pragma once
#include "GlobalNamespace/zzzz__RoomData_impl.hpp"
#include "GlobalNamespace/zzzz__RoomManager_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__MapSyncData_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomDatabase_def.hpp"
#include "GlobalNamespace/zzzz__RoomDoorConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RoomData__Type::__RoomData__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomData__Type::__RoomData__Type() {}
constexpr ::GlobalNamespace::__RoomData__Type GlobalNamespace::__RoomData__Type::unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__RoomData__Type GlobalNamespace::__RoomData__Type::publicRoom{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__RoomData__Type GlobalNamespace::__RoomData__Type::privateRoom{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_roomKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_roomKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_roomKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_roomKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::StringW)>(&::GlobalNamespace::RoomData::set_roomKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_roomKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_roomName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_roomName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_roomName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_roomName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::StringW)>(&::GlobalNamespace::RoomData::set_roomName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_roomName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_themeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_themeKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x162f1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_themeKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_dimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_dimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_dimensions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_dimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::UnityEngine::Vector3Int)>(&::GlobalNamespace::RoomData::set_dimensions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_dimensions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_floorDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_floorDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163217c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_floorDepth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_floorDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(int32_t)>(&::GlobalNamespace::RoomData::set_floorDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_floorDepth", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_mapNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomMap__Node* (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_mapNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163218c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_mapNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_mapNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::RoomData::set_mapNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_mapNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomData__Type (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163219c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::__RoomData__Type)>(&::GlobalNamespace::RoomData::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomData__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasPermissionToModify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasPermissionToModify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasPermissionToModify",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasPermissionToModify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasPermissionToModify)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16321b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasPermissionToModify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_lobbyDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomManager__TravelDirection (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_lobbyDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_lobbyDirection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_lobbyDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomData::set_lobbyDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_lobbyDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_upDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomDoorConfiguration* (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_upDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_upDoor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_upDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::RoomDoorConfiguration*)>(
    &::GlobalNamespace::RoomData::set_upDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_upDoor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_rightDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomDoorConfiguration* (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_rightDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_rightDoor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_rightDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::RoomDoorConfiguration*)>(
    &::GlobalNamespace::RoomData::set_rightDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_rightDoor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_downDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomDoorConfiguration* (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_downDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_downDoor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_downDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::RoomDoorConfiguration*)>(
    &::GlobalNamespace::RoomData::set_downDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16321f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_downDoor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_leftDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomDoorConfiguration* (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_leftDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_leftDoor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_leftDoor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::GlobalNamespace::RoomDoorConfiguration*)>(
    &::GlobalNamespace::RoomData::set_leftDoor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_leftDoor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasUpHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasUpHallway)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasUpHallway",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasUpHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasUpHallway)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasUpHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasRightHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasRightHallway)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasRightHallway",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasRightHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasRightHallway)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasRightHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasDownHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasDownHallway)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasDownHallway",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasDownHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasDownHallway)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasDownHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasLeftHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasLeftHallway)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163224c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasLeftHallway",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasLeftHallway
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasLeftHallway)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasLeftHallway",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_isCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_isCreativeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isCreativeMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_isCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_isCreativeMode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isCreativeMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_isModeLocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_isModeLocked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isModeLocked",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_isModeLocked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_isModeLocked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163227c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isModeLocked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_isAutoCycling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_isAutoCycling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1632288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isAutoCycling",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_isAutoCycling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_isAutoCycling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1632290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isAutoCycling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_autoCycleTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_autoCycleTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163229c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_autoCycleTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_autoCycleTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::System::DateTime)>(&::GlobalNamespace::RoomData::set_autoCycleTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16322a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_autoCycleTimestamp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_hasValidAutoCycleTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_hasValidAutoCycleTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16322ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                               "get_hasValidAutoCycleTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_hasValidAutoCycleTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::set_hasValidAutoCycleTimestamp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16322b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasValidAutoCycleTimestamp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_autoCycleTransitionStartTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::GlobalNamespace::RoomData::*)()>(
    &::GlobalNamespace::RoomData::get_autoCycleTransitionStartTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16322c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_autoCycleTransitionStartTimestamp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.set_autoCycleTransitionStartTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::System::DateTime)>(
    &::GlobalNamespace::RoomData::set_autoCycleTransitionStartTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16322c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_autoCycleTransitionStartTimestamp",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_isSolo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_isSolo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16322d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isSolo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.get_supportsCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::get_supportsCodes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_supportsCodes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(
    ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::RoomData*)>(&::GlobalNamespace::RoomData::_ctor)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x1632340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.HasLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::HasLobby)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1633128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "HasLobby",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.CanTravelInDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomData::CanTravelInDirection)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1633138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "CanTravelInDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.GetSavedMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MapSyncData* (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::GetSavedMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16331bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetSavedMap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.GetDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::GetDimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1633118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetDimensions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.GetPhotonLobbyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::GetPhotonLobbyName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x16331c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetPhotonLobbyName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.SetIsCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(bool)>(&::GlobalNamespace::RoomData::SetIsCreativeMode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16332c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetIsCreativeMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.SetFloorDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(int32_t)>(&::GlobalNamespace::RoomData::SetFloorDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16332d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetFloorDepth", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.SetAutoSwitchTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)(::System::DateTime)>(&::GlobalNamespace::RoomData::SetAutoSwitchTimestamp)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1632f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetAutoSwitchTimestamp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.SetAutoSwitchTimestampInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::SetAutoSwitchTimestampInvalid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x16330a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                               "SetAutoSwitchTimestampInvalid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.ShouldAutoSwitchToCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::ShouldAutoSwitchToCreativeMode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16332d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                               "ShouldAutoSwitchToCreativeMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.IsInTransitionWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)(ByRef<float_t>)>(&::GlobalNamespace::RoomData::IsInTransitionWindow)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x163338c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "IsInTransitionWindow", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.IsFloorDepthValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)(int32_t)>(&::GlobalNamespace::RoomData::IsFloorDepthValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16334c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "IsFloorDepthValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.ValidateFloorDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::RoomData::*)(int32_t, ByRef<bool>)>(&::GlobalNamespace::RoomData::ValidateFloorDepth)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1632cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "ValidateFloorDepth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.TryParsePrivateRoomOwnerAccountID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomData::*)(ByRef<::StringW>)>(
    &::GlobalNamespace::RoomData::TryParsePrivateRoomOwnerAccountID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1632ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "TryParsePrivateRoomOwnerAccountID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::ToString)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x16335cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomData.GetRoomDisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomData::*)()>(&::GlobalNamespace::RoomData::GetRoomDisplayName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1633880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetRoomDisplayName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RoomData::__cordl_internal_get__roomKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomKey_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::RoomData::__cordl_internal_get__roomKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomKey_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__roomKey_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::RoomData::__cordl_internal_get__roomName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::RoomData::__cordl_internal_get__roomName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomName_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__roomName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::RoomData::__cordl_internal_get_mapPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapPosition;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::RoomData::__cordl_internal_get_mapPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapPosition;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set_mapPosition(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapPosition = value;
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::RoomData::__cordl_internal_get__dimensions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dimensions_k__BackingField;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::RoomData::__cordl_internal_get__dimensions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dimensions_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__dimensions_k__BackingField(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dimensions_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::RoomData::__cordl_internal_get__floorDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorDepth_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::RoomData::__cordl_internal_get__floorDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorDepth_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__floorDepth_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorDepth_k__BackingField = value;
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::RoomData::__cordl_internal_get__mapNode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapNode_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::RoomData::__cordl_internal_get__mapNode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapNode_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__mapNode_k__BackingField(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mapNode_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomData__Type& GlobalNamespace::RoomData::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::GlobalNamespace::__RoomData__Type const& GlobalNamespace::RoomData::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__type_k__BackingField(::GlobalNamespace::__RoomData__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasPermissionToModify_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPermissionToModify_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasPermissionToModify_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPermissionToModify_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasPermissionToModify_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasPermissionToModify_k__BackingField = value;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::RoomData::__cordl_internal_get__lobbyDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyDirection_k__BackingField;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::RoomData::__cordl_internal_get__lobbyDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyDirection_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__lobbyDirection_k__BackingField(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyDirection_k__BackingField = value;
}
constexpr ::GlobalNamespace::RoomDoorConfiguration*& GlobalNamespace::RoomData::__cordl_internal_get__upDoor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upDoor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& GlobalNamespace::RoomData::__cordl_internal_get__upDoor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upDoor_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__upDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____upDoor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RoomDoorConfiguration*& GlobalNamespace::RoomData::__cordl_internal_get__rightDoor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightDoor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& GlobalNamespace::RoomData::__cordl_internal_get__rightDoor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightDoor_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__rightDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightDoor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RoomDoorConfiguration*& GlobalNamespace::RoomData::__cordl_internal_get__downDoor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downDoor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& GlobalNamespace::RoomData::__cordl_internal_get__downDoor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downDoor_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__downDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downDoor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RoomDoorConfiguration*& GlobalNamespace::RoomData::__cordl_internal_get__leftDoor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftDoor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomDoorConfiguration*> const& GlobalNamespace::RoomData::__cordl_internal_get__leftDoor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftDoor_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__leftDoor_k__BackingField(::GlobalNamespace::RoomDoorConfiguration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftDoor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasUpHallway_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasUpHallway_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasUpHallway_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasUpHallway_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasUpHallway_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasUpHallway_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasRightHallway_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRightHallway_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasRightHallway_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasRightHallway_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasRightHallway_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasRightHallway_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasDownHallway_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasDownHallway_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasDownHallway_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasDownHallway_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasDownHallway_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasDownHallway_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasLeftHallway_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLeftHallway_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasLeftHallway_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLeftHallway_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasLeftHallway_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLeftHallway_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__isCreativeMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCreativeMode_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__isCreativeMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isCreativeMode_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__isCreativeMode_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isCreativeMode_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__isModeLocked_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isModeLocked_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__isModeLocked_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isModeLocked_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__isModeLocked_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isModeLocked_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__isAutoCycling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAutoCycling_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__isAutoCycling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAutoCycling_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__isAutoCycling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAutoCycling_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::RoomData::__cordl_internal_get__autoCycleTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCycleTimestamp_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::RoomData::__cordl_internal_get__autoCycleTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCycleTimestamp_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__autoCycleTimestamp_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoCycleTimestamp_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomData::__cordl_internal_get__hasValidAutoCycleTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValidAutoCycleTimestamp_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomData::__cordl_internal_get__hasValidAutoCycleTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasValidAutoCycleTimestamp_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__hasValidAutoCycleTimestamp_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasValidAutoCycleTimestamp_k__BackingField = value;
}
constexpr ::System::DateTime& GlobalNamespace::RoomData::__cordl_internal_get__autoCycleTransitionStartTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCycleTransitionStartTimestamp_k__BackingField;
}
constexpr ::System::DateTime const& GlobalNamespace::RoomData::__cordl_internal_get__autoCycleTransitionStartTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoCycleTransitionStartTimestamp_k__BackingField;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set__autoCycleTransitionStartTimestamp_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoCycleTransitionStartTimestamp_k__BackingField = value;
}
constexpr ::GlobalNamespace::MapSyncData*& GlobalNamespace::RoomData::__cordl_internal_get_savedMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& GlobalNamespace::RoomData::__cordl_internal_get_savedMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___savedMap;
}
constexpr void GlobalNamespace::RoomData::__cordl_internal_set_savedMap(::GlobalNamespace::MapSyncData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___savedMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RoomData::setStaticF_minDifferenceBetweenFloorDepthAndDimensions(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "minDifferenceBetweenFloorDepthAndDimensions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RoomData::getStaticF_minDifferenceBetweenFloorDepthAndDimensions() {
  return ::cordl_internals::getStaticField<int32_t, "minDifferenceBetweenFloorDepthAndDimensions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get>();
}
inline ::StringW GlobalNamespace::RoomData::get_roomKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_roomKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_roomKey(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_roomKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RoomData::get_roomName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_roomName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_roomName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_roomName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RoomData::get_themeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_themeKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::RoomData::get_dimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_dimensions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_dimensions(::UnityEngine::Vector3Int value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_dimensions", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::RoomData::get_floorDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_floorDepth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_floorDepth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_floorDepth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RoomMap__Node* GlobalNamespace::RoomData::get_mapNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_mapNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomMap__Node*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_mapNode(::GlobalNamespace::__RoomMap__Node* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_mapNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RoomData__Type GlobalNamespace::RoomData::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomData__Type, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_type(::GlobalNamespace::__RoomData__Type value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomData__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasPermissionToModify() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasPermissionToModify",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasPermissionToModify(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasPermissionToModify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::RoomData::get_lobbyDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_lobbyDirection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomManager__TravelDirection, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_lobbyDirection(::GlobalNamespace::__RoomManager__TravelDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_lobbyDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomDoorConfiguration* GlobalNamespace::RoomData::get_upDoor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_upDoor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomDoorConfiguration*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_upDoor(::GlobalNamespace::RoomDoorConfiguration* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_upDoor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomDoorConfiguration* GlobalNamespace::RoomData::get_rightDoor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_rightDoor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomDoorConfiguration*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_rightDoor(::GlobalNamespace::RoomDoorConfiguration* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_rightDoor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomDoorConfiguration* GlobalNamespace::RoomData::get_downDoor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_downDoor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomDoorConfiguration*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_downDoor(::GlobalNamespace::RoomDoorConfiguration* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_downDoor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomDoorConfiguration* GlobalNamespace::RoomData::get_leftDoor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_leftDoor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomDoorConfiguration*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_leftDoor(::GlobalNamespace::RoomDoorConfiguration* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_leftDoor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomDoorConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasUpHallway() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasUpHallway",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasUpHallway(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasUpHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasRightHallway() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasRightHallway",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasRightHallway(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasRightHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasDownHallway() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasDownHallway",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasDownHallway(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasDownHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasLeftHallway() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_hasLeftHallway",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasLeftHallway(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasLeftHallway",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_isCreativeMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isCreativeMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_isCreativeMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isCreativeMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_isModeLocked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isModeLocked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_isModeLocked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isModeLocked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_isAutoCycling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isAutoCycling",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_isAutoCycling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_isAutoCycling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::RoomData::get_autoCycleTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_autoCycleTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_autoCycleTimestamp(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_autoCycleTimestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_hasValidAutoCycleTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                             "get_hasValidAutoCycleTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_hasValidAutoCycleTimestamp(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_hasValidAutoCycleTimestamp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::DateTime GlobalNamespace::RoomData::get_autoCycleTransitionStartTimestamp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_autoCycleTransitionStartTimestamp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::set_autoCycleTransitionStartTimestamp(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "set_autoCycleTransitionStartTimestamp",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomData::get_isSolo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_isSolo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomData::get_supportsCodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "get_supportsCodes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param cachedRoomData: ::GlobalNamespace::RoomData* (default: nullptr)
inline ::GlobalNamespace::RoomData* GlobalNamespace::RoomData::New_ctor(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry, ::GlobalNamespace::__RoomMap__Node* roomMapNode,
                                                                        ::GlobalNamespace::RoomData* cachedRoomData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomData*>(roomDatabaseEntry, roomMapNode, cachedRoomData));
}
/// @param cachedRoomData: ::GlobalNamespace::RoomData* (default: nullptr)
inline void GlobalNamespace::RoomData::_ctor(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry, ::GlobalNamespace::__RoomMap__Node* roomMapNode,
                                             ::GlobalNamespace::RoomData* cachedRoomData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomDatabaseEntry, roomMapNode, cachedRoomData);
}
inline bool GlobalNamespace::RoomData::HasLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "HasLobby",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomData::CanTravelInDirection(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "CanTravelInDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, direction);
}
inline ::GlobalNamespace::MapSyncData* GlobalNamespace::RoomData::GetSavedMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetSavedMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapSyncData*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::RoomData::GetDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetDimensions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RoomData::GetPhotonLobbyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetPhotonLobbyName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomData::SetIsCreativeMode(bool newIsCreative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetIsCreativeMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreative);
}
inline void GlobalNamespace::RoomData::SetFloorDepth(int32_t newFloorDepth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetFloorDepth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newFloorDepth);
}
inline void GlobalNamespace::RoomData::SetAutoSwitchTimestamp(::System::DateTime newTimestamp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "SetAutoSwitchTimestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTimestamp);
}
inline void GlobalNamespace::RoomData::SetAutoSwitchTimestampInvalid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                             "SetAutoSwitchTimestampInvalid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomData::ShouldAutoSwitchToCreativeMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(),
                                                                             "ShouldAutoSwitchToCreativeMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomData::IsInTransitionWindow(ByRef<float_t> timeIntoWindow) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "IsInTransitionWindow", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeIntoWindow);
}
inline bool GlobalNamespace::RoomData::IsFloorDepthValid(int32_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "IsFloorDepthValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, depth);
}
inline int32_t GlobalNamespace::RoomData::ValidateFloorDepth(int32_t floorDepth, ByRef<bool> wasChanged) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "ValidateFloorDepth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, floorDepth, wasChanged);
}
inline bool GlobalNamespace::RoomData::TryParsePrivateRoomOwnerAccountID(ByRef<::StringW> roomOwnerAccountID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "TryParsePrivateRoomOwnerAccountID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, roomOwnerAccountID);
}
inline ::StringW GlobalNamespace::RoomData::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RoomData::GetRoomDisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomData*>::get(), "GetRoomDisplayName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomData::RoomData() {}
