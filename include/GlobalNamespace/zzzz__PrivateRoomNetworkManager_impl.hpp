#pragma once
#include "GlobalNamespace/zzzz__PrivateRoomPermissions_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomNetworkManager_def.hpp"
#include "GlobalNamespace/zzzz__GlobalRotationManager_def.hpp"
#include "GlobalNamespace/zzzz__GlobalsDatabase_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStatusManager_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomNetworkManager_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomPermissions_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::__PrivateRoomNetworkManager__EvictionReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::__PrivateRoomNetworkManager__EvictionReason() {}
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::kicked{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::ownerLeft{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::changedPermissions{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason::banned{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c81d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::*)(
    ::GlobalNamespace::PrivateRoomPermissions)>(&::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c81e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::*)(::GlobalNamespace::PrivateRoomPermissions, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c81e64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c81ee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*
GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>(object, method));
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::Invoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPrivateRoomPermissions);
}
inline ::System::IAsyncResult* GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::BeginInvoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions,
                                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newPrivateRoomPermissions, callback, object);
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c81ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::*)(bool)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c81fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c81fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c82058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::New_ctor(::System::Object* object,
                                                                                                                                                                void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>(object, method));
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::Invoke(bool newIsOwnerPresent) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsOwnerPresent);
}
inline ::System::IAsyncResult* GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::BeginInvoke(bool newIsOwnerPresent, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newIsOwnerPresent, callback, object);
}
inline void GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(&::GlobalNamespace::PrivateRoomNetworkManager::Start)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2c80c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::GlobalNamespace::Room*)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c80fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.IsLocalAccountPrivateRoomOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(
    &::GlobalNamespace::PrivateRoomNetworkManager::IsLocalAccountPrivateRoomOwner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2c81318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                               "IsLocalAccountPrivateRoomOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.SetPrivateRoomOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::StringW)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::SetPrivateRoomOwner)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2c81044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetPrivateRoomOwner",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.ClearPrivateRoomOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(
    &::GlobalNamespace::PrivateRoomNetworkManager::ClearPrivateRoomOwner)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c811f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                               "ClearPrivateRoomOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnPlayerBecameOnline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(
    ::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus)>(&::GlobalNamespace::PrivateRoomNetworkManager::OnPlayerBecameOnline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c816f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerBecameOnline", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnPlayerBecameOffline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::StringW)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::OnPlayerBecameOffline)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c816f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerBecameOffline",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnPlayerStatusUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*)>(&::GlobalNamespace::PrivateRoomNetworkManager::OnPlayerStatusUpdated)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2c817cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerStatusUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnLostPermissionsToPrivateRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(
    ::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason)>(&::GlobalNamespace::PrivateRoomNetworkManager::OnLostPermissionsToPrivateRoom)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c77d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnLostPermissionsToPrivateRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.GetPrivateRoomSandboxPrice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(
    ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess*, ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed*)>(&::GlobalNamespace::PrivateRoomNetworkManager::GetPrivateRoomSandboxPrice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c81a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "GetPrivateRoomSandboxPrice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.GetPrivateRoomExpansionPrices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(
    ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess*, ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure*)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::GetPrivateRoomExpansionPrices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c81adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "GetPrivateRoomExpansionPrices", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.get_curPrivateRoomPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PrivateRoomPermissions (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(
    &::GlobalNamespace::PrivateRoomNetworkManager::get_curPrivateRoomPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c81b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                               "get_curPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.set_curPrivateRoomPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::GlobalNamespace::PrivateRoomPermissions)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::set_curPrivateRoomPermissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c81b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "set_curPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PrivateRoomPermissions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.SetPrivateRoomPermissions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::GlobalNamespace::PrivateRoomPermissions)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::SetPrivateRoomPermissions)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c813d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PrivateRoomPermissions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.get_isOwnerPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(
    &::GlobalNamespace::PrivateRoomNetworkManager::get_isOwnerPresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c81b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                               "get_isOwnerPresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.set_isOwnerPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(bool)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::set_isOwnerPresent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c81b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "set_isOwnerPresent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.SetIsOwnerPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(bool)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::SetIsOwnerPresent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c81b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetIsOwnerPresent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.RefreshIsOwnerPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(
    &::GlobalNamespace::PrivateRoomNetworkManager::RefreshIsOwnerPresent)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2c813fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                               "RefreshIsOwnerPresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnPlayerDataAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::OnPlayerDataAdded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c81c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager.OnPlayerDataRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::PrivateRoomNetworkManager::OnPlayerDataRemoved)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c81ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerDataRemoved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivateRoomNetworkManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivateRoomNetworkManager::*)()>(&::GlobalNamespace::PrivateRoomNetworkManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c81d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_privateRoomOwnerAccountID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomOwnerAccountID;
}
constexpr ::StringW const& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_privateRoomOwnerAccountID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateRoomOwnerAccountID;
}
constexpr void GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_set_privateRoomOwnerAccountID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateRoomOwnerAccountID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PrivateRoomPermissions& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get__curPrivateRoomPermissions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curPrivateRoomPermissions_k__BackingField;
}
constexpr ::GlobalNamespace::PrivateRoomPermissions const& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get__curPrivateRoomPermissions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curPrivateRoomPermissions_k__BackingField;
}
constexpr void GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_set__curPrivateRoomPermissions_k__BackingField(::GlobalNamespace::PrivateRoomPermissions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curPrivateRoomPermissions_k__BackingField = value;
}
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_onNetworkPrivateRoomPermissionsUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNetworkPrivateRoomPermissionsUpdated;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated*> const&
GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_onNetworkPrivateRoomPermissionsUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onNetworkPrivateRoomPermissionsUpdated;
}
constexpr void
GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_set_onNetworkPrivateRoomPermissionsUpdated(::GlobalNamespace::__PrivateRoomNetworkManager__OnPrivateRoomPermissionsUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onNetworkPrivateRoomPermissionsUpdated)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get__isOwnerPresent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOwnerPresent_k__BackingField;
}
constexpr bool const& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get__isOwnerPresent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOwnerPresent_k__BackingField;
}
constexpr void GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_set__isOwnerPresent_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOwnerPresent_k__BackingField = value;
}
constexpr ::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*& GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_onIsOwnerPresentUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsOwnerPresentUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated*> const&
GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_get_onIsOwnerPresentUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onIsOwnerPresentUpdatedCallbacks;
}
constexpr void GlobalNamespace::PrivateRoomNetworkManager::__cordl_internal_set_onIsOwnerPresentUpdatedCallbacks(::GlobalNamespace::__PrivateRoomNetworkManager__OnIsOwnerPresentUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onIsOwnerPresentUpdatedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PrivateRoomNetworkManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnRoomLoaded(::GlobalNamespace::Room* newRoom) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRoom);
}
inline bool GlobalNamespace::PrivateRoomNetworkManager::IsLocalAccountPrivateRoomOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                             "IsLocalAccountPrivateRoomOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::SetPrivateRoomOwner(::StringW ownerAccountID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetPrivateRoomOwner",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerAccountID);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::ClearPrivateRoomOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                             "ClearPrivateRoomOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnPlayerBecameOnline(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerBecameOnline", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID, playerStatus);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnPlayerBecameOffline(::StringW accountID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerBecameOffline",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountID);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnPlayerStatusUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerStatusUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlinePlayerStatuses);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnLostPermissionsToPrivateRoom(::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnLostPermissionsToPrivateRoom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PrivateRoomNetworkManager__EvictionReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::GetPrivateRoomSandboxPrice(::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* onSuccess,
                                                                                   ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* onFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "GetPrivateRoomSandboxPrice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::GetPrivateRoomExpansionPrices(::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess* onSuccess,
                                                                                      ::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure* onFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "GetPrivateRoomExpansionPrices", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationSuccess*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GlobalRotationManager__OnFetchGlobalRotationFailure*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline ::GlobalNamespace::PrivateRoomPermissions GlobalNamespace::PrivateRoomNetworkManager::get_curPrivateRoomPermissions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                             "get_curPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PrivateRoomPermissions, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::set_curPrivateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "set_curPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PrivateRoomPermissions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::SetPrivateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetPrivateRoomPermissions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PrivateRoomPermissions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPrivateRoomPermissions);
}
inline bool GlobalNamespace::PrivateRoomNetworkManager::get_isOwnerPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                             "get_isOwnerPresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::set_isOwnerPresent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "set_isOwnerPresent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::SetIsOwnerPresent(bool newIsOwnerPresent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "SetIsOwnerPresent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsOwnerPresent);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::RefreshIsOwnerPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(),
                                                                             "RefreshIsOwnerPresent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerDataAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PrivateRoomNetworkManager::OnPlayerDataRemoved(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), "OnPlayerDataRemoved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline ::GlobalNamespace::PrivateRoomNetworkManager* GlobalNamespace::PrivateRoomNetworkManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivateRoomNetworkManager*>());
}
inline void GlobalNamespace::PrivateRoomNetworkManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivateRoomNetworkManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivateRoomNetworkManager::PrivateRoomNetworkManager() {}
