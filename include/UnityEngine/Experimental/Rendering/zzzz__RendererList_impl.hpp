#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__RendererList_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RendererList.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RendererList::*)()>(
    &::UnityEngine::Experimental::Rendering::RendererList::get_isValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ca6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(),
                                                                               "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RendererList.set_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RendererList::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RendererList::set_isValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ca6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(), "set_isValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RendererList.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RendererList (*)(
    ByRef<::UnityEngine::Experimental::Rendering::RendererListDesc>)>(&::UnityEngine::Experimental::Rendering::RendererList::Create)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x23ca700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::RendererList::setStaticF_s_EmptyName(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Experimental::Rendering::RendererList::getStaticF_s_EmptyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_EmptyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get>();
}
inline void UnityEngine::Experimental::Rendering::RendererList::setStaticF_nullRendererList(::UnityEngine::Experimental::Rendering::RendererList value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RendererList, "nullRendererList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RendererList>(value));
}
inline ::UnityEngine::Experimental::Rendering::RendererList UnityEngine::Experimental::Rendering::RendererList::getStaticF_nullRendererList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RendererList, "nullRendererList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get>();
}
inline bool UnityEngine::Experimental::Rendering::RendererList::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(),
                                                                             "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RendererList::set_isValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(), "set_isValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::RendererList UnityEngine::Experimental::Rendering::RendererList::Create(ByRef<::UnityEngine::Experimental::Rendering::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RendererList>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RendererList, false>(nullptr, ___internal_method, desc);
}
// Ctor Parameters [CppParam { name: "_isValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingResult", ty: "::UnityEngine::Rendering::CullingResults",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "drawSettings", ty: "::UnityEngine::Rendering::DrawingSettings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "filteringSettings", ty: "::UnityEngine::Rendering::FilteringSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateBlock", ty:
// "::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RendererList::RendererList(bool _isValid_k__BackingField, ::UnityEngine::Rendering::CullingResults cullingResult,
                                                                             ::UnityEngine::Rendering::DrawingSettings drawSettings, ::UnityEngine::Rendering::FilteringSettings filteringSettings,
                                                                             ::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock) noexcept {
  this->_isValid_k__BackingField = _isValid_k__BackingField;
  this->cullingResult = cullingResult;
  this->drawSettings = drawSettings;
  this->filteringSettings = filteringSettings;
  this->stateBlock = stateBlock;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RendererList::RendererList() {}
