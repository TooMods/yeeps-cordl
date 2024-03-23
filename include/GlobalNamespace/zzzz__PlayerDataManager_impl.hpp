#pragma once
#include "GlobalNamespace/zzzz__PlayerData_impl.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "GlobalNamespace/zzzz__Room_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x106ac4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::Invoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x107450c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::*)(::GlobalNamespace::PlayerData, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1074550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10745dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::Invoke(::GlobalNamespace::PlayerData playerData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::BeginInvoke(::GlobalNamespace::PlayerData playerData, ::System::AsyncCallback* callback,
                                                                                                    ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, playerData, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded::__PlayerDataManager__OnPlayerDataAdded() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10745e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::*)(::GlobalNamespace::PlayerData)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::Invoke)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10746ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::*)(::GlobalNamespace::PlayerData, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10746f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x107477c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::Invoke(::GlobalNamespace::PlayerData playerData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::BeginInvoke(::GlobalNamespace::PlayerData playerData, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, playerData, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved::__PlayerDataManager__OnPlayerDataRemoved() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x106ad10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::*)(
    ::GlobalNamespace::PlayerData, ::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::Invoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1074788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::*)(::GlobalNamespace::PlayerData, ::System::Collections::Generic::List_1<::StringW>*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10747dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x107486c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::Invoke(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData, modifiedFields);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::BeginInvoke(::GlobalNamespace::PlayerData playerData,
                                                                                                       ::System::Collections::Generic::List_1<::StringW>* modifiedFields,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, playerData, modifiedFields, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified::__PlayerDataManager__OnPlayerDataModified() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1074878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1074950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1074964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x107498c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::Invoke(::StringW oldUserID, ::StringW newUserID) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldUserID, newUserID);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::BeginInvoke(::StringW oldUserID, ::StringW newUserID, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, oldUserID, newUserID, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs::__PlayerDataManager__OnPlayerSwitchedUserIDs() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10631dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::*)(
    ::GlobalNamespace::__Player__StatusEffect)>(&::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1074998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::*)(::GlobalNamespace::__Player__StatusEffect, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10749ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1074a30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::New_ctor(::System::Object* object,
                                                                                                                                                                            void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::Invoke(::GlobalNamespace::__Player__StatusEffect statusEffect) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusEffect);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::BeginInvoke(::GlobalNamespace::__Player__StatusEffect statusEffect,
                                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, statusEffect, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1074a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::*)(int32_t)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1074b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1074b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1074b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::Invoke(int32_t newCount) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCount);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::BeginInvoke(int32_t newCount, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newCount, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged::__PlayerDataManager__OnPlayerTypeCountChanged() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1074ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::*)(int32_t, bool)>(
    &::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1074c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::*)(int32_t, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1074c80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1074d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>(object, method));
}
inline void GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::Invoke(int32_t newLinkedAccountCount, bool wasIncrease) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLinkedAccountCount, wasIncrease);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::BeginInvoke(int32_t newLinkedAccountCount, bool wasIncrease, ::System::AsyncCallback* callback,
                                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, newLinkedAccountCount, wasIncrease, callback, object);
}
inline void GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated::__PlayerDataManager__OnLinkedAccountCountUpdated() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GenerateRandomName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerDataManager::*)()>(&::GlobalNamespace::PlayerDataManager::GenerateRandomName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x106d230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "GenerateRandomName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GenerateGuestName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerDataManager::*)()>(&::GlobalNamespace::PlayerDataManager::GenerateGuestName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x106d2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "GenerateGuestName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataManager::*)()>(&::GlobalNamespace::PlayerDataManager::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x106d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnFirstUserIDAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataManager::OnFirstUserIDAssigned)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x106d6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "OnFirstUserIDAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnRoomLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Room*)>(&::GlobalNamespace::PlayerDataManager::OnRoomLoaded)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x106d9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnFollowupUserIDAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataManager::OnFollowupUserIDAssigned)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x106e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "OnFollowupUserIDAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnAccountDataLoaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AccountData*)>(&::GlobalNamespace::PlayerDataManager::OnAccountDataLoaded)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x106d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnActiveCosmeticsKeysUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerDataManager::OnActiveCosmeticsKeysUpdated)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x106e8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnActiveCosmeticsKeysUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_playerDatas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* (*)()>(
    &::GlobalNamespace::PlayerDataManager::get_playerDatas)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x106ea0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_playerDatas",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_playerDatas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*)>(
    &::GlobalNamespace::PlayerDataManager::set_playerDatas)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x106ea64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_playerDatas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_masterPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData (*)()>(&::GlobalNamespace::PlayerDataManager::get_masterPlayerData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x106eac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_masterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_masterPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData)>(&::GlobalNamespace::PlayerDataManager::set_masterPlayerData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x106eb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_masterPlayerData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_hasMasterPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerDataManager::get_hasMasterPlayerData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x106db90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_hasMasterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_isMasterPlayerPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerDataManager::get_isMasterPlayerPlaying)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x106eba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_isMasterPlayerPlaying", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.AddPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData)>(&::GlobalNamespace::PlayerDataManager::AddPlayerData)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x106eca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "AddPlayerData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.RemovePlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerDataManager::RemovePlayerData)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x106ff10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "RemovePlayerData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.ModifyPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerDataManager::ModifyPlayerData)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x1070b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ModifyPlayerData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.SwitchPlayerUserIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::PlayerDataManager::SwitchPlayerUserIDs)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x10710cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SwitchPlayerUserIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.TryGetPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::PlayerData>)>(&::GlobalNamespace::PlayerDataManager::TryGetPlayerData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10697c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "TryGetPlayerData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.TryGetPlayerAccountID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&::GlobalNamespace::PlayerDataManager::TryGetPlayerAccountID)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1071694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "TryGetPlayerAccountID", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.DoesPlayerDataExist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::PlayerDataManager::DoesPlayerDataExist)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x107179c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "DoesPlayerDataExist",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnJoinedRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerDataManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x107184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnJoinedRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x10721e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnLeftRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnPlayerEnteredRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PlayerDataManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1072560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerEnteredRoom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnPlayerLeftRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::PlayerDataManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1072698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerLeftRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.SetMasterPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData)>(&::GlobalNamespace::PlayerDataManager::SetMasterPlayerData)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x106e0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SetMasterPlayerData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.SetMasterPlayerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__Player__Type)>(&::GlobalNamespace::PlayerDataManager::SetMasterPlayerType)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1065064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SetMasterPlayerType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.SendApplyStatusEffectToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::__Player__StatusEffect, float_t)>(
    &::GlobalNamespace::PlayerDataManager::SendApplyStatusEffectToPlayer)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x10727cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SendApplyStatusEffectToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnReceiveApplyStatusEffectToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::__Player__StatusEffect, float_t)>(
    &::GlobalNamespace::PlayerDataManager::OnReceiveApplyStatusEffectToPlayer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1072bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnReceiveApplyStatusEffectToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.ApplyStatusEffectToMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__Player__StatusEffect, float_t)>(
    &::GlobalNamespace::PlayerDataManager::ApplyStatusEffectToMasterPlayer)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x1072950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ApplyStatusEffectToMasterPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.SendClearStatusEffectOnPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::__Player__StatusEffect)>(
    &::GlobalNamespace::PlayerDataManager::SendClearStatusEffectOnPlayer)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1072c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SendClearStatusEffectOnPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnReceiveClearStatusEffectOnPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::__Player__StatusEffect)>(
    &::GlobalNamespace::PlayerDataManager::OnReceiveClearStatusEffectOnPlayer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1073070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnReceiveClearStatusEffectOnPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.ClearStatusEffectOnMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataManager::ClearStatusEffectOnMasterPlayer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x10651dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ClearStatusEffectOnMasterPlayer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.ClearStatusEffectOnMasterPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::__Player__StatusEffect)>(
    &::GlobalNamespace::PlayerDataManager::ClearStatusEffectOnMasterPlayer)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x1072ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ClearStatusEffectOnMasterPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.OnPlayerPropertiesUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(
    &::GlobalNamespace::PlayerDataManager::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1073118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.BuildMasterPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData (*)()>(&::GlobalNamespace::PlayerDataManager::BuildMasterPlayerData)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x106dc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "BuildMasterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_hiderCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PlayerDataManager::get_hiderCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1073740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_hiderCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_hiderCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::PlayerDataManager::set_hiderCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1073798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_hiderCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_seekerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PlayerDataManager::get_seekerCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10737f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_seekerCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_seekerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::PlayerDataManager::set_seekerCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x107384c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_seekerCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.RefreshPlayerTypeCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataManager::RefreshPlayerTypeCounts)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x106f204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "RefreshPlayerTypeCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_linkAccountUserIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(
    &::GlobalNamespace::PlayerDataManager::get_linkAccountUserIDs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10738a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_linkAccountUserIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_linkAccountUserIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerDataManager::set_linkAccountUserIDs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1073900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_linkAccountUserIDs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_linkedAccountCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PlayerDataManager::get_linkedAccountCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x107395c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_linkedAccountCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.set_linkedAccountCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::PlayerDataManager::set_linkedAccountCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10739b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_linkedAccountCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.get_hasLinkedAccounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerDataManager::get_hasLinkedAccounts)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1073a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "get_hasLinkedAccounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.AddLinkedAccount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerDataManager::AddLinkedAccount)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x106f828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "AddLinkedAccount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.RemoveLinkedAccount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerDataManager::RemoveLinkedAccount)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x107051c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "RemoveLinkedAccount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.TryExtractPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Photon::Realtime::Player*, ByRef<::GlobalNamespace::PlayerData>)>(
    &::GlobalNamespace::PlayerDataManager::TryExtractPlayerData)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x1071b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "TryExtractPlayerData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GetRandomUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::PlayerDataManager::GetRandomUser)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x1073aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetRandomUser",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GetRandomUserOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::__Player__Type)>(&::GlobalNamespace::PlayerDataManager::GetRandomUserOfType)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1073d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetRandomUserOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GetUsersOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::GlobalNamespace::__Player__Type)>(
    &::GlobalNamespace::PlayerDataManager::GetUsersOfType)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x1073ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetUsersOfType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GetPlayingPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PlayerDataManager::GetPlayingPlayerCount)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1074268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "GetPlayingPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.GetTotalPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::PlayerDataManager::GetTotalPlayerCount)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x107432c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                               "GetTotalPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.ColorToVector3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Color)>(&::GlobalNamespace::PlayerDataManager::ColorToVector3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10727c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ColorToVector3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager.Vector3ToColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerDataManager::Vector3ToColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1073aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "Vector3ToColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataManager::*)()>(&::GlobalNamespace::PlayerDataManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x10743d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PlayerDataManager::__cordl_internal_get_adjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adjectives;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PlayerDataManager::__cordl_internal_get_adjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adjectives;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_adjectives(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___adjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PlayerDataManager::__cordl_internal_get_nouns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nouns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PlayerDataManager::__cordl_internal_get_nouns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nouns;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_nouns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nouns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataAddedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataAddedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataAddedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataAddedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onPlayerDataAddedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerDataAddedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataRemovedEarlyCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataRemovedEarlyCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataRemovedEarlyCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataRemovedEarlyCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onPlayerDataRemovedEarlyCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerDataRemovedEarlyCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataRemovedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataRemovedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataRemovedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataRemovedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onPlayerDataRemovedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerDataRemovedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataModifiedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataModifiedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerDataModifiedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerDataModifiedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onPlayerDataModifiedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerDataModifiedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerSwitchedUserIDsCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerSwitchedUserIDsCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onPlayerSwitchedUserIDsCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPlayerSwitchedUserIDsCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onPlayerSwitchedUserIDsCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPlayerSwitchedUserIDsCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onHiderCountChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHiderCountChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onHiderCountChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onHiderCountChangedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onHiderCountChangedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onHiderCountChangedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onSeekerCountChangedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSeekerCountChangedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onSeekerCountChangedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSeekerCountChangedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onSeekerCountChangedCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSeekerCountChangedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*& GlobalNamespace::PlayerDataManager::__cordl_internal_get_onLinkedAccountCountUpdatedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLinkedAccountCountUpdatedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*> const&
GlobalNamespace::PlayerDataManager::__cordl_internal_get_onLinkedAccountCountUpdatedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onLinkedAccountCountUpdatedCallbacks;
}
constexpr void GlobalNamespace::PlayerDataManager::__cordl_internal_set_onLinkedAccountCountUpdatedCallbacks(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onLinkedAccountCountUpdatedCallbacks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__playerDatas_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*, "<playerDatas>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* GlobalNamespace::PlayerDataManager::getStaticF__playerDatas_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*, "<playerDatas>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__masterPlayerData_k__BackingField(::GlobalNamespace::PlayerData value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlayerData, "<masterPlayerData>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(std::forward<::GlobalNamespace::PlayerData>(value));
}
inline ::GlobalNamespace::PlayerData GlobalNamespace::PlayerDataManager::getStaticF__masterPlayerData_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerData, "<masterPlayerData>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onPlayerDataAddedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*, "onPlayerDataAddedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded* GlobalNamespace::PlayerDataManager::getStaticF_onPlayerDataAddedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataAdded*, "onPlayerDataAddedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onPlayerDataRemovedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*, "onPlayerDataRemovedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved* GlobalNamespace::PlayerDataManager::getStaticF_onPlayerDataRemovedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataRemoved*, "onPlayerDataRemovedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onPlayerDataModifiedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*, "onPlayerDataModifiedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified* GlobalNamespace::PlayerDataManager::getStaticF_onPlayerDataModifiedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerDataModified*, "onPlayerDataModifiedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onPlayerSwitchedUserIDsPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*, "onPlayerSwitchedUserIDsPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs* GlobalNamespace::PlayerDataManager::getStaticF_onPlayerSwitchedUserIDsPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerSwitchedUserIDs*, "onPlayerSwitchedUserIDsPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks(::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*, "onStatusEffectRemovedFromMasterPlayerCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer* GlobalNamespace::PlayerDataManager::getStaticF_onStatusEffectRemovedFromMasterPlayerCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnStatusEffectRemovedFromMasterPlayer*, "onStatusEffectRemovedFromMasterPlayerCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onHiderCountChangedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*, "onHiderCountChangedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* GlobalNamespace::PlayerDataManager::getStaticF_onHiderCountChangedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*, "onHiderCountChangedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__hiderCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<hiderCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerDataManager::getStaticF__hiderCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<hiderCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onSeekerCountChangedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*, "onSeekerCountChangedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged* GlobalNamespace::PlayerDataManager::getStaticF_onSeekerCountChangedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnPlayerTypeCountChanged*, "onSeekerCountChangedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__seekerCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<seekerCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerDataManager::getStaticF__seekerCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<seekerCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__linkAccountUserIDs_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "<linkAccountUserIDs>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerDataManager::getStaticF__linkAccountUserIDs_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "<linkAccountUserIDs>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF__linkedAccountCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<linkedAccountCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerDataManager::getStaticF__linkedAccountCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<linkedAccountCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline void GlobalNamespace::PlayerDataManager::setStaticF_onLinkedAccountCountUpdatedPersistantCallbacks(::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*, "onLinkedAccountCountUpdatedPersistantCallbacks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>(
      std::forward<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*>(value));
}
inline ::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated* GlobalNamespace::PlayerDataManager::getStaticF_onLinkedAccountCountUpdatedPersistantCallbacks() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__PlayerDataManager__OnLinkedAccountCountUpdated*, "onLinkedAccountCountUpdatedPersistantCallbacks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get>();
}
inline ::StringW GlobalNamespace::PlayerDataManager::GenerateRandomName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GenerateRandomName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataManager::GenerateGuestName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GenerateGuestName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::OnFirstUserIDAssigned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "OnFirstUserIDAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::OnRoomLoaded(::GlobalNamespace::Room* roomData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnRoomLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Room*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, roomData);
}
inline void GlobalNamespace::PlayerDataManager::OnFollowupUserIDAssigned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "OnFollowupUserIDAssigned", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnAccountDataLoaded", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AccountData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, accountData);
}
inline void GlobalNamespace::PlayerDataManager::OnActiveCosmeticsKeysUpdated(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                                                             ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnActiveCosmeticsKeysUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newActiveCosmeticKeys, removedConflictingCosmeticKeys);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* GlobalNamespace::PlayerDataManager::get_playerDatas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_playerDatas",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_playerDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_playerDatas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerData GlobalNamespace::PlayerDataManager::get_masterPlayerData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_masterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_masterPlayerData(::GlobalNamespace::PlayerData value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_masterPlayerData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerDataManager::get_hasMasterPlayerData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_hasMasterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PlayerDataManager::get_isMasterPlayerPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_isMasterPlayerPlaying", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::AddPlayerData(::GlobalNamespace::PlayerData playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "AddPlayerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerDataManager::RemovePlayerData(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "RemovePlayerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline void GlobalNamespace::PlayerDataManager::ModifyPlayerData(::GlobalNamespace::PlayerData modifiedPlayerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ModifyPlayerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, modifiedPlayerData, modifiedFields);
}
inline void GlobalNamespace::PlayerDataManager::SwitchPlayerUserIDs(::StringW oldUserID, ::StringW newUserID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SwitchPlayerUserIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oldUserID, newUserID);
}
inline bool GlobalNamespace::PlayerDataManager::TryGetPlayerData(::StringW userID, ByRef<::GlobalNamespace::PlayerData> playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "TryGetPlayerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userID, playerData);
}
inline bool GlobalNamespace::PlayerDataManager::TryGetPlayerAccountID(::StringW userID, ByRef<::StringW> accountID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "TryGetPlayerAccountID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userID, accountID);
}
inline bool GlobalNamespace::PlayerDataManager::DoesPlayerDataExist(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "DoesPlayerDataExist", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userID);
}
inline void GlobalNamespace::PlayerDataManager::OnJoinedRoom(::StringW roomName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnJoinedRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, roomName);
}
inline void GlobalNamespace::PlayerDataManager::OnLeftRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnLeftRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerEnteredRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newPlayer);
}
inline void GlobalNamespace::PlayerDataManager::OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerLeftRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::PlayerDataManager::SetMasterPlayerData(::GlobalNamespace::PlayerData newPlayerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SetMasterPlayerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newPlayerData);
}
inline void GlobalNamespace::PlayerDataManager::SetMasterPlayerType(::GlobalNamespace::__Player__Type newPlayerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SetMasterPlayerType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, newPlayerType);
}
inline void GlobalNamespace::PlayerDataManager::SendApplyStatusEffectToPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SendApplyStatusEffectToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, statusEffect, duration);
}
inline void GlobalNamespace::PlayerDataManager::OnReceiveApplyStatusEffectToPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnReceiveApplyStatusEffectToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, statusEffect, duration);
}
inline void GlobalNamespace::PlayerDataManager::ApplyStatusEffectToMasterPlayer(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ApplyStatusEffectToMasterPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statusEffect, duration);
}
inline void GlobalNamespace::PlayerDataManager::SendClearStatusEffectOnPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "SendClearStatusEffectOnPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, statusEffect);
}
inline void GlobalNamespace::PlayerDataManager::OnReceiveClearStatusEffectOnPlayer(::StringW userID, ::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnReceiveClearStatusEffectOnPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID, statusEffect);
}
inline void GlobalNamespace::PlayerDataManager::ClearStatusEffectOnMasterPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "ClearStatusEffectOnMasterPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::ClearStatusEffectOnMasterPlayer(::GlobalNamespace::__Player__StatusEffect statusEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ClearStatusEffectOnMasterPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__StatusEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statusEffect);
}
inline void GlobalNamespace::PlayerDataManager::OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "OnPlayerPropertiesUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetPlayer, changedProps);
}
inline ::GlobalNamespace::PlayerData GlobalNamespace::PlayerDataManager::BuildMasterPlayerData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "BuildMasterPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerDataManager::get_hiderCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_hiderCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_hiderCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_hiderCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerDataManager::get_seekerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "get_seekerCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_seekerCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_seekerCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerDataManager::RefreshPlayerTypeCounts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "RefreshPlayerTypeCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerDataManager::get_linkAccountUserIDs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_linkAccountUserIDs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_linkAccountUserIDs(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_linkAccountUserIDs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerDataManager::get_linkedAccountCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_linkedAccountCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::set_linkedAccountCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "set_linkedAccountCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerDataManager::get_hasLinkedAccounts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "get_hasLinkedAccounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataManager::AddLinkedAccount(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "AddLinkedAccount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline void GlobalNamespace::PlayerDataManager::RemoveLinkedAccount(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "RemoveLinkedAccount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline bool GlobalNamespace::PlayerDataManager::TryExtractPlayerData(::Photon::Realtime::Player* photonPlayer, ByRef<::GlobalNamespace::PlayerData> playerData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "TryExtractPlayerData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Realtime::Player*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::PlayerData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, photonPlayer, playerData);
}
inline ::StringW GlobalNamespace::PlayerDataManager::GetRandomUser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetRandomUser",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataManager::GetRandomUserOfType(::GlobalNamespace::__Player__Type playerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetRandomUserOfType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, playerType);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerDataManager::GetUsersOfType(::GlobalNamespace::__Player__Type playerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "GetUsersOfType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Player__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, playerType);
}
inline int32_t GlobalNamespace::PlayerDataManager::GetPlayingPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "GetPlayingPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerDataManager::GetTotalPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(),
                                                                             "GetTotalPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerDataManager::ColorToVector3(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "ColorToVector3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color GlobalNamespace::PlayerDataManager::Vector3ToColor(::UnityEngine::Vector3 vector) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), "Vector3ToColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, vector);
}
inline ::GlobalNamespace::PlayerDataManager* GlobalNamespace::PlayerDataManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerDataManager*>());
}
inline void GlobalNamespace::PlayerDataManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataManager::PlayerDataManager() {}
