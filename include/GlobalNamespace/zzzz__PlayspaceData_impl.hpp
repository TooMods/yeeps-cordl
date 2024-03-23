#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__PlayspaceData_def.hpp"
#include "GlobalNamespace/zzzz__MapLightData_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "GlobalNamespace/zzzz__MapSyncData_def.hpp"
#include "GlobalNamespace/zzzz__PlayspaceData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f6a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::*)()>(
    &::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f6fd98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f6fdac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f6fdcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>(object, method));
}
inline void GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated::__PlayspaceData__OnMapObjectsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(&::GlobalNamespace::PlayspaceData::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2f6d374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.SetStaticTerrainData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayspaceData::*)(Il2CppObject*)>(&::GlobalNamespace::PlayspaceData::SetStaticTerrainData)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2f6d510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "SetStaticTerrainData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.AddMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::GlobalNamespace::MapObject*, bool)>(
    &::GlobalNamespace::PlayspaceData::AddMapObject)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2f6d77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "AddMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.RemoveMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::GlobalNamespace::MapObject*)>(
    &::GlobalNamespace::PlayspaceData::RemoveMapObject)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2f6d994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "RemoveMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.ClearMapLocally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayspaceData::*)()>(&::GlobalNamespace::PlayspaceData::ClearMapLocally)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2f6dbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ClearMapLocally",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.ClearMapAndPreserveObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayspaceData::*)(
    ByRef<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>)>(&::GlobalNamespace::PlayspaceData::ClearMapAndPreserveObjects)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2f6df6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ClearMapAndPreserveObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.GetCellData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (::GlobalNamespace::PlayspaceData::*)()>(&::GlobalNamespace::PlayspaceData::GetCellData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f6e2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetCellData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.IsCellOccupied
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::IsCellOccupied)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f6e2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsCellOccupied", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.IsCellEmptyAndWithinMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::IsCellEmptyAndWithinMap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f6e384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsCellEmptyAndWithinMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryFitMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::GlobalNamespace::__MapObject__Facing, ByRef<::UnityEngine::Vector3Int>)>(&::GlobalNamespace::PlayspaceData::TryFitMapObject)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2f6e430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFitMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryFitRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3, ::GlobalNamespace::__MapObject__Facing, int32_t, ByRef<::UnityEngine::Vector3Int>)>(
    &::GlobalNamespace::PlayspaceData::TryFitRecursive)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2f6e568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFitRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.IsPlacementValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::IsPlacementValid)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2f6ea48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsPlacementValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryGetLowestValidPlacement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ByRef<::UnityEngine::Vector3Int>)>(&::GlobalNamespace::PlayspaceData::TryGetLowestValidPlacement)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2f6eba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetLowestValidPlacement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.GetLowestValidPlacementHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::GetLowestValidPlacementHeight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2f6ec90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetLowestValidPlacementHeight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.CanShiftAllMapObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::CanShiftAllMapObjects)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2f6ed54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "CanShiftAllMapObjects", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryGetMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(
    ::StringW, ::UnityEngine::Vector3Int, ::StringW, ByRef<::GlobalNamespace::MapObject*>)>(&::GlobalNamespace::PlayspaceData::TryGetMapObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2f6f034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryGetMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::StringW, ::UnityEngine::Vector3Int, ByRef<::GlobalNamespace::MapObject*>)>(&::GlobalNamespace::PlayspaceData::TryGetMapObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f6f104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryGetMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int, ByRef<::GlobalNamespace::MapObject*>)>(
    &::GlobalNamespace::PlayspaceData::TryGetMapObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f6f1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryGetRandomMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(ByRef<::GlobalNamespace::MapObject*>)>(
    &::GlobalNamespace::PlayspaceData::TryGetRandomMapObject)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2f6f23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetRandomMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.TryFindMapObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::StringW, ByRef<::GlobalNamespace::MapObject*>)>(
    &::GlobalNamespace::PlayspaceData::TryFindMapObject)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2f6f404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFindMapObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.ExtractMapSave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MapSyncData* (::GlobalNamespace::PlayspaceData::*)()>(
    &::GlobalNamespace::PlayspaceData::ExtractMapSave)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2f6f5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ExtractMapSave",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.ExtractMapSave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MapSyncData* (
    ::GlobalNamespace::PlayspaceData::*)(ByRef<::ArrayW<::GlobalNamespace::MapObject*, ::Array<::GlobalNamespace::MapObject*>*>>)>(&::GlobalNamespace::PlayspaceData::ExtractMapSave)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f6f844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ExtractMapSave", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::GlobalNamespace::MapObject*, ::Array<::GlobalNamespace::MapObject*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.CalculateWorldStuffingCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayspaceData::*)()>(&::GlobalNamespace::PlayspaceData::CalculateWorldStuffingCount)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2f6fb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(),
                                                                               "CalculateWorldStuffingCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.GetDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::PlayspaceData::*)()>(
    &::GlobalNamespace::PlayspaceData::GetDimensions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f6fce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetDimensions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.IsWithinMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::IsWithinMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f6fcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsWithinMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.IsWithinMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayspaceData::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(
    &::GlobalNamespace::PlayspaceData::IsWithinMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f6fd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsWithinMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayspaceData.GenerateMapLightData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MapLightData (::GlobalNamespace::PlayspaceData::*)()>(
    &::GlobalNamespace::PlayspaceData::GenerateMapLightData)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2f6a490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GenerateMapLightData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr Il2CppObject*& GlobalNamespace::PlayspaceData::__cordl_internal_get_cellData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellData;
}
constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> const& GlobalNamespace::PlayspaceData::__cordl_internal_get_cellData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cellData;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set_cellData(Il2CppObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cellData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::PlayspaceData::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::PlayspaceData::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set_dimensions(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>*& GlobalNamespace::PlayspaceData::__cordl_internal_get_mapObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>*> const&
GlobalNamespace::PlayspaceData::__cordl_internal_get_mapObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjects;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set_mapObjects(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::UnityW<::GlobalNamespace::MapObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PlayspaceData::__cordl_internal_get__x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x;
}
constexpr int32_t const& GlobalNamespace::PlayspaceData::__cordl_internal_get__x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set__x(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____x = value;
}
constexpr int32_t& GlobalNamespace::PlayspaceData::__cordl_internal_get__y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____y;
}
constexpr int32_t const& GlobalNamespace::PlayspaceData::__cordl_internal_get__y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____y;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set__y(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____y = value;
}
constexpr int32_t& GlobalNamespace::PlayspaceData::__cordl_internal_get__z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____z;
}
constexpr int32_t const& GlobalNamespace::PlayspaceData::__cordl_internal_get__z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____z;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set__z(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____z = value;
}
constexpr ::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*& GlobalNamespace::PlayspaceData::__cordl_internal_get_onMapObjectsUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMapObjectsUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated*> const&
GlobalNamespace::PlayspaceData::__cordl_internal_get_onMapObjectsUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMapObjectsUpdatedCallbacks;
}
constexpr void GlobalNamespace::PlayspaceData::__cordl_internal_set_onMapObjectsUpdatedCallbacks(::GlobalNamespace::__PlayspaceData__OnMapObjectsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMapObjectsUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PlayspaceData* GlobalNamespace::PlayspaceData::New_ctor(::UnityEngine::Vector3Int dimensions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayspaceData*>(dimensions));
}
inline void GlobalNamespace::PlayspaceData::_ctor(::UnityEngine::Vector3Int dimensions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimensions);
}
inline void GlobalNamespace::PlayspaceData::SetStaticTerrainData(Il2CppObject* staticTerrainData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "SetStaticTerrainData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, staticTerrainData);
}
inline bool GlobalNamespace::PlayspaceData::AddMapObject(::GlobalNamespace::MapObject* mapObject, bool fromSync) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "AddMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mapObject, fromSync);
}
inline bool GlobalNamespace::PlayspaceData::RemoveMapObject(::GlobalNamespace::MapObject* mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "RemoveMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mapObject);
}
inline void GlobalNamespace::PlayspaceData::ClearMapLocally() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ClearMapLocally",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayspaceData::ClearMapAndPreserveObjects(ByRef<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*> oldMapObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ClearMapAndPreserveObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldMapObjects);
}
inline Il2CppObject* GlobalNamespace::PlayspaceData::GetCellData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetCellData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayspaceData::IsCellOccupied(::UnityEngine::Vector3Int cellPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsCellOccupied", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition);
}
inline bool GlobalNamespace::PlayspaceData::IsCellEmptyAndWithinMap(::UnityEngine::Vector3Int cellPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsCellEmptyAndWithinMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition);
}
inline bool GlobalNamespace::PlayspaceData::TryFitMapObject(::UnityEngine::Vector3Int attemptedPlacePositon, ::UnityEngine::Vector3Int placeDimensions,
                                                            ::GlobalNamespace::__MapObject__Facing prioritizedDirection, ByRef<::UnityEngine::Vector3Int> placedPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFitMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attemptedPlacePositon, placeDimensions, prioritizedDirection, placedPosition);
}
inline bool GlobalNamespace::PlayspaceData::TryFitRecursive(::UnityEngine::Vector3Int attemptedPlacePosition, ::UnityEngine::Vector3Int placeDimensions, ::UnityEngine::Vector3 halfDimensions,
                                                            ::GlobalNamespace::__MapObject__Facing prioritizedDirection, int32_t attemptsRemaining, ByRef<::UnityEngine::Vector3Int> newPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFitRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MapObject__Facing>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attemptedPlacePosition, placeDimensions, halfDimensions, prioritizedDirection, attemptsRemaining, newPosition);
}
inline bool GlobalNamespace::PlayspaceData::IsPlacementValid(::UnityEngine::Vector3Int placePosition, ::UnityEngine::Vector3Int placedDimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsPlacementValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, placePosition, placedDimensions);
}
inline bool GlobalNamespace::PlayspaceData::TryGetLowestValidPlacement(::UnityEngine::Vector3Int placePosition, ::UnityEngine::Vector3Int placedDimensions,
                                                                       ByRef<::UnityEngine::Vector3Int> validPlacePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetLowestValidPlacement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, placePosition, placedDimensions, validPlacePosition);
}
inline int32_t GlobalNamespace::PlayspaceData::GetLowestValidPlacementHeight(::UnityEngine::Vector3Int placePosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetLowestValidPlacementHeight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, placePosition);
}
inline bool GlobalNamespace::PlayspaceData::CanShiftAllMapObjects(::UnityEngine::Vector3Int shift) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "CanShiftAllMapObjects", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, shift);
}
inline bool GlobalNamespace::PlayspaceData::TryGetMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::StringW accountID, ByRef<::GlobalNamespace::MapObject*> mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, placedPosition, accountID, mapObject);
}
inline bool GlobalNamespace::PlayspaceData::TryGetMapObject(::StringW key, ::UnityEngine::Vector3Int placedPosition, ByRef<::GlobalNamespace::MapObject*> mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, placedPosition, mapObject);
}
inline bool GlobalNamespace::PlayspaceData::TryGetMapObject(::UnityEngine::Vector3Int placedPosition, ByRef<::GlobalNamespace::MapObject*> mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, placedPosition, mapObject);
}
inline bool GlobalNamespace::PlayspaceData::TryGetRandomMapObject(ByRef<::GlobalNamespace::MapObject*> mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryGetRandomMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mapObject);
}
inline bool GlobalNamespace::PlayspaceData::TryFindMapObject(::StringW mapObjectKey, ByRef<::GlobalNamespace::MapObject*> mapObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "TryFindMapObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MapObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mapObjectKey, mapObject);
}
inline ::GlobalNamespace::MapSyncData* GlobalNamespace::PlayspaceData::ExtractMapSave() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ExtractMapSave",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapSyncData*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MapSyncData* GlobalNamespace::PlayspaceData::ExtractMapSave(ByRef<::ArrayW<::GlobalNamespace::MapObject*, ::Array<::GlobalNamespace::MapObject*>*>> mapObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "ExtractMapSave", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::GlobalNamespace::MapObject*, ::Array<::GlobalNamespace::MapObject*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapSyncData*, false>(this, ___internal_method, mapObjects);
}
inline int32_t GlobalNamespace::PlayspaceData::CalculateWorldStuffingCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(),
                                                                             "CalculateWorldStuffingCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::PlayspaceData::GetDimensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GetDimensions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayspaceData::IsWithinMap(::UnityEngine::Vector3Int cellPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsWithinMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cellPosition);
}
inline bool GlobalNamespace::PlayspaceData::IsWithinMap(::UnityEngine::Vector3Int placedPosition, ::UnityEngine::Vector3Int placedDimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "IsWithinMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, placedPosition, placedDimensions);
}
inline ::GlobalNamespace::MapLightData GlobalNamespace::PlayspaceData::GenerateMapLightData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayspaceData*>::get(), "GenerateMapLightData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MapLightData, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayspaceData::PlayspaceData() {}
