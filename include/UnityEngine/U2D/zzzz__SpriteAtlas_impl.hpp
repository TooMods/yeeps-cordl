#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::U2D::SpriteAtlas.CanBindTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::U2D::SpriteAtlas::*)(::UnityEngine::Sprite*)>(&::UnityEngine::U2D::SpriteAtlas::CanBindTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a87524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas*>::get(), "CanBindTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::U2D::SpriteAtlas::CanBindTo(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::U2D::SpriteAtlas*>::get(), "CanBindTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sprite);
}
// Ctor Parameters []
constexpr ::UnityEngine::U2D::SpriteAtlas::SpriteAtlas() {}
