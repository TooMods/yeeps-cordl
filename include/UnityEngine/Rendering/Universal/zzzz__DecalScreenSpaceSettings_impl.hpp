#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalNormalBlend_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27293d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_normalBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBlend;
}
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend const& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_normalBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBlend;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_set_normalBlend(::UnityEngine::Rendering::Universal::DecalNormalBlend value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalBlend = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_useGBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_useGBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGBuffer;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_set_useGBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useGBuffer = value;
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>());
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::DecalScreenSpaceSettings() {}
