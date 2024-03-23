#pragma once
#include "GlobalNamespace/zzzz__Player_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__AvatarIdentity_def.hpp"
#include "GlobalNamespace/zzzz__MasterPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerCreated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerCreated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerCreated::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x174abd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerCreated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerCreated::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerCreated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x174acfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerCreated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerManager__OnPlayerCreated::*)(::GlobalNamespace::Player*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerManager__OnPlayerCreated::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x174ad10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerCreated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerCreated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerCreated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x174ad30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerManager__OnPlayerCreated* GlobalNamespace::__PlayerManager__OnPlayerCreated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>(object, method));
}
inline void GlobalNamespace::__PlayerManager__OnPlayerCreated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerManager__OnPlayerCreated::Invoke(::GlobalNamespace::Player* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerManager__OnPlayerCreated::BeginInvoke(::GlobalNamespace::Player* player, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, player, callback, object);
}
inline void GlobalNamespace::__PlayerManager__OnPlayerCreated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerCreated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerManager__OnPlayerCreated::__PlayerManager__OnPlayerCreated() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x174ad3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::*)(::StringW)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x174ae10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x174ae24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x174ae44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* GlobalNamespace::__PlayerManager__OnPlayerDestroyed::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>(object, method));
}
inline void GlobalNamespace::__PlayerManager__OnPlayerDestroyed::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerManager__OnPlayerDestroyed::Invoke(::StringW userID) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerManager__OnPlayerDestroyed::BeginInvoke(::StringW userID, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userID, callback, object);
}
inline void GlobalNamespace::__PlayerManager__OnPlayerDestroyed::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed::__PlayerManager__OnPlayerDestroyed() {}
// Ctor Parameters [CppParam { name: "hasColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") },
// CppParam { name: "overlayPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__PlayerManager__StatusEffectData::__PlayerManager__StatusEffectData(bool hasColor, ::UnityEngine::Color color,
                                                                                                  ::UnityW<::UnityEngine::GameObject> overlayPrefab) noexcept {
  this->hasColor = hasColor;
  this->color = color;
  this->overlayPrefab = overlayPrefab;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerManager__StatusEffectData::__PlayerManager__StatusEffectData() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x174ae50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::*)(bool)>(
    &::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x174af14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x174af2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x174afb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>(object, method));
}
inline void GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::Invoke(bool newLock) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLock);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::BeginInvoke(bool newLock, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newLock, callback, object);
}
inline void GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated::__PlayerManager__OnInteractionLockUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__ColorRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerManager__ColorRange::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::__PlayerManager__ColorRange::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x174afc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__ColorRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerManager__ColorRange.GetRandom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__PlayerManager__ColorRange::*)()>(
    &::GlobalNamespace::__PlayerManager__ColorRange::GetRandom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x174afd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__ColorRange>::get(),
                                                                               "GetRandom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__PlayerManager__ColorRange::_ctor(::UnityEngine::Color min, ::UnityEngine::Color max) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__ColorRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::UnityEngine::Color GlobalNamespace::__PlayerManager__ColorRange::GetRandom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerManager__ColorRange>::get(), "GetRandom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::__PlayerManager__ColorRange::__PlayerManager__ColorRange(::UnityEngine::Color min, ::UnityEngine::Color max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerManager__ColorRange::__PlayerManager__ColorRange() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.get_hasMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerManager::*)()>(&::GlobalNamespace::PlayerManager::get_hasMasterPlayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1074d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "get_hasMasterPlayer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)()>(&::GlobalNamespace::PlayerManager::Start)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x1074da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(bool)>(&::GlobalNamespace::PlayerManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1075a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnMapLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(bool)>(&::GlobalNamespace::PlayerManager::OnMapLoaded)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1075684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnMapLoaded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnIsCreativeModeUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(bool)>(&::GlobalNamespace::PlayerManager::OnIsCreativeModeUpdated)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x10754dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnIsCreativeModeUpdated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnPlayerDataAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerManager::OnPlayerDataAdded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1075480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnPlayerDataRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerManager::OnPlayerDataRemoved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1075f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataRemoved", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnPlayerDataModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(
    ::GlobalNamespace::PlayerData, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::PlayerManager::OnPlayerDataModified)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x10760d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataModified", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.OnPlayerSwitchedUserIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::PlayerManager::OnPlayerSwitchedUserIDs)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1076274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerSwitchedUserIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.CreateMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerManager::CreateMasterPlayer)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1075b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "CreateMasterPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.CreatePuppetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PlayerManager::CreatePuppetPlayer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1075d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "CreatePuppetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.DestroyPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::StringW)>(&::GlobalNamespace::PlayerManager::DestroyPlayer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1075f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "DestroyPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.RegisterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(::StringW, ::GlobalNamespace::Player*)>(
    &::GlobalNamespace::PlayerManager::RegisterPlayer)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1076448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "RegisterPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.TryGetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerManager::*)(::StringW, ByRef<::GlobalNamespace::Player*>)>(
    &::GlobalNamespace::PlayerManager::TryGetPlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1076694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Player*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.TryGetMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerManager::*)(ByRef<::GlobalNamespace::MasterPlayer*>)>(
    &::GlobalNamespace::PlayerManager::TryGetMasterPlayer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x105f54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetMasterPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MasterPlayer*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GetPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* (::GlobalNamespace::PlayerManager::*)()>(&::GlobalNamespace::PlayerManager::GetPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1076718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GetPlayers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GetPlayerSpawnPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerManager::*)()>(
    &::GlobalNamespace::PlayerManager::GetPlayerSpawnPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1076354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(),
                                                                               "GetPlayerSpawnPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GetStatusEffectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PlayerManager__StatusEffectData (::GlobalNamespace::PlayerManager::*)(
    ::GlobalNamespace::__Player__StatusEffect)>(&::GlobalNamespace::PlayerManager::GetStatusEffectData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1067d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GetStatusEffectData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.get_hasInteractionLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerManager::get_hasInteractionLock)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1076720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(),
                                                                               "get_hasInteractionLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.set_hasInteractionLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::PlayerManager::set_hasInteractionLock)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1076778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "set_hasInteractionLock",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.SetInteractionLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::PlayerManager::SetInteractionLock)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1075820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "SetInteractionLock",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.SaveAvatarIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarIdentity* (
    ::GlobalNamespace::PlayerManager::*)(::StringW, ::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::PlayerManager::SaveAvatarIdentity)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x106c624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "SaveAvatarIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GenerateAvatarIdentityWithoutSaving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarIdentity* (::GlobalNamespace::PlayerManager::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::PlayerManager::GenerateAvatarIdentityWithoutSaving)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x10734b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GenerateAvatarIdentityWithoutSaving", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GenerateNewAvatarIdentityData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)(ByRef<::UnityEngine::Color>, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::PlayerManager::GenerateNewAvatarIdentityData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10767d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GenerateNewAvatarIdentityData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.TryGetAvatarIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerManager::*)(::StringW, ByRef<::GlobalNamespace::AvatarIdentity*>)>(
    &::GlobalNamespace::PlayerManager::TryGetAvatarIdentity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x106c578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetAvatarIdentity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::AvatarIdentity*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager.GetDefaultAvatarIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarIdentity* (::GlobalNamespace::PlayerManager::*)()>(
    &::GlobalNamespace::PlayerManager::GetDefaultAvatarIdentity)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1073614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(),
                                                                               "GetDefaultAvatarIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerManager::*)()>(&::GlobalNamespace::PlayerManager::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x107689c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerManager::__cordl_internal_get_masterPlayerRigPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerRigPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerManager::__cordl_internal_get_masterPlayerRigPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayerRigPrefab;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_masterPlayerRigPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayerRigPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerManager::__cordl_internal_get_puppetPlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___puppetPlayerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerManager::__cordl_internal_get_puppetPlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___puppetPlayerPrefab;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_puppetPlayerPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___puppetPlayerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerManager::__cordl_internal_get_killedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___killedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerManager::__cordl_internal_get_killedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___killedColor;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_killedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___killedColor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlayerManager::__cordl_internal_get_alwaysVisibleMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alwaysVisibleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlayerManager::__cordl_internal_get_alwaysVisibleMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alwaysVisibleMaterial;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_alwaysVisibleMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alwaysVisibleMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerManager::__cordl_internal_get_hideAndSeekAlwaysVisibleColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideAndSeekAlwaysVisibleColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerManager::__cordl_internal_get_hideAndSeekAlwaysVisibleColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideAndSeekAlwaysVisibleColor;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_hideAndSeekAlwaysVisibleColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideAndSeekAlwaysVisibleColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerManager::__cordl_internal_get_creativeModeAlwaysVisibleColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creativeModeAlwaysVisibleColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerManager::__cordl_internal_get_creativeModeAlwaysVisibleColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creativeModeAlwaysVisibleColor;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_creativeModeAlwaysVisibleColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creativeModeAlwaysVisibleColor = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>*& GlobalNamespace::PlayerManager::__cordl_internal_get_players() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___players;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>*> const&
GlobalNamespace::PlayerManager::__cordl_internal_get_players() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___players;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___players)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& GlobalNamespace::PlayerManager::__cordl_internal_get_masterPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& GlobalNamespace::PlayerManager::__cordl_internal_get_masterPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___masterPlayer;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerManager::__cordl_internal_get_hasLoadedMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLoadedMap;
}
constexpr bool const& GlobalNamespace::PlayerManager::__cordl_internal_get_hasLoadedMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLoadedMap;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_hasLoadedMap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasLoadedMap = value;
}
constexpr ::GlobalNamespace::__PlayerManager__OnPlayerCreated*& GlobalNamespace::PlayerManager::__cordl_internal_get_onPlayerCreatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerCreatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerCreated*> const& GlobalNamespace::PlayerManager::__cordl_internal_get_onPlayerCreatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerCreatedCallbacks;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_onPlayerCreatedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerCreated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerCreatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerManager__OnPlayerCreated*& GlobalNamespace::PlayerManager::__cordl_internal_get_onMasterPlayerCreatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerCreatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerCreated*> const& GlobalNamespace::PlayerManager::__cordl_internal_get_onMasterPlayerCreatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onMasterPlayerCreatedCallbacks;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_onMasterPlayerCreatedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerCreated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMasterPlayerCreatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*& GlobalNamespace::PlayerManager::__cordl_internal_get_onPlayerDestroyedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDestroyedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnPlayerDestroyed*> const& GlobalNamespace::PlayerManager::__cordl_internal_get_onPlayerDestroyedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDestroyedCallbacks;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_onPlayerDestroyedCallbacks(::GlobalNamespace::__PlayerManager__OnPlayerDestroyed* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerDestroyedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Player__StatusEffect& GlobalNamespace::PlayerManager::__cordl_internal_get_statusEffectReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectReference;
}
constexpr ::GlobalNamespace::__Player__StatusEffect const& GlobalNamespace::PlayerManager::__cordl_internal_get_statusEffectReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectReference;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_statusEffectReference(::GlobalNamespace::__Player__StatusEffect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusEffectReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*>&
GlobalNamespace::PlayerManager::__cordl_internal_get_statusEffectDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> const&
GlobalNamespace::PlayerManager::__cordl_internal_get_statusEffectDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusEffectDatas;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_statusEffectDatas(
    ::ArrayW<::GlobalNamespace::__PlayerManager__StatusEffectData, ::Array<::GlobalNamespace::__PlayerManager__StatusEffectData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusEffectDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*& GlobalNamespace::PlayerManager::__cordl_internal_get_onInteractionLockUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInteractionLockUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated*> const&
GlobalNamespace::PlayerManager::__cordl_internal_get_onInteractionLockUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInteractionLockUpdatedCallbacks;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_onInteractionLockUpdatedCallbacks(::GlobalNamespace::__PlayerManager__OnInteractionLockUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onInteractionLockUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerManager::__cordl_internal_get_defaultSkinColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSkinColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerManager::__cordl_internal_get_defaultSkinColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultSkinColor;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_defaultSkinColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultSkinColor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlayerManager::__cordl_internal_get_skinMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skinMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlayerManager::__cordl_internal_get_skinMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skinMaterial;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_skinMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___skinMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerManager::__cordl_internal_get_defaultEyeColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultEyeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerManager::__cordl_internal_get_defaultEyeColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultEyeColor;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_defaultEyeColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultEyeColor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PlayerManager::__cordl_internal_get_eyeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PlayerManager::__cordl_internal_get_eyeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeMaterial;
}
constexpr void GlobalNamespace::PlayerManager::__cordl_internal_set_eyeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyeMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*>& GlobalNamespace::PlayerManager::__cordl_internal_get_skinColorRanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skinColorRanges;
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> const&
GlobalNamespace::PlayerManager::__cordl_internal_get_skinColorRanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skinColorRanges;
}
constexpr void
GlobalNamespace::PlayerManager::__cordl_internal_set_skinColorRanges(::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___skinColorRanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*>& GlobalNamespace::PlayerManager::__cordl_internal_get_eyeColorRanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeColorRanges;
}
constexpr ::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> const&
GlobalNamespace::PlayerManager::__cordl_internal_get_eyeColorRanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyeColorRanges;
}
constexpr void
GlobalNamespace::PlayerManager::__cordl_internal_set_eyeColorRanges(::ArrayW<::GlobalNamespace::__PlayerManager__ColorRange, ::Array<::GlobalNamespace::__PlayerManager__ColorRange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyeColorRanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerManager::setStaticF__hasInteractionLock_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<hasInteractionLock>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::PlayerManager::getStaticF__hasInteractionLock_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<hasInteractionLock>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>();
}
inline void GlobalNamespace::PlayerManager::setStaticF_avatarIdentities(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>*, "avatarIdentities",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>* GlobalNamespace::PlayerManager::getStaticF_avatarIdentities() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::AvatarIdentity*>*, "avatarIdentities",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>();
}
inline void GlobalNamespace::PlayerManager::setStaticF_defaultAvatarIdentity(::GlobalNamespace::AvatarIdentity* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::AvatarIdentity*, "defaultAvatarIdentity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>(
      std::forward<::GlobalNamespace::AvatarIdentity*>(value));
}
inline ::GlobalNamespace::AvatarIdentity* GlobalNamespace::PlayerManager::getStaticF_defaultAvatarIdentity() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::AvatarIdentity*, "defaultAvatarIdentity",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get>();
}
inline bool GlobalNamespace::PlayerManager::get_hasMasterPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "get_hasMasterPlayer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerManager::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::PlayerManager::OnMapLoaded(bool isLoaded) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnMapLoaded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLoaded);
}
inline void GlobalNamespace::PlayerManager::OnIsCreativeModeUpdated(bool newIsCreativeMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnIsCreativeModeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsCreativeMode);
}
inline void GlobalNamespace::PlayerManager::OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerManager::OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataRemoved", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerManager::OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerDataModified", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData, modifiedFields);
}
inline void GlobalNamespace::PlayerManager::OnPlayerSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "OnPlayerSwitchedUserIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldUserID, newUserID);
}
inline void GlobalNamespace::PlayerManager::CreateMasterPlayer(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "CreateMasterPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerManager::CreatePuppetPlayer(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "CreatePuppetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerManager::DestroyPlayer(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "DestroyPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline void GlobalNamespace::PlayerManager::RegisterPlayer(::StringW userID, ::GlobalNamespace::Player* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "RegisterPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID, player);
}
inline bool GlobalNamespace::PlayerManager::TryGetPlayer(::StringW userID, ByRef<::GlobalNamespace::Player*> player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::Player*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, userID, player);
}
inline bool GlobalNamespace::PlayerManager::TryGetMasterPlayer(ByRef<::GlobalNamespace::MasterPlayer*> player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetMasterPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::MasterPlayer*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>* GlobalNamespace::PlayerManager::GetPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GetPlayers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::Player>>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerManager::GetPlayerSpawnPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GetPlayerSpawnPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerManager__StatusEffectData GlobalNamespace::PlayerManager::GetStatusEffectData(::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GetStatusEffectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PlayerManager__StatusEffectData, false>(this, ___internal_method, statusEffect);
}
inline bool GlobalNamespace::PlayerManager::get_hasInteractionLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "get_hasInteractionLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerManager::set_hasInteractionLock(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "set_hasInteractionLock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerManager::SetInteractionLock(bool newLock) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "SetInteractionLock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newLock);
}
inline ::GlobalNamespace::AvatarIdentity* GlobalNamespace::PlayerManager::SaveAvatarIdentity(::StringW accountID, ::UnityEngine::Color skinColor, ::UnityEngine::Color eyeColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "SaveAvatarIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarIdentity*, false>(this, ___internal_method, accountID, skinColor, eyeColor);
}
inline ::GlobalNamespace::AvatarIdentity* GlobalNamespace::PlayerManager::GenerateAvatarIdentityWithoutSaving(::UnityEngine::Color skinColor, ::UnityEngine::Color eyeColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GenerateAvatarIdentityWithoutSaving", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarIdentity*, false>(this, ___internal_method, skinColor, eyeColor);
}
inline void GlobalNamespace::PlayerManager::GenerateNewAvatarIdentityData(ByRef<::UnityEngine::Color> skinColor, ByRef<::UnityEngine::Color> eyeColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "GenerateNewAvatarIdentityData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skinColor, eyeColor);
}
inline bool GlobalNamespace::PlayerManager::TryGetAvatarIdentity(::StringW accountID, ByRef<::GlobalNamespace::AvatarIdentity*> avatarIdentity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), "TryGetAvatarIdentity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::AvatarIdentity*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, accountID, avatarIdentity);
}
inline ::GlobalNamespace::AvatarIdentity* GlobalNamespace::PlayerManager::GetDefaultAvatarIdentity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(),
                                                                             "GetDefaultAvatarIdentity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarIdentity*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerManager* GlobalNamespace::PlayerManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerManager*>());
}
inline void GlobalNamespace::PlayerManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerManager::PlayerManager() {}
