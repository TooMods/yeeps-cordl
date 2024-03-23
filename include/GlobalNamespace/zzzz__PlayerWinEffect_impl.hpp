#pragma once
#include "GlobalNamespace/zzzz__PlayerEffect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerWinEffect_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerWinEffect.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerWinEffect::*)(::GlobalNamespace::Player*)>(
    &::GlobalNamespace::PlayerWinEffect::Initialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c649c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerWinEffect.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerWinEffect::*)()>(&::GlobalNamespace::PlayerWinEffect::OnUpdate)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x29c6544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerWinEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerWinEffect::*)()>(&::GlobalNamespace::PlayerWinEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c667c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobTarget;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_bobTarget(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bobTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobStartLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobStartLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobStartLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobStartLocalPosition;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_bobStartLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bobStartLocalPosition = value;
}
constexpr float_t& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobAmplitude;
}
constexpr float_t const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobAmplitude;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_bobAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bobAmplitude = value;
}
constexpr float_t& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobScaleAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobScaleAmount;
}
constexpr float_t const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobScaleAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobScaleAmount;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_bobScaleAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bobScaleAmount = value;
}
constexpr float_t& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobTimer;
}
constexpr float_t const& GlobalNamespace::PlayerWinEffect::__cordl_internal_get_bobTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bobTimer;
}
constexpr void GlobalNamespace::PlayerWinEffect::__cordl_internal_set_bobTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bobTimer = value;
}
inline void GlobalNamespace::PlayerWinEffect::Initialize(::GlobalNamespace::Player* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::PlayerWinEffect::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerWinEffect* GlobalNamespace::PlayerWinEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerWinEffect*>());
}
inline void GlobalNamespace::PlayerWinEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerWinEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerWinEffect::PlayerWinEffect() {}
