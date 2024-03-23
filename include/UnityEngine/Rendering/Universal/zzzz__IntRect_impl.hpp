#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__IntRect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IntRect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::IntRect::*)(int64_t, int64_t, int64_t, int64_t)>(
    &::UnityEngine::Rendering::Universal::IntRect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1e220d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntRect>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IntRect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::IntRect::*)(::UnityEngine::Rendering::Universal::IntRect)>(
    &::UnityEngine::Rendering::Universal::IntRect::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1e220e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntRect>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntRect>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::IntRect::_ctor(int64_t l, int64_t t, int64_t r, int64_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntRect>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, l, t, r, b);
}
inline void UnityEngine::Rendering::Universal::IntRect::_ctor(::UnityEngine::Rendering::Universal::IntRect ir) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IntRect>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IntRect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ir);
}
// Ctor Parameters [CppParam { name: "left", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "top", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "right", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottom", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::IntRect::IntRect(int64_t left, int64_t top, int64_t right, int64_t bottom) noexcept {
  this->left = left;
  this->top = top;
  this->right = right;
  this->bottom = bottom;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::IntRect::IntRect() {}
