#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/zzzz__RequireInterfaceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute.get_interfaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::get_interfaceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3022c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>::get(),
                                    "get_interfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::*)(::System::Type*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3022c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_get__interfaceType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interfaceType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_get__interfaceType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interfaceType_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_set__interfaceType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interfaceType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Type* UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::get_interfaceType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>::get(),
                                               "get_interfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*
UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::New_ctor(::System::Type* interfaceType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(interfaceType));
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::_ctor(::System::Type* interfaceType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interfaceType);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::RequireInterfaceAttribute() {}
