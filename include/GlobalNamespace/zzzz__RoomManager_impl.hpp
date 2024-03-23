#pragma once
#include "GlobalNamespace/zzzz__RoomManager_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__MapData_def.hpp"
#include "GlobalNamespace/zzzz__RoomAutoCycleEffect_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomDatabase_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomMapManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "roomPrefabOverride", ty: "::UnityW<::UnityEngine::GameObject>",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__RoomManager__RoomPrefabOverrideData::__RoomManager__RoomPrefabOverrideData(::StringW roomKey, ::UnityW<::UnityEngine::GameObject> roomPrefabOverride) noexcept {
  this->roomKey = roomKey;
  this->roomPrefabOverride = roomPrefabOverride;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__RoomPrefabOverrideData::__RoomManager__RoomPrefabOverrideData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RoomManager__TravelDirection::__RoomManager__TravelDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__TravelDirection::__RoomManager__TravelDirection() {}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::__RoomManager__TravelDirection::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::__RoomManager__TravelDirection::up{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::__RoomManager__TravelDirection::right{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::__RoomManager__TravelDirection::down{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::__RoomManager__TravelDirection::left{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x163b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163ef98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::*)(::GlobalNamespace::RoomData*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163efac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163efcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* GlobalNamespace::__RoomManager__OnGoToRoomSuccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomSuccess::Invoke(::GlobalNamespace::RoomData* roomData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnGoToRoomSuccess::BeginInvoke(::GlobalNamespace::RoomData* roomData, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, roomData, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess::__RoomManager__OnGoToRoomSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomFailure::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomFailure::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x163b648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomFailure::*)(::StringW, bool)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomFailure::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x163efd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnGoToRoomFailure::*)(::StringW, bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnGoToRoomFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163eff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnGoToRoomFailure::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnGoToRoomFailure::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* GlobalNamespace::__RoomManager__OnGoToRoomFailure::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomFailure::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomFailure::Invoke(::StringW errorMessage, bool isFatal) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage, isFatal);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnGoToRoomFailure::BeginInvoke(::StringW errorMessage, bool isFatal, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, errorMessage, isFatal, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnGoToRoomFailure::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure::__RoomManager__OnGoToRoomFailure() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomLoaded._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomLoaded::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnRoomLoaded::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x163f094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomLoaded.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomLoaded::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::__RoomManager__OnRoomLoaded::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f1c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomLoaded.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnRoomLoaded::*)(::GlobalNamespace::Room*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnRoomLoaded::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f1d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomLoaded.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomLoaded::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnRoomLoaded::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* GlobalNamespace::__RoomManager__OnRoomLoaded::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnRoomLoaded*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnRoomLoaded::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnRoomLoaded::Invoke(::GlobalNamespace::Room* room) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, room);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnRoomLoaded::BeginInvoke(::GlobalNamespace::Room* room, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, room, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnRoomLoaded::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomLoaded*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnRoomLoaded::__RoomManager__OnRoomLoaded() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomUnloaded._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomUnloaded::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnRoomUnloaded::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x16317b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomUnloaded.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomUnloaded::*)()>(
    &::GlobalNamespace::__RoomManager__OnRoomUnloaded::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomUnloaded.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnRoomUnloaded::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnRoomUnloaded::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomUnloaded.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomUnloaded::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnRoomUnloaded::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnRoomUnloaded* GlobalNamespace::__RoomManager__OnRoomUnloaded::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnRoomUnloaded::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnRoomUnloaded::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnRoomUnloaded::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnRoomUnloaded::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnRoomUnloaded::__RoomManager__OnRoomUnloaded() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomPositionShift._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomPositionShift::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnRoomPositionShift::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x163f240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomPositionShift.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomPositionShift::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::__RoomManager__OnRoomPositionShift::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomPositionShift.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__RoomManager__OnRoomPositionShift::*)(::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__RoomManager__OnRoomPositionShift::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x163f318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnRoomPositionShift.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnRoomPositionShift::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnRoomPositionShift::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnRoomPositionShift* GlobalNamespace::__RoomManager__OnRoomPositionShift::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnRoomPositionShift::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnRoomPositionShift::Invoke(::UnityEngine::Vector3 positionShift) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positionShift);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnRoomPositionShift::BeginInvoke(::UnityEngine::Vector3 positionShift, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, positionShift, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnRoomPositionShift::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnRoomPositionShift*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnRoomPositionShift::__RoomManager__OnRoomPositionShift() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnSaveMapSuccess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x163dbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapSuccess::*)()>(
    &::GlobalNamespace::__RoomManager__OnSaveMapSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f3ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnSaveMapSuccess::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnSaveMapSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f3c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnSaveMapSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f3e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* GlobalNamespace::__RoomManager__OnSaveMapSuccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnSaveMapSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnSaveMapSuccess::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnSaveMapSuccess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnSaveMapSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnSaveMapSuccess::__RoomManager__OnSaveMapSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapFailure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapFailure::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnSaveMapFailure::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x163e3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapFailure.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapFailure::*)()>(
    &::GlobalNamespace::__RoomManager__OnSaveMapFailure::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f3ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapFailure.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnSaveMapFailure::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnSaveMapFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnSaveMapFailure.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnSaveMapFailure::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnSaveMapFailure::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnSaveMapFailure* GlobalNamespace::__RoomManager__OnSaveMapFailure::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnSaveMapFailure::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnSaveMapFailure::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnSaveMapFailure::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnSaveMapFailure::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnSaveMapFailure::__RoomManager__OnSaveMapFailure() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapSuccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapSuccess::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnResetMapSuccess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x163f42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapSuccess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapSuccess::*)()>(
    &::GlobalNamespace::__RoomManager__OnResetMapSuccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f4e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapSuccess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnResetMapSuccess::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnResetMapSuccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f4fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapSuccess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapSuccess::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnResetMapSuccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f51c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnResetMapSuccess* GlobalNamespace::__RoomManager__OnResetMapSuccess::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnResetMapSuccess::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnResetMapSuccess::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnResetMapSuccess::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnResetMapSuccess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnResetMapSuccess::__RoomManager__OnResetMapSuccess() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapFailure._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapFailure::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomManager__OnResetMapFailure::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x163f528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapFailure.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapFailure::*)()>(
    &::GlobalNamespace::__RoomManager__OnResetMapFailure::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x163f5e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapFailure.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__RoomManager__OnResetMapFailure::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__RoomManager__OnResetMapFailure::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x163f5f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager__OnResetMapFailure.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager__OnResetMapFailure::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomManager__OnResetMapFailure::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163f618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomManager__OnResetMapFailure* GlobalNamespace::__RoomManager__OnResetMapFailure::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager__OnResetMapFailure*>(object, method));
}
inline void GlobalNamespace::__RoomManager__OnResetMapFailure::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__RoomManager__OnResetMapFailure::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomManager__OnResetMapFailure::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::__RoomManager__OnResetMapFailure::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager__OnResetMapFailure::__RoomManager__OnResetMapFailure() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163b274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass16_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass16_0._GoToStartingRoom_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass16_0::*)(::StringW, bool)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass16_0::_GoToStartingRoom_b__1)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x163f624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass16_0*>::get(), "<GoToStartingRoom>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get_startingRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingRoomKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get_startingRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingRoomKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_set_startingRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startingRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get_startingRoomMapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingRoomMapKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get_startingRoomMapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingRoomMapKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_set_startingRoomMapKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startingRoomMapKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomManager>& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager> const& GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass16_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass16_0* GlobalNamespace::__RoomManager____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass16_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass16_0::_GoToStartingRoom_b__1(::StringW errorMessage, bool isFatal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass16_0*>::get(), "<GoToStartingRoom>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage, isFatal);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass16_0::__RoomManager____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)()>(&::GlobalNamespace::__RoomManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163f840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._GoToStartingRoom_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager____c::_GoToStartingRoom_b__16_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x163f848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToStartingRoom>b__16_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._GoToSpawnRoom_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager____c::_GoToSpawnRoom_b__17_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x163f84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToSpawnRoom>b__17_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._GoToSpawnRoom_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW, bool)>(
    &::GlobalNamespace::__RoomManager____c::_GoToSpawnRoom_b__17_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x163f850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToSpawnRoom>b__17_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._GoToPrivateRoomTransitionRoom_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager____c::_GoToPrivateRoomTransitionRoom_b__18_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x163f8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToPrivateRoomTransitionRoom>b__18_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._GoToPrivateRoomTransitionRoom_b__18_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW, bool)>(
    &::GlobalNamespace::__RoomManager____c::_GoToPrivateRoomTransitionRoom_b__18_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x163f8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToPrivateRoomTransitionRoom>b__18_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._SetCurrentRoomIsCreative_b__23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c::_SetCurrentRoomIsCreative_b__23_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x163f954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<SetCurrentRoomIsCreative>b__23_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._Update_b__53_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)()>(&::GlobalNamespace::__RoomManager____c::_Update_b__53_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x163fa1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<Update>b__53_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterPlayMode_b__66_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)()>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163fa6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                               "<TryEnterPlayMode>b__66_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterPlayMode_b__66_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_3)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x163fb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterPlayMode>b__66_3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterPlayMode_b__66_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)()>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x163fbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                               "<TryEnterPlayMode>b__66_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterCreativeMode_b__67_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)()>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163fc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                               "<TryEnterCreativeMode>b__67_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterCreativeMode_b__67_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_3)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x163fd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterCreativeMode>b__67_3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c._TryEnterCreativeMode_b__67_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_1)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x163fddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterCreativeMode>b__67_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RoomManager____c::setStaticF___9(::GlobalNamespace::__RoomManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager____c*>(value));
}
inline ::GlobalNamespace::__RoomManager____c* GlobalNamespace::__RoomManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__16_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__16_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__16_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__17_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__17_1(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*, "<>9__17_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*, "<>9__17_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__18_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__18_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "<>9__18_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__18_1(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*, "<>9__18_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__18_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*, "<>9__18_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__23_1(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnFailure*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__23_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__53_0(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*, "<>9__53_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*, "<>9__53_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__66_2(::GlobalNamespace::__RoomDatabase__OnSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnSuccess*, "<>9__66_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnSuccess*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__66_2() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnSuccess*, "<>9__66_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__66_3(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__66_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnFailure*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__66_3() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__66_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__66_1(::GlobalNamespace::__RoomManager__OnSaveMapFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnSaveMapFailure*, "<>9__66_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnSaveMapFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__66_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnSaveMapFailure*, "<>9__66_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__67_2(::GlobalNamespace::__RoomDatabase__OnSuccess* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnSuccess*, "<>9__67_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnSuccess*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnSuccess* GlobalNamespace::__RoomManager____c::getStaticF___9__67_2() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnSuccess*, "<>9__67_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__67_3(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__67_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnFailure*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__67_3() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__67_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline void GlobalNamespace::__RoomManager____c::setStaticF___9__67_1(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__67_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>(
      std::forward<::GlobalNamespace::__RoomDatabase__OnFailure*>(value));
}
inline ::GlobalNamespace::__RoomDatabase__OnFailure* GlobalNamespace::__RoomManager____c::getStaticF___9__67_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomDatabase__OnFailure*, "<>9__67_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get>();
}
inline ::GlobalNamespace::__RoomManager____c* GlobalNamespace::__RoomManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c*>());
}
inline void GlobalNamespace::__RoomManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c::_GoToStartingRoom_b__16_0(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToStartingRoom>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::__RoomManager____c::_GoToSpawnRoom_b__17_0(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToSpawnRoom>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::__RoomManager____c::_GoToSpawnRoom_b__17_1(::StringW errorMessage, bool isFatal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToSpawnRoom>b__17_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage, isFatal);
}
inline void GlobalNamespace::__RoomManager____c::_GoToPrivateRoomTransitionRoom_b__18_0(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToPrivateRoomTransitionRoom>b__18_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::__RoomManager____c::_GoToPrivateRoomTransitionRoom_b__18_1(::StringW errorMessage, bool isFatal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<GoToPrivateRoomTransitionRoom>b__18_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage, isFatal);
}
inline void GlobalNamespace::__RoomManager____c::_SetCurrentRoomIsCreative_b__23_1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<SetCurrentRoomIsCreative>b__23_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline void GlobalNamespace::__RoomManager____c::_Update_b__53_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<Update>b__53_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                             "<TryEnterPlayMode>b__66_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_3(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterPlayMode>b__66_3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterPlayMode_b__66_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                             "<TryEnterPlayMode>b__66_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(),
                                                                             "<TryEnterCreativeMode>b__67_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_3(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterCreativeMode>b__67_3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline void GlobalNamespace::__RoomManager____c::_TryEnterCreativeMode_b__67_1(::StringW failCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c*>::get(), "<TryEnterCreativeMode>b__67_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failCode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c::__RoomManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass23_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163cd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass23_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass23_0._SetCurrentRoomIsCreative_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass23_0::*)(::System::DateTime)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass23_0::_SetCurrentRoomIsCreative_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163fea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass23_0*>::get(), "<SetCurrentRoomIsCreative>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass23_0::__cordl_internal_get_requestedRoomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedRoomKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass23_0::__cordl_internal_get_requestedRoomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedRoomKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass23_0::__cordl_internal_set_requestedRoomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedRoomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass23_0* GlobalNamespace::__RoomManager____c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass23_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass23_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass23_0::_SetCurrentRoomIsCreative_b__0(::System::DateTime timestamp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass23_0*>::get(), "<SetCurrentRoomIsCreative>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timestamp);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass23_0::__RoomManager____c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass27_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163cd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass27_0._GoToRoom_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass27_0::*)(bool)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__0)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x163ff40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass27_0._GoToRoom_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass27_0::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__2)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1640120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass27_0._GoToRoom_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass27_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1640318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass27_0._GoToRoom_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass27_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__1)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1640430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_roomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_roomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_roomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_roomMapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMapKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_roomMapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMapKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_roomMapKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomMapKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_requestIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestIndex;
}
constexpr int32_t const& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_requestIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestIndex;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_requestIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestIndex = value;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_travelDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___travelDirection;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_travelDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___travelDirection;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_travelDirection(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___travelDirection = value;
}
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set___9__2(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomDatabase__OnFailure*& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get___9__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnFailure*> const& GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_get___9__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass27_0::__cordl_internal_set___9__3(::GlobalNamespace::__RoomDatabase__OnFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass27_0* GlobalNamespace::__RoomManager____c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__0(bool hasPermission) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasPermission);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__2(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__3(::StringW failCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failCode);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass27_0::_GoToRoom_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass27_0*>::get(), "<GoToRoom>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass27_0::__RoomManager____c__DisplayClass27_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163d364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_0._TryGoToNextRoom_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_0::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x164052c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_0._TryGoToNextRoom_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__3)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1640564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_0._TryGoToNextRoom_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__1)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1640690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager>& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager> const& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set___9__2(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___9__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_get___9__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_0::__cordl_internal_set___9__3(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass28_0* GlobalNamespace::__RoomManager____c__DisplayClass28_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__2(::GlobalNamespace::__RoomMap__Node* newNodeInNewRoomMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newNodeInNewRoomMap);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__3(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_0::_TryGoToNextRoom_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*>::get(), "<TryGoToNextRoom>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass28_0::__RoomManager____c__DisplayClass28_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_1::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163d36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_1*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass28_1._TryGoToNextRoom_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass28_1::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass28_1::_TryGoToNextRoom_b__0)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x16407bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_1*>::get(), "<TryGoToNextRoom>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_get_currentRoomMapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentRoomMapKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_get_currentRoomMapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentRoomMapKey;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_set_currentRoomMapKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentRoomMapKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass28_0*& GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*> const&
GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass28_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::__RoomManager____c__DisplayClass28_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass28_1* GlobalNamespace::__RoomManager____c__DisplayClass28_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass28_1*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_1*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass28_1::_TryGoToNextRoom_b__0(::GlobalNamespace::__RoomMap__Node* curNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass28_1*>::get(), "<TryGoToNextRoom>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curNode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass28_1::__RoomManager____c__DisplayClass28_1() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass29_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass29_0._GoToNextRoom_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass29_0::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass29_0::_GoToNextRoom_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1640d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(), "<GoToNextRoom>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass29_0._GoToNextRoom_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass29_0::*)(::StringW, bool)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass29_0::_GoToNextRoom_b__1)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1640dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(), "<GoToNextRoom>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager>& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager> const& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass29_0::__cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass29_0* GlobalNamespace::__RoomManager____c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass29_0::_GoToNextRoom_b__0(::GlobalNamespace::RoomData* roomData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(), "<GoToNextRoom>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass29_0::_GoToNextRoom_b__1(::StringW errorMessage, bool isFatal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass29_0*>::get(), "<GoToNextRoom>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage, isFatal);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass29_0::__RoomManager____c__DisplayClass29_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass61_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass61_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163df44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass61_0._TrySaveMap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass61_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass61_0::_TrySaveMap_b__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1640f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(),
                                                                               "<TrySaveMap>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass61_0._TrySaveMap_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass61_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass61_0::_TrySaveMap_b__1)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1641060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(), "<TrySaveMap>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__RoomManager__OnSaveMapSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnSaveMapFailure*& GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnSaveMapFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass61_0::__cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnSaveMapFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass61_0* GlobalNamespace::__RoomManager____c__DisplayClass61_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass61_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass61_0::_TrySaveMap_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(),
                                                                             "<TrySaveMap>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass61_0::_TrySaveMap_b__1(::StringW failMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass61_0*>::get(), "<TrySaveMap>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass61_0::__RoomManager____c__DisplayClass61_0() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass65_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass65_0::*)()>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163e234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass65_0._TryResetMap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass65_0::*)(::GlobalNamespace::MapData)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass65_0::_TryResetMap_b__0)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1641288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(), "<TryResetMap>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomManager____c__DisplayClass65_0._TryResetMap_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomManager____c__DisplayClass65_0::*)(::StringW)>(
    &::GlobalNamespace::__RoomManager____c__DisplayClass65_0::_TryResetMap_b__1)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x164140c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(), "<TryResetMap>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RoomManager>& GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RoomManager> const& GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnResetMapFailure*& GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get_onFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnResetMapFailure*> const&
GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get_onFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onFailure;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnResetMapFailure* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnResetMapSuccess*& GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get_onSuccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnResetMapSuccess*> const&
GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_get_onSuccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSuccess;
}
constexpr void GlobalNamespace::__RoomManager____c__DisplayClass65_0::__cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnResetMapSuccess* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomManager____c__DisplayClass65_0* GlobalNamespace::__RoomManager____c__DisplayClass65_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>());
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass65_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass65_0::_TryResetMap_b__0(::GlobalNamespace::MapData mapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(), "<TryResetMap>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapData);
}
inline void GlobalNamespace::__RoomManager____c__DisplayClass65_0::_TryResetMap_b__1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomManager____c__DisplayClass65_0*>::get(), "<TryResetMap>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass65_0::__RoomManager____c__DisplayClass65_0() {}
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GetRoomPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::RoomManager::*)(::StringW)>(
    &::GlobalNamespace::RoomManager::GetRoomPrefab)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1632b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetRoomPrefab", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GetTravelDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomManager__TravelDirection (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(
    &::GlobalNamespace::RoomManager::GetTravelDirection)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x163a8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.InvertTravelDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomManager__TravelDirection (*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomManager::InvertTravelDirection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x162eeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "InvertTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GetTravelDirectionForwardRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomManager::GetTravelDirectionForwardRotation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1639f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirectionForwardRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GetTravelDirectionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomManager::GetTravelDirectionOffset)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x163a904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirectionOffset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::Start)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x163aa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::GlobalNamespace::AccountData*)>(
    &::GlobalNamespace::RoomManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x163ae40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GoToStartingRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::GoToStartingRoom)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x163aee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToStartingRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GoToSpawnRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::GoToSpawnRoom)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x163b328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToSpawnRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GoToPrivateRoomTransitionRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::GoToPrivateRoomTransitionRoom)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x163bb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                               "GoToPrivateRoomTransitionRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.ClearLastRoomKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::RoomManager::ClearLastRoomKey)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x163bcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ClearLastRoomKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.SetLastRoomKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::RoomManager::SetLastRoomKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x163bd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetLastRoomKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.SetCurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::RoomData*, ::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::RoomManager::SetCurrentRoom)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x163bd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetCurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.SetCurrentRoomIsCreative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::RoomManager::SetCurrentRoomIsCreative)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x163cb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetCurrentRoomIsCreative",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GoToRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::GlobalNamespace::__RoomManager__TravelDirection,
                                                                                           ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*)>(
    &::GlobalNamespace::RoomManager::GoToRoom)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x163b720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TryGoToNextRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(
    ::GlobalNamespace::__RoomManager__TravelDirection, ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*)>(
    &::GlobalNamespace::RoomManager::TryGoToNextRoom)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x163d084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryGoToNextRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.GoToNextRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(
    ::StringW, ::StringW, ::GlobalNamespace::__RoomManager__TravelDirection, ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*)>(
    &::GlobalNamespace::RoomManager::GoToNextRoom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x163d374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToNextRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.ShowFailedToLoadRoomFromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::StringW)>(&::GlobalNamespace::RoomManager::ShowFailedToLoadRoomFromType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x163d4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ShowFailedToLoadRoomFromType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.ShowFailedToLoadRoomMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::StringW)>(&::GlobalNamespace::RoomManager::ShowFailedToLoadRoomMessage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x163d544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ShowFailedToLoadRoomMessage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.get_loadedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Room> (::GlobalNamespace::RoomManager::*)()>(
    &::GlobalNamespace::RoomManager::get_loadedRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163d5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "get_loadedRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.set_loadedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::RoomManager::set_loadedRoom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x163d5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "set_loadedRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.get_hasLoadedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::get_hasLoadedRoom)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x163caf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "get_hasLoadedRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.UnloadRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::RoomManager::*)(::GlobalNamespace::__RoomManager__TravelDirection, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::RoomManager::UnloadRoom)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x163c3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "UnloadRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.LoadRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(
    ::GlobalNamespace::RoomData*, ::GlobalNamespace::__RoomManager__TravelDirection, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::RoomManager::LoadRoom)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x163c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "LoadRoom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::Update)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x163d9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x163df38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.RestartAutosaveTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::RestartAutosaveTimer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x163d964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "RestartAutosaveTimer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TrySaveMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(
    ::GlobalNamespace::__RoomManager__OnSaveMapSuccess*, ::GlobalNamespace::__RoomManager__OnSaveMapFailure*)>(&::GlobalNamespace::RoomManager::TrySaveMap)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x163d5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TrySaveMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.OnReceivedMapAutoSaveSucceeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::OnReceivedMapAutoSaveSucceeeded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x163df4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "OnReceivedMapAutoSaveSucceeeded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TryResetMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(
    ::GlobalNamespace::__RoomManager__OnResetMapSuccess*, ::GlobalNamespace::__RoomManager__OnResetMapFailure*)>(&::GlobalNamespace::RoomManager::TryResetMap)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x163df94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryResetMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TryEnterPlayMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::TryEnterPlayMode)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x163e23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryEnterPlayMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TryEnterCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::TryEnterCreativeMode)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x163e47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryEnterCreativeMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.TryAutoEnterCreativeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::TryAutoEnterCreativeMode)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x163dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                               "TryAutoEnterCreativeMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.CreateRoomAutoTransitionEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(float_t)>(&::GlobalNamespace::RoomManager::CreateRoomAutoTransitionEffect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x163dc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "CreateRoomAutoTransitionEffect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager.RemoveRoomAutoTransitionEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::RemoveRoomAutoTransitionEffect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x163e724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                               "RemoveRoomAutoTransitionEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x163e7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryEnterPlayMode_b__66_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)()>(&::GlobalNamespace::RoomManager::_TryEnterPlayMode_b__66_0)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x163e7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                               "<TryEnterPlayMode>b__66_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryEnterCreativeMode_b__67_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::GlobalNamespace::MapData)>(
    &::GlobalNamespace::RoomManager::_TryEnterCreativeMode_b__67_0)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x163e98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryEnterCreativeMode>b__67_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryAutoEnterCreativeMode_b__69_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(bool)>(&::GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_0)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x163eb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryAutoEnterCreativeMode_b__69_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::GlobalNamespace::MapData)>(
    &::GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x163ece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryAutoEnterCreativeMode_b__69_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::StringW)>(
    &::GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_3)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x163ed80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomManager._TryAutoEnterCreativeMode_b__69_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomManager::*)(::StringW)>(
    &::GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_1)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x163ee8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomManager::__cordl_internal_get_roomPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomManager::__cordl_internal_get_roomPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomPrefab;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_roomPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*>&
