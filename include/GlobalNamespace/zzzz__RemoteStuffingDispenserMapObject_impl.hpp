#pragma once
#include "GlobalNamespace/zzzz__MapObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteStuffingDispenserMapObject_def.hpp"
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoteStuffingDispenserMapObject.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteStuffingDispenserMapObject::*)(
    ::StringW, ::UnityEngine::Vector3Int, ::GlobalNamespace::__MapObject__Facing, ::GlobalNamespace::__MapObject__Facing, ::StringW, ::StringW, bool, bool)>(
    &::GlobalNamespace::RemoteStuffingDispenserMapObject::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3081960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteStuffingDispenserMapObject.AllowsBatching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RemoteStuffingDispenserMapObject::*)()>(
    &::GlobalNamespace::RemoteStuffingDispenserMapObject::AllowsBatching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30819ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteStuffingDispenserMapObject.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteStuffingDispenserMapObject::*)()>(
    &::GlobalNamespace::RemoteStuffingDispenserMapObject::Update)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x30819b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoteStuffingDispenserMapObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RemoteStuffingDispenserMapObject::*)()>(
    &::GlobalNamespace::RemoteStuffingDispenserMapObject::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3081cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_timeBetweenDispenses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeBetweenDispenses;
}
constexpr float_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_timeBetweenDispenses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeBetweenDispenses;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_timeBetweenDispenses(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeBetweenDispenses = value;
}
constexpr int32_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_amountToGive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amountToGive;
}
constexpr int32_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_amountToGive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___amountToGive;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_amountToGive(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___amountToGive = value;
}
constexpr float_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceSize;
}
constexpr float_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceSize;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_bounceSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bounceSize = value;
}
constexpr float_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_horizontalBounceSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalBounceSize;
}
constexpr float_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_horizontalBounceSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalBounceSize;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_horizontalBounceSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___horizontalBounceSize = value;
}
constexpr ::StringW& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_dispenseSoundKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr ::StringW const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_dispenseSoundKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispenseSoundKey;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_dispenseSoundKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dispenseSoundKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_nextDispenseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDispenseTime;
}
constexpr float_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_nextDispenseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDispenseTime;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_nextDispenseTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextDispenseTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceStartPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceStartPosition;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_bounceStartPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bounceStartPosition = value;
}
constexpr bool& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_inBounce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBounce;
}
constexpr bool const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_inBounce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inBounce;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_inBounce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inBounce = value;
}
constexpr float_t& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceTimer;
}
constexpr float_t const& GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_get_bounceTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bounceTimer;
}
constexpr void GlobalNamespace::RemoteStuffingDispenserMapObject::__cordl_internal_set_bounceTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bounceTimer = value;
}
/// @param instant: bool (default: false)
inline void GlobalNamespace::RemoteStuffingDispenserMapObject::Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing,
                                                                          ::GlobalNamespace::__MapObject__Facing placedUpFacing, ::StringW colorKey, ::StringW ownerUserID, bool placementPending,
                                                                          bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, placedPosition, placedForwardFacing, placedUpFacing, colorKey, ownerUserID, placementPending, instant);
}
inline bool GlobalNamespace::RemoteStuffingDispenserMapObject::AllowsBatching() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RemoteStuffingDispenserMapObject::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RemoteStuffingDispenserMapObject* GlobalNamespace::RemoteStuffingDispenserMapObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RemoteStuffingDispenserMapObject*>());
}
inline void GlobalNamespace::RemoteStuffingDispenserMapObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteStuffingDispenserMapObject*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoteStuffingDispenserMapObject::RemoteStuffingDispenserMapObject() {}
