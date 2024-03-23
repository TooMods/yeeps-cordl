#pragma once
#include "GlobalNamespace/zzzz__Item_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2aa779c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aa78c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::*)(::GlobalNamespace::Item*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2aa78dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2aa78fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* GlobalNamespace::__ItemDespawnZone__OnItemDespawned::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>(object, method));
}
inline void GlobalNamespace::__ItemDespawnZone__OnItemDespawned::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ItemDespawnZone__OnItemDespawned::Invoke(::GlobalNamespace::Item* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline ::System::IAsyncResult* GlobalNamespace::__ItemDespawnZone__OnItemDespawned::BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, item, callback, object);
}
inline void GlobalNamespace::__ItemDespawnZone__OnItemDespawned::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned::__ItemDespawnZone__OnItemDespawned() {}
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.get_acceptedItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Item__Type (::GlobalNamespace::ItemDespawnZone::*)()>(
    &::GlobalNamespace::ItemDespawnZone::get_acceptedItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa7384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(),
                                                                               "get_acceptedItemType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.set_acceptedItemType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)(::GlobalNamespace::__Item__Type)>(
    &::GlobalNamespace::ItemDespawnZone::set_acceptedItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa738c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "set_acceptedItemType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)(
    ::GlobalNamespace::__Item__Type, ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*)>(&::GlobalNamespace::ItemDespawnZone::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2aa7394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)()>(&::GlobalNamespace::ItemDespawnZone::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2aa75a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)()>(&::GlobalNamespace::ItemDespawnZone::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2aa761c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.ItemDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::ItemDespawnZone::ItemDespawned)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2aa5bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "ItemDespawned", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ItemDespawnZone::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::ItemDespawnZone::IsWithinZone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ItemDespawnZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ItemDespawnZone::*)()>(&::GlobalNamespace::ItemDespawnZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa7794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__Item__Type& GlobalNamespace::ItemDespawnZone::__cordl_internal_get__acceptedItemType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceptedItemType_k__BackingField;
}
constexpr ::GlobalNamespace::__Item__Type const& GlobalNamespace::ItemDespawnZone::__cordl_internal_get__acceptedItemType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____acceptedItemType_k__BackingField;
}
constexpr void GlobalNamespace::ItemDespawnZone::__cordl_internal_set__acceptedItemType_k__BackingField(::GlobalNamespace::__Item__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____acceptedItemType_k__BackingField = value;
}
constexpr bool& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::ItemDespawnZone::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
constexpr bool& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr bool const& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRegistered;
}
constexpr void GlobalNamespace::ItemDespawnZone::__cordl_internal_set_isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRegistered = value;
}
constexpr ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_onItemDespawnedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemDespawnedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*> const& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_onItemDespawnedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemDespawnedCallback;
}
constexpr void GlobalNamespace::ItemDespawnZone::__cordl_internal_set_onItemDespawnedCallback(::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onItemDespawnedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitialized;
}
constexpr bool const& GlobalNamespace::ItemDespawnZone::__cordl_internal_get_isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitialized;
}
constexpr void GlobalNamespace::ItemDespawnZone::__cordl_internal_set_isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInitialized = value;
}
inline ::GlobalNamespace::__Item__Type GlobalNamespace::ItemDespawnZone::get_acceptedItemType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "get_acceptedItemType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Item__Type, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemDespawnZone::set_acceptedItemType(::GlobalNamespace::__Item__Type value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "set_acceptedItemType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param onItemDespawnedCallback: ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* (default: nullptr)
inline void GlobalNamespace::ItemDespawnZone::Initialize(::GlobalNamespace::__Item__Type acceptedItemType, ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* onItemDespawnedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__Type>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acceptedItemType, onItemDespawnedCallback);
}
inline void GlobalNamespace::ItemDespawnZone::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemDespawnZone::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ItemDespawnZone::ItemDespawned(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), "ItemDespawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline bool GlobalNamespace::ItemDespawnZone::IsWithinZone(::UnityEngine::Vector3 position) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline ::GlobalNamespace::ItemDespawnZone* GlobalNamespace::ItemDespawnZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ItemDespawnZone*>());
}
inline void GlobalNamespace::ItemDespawnZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ItemDespawnZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ItemDespawnZone::ItemDespawnZone() {}
