#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrainLookup_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrainLookupParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrainLookup_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::FilmGrainLookupParameter::*)(
    ::UnityEngine::Rendering::Universal::FilmGrainLookup, bool)>(&::UnityEngine::Rendering::Universal::FilmGrainLookupParameter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2726ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::FilmGrainLookupParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrainLookup>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @param overrideState: bool (default: false)
inline ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter* UnityEngine::Rendering::Universal::FilmGrainLookupParameter::New_ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup value,
                                                                                                                                            bool overrideState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::FilmGrainLookupParameter*>(value, overrideState));
}
/// @param overrideState: bool (default: false)
inline void UnityEngine::Rendering::Universal::FilmGrainLookupParameter::_ctor(::UnityEngine::Rendering::Universal::FilmGrainLookup value, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::FilmGrainLookupParameter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::FilmGrainLookup>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, overrideState);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::FilmGrainLookupParameter::FilmGrainLookupParameter() {}
