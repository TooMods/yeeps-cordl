#pragma once
#include "GlobalNamespace/zzzz__DespawningItem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SelfieStickItem_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "GlobalNamespace/zzzz__OverrideCamera_def.hpp"
#include "GlobalNamespace/zzzz__PlayerItemManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelfieStickItem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfieStickItem::*)(
    ::StringW, ::StringW, ::GlobalNamespace::__Item__Type, ::GlobalNamespace::PlayerItemManager*, ::GlobalNamespace::__Item__CustomParameters*)>(&::GlobalNamespace::SelfieStickItem::Initialize)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2aaf120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfieStickItem.ShouldShrinkWhenOverDespawnZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SelfieStickItem::*)()>(
    &::GlobalNamespace::SelfieStickItem::ShouldShrinkWhenOverDespawnZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aaf20c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfieStickItem.GetBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfieStickItem::*)(ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
    &::GlobalNamespace::SelfieStickItem::GetBounds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2aaf214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelfieStickItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelfieStickItem::*)()>(&::GlobalNamespace::SelfieStickItem::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aaf230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& GlobalNamespace::SelfieStickItem::__cordl_internal_get_overrideCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& GlobalNamespace::SelfieStickItem::__cordl_internal_get_overrideCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideCamera;
}
constexpr void GlobalNamespace::SelfieStickItem::__cordl_internal_set_overrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SelfieStickItem::__cordl_internal_get_boundingCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SelfieStickItem::__cordl_internal_get_boundingCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingCenter;
}
constexpr void GlobalNamespace::SelfieStickItem::__cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingCenter = value;
}
constexpr float_t& GlobalNamespace::SelfieStickItem::__cordl_internal_get_boundingRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingRadius;
}
constexpr float_t const& GlobalNamespace::SelfieStickItem::__cordl_internal_get_boundingRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boundingRadius;
}
constexpr void GlobalNamespace::SelfieStickItem::__cordl_internal_set_boundingRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boundingRadius = value;
}
inline void GlobalNamespace::SelfieStickItem::Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                                                         ::GlobalNamespace::__Item__CustomParameters* customParameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemID, itemKey, itemType, playerItemManager, customParameters);
}
inline bool GlobalNamespace::SelfieStickItem::ShouldShrinkWhenOverDespawnZone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SelfieStickItem::GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, center, radius);
}
inline ::GlobalNamespace::SelfieStickItem* GlobalNamespace::SelfieStickItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SelfieStickItem*>());
}
inline void GlobalNamespace::SelfieStickItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelfieStickItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelfieStickItem::SelfieStickItem() {}
