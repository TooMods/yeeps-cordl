#pragma once
#include "GlobalNamespace/zzzz__ItemSpawner_impl.hpp"
#include "GlobalNamespace/zzzz__Item_impl.hpp"
#include "GlobalNamespace/zzzz__EndlessItemSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "GlobalNamespace/zzzz__ItemTransformationData_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__PlayerItemManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)()>(&::GlobalNamespace::EndlessItemSpawner::OnStart)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2aafd34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.SetIsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(bool)>(&::GlobalNamespace::EndlessItemSpawner::SetIsActive)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2aafec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "SetIsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.RefreshIsDespawnZoneActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)()>(
    &::GlobalNamespace::EndlessItemSpawner::RefreshIsDespawnZoneActive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ab0144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                               "RefreshIsDespawnZoneActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnItemSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::EndlessItemSpawner::OnItemSpawned)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2ab0208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnItemDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::EndlessItemSpawner::OnItemDestroyed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab04f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemDestroyed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnItemSwitchedOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(::GlobalNamespace::Item*, ::GlobalNamespace::PlayerItemManager*)>(
    &::GlobalNamespace::EndlessItemSpawner::OnItemSwitchedOwnership)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab080c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemSwitchedOwnership", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnItemDespawnedInZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::EndlessItemSpawner::OnItemDespawnedInZone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ab0880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemDespawnedInZone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnItemAnchorStateUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(
    ::GlobalNamespace::Item*, ::GlobalNamespace::__Item__AnchorState, ::GlobalNamespace::__Item__AnchorState)>(&::GlobalNamespace::EndlessItemSpawner::OnItemAnchorStateUpdated)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ab0930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemAnchorStateUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.OnLostControlOfItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)(::GlobalNamespace::Item*)>(
    &::GlobalNamespace::EndlessItemSpawner::OnLostControlOfItem)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2ab0568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnLostControlOfItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.TrySpawnItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)()>(&::GlobalNamespace::EndlessItemSpawner::TrySpawnItem)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ab0080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "TrySpawnItem",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.TryGetSpawnTransformationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EndlessItemSpawner::*)(ByRef<::GlobalNamespace::ItemTransformationData>)>(
    &::GlobalNamespace::EndlessItemSpawner::TryGetSpawnTransformationData)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2ab0b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner.GetSpawnCustomParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Item__CustomParameters* (::GlobalNamespace::EndlessItemSpawner::*)()>(
    &::GlobalNamespace::EndlessItemSpawner::GetSpawnCustomParameters)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ab0ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndlessItemSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EndlessItemSpawner::*)()>(&::GlobalNamespace::EndlessItemSpawner::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ab1018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKey;
}
constexpr ::StringW const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemKey;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_itemKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__Item__Type& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_despawnZoneAcceptedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___despawnZoneAcceptedType;
}
constexpr ::GlobalNamespace::__Item__Type const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_despawnZoneAcceptedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___despawnZoneAcceptedType;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_despawnZoneAcceptedType(::GlobalNamespace::__Item__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___despawnZoneAcceptedType = value;
}
constexpr ::GlobalNamespace::__Item__AnchorState& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_anchorState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorState;
}
constexpr ::GlobalNamespace::__Item__AnchorState const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_anchorState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchorState;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_anchorState(::GlobalNamespace::__Item__AnchorState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anchorState = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_customParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_customParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customParameters;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_customParameters(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_randomizeBetweenCustomParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr bool const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_randomizeBetweenCustomParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomizeBetweenCustomParameters;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_randomizeBetweenCustomParameters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomizeBetweenCustomParameters = value;
}
constexpr int32_t& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemCap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemCap;
}
constexpr int32_t const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemCap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemCap;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_itemCap(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemCap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_controlledItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlledItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*> const&
GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_controlledItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlledItems;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_controlledItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controlledItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_controlledItemCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlledItemCount;
}
constexpr int32_t const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_controlledItemCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controlledItemCount;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_controlledItemCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controlledItemCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemsInSpawnAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsInSpawnAnchor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>*> const&
GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemsInSpawnAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemsInSpawnAnchor;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_itemsInSpawnAnchor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Item>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemsInSpawnAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_spawnRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRadius;
}
constexpr float_t const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_spawnRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnRadius;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_spawnRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnRadius = value;
}
constexpr bool& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_isActiveByDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveByDefault;
}
constexpr bool const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_isActiveByDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveByDefault;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_isActiveByDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveByDefault = value;
}
constexpr bool& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemDespawnZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDespawnZone;
}
constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_itemDespawnZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemDespawnZone;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_itemDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemDespawnZone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_doHapticOnItemSpawn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doHapticOnItemSpawn;
}
constexpr bool const& GlobalNamespace::EndlessItemSpawner::__cordl_internal_get_doHapticOnItemSpawn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doHapticOnItemSpawn;
}
constexpr void GlobalNamespace::EndlessItemSpawner::__cordl_internal_set_doHapticOnItemSpawn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doHapticOnItemSpawn = value;
}
inline void GlobalNamespace::EndlessItemSpawner::OnStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EndlessItemSpawner::SetIsActive(bool newIsActive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "SetIsActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsActive);
}
inline void GlobalNamespace::EndlessItemSpawner::RefreshIsDespawnZoneActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(),
                                                                             "RefreshIsDespawnZoneActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EndlessItemSpawner::OnItemSpawned(::GlobalNamespace::Item* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::EndlessItemSpawner::OnItemDestroyed(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemDestroyed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::EndlessItemSpawner::OnItemSwitchedOwnership(::GlobalNamespace::Item* item, ::GlobalNamespace::PlayerItemManager* newPlayerItemManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemSwitchedOwnership", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerItemManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, newPlayerItemManager);
}
inline void GlobalNamespace::EndlessItemSpawner::OnItemDespawnedInZone(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemDespawnedInZone", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::EndlessItemSpawner::OnItemAnchorStateUpdated(::GlobalNamespace::Item* item, ::GlobalNamespace::__Item__AnchorState oldAnchorState,
                                                                          ::GlobalNamespace::__Item__AnchorState newAnchorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnItemAnchorStateUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Item__AnchorState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, oldAnchorState, newAnchorState);
}
inline void GlobalNamespace::EndlessItemSpawner::OnLostControlOfItem(::GlobalNamespace::Item* item) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "OnLostControlOfItem", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Item*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void GlobalNamespace::EndlessItemSpawner::TrySpawnItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), "TrySpawnItem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EndlessItemSpawner::TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, itemTransformationData);
}
inline ::GlobalNamespace::__Item__CustomParameters* GlobalNamespace::EndlessItemSpawner::GetSpawnCustomParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Item__CustomParameters*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EndlessItemSpawner* GlobalNamespace::EndlessItemSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EndlessItemSpawner*>());
}
inline void GlobalNamespace::EndlessItemSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EndlessItemSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EndlessItemSpawner::EndlessItemSpawner() {}
