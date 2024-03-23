#pragma once
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SplitToning_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SplitToning.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::SplitToning::*)()>(
    &::UnityEngine::Rendering::Universal::SplitToning::IsActive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27275ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SplitToning.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::SplitToning::*)()>(
    &::UnityEngine::Rendering::Universal::SplitToning::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2727674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SplitToning._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SplitToning::*)()>(
    &::UnityEngine::Rendering::Universal::SplitToning::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x272767c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::SplitToning::operator ::UnityEngine::Rendering::Universal::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::Universal::IPostProcessComponent* UnityEngine::Rendering::Universal::SplitToning::i___UnityEngine__Rendering__Universal__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IPostProcessComponent*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_shadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ColorParameter*> const& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_shadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadows;
}
constexpr void UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_set_shadows(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_highlights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ColorParameter*> const& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_highlights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highlights;
}
constexpr void UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_set_highlights(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___highlights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_balance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___balance;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ClampedFloatParameter*> const& UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_get_balance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___balance;
}
constexpr void UnityEngine::Rendering::Universal::SplitToning::__cordl_internal_set_balance(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___balance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::SplitToning::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SplitToning::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SplitToning* UnityEngine::Rendering::Universal::SplitToning::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::SplitToning*>());
}
inline void UnityEngine::Rendering::Universal::SplitToning::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SplitToning*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SplitToning::SplitToning() {}
