#pragma once
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JumpWhenGrounded_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpWhenGrounded.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpWhenGrounded::*)()>(&::GlobalNamespace::JumpWhenGrounded::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x144417c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpWhenGrounded.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpWhenGrounded::*)()>(&::GlobalNamespace::JumpWhenGrounded::Update)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x14441dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpWhenGrounded._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpWhenGrounded::*)()>(&::GlobalNamespace::JumpWhenGrounded::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1444364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_jumpHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpHeight;
}
constexpr float_t const& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_jumpHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpHeight;
}
constexpr void GlobalNamespace::JumpWhenGrounded::__cordl_internal_set_jumpHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpHeight = value;
}
constexpr float_t& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_groundedRayLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groundedRayLength;
}
constexpr float_t const& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_groundedRayLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groundedRayLength;
}
constexpr void GlobalNamespace::JumpWhenGrounded::__cordl_internal_set_groundedRayLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groundedRayLength = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_groundLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groundLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_groundLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groundLayerMask;
}
constexpr void GlobalNamespace::JumpWhenGrounded::__cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groundLayerMask = value;
}
constexpr float_t& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_sideToSideJumpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sideToSideJumpSpeed;
}
constexpr float_t const& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_sideToSideJumpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sideToSideJumpSpeed;
}
constexpr void GlobalNamespace::JumpWhenGrounded::__cordl_internal_set_sideToSideJumpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sideToSideJumpSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_rb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::JumpWhenGrounded::__cordl_internal_get_rb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rb;
}
constexpr void GlobalNamespace::JumpWhenGrounded::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::JumpWhenGrounded::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::JumpWhenGrounded::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpWhenGrounded* GlobalNamespace::JumpWhenGrounded::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::JumpWhenGrounded*>());
}
inline void GlobalNamespace::JumpWhenGrounded::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpWhenGrounded*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpWhenGrounded::JumpWhenGrounded() {}
