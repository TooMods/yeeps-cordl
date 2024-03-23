#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListParams_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListParams.set_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RendererUtils::RendererListParams::*)(bool)>(
    &::UnityEngine::Rendering::RendererUtils::RendererListParams::set_isValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29dcdd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get(), "set_isValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererListParams.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererUtils::RendererListParams (*)(
    ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Rendering::RendererUtils::RendererListParams::Create)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x29dcde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RendererUtils::RendererListParams::setStaticF_s_EmptyName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::RendererUtils::RendererListParams::getStaticF_s_EmptyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get>();
}
inline void UnityEngine::Rendering::RendererUtils::RendererListParams::setStaticF_nullRendererList(::UnityEngine::Rendering::RendererUtils::RendererListParams value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RendererUtils::RendererListParams, "nullRendererList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get>(
      std::forward<::UnityEngine::Rendering::RendererUtils::RendererListParams>(value));
}
inline ::UnityEngine::Rendering::RendererUtils::RendererListParams UnityEngine::Rendering::RendererUtils::RendererListParams::getStaticF_nullRendererList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RendererUtils::RendererListParams, "nullRendererList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get>();
}
inline void UnityEngine::Rendering::RendererUtils::RendererListParams::set_isValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get(), "set_isValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RendererUtils::RendererListParams
UnityEngine::Rendering::RendererUtils::RendererListParams::Create(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererListParams>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererUtils::RendererListParams, false>(nullptr, ___internal_method, desc);
}
// Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingResult", ty: "::UnityEngine::Rendering::CullingResults",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "drawSettings", ty: "::UnityEngine::Rendering::DrawingSettings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "filteringSettings", ty: "::UnityEngine::Rendering::FilteringSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateBlock", ty:
// "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListParams::RendererListParams(bool _isValid_k__BackingField, ::UnityEngine::Rendering::CullingResults cullingResult,
                                                                                          ::UnityEngine::Rendering::DrawingSettings drawSettings,
                                                                                          ::UnityEngine::Rendering::FilteringSettings filteringSettings,
                                                                                          ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock) noexcept {
  this->_isValid_k__BackingField = _isValid_k__BackingField;
  this->cullingResult = cullingResult;
  this->drawSettings = drawSettings;
  this->filteringSettings = filteringSettings;
  this->stateBlock = stateBlock;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererUtils::RendererListParams::RendererListParams() {}
