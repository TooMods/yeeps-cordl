#pragma once
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorLookup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorLookup.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorLookup::*)()>(
    &::UnityEngine::Rendering::Universal::ColorLookup::IsActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x272645c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorLookup.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorLookup::*)()>(
    &::UnityEngine::Rendering::Universal::ColorLookup::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27266e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorLookup.ValidateLUT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorLookup::*)()>(
    &::UnityEngine::Rendering::Universal::ColorLookup::ValidateLUT)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x272649c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                               "ValidateLUT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorLookup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ColorLookup::*)()>(
    &::UnityEngine::Rendering::Universal::ColorLookup::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27266ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ColorLookup::operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* UnityEngine::Rendering::Universal::ColorLookup::i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::TextureParameter*& UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_get_texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::TextureParameter*> const& UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_get_texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___texture;
}
constexpr void UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_set_texture(::UnityEngine::Rendering::TextureParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___texture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_get_contribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contribution;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_get_contribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contribution;
}
constexpr void UnityEngine::Rendering::Universal::ColorLookup::__cordl_internal_set_contribution(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::ColorLookup::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ColorLookup::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ColorLookup::ValidateLUT() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(),
                                                                             "ValidateLUT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ColorLookup* UnityEngine::Rendering::Universal::ColorLookup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ColorLookup*>());
}
inline void UnityEngine::Rendering::Universal::ColorLookup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorLookup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ColorLookup::ColorLookup() {}
