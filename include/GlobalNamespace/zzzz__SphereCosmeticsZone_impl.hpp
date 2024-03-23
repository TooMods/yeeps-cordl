#pragma once
#include "GlobalNamespace/zzzz__CosmeticsZone_impl.hpp"
#include "GlobalNamespace/zzzz__SphereCosmeticsZone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SphereCosmeticsZone.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCosmeticsZone::*)()>(&::GlobalNamespace::SphereCosmeticsZone::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x158dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCosmeticsZone.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SphereCosmeticsZone::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SphereCosmeticsZone::IsWithinZone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x158dc90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCosmeticsZone.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SphereCosmeticsZone::*)(::UnityEngine::Vector3, ByRef<float_t>)>(
    &::GlobalNamespace::SphereCosmeticsZone::IsWithinZone)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x158dd00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCosmeticsZone.GetLocalBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCosmeticsZone::*)(
    ::UnityEngine::Transform*, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::SphereCosmeticsZone::GetLocalBounds)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x158ddf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCosmeticsZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCosmeticsZone::*)()>(&::GlobalNamespace::SphereCosmeticsZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158dea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SphereCosmeticsZone::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::SphereCosmeticsZone::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::SphereCosmeticsZone::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr float_t& GlobalNamespace::SphereCosmeticsZone::__cordl_internal_get_testRadiusSqr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRadiusSqr;
}
constexpr float_t const& GlobalNamespace::SphereCosmeticsZone::__cordl_internal_get_testRadiusSqr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRadiusSqr;
}
constexpr void GlobalNamespace::SphereCosmeticsZone::__cordl_internal_set_testRadiusSqr(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___testRadiusSqr = value;
}
inline void GlobalNamespace::SphereCosmeticsZone::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SphereCosmeticsZone::IsWithinZone(::UnityEngine::Vector3 position) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool GlobalNamespace::SphereCosmeticsZone::IsWithinZone(::UnityEngine::Vector3 position, ByRef<float_t> distanceFromZoneSurface) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, distanceFromZoneSurface);
}
inline void GlobalNamespace::SphereCosmeticsZone::GetLocalBounds(::UnityEngine::Transform* localTransform, ByRef<::UnityEngine::Vector3> halfExtents, ByRef<::UnityEngine::Vector3> localCenter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localTransform, halfExtents, localCenter);
}
inline ::GlobalNamespace::SphereCosmeticsZone* GlobalNamespace::SphereCosmeticsZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SphereCosmeticsZone*>());
}
inline void GlobalNamespace::SphereCosmeticsZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCosmeticsZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SphereCosmeticsZone::SphereCosmeticsZone() {}
