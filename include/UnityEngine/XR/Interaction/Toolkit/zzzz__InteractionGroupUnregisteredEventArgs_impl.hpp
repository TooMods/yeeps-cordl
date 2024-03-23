#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs.get_interactionGroupObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::get_interactionGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfeeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(),
                                                 "get_interactionGroupObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs.set_interactionGroupObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::set_interactionGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfeec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(),
                                   "set_interactionGroupObject", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfeec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*&
UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::__cordl_internal_get__interactionGroupObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionGroupObject_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const&
UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::__cordl_internal_get__interactionGroupObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactionGroupObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::__cordl_internal_set__interactionGroupObject_k__BackingField(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____interactionGroupObject_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::get_interactionGroupObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(),
                                               "get_interactionGroupObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(),
                                  "set_interactionGroupObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs::InteractionGroupUnregisteredEventArgs() {}
