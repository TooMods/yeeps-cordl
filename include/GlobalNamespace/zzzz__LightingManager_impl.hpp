#pragma once
#include "GlobalNamespace/zzzz__MapLightData_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__LightingManager_def.hpp"
#include "GlobalNamespace/zzzz__LightingManager_def.hpp"
#include "GlobalNamespace/zzzz__MapLightData_def.hpp"
#include "GlobalNamespace/zzzz__PlayspaceData_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightingManager____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightingManager____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__LightingManager____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f6ab68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightingManager____c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightingManager____c__DisplayClass32_0._StartLightingGeneration_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightingManager____c__DisplayClass32_0::*)()>(
    &::GlobalNamespace::__LightingManager____c__DisplayClass32_0::_StartLightingGeneration_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f6c478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightingManager____c__DisplayClass32_0*>::get(),
                                                 "<StartLightingGeneration>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightingManager>& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LightingManager> const& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LightingManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3Int& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get_dimensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr ::UnityEngine::Vector3Int const& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get_dimensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dimensions;
}
constexpr void GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_set_dimensions(::UnityEngine::Vector3Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dimensions = value;
}
constexpr ::GlobalNamespace::MapLightData& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get_mapLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapLightData;
}
constexpr ::GlobalNamespace::MapLightData const& GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_get_mapLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mapLightData;
}
constexpr void GlobalNamespace::__LightingManager____c__DisplayClass32_0::__cordl_internal_set_mapLightData(::GlobalNamespace::MapLightData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mapLightData = value;
}
inline ::GlobalNamespace::__LightingManager____c__DisplayClass32_0* GlobalNamespace::__LightingManager____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LightingManager____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__LightingManager____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightingManager____c__DisplayClass32_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LightingManager____c__DisplayClass32_0::_StartLightingGeneration_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightingManager____c__DisplayClass32_0*>::get(),
                                               "<StartLightingGeneration>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightingManager____c__DisplayClass32_0::__LightingManager____c__DisplayClass32_0() {}
