#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MobileInteractionForward_def.hpp"
#include "GlobalNamespace/zzzz__MobileInteractable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileInteractionForward._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileInteractionForward::*)()>(&::GlobalNamespace::MobileInteractionForward::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3087354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInteractionForward*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MobileInteractable>& GlobalNamespace::MobileInteractionForward::__cordl_internal_get_mobileInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileInteractable;
}
constexpr ::UnityW<::GlobalNamespace::MobileInteractable> const& GlobalNamespace::MobileInteractionForward::__cordl_internal_get_mobileInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mobileInteractable;
}
constexpr void GlobalNamespace::MobileInteractionForward::__cordl_internal_set_mobileInteractable(::UnityW<::GlobalNamespace::MobileInteractable> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mobileInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MobileInteractionForward* GlobalNamespace::MobileInteractionForward::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileInteractionForward*>());
}
inline void GlobalNamespace::MobileInteractionForward::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileInteractionForward*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileInteractionForward::MobileInteractionForward() {}
