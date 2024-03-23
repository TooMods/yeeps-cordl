#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__CanSelectMultipleAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute.get_allowMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::get_allowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2596f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>::get(),
                                                 "get_allowMultiple", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2596f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_get__allowMultiple_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_get__allowMultiple_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::__cordl_internal_set__allowMultiple_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowMultiple_k__BackingField = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::get_allowMultiple() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>::get(), "get_allowMultiple",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param allowMultiple: bool (default: true)
inline ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute* UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::New_ctor(bool allowMultiple) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>(allowMultiple));
}
/// @param allowMultiple: bool (default: true)
inline void UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::_ctor(bool allowMultiple) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowMultiple);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::CanSelectMultipleAttribute::CanSelectMultipleAttribute() {}
