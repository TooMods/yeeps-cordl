#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DLookupTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DLookupTexture.GetLightLookupTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (*)()>(
    &::UnityEngine::Rendering::Universal::Light2DLookupTexture::GetLightLookupTexture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f3cfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get(), "GetLightLookupTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DLookupTexture.CreatePointLightLookupTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)()>(
    &::UnityEngine::Rendering::Universal::Light2DLookupTexture::CreatePointLightLookupTexture)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2f3d06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get(),
                                                 "CreatePointLightLookupTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Light2DLookupTexture::setStaticF_s_PointLightLookupTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "s_PointLightLookupTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::Light2DLookupTexture::getStaticF_s_PointLightLookupTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "s_PointLightLookupTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get>();
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::Universal::Light2DLookupTexture::GetLightLookupTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get(),
                                                                             "GetLightLookupTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::Light2DLookupTexture::CreatePointLightLookupTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DLookupTexture*>::get(),
                                                                             "CreatePointLightLookupTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Light2DLookupTexture::Light2DLookupTexture() {}
