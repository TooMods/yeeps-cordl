#pragma once
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_impl.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatum_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Datums::AnimationCurveDatum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::Datums::AnimationCurveDatum::*)()>(
    &::Unity::XR::CoreUtils::Datums::AnimationCurveDatum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2881b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatum* Unity::XR::CoreUtils::Datums::AnimationCurveDatum::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*>());
}
inline void Unity::XR::CoreUtils::Datums::AnimationCurveDatum::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::Datums::AnimationCurveDatum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatum::AnimationCurveDatum() {}
