#pragma once
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__WhiteBalance_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WhiteBalance.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WhiteBalance::*)()>(
    &::UnityEngine::Rendering::Universal::WhiteBalance::IsActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2727a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WhiteBalance.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WhiteBalance::*)()>(
    &::UnityEngine::Rendering::Universal::WhiteBalance::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2727a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WhiteBalance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WhiteBalance::*)()>(
    &::UnityEngine::Rendering::Universal::WhiteBalance::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2727a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::WhiteBalance::operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* UnityEngine::Rendering::Universal::WhiteBalance::i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_get_temperature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temperature;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_get_temperature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temperature;
}
constexpr void UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_set_temperature(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___temperature)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_get_tint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_get_tint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr void UnityEngine::Rendering::Universal::WhiteBalance::__cordl_internal_set_tint(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::WhiteBalance::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WhiteBalance::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WhiteBalance* UnityEngine::Rendering::Universal::WhiteBalance::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WhiteBalance*>());
}
inline void UnityEngine::Rendering::Universal::WhiteBalance::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WhiteBalance*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WhiteBalance::WhiteBalance() {}
