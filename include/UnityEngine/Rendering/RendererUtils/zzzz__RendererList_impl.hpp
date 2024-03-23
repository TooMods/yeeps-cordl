#pragma once
#include "System/zzzz__UIntPtr_impl.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererList_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererList.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RendererUtils::RendererList::*)()>(
    &::UnityEngine::Rendering::RendererUtils::RendererList::get_isValid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29dcbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(),
                                                                               "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RendererUtils::RendererList::*)(void*, uint32_t)>(
    &::UnityEngine::Rendering::RendererUtils::RendererList::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29dcc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererUtils::RendererList.get_isValid_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Rendering::RendererUtils::RendererList>)>(
    &::UnityEngine::Rendering::RendererUtils::RendererList::get_isValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29dcc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(), "get_isValid_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererList>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RendererUtils::RendererList::setStaticF_nullRendererList(::UnityEngine::Rendering::RendererUtils::RendererList value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RendererUtils::RendererList, "nullRendererList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get>(
      std::forward<::UnityEngine::Rendering::RendererUtils::RendererList>(value));
}
inline ::UnityEngine::Rendering::RendererUtils::RendererList UnityEngine::Rendering::RendererUtils::RendererList::getStaticF_nullRendererList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RendererUtils::RendererList, "nullRendererList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get>();
}
inline bool UnityEngine::Rendering::RendererUtils::RendererList::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(),
                                                                             "get_isValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RendererUtils::RendererList::_ctor(void* ctx, uint32_t indx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, indx);
}
inline bool UnityEngine::Rendering::RendererUtils::RendererList::get_isValid_Injected(ByRef<::UnityEngine::Rendering::RendererUtils::RendererList> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RendererUtils::RendererList>::get(), "get_isValid_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters [CppParam { name: "context", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "frame", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererUtils::RendererList::RendererList(void* context, uint32_t index, uint32_t frame) noexcept {
  this->context = context;
  this->index = index;
  this->frame = frame;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererUtils::RendererList::RendererList() {}
