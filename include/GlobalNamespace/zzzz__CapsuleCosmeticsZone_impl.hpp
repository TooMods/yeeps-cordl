#pragma once
#include "GlobalNamespace/zzzz__CosmeticsZone_impl.hpp"
#include "GlobalNamespace/zzzz__CapsuleCosmeticsZone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CapsuleCosmeticsZone.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CapsuleCosmeticsZone::*)()>(&::GlobalNamespace::CapsuleCosmeticsZone::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x158ad5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CapsuleCosmeticsZone.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CapsuleCosmeticsZone::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::CapsuleCosmeticsZone::IsWithinZone)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x158ad74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CapsuleCosmeticsZone.IsWithinZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::CapsuleCosmeticsZone::*)(::UnityEngine::Vector3, ByRef<float_t>)>(
    &::GlobalNamespace::CapsuleCosmeticsZone::IsWithinZone)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x158ae3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CapsuleCosmeticsZone.GetLocalBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CapsuleCosmeticsZone::*)(
    ::UnityEngine::Transform*, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::CapsuleCosmeticsZone::GetLocalBounds)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x158aff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CapsuleCosmeticsZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CapsuleCosmeticsZone::*)()>(&::GlobalNamespace::CapsuleCosmeticsZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x158b0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr float_t& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_testRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRadius;
}
constexpr float_t const& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_testRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___testRadius;
}
constexpr void GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_set_testRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___testRadius = value;
}
constexpr float_t& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr float_t const& GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::CapsuleCosmeticsZone::__cordl_internal_set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
inline void GlobalNamespace::CapsuleCosmeticsZone::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::CapsuleCosmeticsZone::IsWithinZone(::UnityEngine::Vector3 position) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool GlobalNamespace::CapsuleCosmeticsZone::IsWithinZone(::UnityEngine::Vector3 position, ByRef<float_t> distanceFromZoneSurface) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, distanceFromZoneSurface);
}
inline void GlobalNamespace::CapsuleCosmeticsZone::GetLocalBounds(::UnityEngine::Transform* localTransform, ByRef<::UnityEngine::Vector3> halfExtents, ByRef<::UnityEngine::Vector3> localCenter) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localTransform, halfExtents, localCenter);
}
inline ::GlobalNamespace::CapsuleCosmeticsZone* GlobalNamespace::CapsuleCosmeticsZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CapsuleCosmeticsZone*>());
}
inline void GlobalNamespace::CapsuleCosmeticsZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CapsuleCosmeticsZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CapsuleCosmeticsZone::CapsuleCosmeticsZone() {}
