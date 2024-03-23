#pragma once
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/Primitives/zzzz__Vector2AffordanceTheme_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a2a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme*>::get(),
                                   ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceTheme::Vector2AffordanceTheme() {}
