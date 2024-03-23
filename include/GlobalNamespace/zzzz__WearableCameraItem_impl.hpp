#pragma once
#include "GlobalNamespace/zzzz__WearableItem_impl.hpp"
#include "GlobalNamespace/zzzz__WearableCameraItem_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__OverrideCamera_def.hpp"
#include "GlobalNamespace/zzzz__PlayerItemManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WearableCameraItem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WearableCameraItem::*)(
    ::StringW, ::StringW, ::GlobalNamespace::__Item__Type, ::GlobalNamespace::PlayerItemManager*, ::GlobalNamespace::__Item__CustomParameters*)>(&::GlobalNamespace::WearableCameraItem::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f68680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WearableCameraItem.CanTransferOwnership
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::WearableCameraItem::*)()>(&::GlobalNamespace::WearableCameraItem::CanTransferOwnership)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f68734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WearableCameraItem.OnIsWornUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WearableCameraItem::*)()>(&::GlobalNamespace::WearableCameraItem::OnIsWornUpdated)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f6873c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WearableCameraItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WearableCameraItem::*)()>(&::GlobalNamespace::WearableCameraItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2f68760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& GlobalNamespace::WearableCameraItem::__cordl_internal_get_overrideCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& GlobalNamespace::WearableCameraItem::__cordl_internal_get_overrideCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr void GlobalNamespace::WearableCameraItem::__cordl_internal_set_overrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::WearableCameraItem::Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                                                            ::GlobalNamespace::__Item__CustomParameters* customParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemID, itemKey, itemType, playerItemManager, customParameters);
}
inline bool GlobalNamespace::WearableCameraItem::CanTransferOwnership() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::WearableCameraItem::OnIsWornUpdated() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::WearableCameraItem* GlobalNamespace::WearableCameraItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::WearableCameraItem*>());
}
inline void GlobalNamespace::WearableCameraItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WearableCameraItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WearableCameraItem::WearableCameraItem() {}
