#pragma once
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LiftGammaGain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector4Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(
    &::UnityEngine::Rendering::Universal::LiftGammaGain::IsActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2726f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(
    &::UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2726fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LiftGammaGain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LiftGammaGain::*)()>(
    &::UnityEngine::Rendering::Universal::LiftGammaGain::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2726fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::LiftGammaGain::operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* UnityEngine::Rendering::Universal::LiftGammaGain::i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_lift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lift;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_lift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lift;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_lift(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lift)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gamma() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gamma;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gamma() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gamma;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_gamma(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gamma)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Vector4Parameter*& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gain;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Vector4Parameter*> const& UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_get_gain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gain;
}
constexpr void UnityEngine::Rendering::Universal::LiftGammaGain::__cordl_internal_set_gain(::UnityEngine::Rendering::Vector4Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::LiftGammaGain::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::LiftGammaGain::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LiftGammaGain* UnityEngine::Rendering::Universal::LiftGammaGain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LiftGammaGain*>());
}
inline void UnityEngine::Rendering::Universal::LiftGammaGain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LiftGammaGain*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LiftGammaGain::LiftGammaGain() {}