//  Writing Method size for method: ::GlobalNamespace::LightingManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::Start)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2f69664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f69cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f69e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.OnIsCreativeModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)(bool)>(&::GlobalNamespace::LightingManager::OnIsCreativeModeUpdated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f6a2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnIsCreativeModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.SetHasLoadedMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)(bool)>(&::GlobalNamespace::LightingManager::SetHasLoadedMapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f6a2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "SetHasLoadedMapData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.RefreshOnMapDataUpdatedCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(
    &::GlobalNamespace::LightingManager::RefreshOnMapDataUpdatedCallbacks)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2f69b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "RefreshOnMapDataUpdatedCallbacks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.OnMapDataUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::OnMapDataUpdated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2f6a3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnMapDataUpdated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.OnMapObjectPaintEmissionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(
    &::GlobalNamespace::LightingManager::OnMapObjectPaintEmissionChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f6a48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnMapObjectPaintEmissionChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.RefreshLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::RefreshLighting)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2f69920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "RefreshLighting",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.StartLightingGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)(::UnityEngine::Vector3Int, ::GlobalNamespace::MapLightData)>(
    &::GlobalNamespace::LightingManager::StartLightingGeneration)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2f6a86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "StartLightingGeneration", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapLightData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.TryStopLightingGeneration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::TryStopLightingGeneration)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f69d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(),
                                                                               "TryStopLightingGeneration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.CreateLightingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (*)(uint8_t, uint8_t, float_t, ::UnityEngine::Vector3Int, ::GlobalNamespace::MapLightData)>(
    &::GlobalNamespace::LightingManager::CreateLightingData)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x2f6ab70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "CreateLightingData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapLightData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.SetLightingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)(Il2CppObject*, int32_t)>(
    &::GlobalNamespace::LightingManager::SetLightingData)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2f69eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "SetLightingData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.ClearLightingData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::ClearLightingData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2f6aa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "ClearLightingData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.DoSunColumnFill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, uint8_t, Il2CppObject*, Il2CppObject*)>(
    &::GlobalNamespace::LightingManager::DoSunColumnFill)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2f6b1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoSunColumnFill", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.DoFloodfill
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3Int, uint8_t, Il2CppObject*, Il2CppObject*)>(
    &::GlobalNamespace::LightingManager::DoFloodfill)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x2f6bc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoFloodfill", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.DoFloodfillRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3Int, uint8_t, Il2CppObject*, Il2CppObject*)>(
    &::GlobalNamespace::LightingManager::DoFloodfillRecursive)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2f6b344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoFloodfillRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager.CreateLightingTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture3D> (::GlobalNamespace::LightingManager::*)(Il2CppObject*, int32_t)>(
    &::GlobalNamespace::LightingManager::CreateLightingTexture)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x2f6b6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "CreateLightingTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightingManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightingManager::*)()>(&::GlobalNamespace::LightingManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f6c410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightingManager::__cordl_internal_get_smoothingRatio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothingRatio;
}
constexpr float_t const& GlobalNamespace::LightingManager::__cordl_internal_get_smoothingRatio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothingRatio;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_smoothingRatio(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothingRatio = value;
}
constexpr uint8_t& GlobalNamespace::LightingManager::__cordl_internal_get_sunlightLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sunlightLevel;
}
constexpr uint8_t const& GlobalNamespace::LightingManager::__cordl_internal_get_sunlightLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sunlightLevel;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_sunlightLevel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sunlightLevel = value;
}
constexpr uint8_t& GlobalNamespace::LightingManager::__cordl_internal_get_inBlockLightLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBlockLightLevel;
}
constexpr uint8_t const& GlobalNamespace::LightingManager::__cordl_internal_get_inBlockLightLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBlockLightLevel;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_inBlockLightLevel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inBlockLightLevel = value;
}
constexpr uint8_t& GlobalNamespace::LightingManager::__cordl_internal_get_fullIntensityLightLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullIntensityLightLevel;
}
constexpr uint8_t const& GlobalNamespace::LightingManager::__cordl_internal_get_fullIntensityLightLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullIntensityLightLevel;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_fullIntensityLightLevel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullIntensityLightLevel = value;
}
constexpr float_t& GlobalNamespace::LightingManager::__cordl_internal_get_minLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLightIntensity;
}
constexpr float_t const& GlobalNamespace::LightingManager::__cordl_internal_get_minLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLightIntensity;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_minLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLightIntensity = value;
}
constexpr float_t& GlobalNamespace::LightingManager::__cordl_internal_get_sampleDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleDistance;
}
constexpr float_t const& GlobalNamespace::LightingManager::__cordl_internal_get_sampleDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleDistance;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_sampleDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampleDistance = value;
}
constexpr ::UnityW<::UnityEngine::Texture3D>& GlobalNamespace::LightingManager::__cordl_internal_get_exposedTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exposedTexture;
}
constexpr ::UnityW<::UnityEngine::Texture3D> const& GlobalNamespace::LightingManager::__cordl_internal_get_exposedTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exposedTexture;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_exposedTexture(::UnityW<::UnityEngine::Texture3D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exposedTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayspaceData*& GlobalNamespace::LightingManager::__cordl_internal_get_registeredPlayspaceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredPlayspaceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayspaceData*> const& GlobalNamespace::LightingManager::__cordl_internal_get_registeredPlayspaceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredPlayspaceData;
}
constexpr void GlobalNamespace::LightingManager::__cordl_internal_set_registeredPlayspaceData(::GlobalNamespace::PlayspaceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registeredPlayspaceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightingManager::setStaticF_desiresLightingData(bool value) {
  ::cordl_internals::setStaticField<bool, "desiresLightingData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LightingManager::getStaticF_desiresLightingData() {
  return ::cordl_internals::getStaticField<bool, "desiresLightingData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_readyToAutoRefreshLighting(bool value) {
  ::cordl_internals::setStaticField<bool, "readyToAutoRefreshLighting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LightingManager::getStaticF_readyToAutoRefreshLighting() {
  return ::cordl_internals::getStaticField<bool, "readyToAutoRefreshLighting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_shouldAutoRefreshLighting(bool value) {
  ::cordl_internals::setStaticField<bool, "shouldAutoRefreshLighting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LightingManager::getStaticF_shouldAutoRefreshLighting() {
  return ::cordl_internals::getStaticField<bool, "shouldAutoRefreshLighting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_lightingTextureMapDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "lightingTextureMapDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightingManager::getStaticF_lightingTextureMapDepth() {
  return ::cordl_internals::getStaticField<int32_t, "lightingTextureMapDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_lightingTexture(::UnityW<::UnityEngine::Texture3D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "lightingTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> GlobalNamespace::LightingManager::getStaticF_lightingTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "lightingTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_isRegistered(bool value) {
  ::cordl_internals::setStaticField<bool, "isRegistered", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LightingManager::getStaticF_isRegistered() {
  return ::cordl_internals::getStaticField<bool, "isRegistered", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_lightingGenerationThread(::System::Threading::Thread* value) {
  ::cordl_internals::setStaticField<::System::Threading::Thread*, "lightingGenerationThread", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(
      std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* GlobalNamespace::LightingManager::getStaticF_lightingGenerationThread() {
  return ::cordl_internals::getStaticField<::System::Threading::Thread*, "lightingGenerationThread",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_isLightingGenerationOutputReady(bool value) {
  ::cordl_internals::setStaticField<bool, "isLightingGenerationOutputReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::LightingManager::getStaticF_isLightingGenerationOutputReady() {
  return ::cordl_internals::getStaticField<bool, "isLightingGenerationOutputReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::setStaticF_lightingGenerationThreadOutput(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "lightingGenerationThreadOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>(
      std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* GlobalNamespace::LightingManager::getStaticF_lightingGenerationThreadOutput() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "lightingGenerationThreadOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get>();
}
inline void GlobalNamespace::LightingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::OnIsCreativeModeUpdated(bool newIsCreativeMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnIsCreativeModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreativeMode);
}
inline void GlobalNamespace::LightingManager::SetHasLoadedMapData(bool newHasLoadedMapData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "SetHasLoadedMapData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasLoadedMapData);
}
inline void GlobalNamespace::LightingManager::RefreshOnMapDataUpdatedCallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(),
                                                                             "RefreshOnMapDataUpdatedCallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::OnMapDataUpdated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "OnMapDataUpdated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::OnMapObjectPaintEmissionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(),
                                                                             "OnMapObjectPaintEmissionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::RefreshLighting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "RefreshLighting",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::StartLightingGeneration(::UnityEngine::Vector3Int dimensions, ::GlobalNamespace::MapLightData mapLightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "StartLightingGeneration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapLightData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimensions, mapLightData);
}
inline void GlobalNamespace::LightingManager::TryStopLightingGeneration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(),
                                                                             "TryStopLightingGeneration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline Il2CppObject* GlobalNamespace::LightingManager::CreateLightingData(uint8_t sunlightLevel, uint8_t inBlockLightLevel, float_t smoothingRatio, ::UnityEngine::Vector3Int dimensions,
                                                                          ::GlobalNamespace::MapLightData mapLightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "CreateLightingData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MapLightData>::get() })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(nullptr, ___internal_method, sunlightLevel, inBlockLightLevel, smoothingRatio, dimensions, mapLightData);
}
inline void GlobalNamespace::LightingManager::SetLightingData(Il2CppObject* newLightingData, int32_t mapDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "SetLightingData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLightingData, mapDepth);
}
inline void GlobalNamespace::LightingManager::ClearLightingData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "ClearLightingData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightingManager::DoSunColumnFill(int32_t x, int32_t z, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoSunColumnFill", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, z, level, blocksAndEmission, lightingData);
}
inline void GlobalNamespace::LightingManager::DoFloodfill(::UnityEngine::Vector3Int coords, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoFloodfill", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, coords, level, blocksAndEmission, lightingData);
}
inline void GlobalNamespace::LightingManager::DoFloodfillRecursive(::UnityEngine::Vector3Int coords, uint8_t level, Il2CppObject* blocksAndEmission, Il2CppObject* lightingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "DoFloodfillRecursive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, coords, level, blocksAndEmission, lightingData);
}
inline ::UnityW<::UnityEngine::Texture3D> GlobalNamespace::LightingManager::CreateLightingTexture(Il2CppObject* lightingData, int32_t mapDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), "CreateLightingTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>, false>(this, ___internal_method, lightingData, mapDepth);
}
inline ::GlobalNamespace::LightingManager* GlobalNamespace::LightingManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightingManager*>());
}
inline void GlobalNamespace::LightingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightingManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightingManager::LightingManager() {}
