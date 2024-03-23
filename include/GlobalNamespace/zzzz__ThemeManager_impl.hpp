#pragma once
#include "GlobalNamespace/zzzz__ColorValue_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ThemeManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorValue_def.hpp"
#include "GlobalNamespace/zzzz__RandomColorType_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__ThemeManager_def.hpp"
#include "GlobalNamespace/zzzz__Theme_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager__ThemeData.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ThemeManager__ThemeData::*)()>(&::GlobalNamespace::__ThemeManager__ThemeData::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14483f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__ThemeData>::get(), "IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::__ThemeManager__ThemeData::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__ThemeData>::get(), "IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "analyticsKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "sceneryPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "groundColorKey", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "groundColorValue", ty: "::GlobalNamespace::ColorValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "leaveFootprintsOnGround", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "playspaceColorKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "playspaceColorValue", ty:
// "::GlobalNamespace::ColorValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundMapObjectKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "groundMapObjectTriplanarMaterialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "skyTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "overrideAmbientLightColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ambientLightColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "overrideDirectionalLightColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "directionalLightColor", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "brightenLightingInCreative", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hallwayEntranceFlatLargePrefab", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "hallwayEntranceFlatSmallPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "hallwayArchPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "corridorWallColorKey",
// ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "corridorWallTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "useSeperateGroundBlockColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundBlockColorKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "structuralColorKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "stuffedColorKeys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "techWebPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cosmeticsStoreKey", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "groundSoundEffectKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "ambientSoundSetKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ThemeManager__ThemeData::__ThemeManager__ThemeData(
    ::StringW key, ::StringW analyticsKey, ::UnityW<::UnityEngine::GameObject> sceneryPrefab, ::StringW groundColorKey, ::GlobalNamespace::ColorValue groundColorValue, bool leaveFootprintsOnGround,
    ::StringW playspaceColorKey, ::GlobalNamespace::ColorValue playspaceColorValue, ::StringW groundMapObjectKey, int32_t groundMapObjectTriplanarMaterialIndex,
    ::UnityW<::UnityEngine::Texture2D> skyTexture, bool overrideAmbientLightColor, ::UnityEngine::Color ambientLightColor, bool overrideDirectionalLightColor,
    ::UnityEngine::Color directionalLightColor, bool brightenLightingInCreative, ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatLargePrefab,
    ::UnityW<::UnityEngine::GameObject> hallwayEntranceFlatSmallPrefab, ::UnityW<::UnityEngine::GameObject> hallwayArchPrefab, ::StringW corridorWallColorKey,
    ::UnityW<::UnityEngine::Texture2D> corridorWallTexture, bool useSeperateGroundBlockColor, ::StringW groundBlockColorKey, ::StringW structuralColorKey,
    ::ArrayW<::StringW, ::Array<::StringW>*> stuffedColorKeys, ::UnityW<::UnityEngine::GameObject> techWebPrefab, ::StringW cosmeticsStoreKey, ::StringW groundSoundEffectKey,
    ::StringW ambientSoundSetKey) noexcept {
  this->key = key;
  this->analyticsKey = analyticsKey;
  this->sceneryPrefab = sceneryPrefab;
  this->groundColorKey = groundColorKey;
  this->groundColorValue = groundColorValue;
  this->leaveFootprintsOnGround = leaveFootprintsOnGround;
  this->playspaceColorKey = playspaceColorKey;
  this->playspaceColorValue = playspaceColorValue;
  this->groundMapObjectKey = groundMapObjectKey;
  this->groundMapObjectTriplanarMaterialIndex = groundMapObjectTriplanarMaterialIndex;
  this->skyTexture = skyTexture;
  this->overrideAmbientLightColor = overrideAmbientLightColor;
  this->ambientLightColor = ambientLightColor;
  this->overrideDirectionalLightColor = overrideDirectionalLightColor;
  this->directionalLightColor = directionalLightColor;
  this->brightenLightingInCreative = brightenLightingInCreative;
  this->hallwayEntranceFlatLargePrefab = hallwayEntranceFlatLargePrefab;
  this->hallwayEntranceFlatSmallPrefab = hallwayEntranceFlatSmallPrefab;
  this->hallwayArchPrefab = hallwayArchPrefab;
  this->corridorWallColorKey = corridorWallColorKey;
  this->corridorWallTexture = corridorWallTexture;
  this->useSeperateGroundBlockColor = useSeperateGroundBlockColor;
  this->groundBlockColorKey = groundBlockColorKey;
  this->structuralColorKey = structuralColorKey;
  this->stuffedColorKeys = stuffedColorKeys;
  this->techWebPrefab = techWebPrefab;
  this->cosmeticsStoreKey = cosmeticsStoreKey;
  this->groundSoundEffectKey = groundSoundEffectKey;
  this->ambientSoundSetKey = ambientSoundSetKey;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ThemeManager__ThemeData::__ThemeManager__ThemeData() {}
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1444da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::*)(::GlobalNamespace::Theme*)>(
    &::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1448e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::*)(::GlobalNamespace::Theme*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1448e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1448e34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>(object, method));
}
inline void GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::Invoke(::GlobalNamespace::Theme* newTheme) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTheme);
}
inline ::System::IAsyncResult* GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::BeginInvoke(::GlobalNamespace::Theme* newTheme, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newTheme, callback, object);
}
inline void GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated::__ThemeManager__OnCurrentThemeUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)(int32_t)>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14485e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)()>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1448e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)()>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1448e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)()>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1448fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)()>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1448fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::*)()>(
    &::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1448ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ThemeManager>& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ThemeManager> const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThemeManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get_newAmbientColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAmbientColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get_newAmbientColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newAmbientColor;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set_newAmbientColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newAmbientColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get_newDirectionalLightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newDirectionalLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get_newDirectionalLightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newDirectionalLightColor;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set_newDirectionalLightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newDirectionalLightColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__startAmbientColor_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startAmbientColor_5__2;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__startAmbientColor_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startAmbientColor_5__2;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set__startAmbientColor_5__2(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startAmbientColor_5__2 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__startDirectionalLightColor_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDirectionalLightColor_5__3;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__startDirectionalLightColor_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDirectionalLightColor_5__3;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set__startDirectionalLightColor_5__3(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startDirectionalLightColor_5__3 = value;
}
constexpr float_t& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__p_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__4;
}
constexpr float_t const& GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_get__p_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____p_5__4;
}
constexpr void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__cordl_internal_set__p_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____p_5__4 = value;
}
inline ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34* GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>(__1__state));
}
inline void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ThemeManager___TransitionLightingRoutine_d__34::__ThemeManager___TransitionLightingRoutine_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.get_currentTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Theme* (*)()>(&::GlobalNamespace::ThemeManager::get_currentTheme)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1447c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "get_currentTheme",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.set_currentTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Theme*)>(&::GlobalNamespace::ThemeManager::set_currentTheme)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1447c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "set_currentTheme", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.get_hasCurrentTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::ThemeManager::get_hasCurrentTheme)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x14426d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "get_hasCurrentTheme",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.SetCurrentTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::ThemeManager::SetCurrentTheme)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1447cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetCurrentTheme", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)()>(&::GlobalNamespace::ThemeManager::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1448168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.OnIsCreativeModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(bool)>(&::GlobalNamespace::ThemeManager::OnIsCreativeModeUpdated)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x14482b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "OnIsCreativeModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.TryGetTheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ThemeManager::*)(::StringW, ByRef<::GlobalNamespace::Theme*>)>(
    &::GlobalNamespace::ThemeManager::TryGetTheme)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x143af88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "TryGetTheme", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Theme*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetRandomColorKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::RandomColorType)>(&::GlobalNamespace::ThemeManager::GetRandomColorKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1448414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetRandomColorKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RandomColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.SetDefaultLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(::GlobalNamespace::Theme*, bool)>(
    &::GlobalNamespace::ThemeManager::SetDefaultLighting)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1447ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetDefaultLighting", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.TransitionLightingRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ThemeManager::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ThemeManager::TransitionLightingRoutine)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x144852c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "TransitionLightingRoutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.SetLightingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ThemeManager::SetLightingOverride)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x144860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetLightingOverride", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.ClearLightingOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)()>(&::GlobalNamespace::ThemeManager::ClearLightingOverride)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1448628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "ClearLightingOverride",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.SetLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ThemeManager::SetLighting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14484d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetLighting", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetCurrentDefaultLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(ByRef<::UnityEngine::Color>, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::ThemeManager::GetCurrentDefaultLighting)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x144864c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetCurrentDefaultLighting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetCurrentLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(ByRef<::UnityEngine::Color>, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::ThemeManager::GetCurrentLighting)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1448660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetCurrentLighting", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.SetDirectionalLightDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::ThemeManager::SetDirectionalLightDirection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x144868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetDirectionalLightDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.RestoreDefaultDirectionalLightDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)()>(
    &::GlobalNamespace::ThemeManager::RestoreDefaultDirectionalLightDirection)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1448724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "RestoreDefaultDirectionalLightDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetDirectionalLightDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ThemeManager::*)()>(
    &::GlobalNamespace::ThemeManager::GetDirectionalLightDirection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14487d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(),
                                                                               "GetDirectionalLightDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetDefaultDirectionalLightDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ThemeManager::*)()>(
    &::GlobalNamespace::ThemeManager::GetDefaultDirectionalLightDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1448800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetDefaultDirectionalLightDirection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetHallwayHalfPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::StringW, ::GlobalNamespace::__RoomManager__TravelDirection)>(
    &::GlobalNamespace::ThemeManager::GetHallwayHalfPrefab)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x144880c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetHallwayHalfPrefab", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager.GetLobbyPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW, ::StringW, ByRef<int32_t>)>(
    &::GlobalNamespace::ThemeManager::GetLobbyPrefab)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1448a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetLobbyPrefab", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeManager::*)()>(&::GlobalNamespace::ThemeManager::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1448cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*>& GlobalNamespace::ThemeManager::__cordl_internal_get_themeDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> const& GlobalNamespace::ThemeManager::__cordl_internal_get_themeDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeDatas;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_themeDatas(::ArrayW<::GlobalNamespace::__ThemeManager__ThemeData, ::Array<::GlobalNamespace::__ThemeManager__ThemeData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___themeDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*& GlobalNamespace::ThemeManager::__cordl_internal_get_onCurrentThemeUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCurrentThemeUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated*> const&
