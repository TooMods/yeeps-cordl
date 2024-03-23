#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGroupMemberExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions.GetTopLevelContainingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* (*)(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions::GetTopLevelContainingGroup)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x25a6c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions*>::get(), "GetTopLevelContainingGroup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*
UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions::GetTopLevelContainingGroup(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions*>::get(), "GetTopLevelContainingGroup",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*, false>(nullptr, ___internal_method, groupMember);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRGroupMemberExtensions::XRGroupMemberExtensions() {}
