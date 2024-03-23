#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode::__ContinuousMoveProviderBase__GravityApplicationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode::__ContinuousMoveProviderBase__GravityApplicationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode
    UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode::AttemptingMove{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode
    UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode::Immediately{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_moveSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301513c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_moveSpeed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_moveSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_moveSpeed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_enableStrafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableStrafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301514c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                 "get_enableStrafe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_enableStrafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableStrafe)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3015154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_enableStrafe",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_enableFly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableFly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_enableFly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_enableFly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableFly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3015168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_enableFly",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_useGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_useGravity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_useGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_useGravity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x301517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_useGravity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_gravityApplicationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode (
    ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_gravityApplicationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                 "get_gravityApplicationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_gravityApplicationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_gravityApplicationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_gravityApplicationMode",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.get_forwardSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3015198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                 "get_forwardSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.set_forwardSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30151a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_forwardSource",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x30151a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.ReadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ReadInput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.ComputeDesiredMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(
    ::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ComputeDesiredMove)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x301539c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.MoveRig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::MoveRig)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x30157f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase.FindCharacterController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::FindCharacterController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3015a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                                 "FindCharacterController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3014e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_MoveSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_MoveSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_MoveSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveSpeed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableStrafe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableStrafe;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableStrafe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableStrafe;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_EnableStrafe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableStrafe = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableFly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFly;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_EnableFly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableFly;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_EnableFly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableFly = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_UseGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_UseGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_UseGravity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseGravity = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode&
UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_GravityApplicationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityApplicationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode const&
UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_GravityApplicationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GravityApplicationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_GravityApplicationMode(
    ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GravityApplicationMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_ForwardSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_ForwardSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ForwardSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_CharacterController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_CharacterController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CharacterController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_AttemptedGetCharacterController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttemptedGetCharacterController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_AttemptedGetCharacterController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttemptedGetCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_AttemptedGetCharacterController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttemptedGetCharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_IsMovingXROrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMovingXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_IsMovingXROrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsMovingXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_IsMovingXROrigin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsMovingXROrigin = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_VerticalVelocity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_get_m_VerticalVelocity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::__cordl_internal_set_m_VerticalVelocity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VerticalVelocity = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_moveSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_moveSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_moveSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_moveSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableStrafe() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_enableStrafe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableStrafe(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_enableStrafe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_enableFly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_enableFly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_enableFly(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_enableFly",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_useGravity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_useGravity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_useGravity(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_useGravity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_gravityApplicationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                               "get_gravityApplicationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_gravityApplicationMode(::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_gravityApplicationMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__ContinuousMoveProviderBase__GravityApplicationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::get_forwardSource() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "get_forwardSource",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::set_forwardSource(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "set_forwardSource",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ReadInput() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ComputeDesiredMove(::UnityEngine::Vector2 input) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::MoveRig(::UnityEngine::Vector3 translationInWorldSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, translationInWorldSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::FindCharacterController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(),
                                               "FindCharacterController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase* UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase::ContinuousMoveProviderBase() {}