GlobalNamespace::ThemeManager::__cordl_internal_get_onCurrentThemeUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onCurrentThemeUpdatedCallbacks;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_onCurrentThemeUpdatedCallbacks(::GlobalNamespace::__ThemeManager__OnCurrentThemeUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onCurrentThemeUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::ThemeManager::__cordl_internal_get_directionalLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::ThemeManager::__cordl_internal_get_directionalLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directionalLight;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___directionalLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultAmbientLightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAmbientLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultAmbientLightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAmbientLightColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_defaultAmbientLightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAmbientLightColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalLightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalLightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalLightColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_defaultDirectionalLightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultDirectionalLightColor = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::ThemeManager::__cordl_internal_get_curLightingTransitionRoutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLightingTransitionRoutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::ThemeManager::__cordl_internal_get_curLightingTransitionRoutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curLightingTransitionRoutine;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_curLightingTransitionRoutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curLightingTransitionRoutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_mapObjectFogColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapObjectFogColor = value;
}
constexpr float_t& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogDistanceForMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogDistanceForMax;
}
constexpr float_t const& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogDistanceForMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogDistanceForMax;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_mapObjectFogDistanceForMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapObjectFogDistanceForMax = value;
}
constexpr float_t& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogMaxAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogMaxAmount;
}
constexpr float_t const& GlobalNamespace::ThemeManager::__cordl_internal_get_mapObjectFogMaxAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapObjectFogMaxAmount;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_mapObjectFogMaxAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapObjectFogMaxAmount = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultAmbientColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAmbientColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultAmbientColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAmbientColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_defaultAmbientColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAmbientColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_defaultDirectionalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultDirectionalColor = value;
}
constexpr bool& GlobalNamespace::ThemeManager::__cordl_internal_get_isLightingOverrideActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLightingOverrideActive;
}
constexpr bool const& GlobalNamespace::ThemeManager::__cordl_internal_get_isLightingOverrideActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLightingOverrideActive;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_isLightingOverrideActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLightingOverrideActive = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_overrideAmbientColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAmbientColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_overrideAmbientColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAmbientColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_overrideAmbientColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideAmbientColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ThemeManager::__cordl_internal_get_overrideDirectionalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDirectionalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ThemeManager::__cordl_internal_get_overrideDirectionalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDirectionalColor;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_overrideDirectionalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDirectionalColor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalLightDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalLightDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ThemeManager::__cordl_internal_get_defaultDirectionalLightDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultDirectionalLightDirection;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_defaultDirectionalLightDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultDirectionalLightDirection = value;
}
constexpr bool& GlobalNamespace::ThemeManager::__cordl_internal_get_hasDefaultDirectionalLightDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultDirectionalLightDirection;
}
constexpr bool const& GlobalNamespace::ThemeManager::__cordl_internal_get_hasDefaultDirectionalLightDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultDirectionalLightDirection;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_hasDefaultDirectionalLightDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDefaultDirectionalLightDirection = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ThemeManager::__cordl_internal_get_sceneryGroundMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneryGroundMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ThemeManager::__cordl_internal_get_sceneryGroundMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneryGroundMat;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_sceneryGroundMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneryGroundMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ThemeManager::__cordl_internal_get_corridorWallMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorWallMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ThemeManager::__cordl_internal_get_corridorWallMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___corridorWallMat;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_corridorWallMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___corridorWallMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsEntranceHallwayHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceHallwayHalf;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsEntranceHallwayHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsEntranceHallwayHalf;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_privateRoomsEntranceHallwayHalf(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsEntranceHallwayHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsExitHallwayHalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExitHallwayHalf;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsExitHallwayHalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExitHallwayHalf;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_privateRoomsExitHallwayHalf(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsExitHallwayHalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsExpansionBlockerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExpansionBlockerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ThemeManager::__cordl_internal_get_privateRoomsExpansionBlockerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomsExpansionBlockerPrefab;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_privateRoomsExpansionBlockerPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomsExpansionBlockerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ThemeManager::__cordl_internal_get_hallwayVoidPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwayVoidPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ThemeManager::__cordl_internal_get_hallwayVoidPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hallwayVoidPrefab;
}
constexpr void GlobalNamespace::ThemeManager::__cordl_internal_set_hallwayVoidPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hallwayVoidPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ThemeManager::setStaticF_themes(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>*, "themes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>* GlobalNamespace::ThemeManager::getStaticF_themes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::Theme*>*, "themes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>();
}
inline void GlobalNamespace::ThemeManager::setStaticF__currentTheme_k__BackingField(::GlobalNamespace::Theme* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::Theme*, "<currentTheme>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>(
      std::forward<::GlobalNamespace::Theme*>(value));
}
inline ::GlobalNamespace::Theme* GlobalNamespace::ThemeManager::getStaticF__currentTheme_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::Theme*, "<currentTheme>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>();
}
inline void GlobalNamespace::ThemeManager::setStaticF_hallwayHalvesByTheme(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*,
                                    "hallwayHalvesByTheme", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*
GlobalNamespace::ThemeManager::getStaticF_hallwayHalvesByTheme() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*,
                                           "hallwayHalvesByTheme", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>();
}
inline void GlobalNamespace::ThemeManager::setStaticF_lobbiesByTheme(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*,
                                    "lobbiesByTheme", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*
GlobalNamespace::ThemeManager::getStaticF_lobbiesByTheme() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>>*,
                                           "lobbiesByTheme", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get>();
}
inline ::GlobalNamespace::Theme* GlobalNamespace::ThemeManager::get_currentTheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "get_currentTheme",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Theme*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ThemeManager::set_currentTheme(::GlobalNamespace::Theme* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "set_currentTheme", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::ThemeManager::get_hasCurrentTheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "get_hasCurrentTheme",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ThemeManager::SetCurrentTheme(::StringW newThemeKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetCurrentTheme", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newThemeKey);
}
inline void GlobalNamespace::ThemeManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ThemeManager::OnIsCreativeModeUpdated(bool newIsCreativeMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "OnIsCreativeModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreativeMode);
}
inline bool GlobalNamespace::ThemeManager::TryGetTheme(::StringW key, ByRef<::GlobalNamespace::Theme*> theme) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "TryGetTheme", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Theme*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, theme);
}
inline ::StringW GlobalNamespace::ThemeManager::GetRandomColorKey(::GlobalNamespace::RandomColorType randomColorType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetRandomColorKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RandomColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, randomColorType);
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::ThemeManager::SetDefaultLighting(::GlobalNamespace::Theme* theme, bool instant) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetDefaultLighting", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Theme*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, theme, instant);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ThemeManager::TransitionLightingRoutine(::UnityEngine::Color newAmbientColor, ::UnityEngine::Color newDirectionalLightColor) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "TransitionLightingRoutine", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newAmbientColor, newDirectionalLightColor);
}
inline void GlobalNamespace::ThemeManager::SetLightingOverride(::UnityEngine::Color ambientColor, ::UnityEngine::Color directionalColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetLightingOverride", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ambientColor, directionalColor);
}
inline void GlobalNamespace::ThemeManager::ClearLightingOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "ClearLightingOverride",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ThemeManager::SetLighting(::UnityEngine::Color ambientColor, ::UnityEngine::Color directionalColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetLighting", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ambientColor, directionalColor);
}
inline void GlobalNamespace::ThemeManager::GetCurrentDefaultLighting(ByRef<::UnityEngine::Color> ambientColor, ByRef<::UnityEngine::Color> directionalColor) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetCurrentDefaultLighting", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ambientColor, directionalColor);
}
inline void GlobalNamespace::ThemeManager::GetCurrentLighting(ByRef<::UnityEngine::Color> ambientColor, ByRef<::UnityEngine::Color> directionalColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetCurrentLighting", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ambientColor, directionalColor);
}
inline void GlobalNamespace::ThemeManager::SetDirectionalLightDirection(::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "SetDirectionalLightDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, direction);
}
inline void GlobalNamespace::ThemeManager::RestoreDefaultDirectionalLightDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "RestoreDefaultDirectionalLightDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ThemeManager::GetDirectionalLightDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(),
                                                                             "GetDirectionalLightDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ThemeManager::GetDefaultDirectionalLightDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetDefaultDirectionalLightDirection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ThemeManager::GetHallwayHalfPrefab(::StringW theme, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetHallwayHalfPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, theme, roomKey, direction);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ThemeManager::GetLobbyPrefab(::StringW theme, ::StringW roomKey, ByRef<int32_t> lobbySeed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), "GetLobbyPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, theme, roomKey, lobbySeed);
}
inline ::GlobalNamespace::ThemeManager* GlobalNamespace::ThemeManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ThemeManager*>());
}
inline void GlobalNamespace::ThemeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThemeManager::ThemeManager() {}
