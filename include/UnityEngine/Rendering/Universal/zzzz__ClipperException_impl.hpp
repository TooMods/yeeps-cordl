#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClipperException_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClipperException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ClipperException::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::ClipperException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f32930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::ClipperException* UnityEngine::Rendering::Universal::ClipperException::New_ctor(::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ClipperException*>(description));
}
inline void UnityEngine::Rendering::Universal::ClipperException::_ctor(::StringW description) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ClipperException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClipperException::ClipperException() {}
