#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ConstrainedMoveProvider_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode::__ConstrainedMoveProvider__GravityApplicationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode::__ConstrainedMoveProvider__GravityApplicationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode
    UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode::AttemptingMove{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode
    UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode::Immediately{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.get_enableFreeXMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeXMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30143d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                 "get_enableFreeXMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.set_enableFreeXMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeXMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30143dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeXMovement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.get_enableFreeYMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeYMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30143e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                 "get_enableFreeYMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.set_enableFreeYMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeYMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30143f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeYMovement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.get_enableFreeZMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeZMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30143fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                 "get_enableFreeZMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.set_enableFreeZMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeZMovement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3014404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeZMovement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.get_useGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3014410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "get_useGravity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.set_useGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_useGravity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3014418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_useGravity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.get_gravityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode (
    ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_gravityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3014424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "get_gravityMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.set_gravityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode)>(&::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_gravityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301442c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_gravityMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::Update)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3014434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.ComputeDesiredMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(ByRef<bool>)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::ComputeDesiredMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.MoveRig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::MoveRig)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x30145d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider.FindCharacterController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::FindCharacterController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x30148ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                                 "FindCharacterController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3014b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeXMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeXMovement;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeXMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeXMovement;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_EnableFreeXMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableFreeXMovement = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeYMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeYMovement;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeYMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeYMovement;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_EnableFreeYMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableFreeYMovement = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeZMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeZMovement;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_EnableFreeZMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFreeZMovement;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_EnableFreeZMovement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableFreeZMovement = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_UseGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_UseGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_UseGravity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseGravity = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode&
UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_GravityApplicationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityApplicationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode const&
UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_GravityApplicationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityApplicationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_GravityApplicationMode(
    ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GravityApplicationMode = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_CharacterController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_CharacterController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_AttemptedGetCharacterController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttemptedGetCharacterController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_AttemptedGetCharacterController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttemptedGetCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_AttemptedGetCharacterController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttemptedGetCharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_IsMovingXROrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMovingXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_IsMovingXROrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMovingXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_IsMovingXROrigin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMovingXROrigin = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_GravityDrivenVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityDrivenVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_get_m_GravityDrivenVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityDrivenVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::__cordl_internal_set_m_GravityDrivenVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GravityDrivenVelocity = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeXMovement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                               "get_enableFreeXMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeXMovement(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeXMovement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeYMovement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                               "get_enableFreeYMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeYMovement(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeYMovement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_enableFreeZMovement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                               "get_enableFreeZMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_enableFreeZMovement(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_enableFreeZMovement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_useGravity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "get_useGravity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_useGravity(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_useGravity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::get_gravityMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "get_gravityMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::set_gravityMode(::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "set_gravityMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__ConstrainedMoveProvider__GravityApplicationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::ComputeDesiredMove(ByRef<bool> attemptingMove) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, attemptingMove);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::MoveRig(::UnityEngine::Vector3 translationInWorldSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, translationInWorldSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::FindCharacterController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(),
                                               "FindCharacterController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider* UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ConstrainedMoveProvider::ConstrainedMoveProvider() {}
