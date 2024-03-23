#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MobilePCOnlyActivatedElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobilePCOnlyActivatedElement.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobilePCOnlyActivatedElement::*)()>(
    &::GlobalNamespace::MobilePCOnlyActivatedElement::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30861c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobilePCOnlyActivatedElement*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobilePCOnlyActivatedElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobilePCOnlyActivatedElement::*)()>(
    &::GlobalNamespace::MobilePCOnlyActivatedElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x308624c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobilePCOnlyActivatedElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MobilePCOnlyActivatedElement::__cordl_internal_get_isOnlyVisibleOnPC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnlyVisibleOnPC;
}
constexpr bool const& GlobalNamespace::MobilePCOnlyActivatedElement::__cordl_internal_get_isOnlyVisibleOnPC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnlyVisibleOnPC;
}
constexpr void GlobalNamespace::MobilePCOnlyActivatedElement::__cordl_internal_set_isOnlyVisibleOnPC(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOnlyVisibleOnPC = value;
}
inline void GlobalNamespace::MobilePCOnlyActivatedElement::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobilePCOnlyActivatedElement*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MobilePCOnlyActivatedElement* GlobalNamespace::MobilePCOnlyActivatedElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobilePCOnlyActivatedElement*>());
}
inline void GlobalNamespace::MobilePCOnlyActivatedElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobilePCOnlyActivatedElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobilePCOnlyActivatedElement::MobilePCOnlyActivatedElement() {}
