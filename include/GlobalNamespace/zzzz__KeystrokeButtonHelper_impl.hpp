#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KeystrokeButtonHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeystrokeButtonHelper.IsUsable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::KeystrokeButtonHelper::*)()>(&::GlobalNamespace::KeystrokeButtonHelper::IsUsable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29d66fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeButtonHelper*>::get(), "IsUsable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeystrokeButtonHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeystrokeButtonHelper::*)()>(&::GlobalNamespace::KeystrokeButtonHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d67d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeButtonHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::KeystrokeButtonHelper::__cordl_internal_get_keyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCode;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::KeystrokeButtonHelper::__cordl_internal_get_keyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCode;
}
constexpr void GlobalNamespace::KeystrokeButtonHelper::__cordl_internal_set_keyCode(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyCode = value;
}
inline bool GlobalNamespace::KeystrokeButtonHelper::IsUsable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeButtonHelper*>::get(), "IsUsable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::KeystrokeButtonHelper* GlobalNamespace::KeystrokeButtonHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::KeystrokeButtonHelper*>());
}
inline void GlobalNamespace::KeystrokeButtonHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeystrokeButtonHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeystrokeButtonHelper::KeystrokeButtonHelper() {}