GlobalNamespace::RoomManager::__cordl_internal_get_roomPrefabOverridesRaw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomPrefabOverridesRaw;
}
constexpr ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> const&
GlobalNamespace::RoomManager::__cordl_internal_get_roomPrefabOverridesRaw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomPrefabOverridesRaw;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_roomPrefabOverridesRaw(
    ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomPrefabOverridesRaw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomManager::__cordl_internal_get_hallwayPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwayPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomManager::__cordl_internal_get_hallwayPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwayPrefab;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_hallwayPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hallwayPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Room>& GlobalNamespace::RoomManager::__cordl_internal_get__loadedRoom_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedRoom_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::Room> const& GlobalNamespace::RoomManager::__cordl_internal_get__loadedRoom_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedRoom_k__BackingField;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set__loadedRoom_k__BackingField(::UnityW<::GlobalNamespace::Room> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedRoom_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RoomManager::__cordl_internal_get_nextAutoCycleCheckTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAutoCycleCheckTime;
}
constexpr float_t const& GlobalNamespace::RoomManager::__cordl_internal_get_nextAutoCycleCheckTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAutoCycleCheckTime;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_nextAutoCycleCheckTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAutoCycleCheckTime = value;
}
constexpr ::GlobalNamespace::__RoomManager__OnRoomLoaded*& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomLoadedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomLoadedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomLoaded*> const& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomLoadedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomLoadedCallbacks;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_onRoomLoadedCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRoomLoadedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnRoomLoaded*& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomLoadedLateCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomLoadedLateCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomLoaded*> const& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomLoadedLateCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomLoadedLateCallbacks;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_onRoomLoadedLateCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRoomLoadedLateCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnRoomUnloaded*& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomUnloadedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomUnloadedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomUnloaded*> const& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomUnloadedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomUnloadedCallbacks;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_onRoomUnloadedCallbacks(::GlobalNamespace::__RoomManager__OnRoomUnloaded* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRoomUnloadedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomManager__OnRoomPositionShift*& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomPositionShiftCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomPositionShiftCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomPositionShift*> const& GlobalNamespace::RoomManager::__cordl_internal_get_onRoomPositionShiftCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onRoomPositionShiftCallbacks;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_onRoomPositionShiftCallbacks(::GlobalNamespace::__RoomManager__OnRoomPositionShift* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRoomPositionShiftCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RoomManager::__cordl_internal_get_nextAutosave() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAutosave;
}
constexpr float_t const& GlobalNamespace::RoomManager::__cordl_internal_get_nextAutosave() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextAutosave;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_nextAutosave(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextAutosave = value;
}
constexpr bool& GlobalNamespace::RoomManager::__cordl_internal_get_isTryingToAutoEnterCreativeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTryingToAutoEnterCreativeMode;
}
constexpr bool const& GlobalNamespace::RoomManager::__cordl_internal_get_isTryingToAutoEnterCreativeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTryingToAutoEnterCreativeMode;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_isTryingToAutoEnterCreativeMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTryingToAutoEnterCreativeMode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RoomManager::__cordl_internal_get_autoCycleTransitionPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCycleTransitionPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RoomManager::__cordl_internal_get_autoCycleTransitionPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoCycleTransitionPrefab;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_autoCycleTransitionPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___autoCycleTransitionPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RoomAutoCycleEffect>& GlobalNamespace::RoomManager::__cordl_internal_get_curRoomAutoTransitionEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRoomAutoTransitionEffect;
}
constexpr ::UnityW<::GlobalNamespace::RoomAutoCycleEffect> const& GlobalNamespace::RoomManager::__cordl_internal_get_curRoomAutoTransitionEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curRoomAutoTransitionEffect;
}
constexpr void GlobalNamespace::RoomManager::__cordl_internal_set_curRoomAutoTransitionEffect(::UnityW<::GlobalNamespace::RoomAutoCycleEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curRoomAutoTransitionEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RoomManager::setStaticF_roomPrefabOverrides(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>*, "roomPrefabOverrides",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::RoomManager::getStaticF_roomPrefabOverrides() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>*, "roomPrefabOverrides",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline void GlobalNamespace::RoomManager::setStaticF_currentRoomData(::GlobalNamespace::RoomData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RoomData*, "currentRoomData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(
      std::forward<::GlobalNamespace::RoomData*>(value));
}
inline ::GlobalNamespace::RoomData* GlobalNamespace::RoomManager::getStaticF_currentRoomData() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RoomData*, "currentRoomData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline void GlobalNamespace::RoomManager::setStaticF_currentGoToRoomRequestIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "currentGoToRoomRequestIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RoomManager::getStaticF_currentGoToRoomRequestIndex() {
  return ::cordl_internals::getStaticField<int32_t, "currentGoToRoomRequestIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline void GlobalNamespace::RoomManager::setStaticF_onRoomLoadedPersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnRoomLoaded*, "onRoomLoadedPersistentCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(std::forward<::GlobalNamespace::__RoomManager__OnRoomLoaded*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* GlobalNamespace::RoomManager::getStaticF_onRoomLoadedPersistentCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnRoomLoaded*, "onRoomLoadedPersistentCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline void GlobalNamespace::RoomManager::setStaticF_onRoomLoadedLatePersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnRoomLoaded*, "onRoomLoadedLatePersistentCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(std::forward<::GlobalNamespace::__RoomManager__OnRoomLoaded*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* GlobalNamespace::RoomManager::getStaticF_onRoomLoadedLatePersistentCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnRoomLoaded*, "onRoomLoadedLatePersistentCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline void GlobalNamespace::RoomManager::setStaticF_onRoomUnloadedPersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomUnloaded* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomManager__OnRoomUnloaded*, "onRoomUnloadedPersistentCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>(
      std::forward<::GlobalNamespace::__RoomManager__OnRoomUnloaded*>(value));
}
inline ::GlobalNamespace::__RoomManager__OnRoomUnloaded* GlobalNamespace::RoomManager::getStaticF_onRoomUnloadedPersistentCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomManager__OnRoomUnloaded*, "onRoomUnloadedPersistentCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get>();
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::RoomManager::GetRoomPrefab(::StringW roomKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetRoomPrefab", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, roomKey);
}
inline ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::RoomManager::GetTravelDirection(::UnityEngine::Vector2Int current, ::UnityEngine::Vector2Int target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomManager__TravelDirection, false>(nullptr, ___internal_method, current, target);
}
inline ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::RoomManager::InvertTravelDirection(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "InvertTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomManager__TravelDirection, false>(nullptr, ___internal_method, direction);
}
inline ::UnityEngine::Quaternion GlobalNamespace::RoomManager::GetTravelDirectionForwardRotation(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirectionForwardRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, direction);
}
inline ::UnityEngine::Vector2Int GlobalNamespace::RoomManager::GetTravelDirectionOffset(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GetTravelDirectionOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(nullptr, ___internal_method, direction);
}
inline void GlobalNamespace::RoomManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountData);
}
inline void GlobalNamespace::RoomManager::GoToStartingRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToStartingRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::GoToSpawnRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToSpawnRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::GoToPrivateRoomTransitionRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                             "GoToPrivateRoomTransitionRoom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::ClearLastRoomKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ClearLastRoomKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RoomManager::SetLastRoomKey(::StringW roomMapKey, ::StringW roomKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetLastRoomKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, roomMapKey, roomKey);
}
inline void GlobalNamespace::RoomManager::SetCurrentRoom(::GlobalNamespace::RoomData* newRoomData, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetCurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newRoomData, travelDirection);
}
inline void GlobalNamespace::RoomManager::SetCurrentRoomIsCreative(bool newIsCreative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "SetCurrentRoomIsCreative",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newIsCreative);
}
/// @param onSuccess: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* (default: nullptr)
inline void GlobalNamespace::RoomManager::GoToRoom(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection,
                                                   ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, roomMapKey, roomKey, travelDirection, onSuccess, onFailure);
}
/// @param onSuccess: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* (default: nullptr)
inline void GlobalNamespace::RoomManager::TryGoToNextRoom(::GlobalNamespace::__RoomManager__TravelDirection direction, ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess,
                                                          ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryGoToNextRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, direction, onSuccess, onFailure);
}
/// @param onSuccess: ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* (default: nullptr)
inline void GlobalNamespace::RoomManager::GoToNextRoom(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection direction,
                                                       ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "GoToNextRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomMapKey, roomKey, direction, onSuccess, onFailure);
}
inline void GlobalNamespace::RoomManager::ShowFailedToLoadRoomFromType(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ShowFailedToLoadRoomFromType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
inline void GlobalNamespace::RoomManager::ShowFailedToLoadRoomMessage(::StringW errorMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "ShowFailedToLoadRoomMessage",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage);
}
inline ::UnityW<::GlobalNamespace::Room> GlobalNamespace::RoomManager::get_loadedRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "get_loadedRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Room>, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::set_loadedRoom(::GlobalNamespace::Room* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "set_loadedRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomManager::get_hasLoadedRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "get_hasLoadedRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::UnloadRoom(::GlobalNamespace::__RoomManager__TravelDirection travelDirection, ByRef<::UnityEngine::Vector3> travelAnchorPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "UnloadRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, travelDirection, travelAnchorPosition);
}
inline void GlobalNamespace::RoomManager::LoadRoom(::GlobalNamespace::RoomData* roomData, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection,
                                                   ByRef<::UnityEngine::Vector3> travelAnchorPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "LoadRoom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomData, travelDirection, travelAnchorPosition);
}
inline void GlobalNamespace::RoomManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::RestartAutosaveTimer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "RestartAutosaveTimer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param onSuccess: ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__RoomManager__OnSaveMapFailure* (default: nullptr)
inline void GlobalNamespace::RoomManager::TrySaveMap(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnSaveMapFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TrySaveMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnSaveMapFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void GlobalNamespace::RoomManager::OnReceivedMapAutoSaveSucceeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                             "OnReceivedMapAutoSaveSucceeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param onSuccess: ::GlobalNamespace::__RoomManager__OnResetMapSuccess* (default: nullptr)
/// @param onFailure: ::GlobalNamespace::__RoomManager__OnResetMapFailure* (default: nullptr)
inline void GlobalNamespace::RoomManager::TryResetMap(::GlobalNamespace::__RoomManager__OnResetMapSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnResetMapFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryResetMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnResetMapSuccess*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__OnResetMapFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void GlobalNamespace::RoomManager::TryEnterPlayMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryEnterPlayMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::TryEnterCreativeMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryEnterCreativeMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::TryAutoEnterCreativeMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "TryAutoEnterCreativeMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::CreateRoomAutoTransitionEffect(float_t timeIntoWindow) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "CreateRoomAutoTransitionEffect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeIntoWindow);
}
inline void GlobalNamespace::RoomManager::RemoveRoomAutoTransitionEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                             "RemoveRoomAutoTransitionEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RoomManager* GlobalNamespace::RoomManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomManager*>());
}
inline void GlobalNamespace::RoomManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::_TryEnterPlayMode_b__66_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(),
                                                                             "<TryEnterPlayMode>b__66_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomManager::_TryEnterCreativeMode_b__67_0(::GlobalNamespace::MapData mapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryEnterCreativeMode>b__67_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapData);
}
inline void GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_0(bool didSwitch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, didSwitch);
}
inline void GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_2(::GlobalNamespace::MapData mapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mapData);
}
inline void GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_3(::StringW failCode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failCode);
}
inline void GlobalNamespace::RoomManager::_TryAutoEnterCreativeMode_b__69_1(::StringW errType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomManager*>::get(), "<TryAutoEnterCreativeMode>b__69_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomManager::RoomManager() {}
