#pragma once
#include "GlobalNamespace/zzzz__ItemSpawner_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__TestItemSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__TestItemSpawner_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2ab212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ab2258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::*)(::GlobalNamespace::Item*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ab226c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab228c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>(object, method));
}
inline void GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::Invoke(::GlobalNamespace::Item* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline ::System::IAsyncResult* GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, item, callback, object);
}
inline void GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate::__TestItemSpawner__OnItemSpawnedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.get_lastSpawnedItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Item> (::GlobalNamespace::TestItemSpawner::*)()>(
    &::GlobalNamespace::TestItemSpawner::get_lastSpawnedItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab1a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(),
                                                                               "get_lastSpawnedItem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.set_lastSpawnedItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::TestItemSpawner::set_lastSpawnedItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab1aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "set_lastSpawnedItem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.OnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)()>(&::GlobalNamespace::TestItemSpawner::OnStart)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2ab1aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.CleanUpCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)()>(&::GlobalNamespace::TestItemSpawner::CleanUpCallbacks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2ab1ce8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.OnJoinedPhotonRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)(::StringW)>(&::GlobalNamespace::TestItemSpawner::OnJoinedPhotonRoom)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ab1df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "OnJoinedPhotonRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.BeginSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)()>(&::GlobalNamespace::TestItemSpawner::BeginSpawning)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ab1ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "BeginSpawning",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.TryGetSpawnTransformationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TestItemSpawner::*)(ByRef<::GlobalNamespace::ItemTransformationData>)>(
    &::GlobalNamespace::TestItemSpawner::TryGetSpawnTransformationData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2ab1f28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner.OnItemSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::TestItemSpawner::OnItemSpawned)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2ab204c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestItemSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestItemSpawner::*)()>(&::GlobalNamespace::TestItemSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab2124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TestItemSpawner::__cordl_internal_get_itemKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKey;
}
constexpr ::StringW const& GlobalNamespace::TestItemSpawner::__cordl_internal_get_itemKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKey;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_itemKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TestItemSpawner::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& GlobalNamespace::TestItemSpawner::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr float_t& GlobalNamespace::TestItemSpawner::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::TestItemSpawner::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr bool& GlobalNamespace::TestItemSpawner::__cordl_internal_get_spawnDropped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnDropped;
}
constexpr bool const& GlobalNamespace::TestItemSpawner::__cordl_internal_get_spawnDropped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnDropped;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_spawnDropped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnDropped = value;
}
constexpr bool& GlobalNamespace::TestItemSpawner::__cordl_internal_get_onlySpawnIfHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlySpawnIfHost;
}
constexpr bool const& GlobalNamespace::TestItemSpawner::__cordl_internal_get_onlySpawnIfHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlySpawnIfHost;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_onlySpawnIfHost(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onlySpawnIfHost = value;
}
constexpr ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*& GlobalNamespace::TestItemSpawner::__cordl_internal_get_onItemSpawnedCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemSpawnedCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*> const&
GlobalNamespace::TestItemSpawner::__cordl_internal_get_onItemSpawnedCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onItemSpawnedCallbacks;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set_onItemSpawnedCallbacks(::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onItemSpawnedCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Item>& GlobalNamespace::TestItemSpawner::__cordl_internal_get__lastSpawnedItem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSpawnedItem_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::Item> const& GlobalNamespace::TestItemSpawner::__cordl_internal_get__lastSpawnedItem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSpawnedItem_k__BackingField;
}
constexpr void GlobalNamespace::TestItemSpawner::__cordl_internal_set__lastSpawnedItem_k__BackingField(::UnityW<::GlobalNamespace::Item> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastSpawnedItem_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::Item> GlobalNamespace::TestItemSpawner::get_lastSpawnedItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "get_lastSpawnedItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Item>, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestItemSpawner::set_lastSpawnedItem(::GlobalNamespace::Item* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "set_lastSpawnedItem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TestItemSpawner::OnStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestItemSpawner::CleanUpCallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TestItemSpawner::OnJoinedPhotonRoom(::StringW photonRoomName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "OnJoinedPhotonRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, photonRoomName);
}
inline void GlobalNamespace::TestItemSpawner::BeginSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), "BeginSpawning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::TestItemSpawner::TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemTransformationData);
}
inline void GlobalNamespace::TestItemSpawner::OnItemSpawned(::GlobalNamespace::Item* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline ::GlobalNamespace::TestItemSpawner* GlobalNamespace::TestItemSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TestItemSpawner*>());
}
inline void GlobalNamespace::TestItemSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestItemSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestItemSpawner::TestItemSpawner() {}
