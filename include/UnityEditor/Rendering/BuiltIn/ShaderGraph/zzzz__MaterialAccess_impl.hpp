#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEditor/Rendering/BuiltIn/ShaderGraph/zzzz__MaterialAccess_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess.ReadMaterialRawRenderQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Material*)>(
    &::UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess::ReadMaterialRawRenderQueue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b71904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess*>::get(), "ReadMaterialRawRenderQueue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess::ReadMaterialRawRenderQueue(::UnityEngine::Material* mat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess*>::get(), "ReadMaterialRawRenderQueue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mat);
}
// Ctor Parameters []
constexpr ::UnityEditor::Rendering::BuiltIn::ShaderGraph::MaterialAccess::MaterialAccess() {}
