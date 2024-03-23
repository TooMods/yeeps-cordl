#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/XR/CoreUtils/GUI/zzzz__FlagsPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::*)()>(
    &::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28828f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute* Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>());
}
inline void Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute::FlagsPropertyAttribute() {}
