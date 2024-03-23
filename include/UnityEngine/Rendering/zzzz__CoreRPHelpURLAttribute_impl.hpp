#pragma once
#include "UnityEngine/zzzz__HelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreRPHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::CoreRPHelpURLAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x19fe008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param packageName: ::StringW (default: u"com.unity.render-pipelines.core")
inline ::UnityEngine::Rendering::CoreRPHelpURLAttribute* UnityEngine::Rendering::CoreRPHelpURLAttribute::New_ctor(::StringW pageName, ::StringW packageName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>(pageName, packageName));
}
/// @param packageName: ::StringW (default: u"com.unity.render-pipelines.core")
inline void UnityEngine::Rendering::CoreRPHelpURLAttribute::_ctor(::StringW pageName, ::StringW packageName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CoreRPHelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pageName, packageName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreRPHelpURLAttribute::CoreRPHelpURLAttribute() {}
