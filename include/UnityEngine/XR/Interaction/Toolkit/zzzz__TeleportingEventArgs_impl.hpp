#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportingEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs.get_teleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest (
    ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::get_teleportRequest)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cfe828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), "get_teleportRequest",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs.set_teleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::*)(
    ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest)>(&::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::set_teleportRequest)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cfe83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), "set_teleportRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cfe850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest& UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::__cordl_internal_get__teleportRequest_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____teleportRequest_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest const& UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::__cordl_internal_get__teleportRequest_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____teleportRequest_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::__cordl_internal_set__teleportRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____teleportRequest_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::TeleportRequest UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::get_teleportRequest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), "get_teleportRequest",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::set_teleportRequest(::UnityEngine::XR::Interaction::Toolkit::TeleportRequest value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), "set_teleportRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs* UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs::TeleportingEventArgs() {}
