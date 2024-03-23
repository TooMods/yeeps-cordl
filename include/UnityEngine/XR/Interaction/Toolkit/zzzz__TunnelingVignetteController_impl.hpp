#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__EaseState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TunnelingVignetteController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__EaseState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ITunnelingVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TunnelingVignetteController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__VignetteParameters_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::setStaticF_apertureSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "apertureSize",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::getStaticF_apertureSize() {
  return ::cordl_internals::getStaticField<
      int32_t, "apertureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::setStaticF_featheringEffect(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "featheringEffect",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::getStaticF_featheringEffect() {
  return ::cordl_internals::getStaticField<
      int32_t, "featheringEffect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::setStaticF_vignetteColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "vignetteColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::getStaticF_vignetteColor() {
  return ::cordl_internals::getStaticField<
      int32_t, "vignetteColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::setStaticF_vignetteColorBlend(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "vignetteColorBlend",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::getStaticF_vignetteColorBlend() {
  return ::cordl_internals::getStaticField<
      int32_t, "vignetteColorBlend", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ShaderPropertyLookup::__TunnelingVignetteController__ShaderPropertyLookup() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.get_provider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                                 "get_provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.get_easeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::EaseState (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_easeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                                 "get_easeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.set_easeState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)(
    ::UnityEngine::XR::Interaction::Toolkit::EaseState)>(&::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_easeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                    "set_easeState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::EaseState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.get_dynamicApertureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_dynamicApertureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                                 "get_dynamicApertureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.set_dynamicApertureSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_dynamicApertureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_dynamicApertureSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.get_easeInLockEnded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_easeInLockEnded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                                 "get_easeInLockEnded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.set_easeInLockEnded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_easeInLockEnded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x301cd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_easeInLockEnded",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.get_dynamicEaseOutDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_dynamicEaseOutDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                                 "get_dynamicEaseOutDelayTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord.set_dynamicEaseOutDelayTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_dynamicEaseOutDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301cd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_dynamicEaseOutDelayTime",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x301b97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*&
UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__provider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*> const&
UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__provider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_set__provider_k__BackingField(
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__easeState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeState_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::EaseState const&
UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__easeState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeState_k__BackingField;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_set__easeState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::EaseState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeState_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__dynamicApertureSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicApertureSize_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__dynamicApertureSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicApertureSize_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_set__dynamicApertureSize_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dynamicApertureSize_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__easeInLockEnded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeInLockEnded_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__easeInLockEnded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeInLockEnded_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_set__easeInLockEnded_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeInLockEnded_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicEaseOutDelayTime_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicEaseOutDelayTime_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dynamicEaseOutDelayTime_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_provider() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                               "get_provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::EaseState UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_easeState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                               "get_easeState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::EaseState, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_easeState(::UnityEngine::XR::Interaction::Toolkit::EaseState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                  "set_easeState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::EaseState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_dynamicApertureSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                               "get_dynamicApertureSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_dynamicApertureSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_dynamicApertureSize",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_easeInLockEnded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                               "get_easeInLockEnded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_easeInLockEnded(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_easeInLockEnded",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::get_dynamicEaseOutDelayTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(),
                                               "get_dynamicEaseOutDelayTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::set_dynamicEaseOutDelayTime(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), "set_dynamicEaseOutDelayTime",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*
UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::New_ctor(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>(provider));
}
inline void UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::_ctor(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord::__TunnelingVignetteController__ProviderRecord() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.get_defaultParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* (
    ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_defaultParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301b71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                 "get_defaultParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.set_defaultParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::set_defaultParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301b724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "set_defaultParameters",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.get_currentParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* (
    ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_currentParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301b72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                 "get_currentParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.get_locomotionVignetteProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* (
    ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_locomotionVignetteProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301b734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                 "get_locomotionVignetteProviders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.set_locomotionVignetteProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::set_locomotionVignetteProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301b73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "set_locomotionVignetteProviders",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.BeginTunnelingVignette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::BeginTunnelingVignette)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x301b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "BeginTunnelingVignette",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.EndTunnelingVignette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::EndTunnelingVignette)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x301b9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "EndTunnelingVignette",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.PreviewInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::PreviewInEditor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x301bccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "PreviewInEditor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x301bf2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x301bfac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Update)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x301c03c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.UpdateTunnelingVignette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)(
    ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::UpdateTunnelingVignette)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x301bd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "UpdateTunnelingVignette",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController.TrySetUpMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::TrySetUpMaterial)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x301c77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                                 "TrySetUpMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x301cb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_DefaultParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultParameters;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*> const&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_DefaultParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultParameters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_DefaultParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_CurrentParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentParameters;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*> const&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_CurrentParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentParameters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_CurrentParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_LocomotionVignetteProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocomotionVignetteProviders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*> const&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_LocomotionVignetteProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocomotionVignetteProviders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_LocomotionVignetteProviders(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocomotionVignetteProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>*&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_ProviderRecords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderRecords;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>*> const&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_ProviderRecords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProviderRecords;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_ProviderRecords(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::__TunnelingVignetteController__ProviderRecord*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderRecords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_MeshRender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshRender;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_MeshRender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshRender;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_MeshRender(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshRender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_MeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_MeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MeshFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_SharedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_SharedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SharedMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_SharedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SharedMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_VignettePropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VignettePropertyBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const&
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_get_m_VignettePropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VignettePropertyBlock;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::__cordl_internal_set_m_VignettePropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VignettePropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_defaultParameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                               "get_defaultParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::set_defaultParameters(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "set_defaultParameters",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_currentParameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                               "get_currentParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*
UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::get_locomotionVignetteProviders() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(),
                                               "get_locomotionVignetteProviders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::set_locomotionVignetteProviders(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "set_locomotionVignetteProviders",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::LocomotionVignetteProvider*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::BeginTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "BeginTunnelingVignette",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::EndTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "EndTunnelingVignette",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::PreviewInEditor(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* previewParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "PreviewInEditor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewParameters);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::UpdateTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "UpdateTunnelingVignette",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline bool UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::TrySetUpMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), "TrySetUpMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController* UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::TunnelingVignetteController() {}
