#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseTeleportationInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRReticleDirectionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportationProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportingEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportingEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::__BaseTeleportationInteractable__TeleportTrigger(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::__BaseTeleportationInteractable__TeleportTrigger() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnSelectExited{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnSelectEntered{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnActivated{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnDeactivated{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnSelectExit{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnSelectEnter{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnActivate{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger
    UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger::OnDeactivate{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x301a210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c.__ctor_b__45_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs* (
    ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::__ctor_b__45_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x301a218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get(),
                                                 "<.ctor>b__45_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::setStaticF___9__45_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*, "<>9__45_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*, "<>9__45_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c* UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs* UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::__ctor_b__45_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c*>::get(),
                                               "<.ctor>b__45_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable____c::__BaseTeleportationInteractable____c() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_teleportationProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> (
    ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleportationProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_teleportationProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_teleportationProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleportationProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleportationProvider",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_matchOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::MatchOrientation (
    ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_matchOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_matchOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_matchOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_matchOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_matchOrientation",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::MatchOrientation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_matchDirectionalInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_matchDirectionalInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_matchDirectionalInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_matchDirectionalInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_matchDirectionalInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3018d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_matchDirectionalInput",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_teleportTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger (
    ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleportTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_teleportTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_teleportTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleportTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleportTrigger",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_filterSelectionByHitNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_filterSelectionByHitNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_filterSelectionByHitNormal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_filterSelectionByHitNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_filterSelectionByHitNormal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3018d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_filterSelectionByHitNormal",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_upNormalToleranceDegrees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_upNormalToleranceDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_upNormalToleranceDegrees", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_upNormalToleranceDegrees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_upNormalToleranceDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_upNormalToleranceDegrees",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.get_teleporting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* (
    ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleporting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                 "get_teleporting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.set_teleporting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleporting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleporting",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3018dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3018e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.GenerateTeleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::RaycastHit, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3018e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.SendTeleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::SendTeleportRequest)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x3018e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "SendTeleportRequest",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.UpdateTeleportRequestRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::UpdateTeleportRequestRotation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3019338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "UpdateTeleportRequestRotation",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.ProcessInteractable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x3019474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.OnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3019a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 74));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.OnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3019a5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.OnActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnActivated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3019ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.OnDeactivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnDeactivated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3019b08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.IsSelectableBy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3019b5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.GetReticleDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GetReticleDirection)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3019ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "GetReticleDirection",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::Vector3>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable.GenerateTeleportRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*, ::UnityEngine::RaycastHit, ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>)>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3019f84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3019fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider"
constexpr UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::i___UnityEngine__XR__Interaction__Toolkit__IXRReticleDirectionProvider() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportationProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportationProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> const&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportationProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportationProvider;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportationProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TeleportationProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_MatchOrientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchOrientation;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation const& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_MatchOrientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchOrientation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_MatchOrientation(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchOrientation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_MatchDirectionalInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchDirectionalInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_MatchDirectionalInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchDirectionalInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_MatchDirectionalInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchDirectionalInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportTrigger;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger const&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportTrigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportTrigger(
    ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TeleportTrigger = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_FilterSelectionByHitNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterSelectionByHitNormal;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_FilterSelectionByHitNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterSelectionByHitNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_FilterSelectionByHitNormal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilterSelectionByHitNormal = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_UpNormalToleranceDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpNormalToleranceDegrees;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_UpNormalToleranceDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpNormalToleranceDegrees;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_UpNormalToleranceDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpNormalToleranceDegrees = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*& UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_Teleporting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Teleporting;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*> const&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_Teleporting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Teleporting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_Teleporting(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Teleporting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportingEventArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportingEventArgs;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportingEventArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportingEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportingEventArgs(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::TeleportingEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TeleportingEventArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>*&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportForwardPerInteractor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportForwardPerInteractor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>*> const&
UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportForwardPerInteractor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportForwardPerInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportForwardPerInteractor(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TeleportForwardPerInteractor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider> UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleportationProvider() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_teleportationProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleportationProvider(::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleportationProvider",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::MatchOrientation UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_matchOrientation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_matchOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::MatchOrientation, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_matchOrientation(::UnityEngine::XR::Interaction::Toolkit::MatchOrientation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_matchOrientation",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::MatchOrientation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_matchDirectionalInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_matchDirectionalInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_matchDirectionalInput(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_matchDirectionalInput",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleportTrigger() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_teleportTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleportTrigger(::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleportTrigger",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__BaseTeleportationInteractable__TeleportTrigger>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_filterSelectionByHitNormal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_filterSelectionByHitNormal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_filterSelectionByHitNormal(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_filterSelectionByHitNormal",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_upNormalToleranceDegrees() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_upNormalToleranceDegrees", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_upNormalToleranceDegrees(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_upNormalToleranceDegrees",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::get_teleporting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                               "get_teleporting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::set_teleporting(::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "set_teleporting",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::TeleportingEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 54)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                          ::UnityEngine::RaycastHit raycastHit,
                                                                                                          ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::SendTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "SendTeleportRequest",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::UpdateTeleportRequestRotation(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                                ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(),
                                 "UpdateTeleportRequestRotation", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, teleportRequest);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::ProcessInteractable(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* interactor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor,
                                                                                                      ::UnityEngine::Vector3 hitNormal, ByRef<::UnityEngine::Vector3> reticleUp,
                                                                                                      ByRef<::System::Nullable_1<::UnityEngine::Vector3>> optionalReticleForward) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), "GetReticleDirection",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<::UnityEngine::Vector3>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, hitNormal, reticleUp, optionalReticleForward);
}
inline bool UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor,
                                                                                                          ::UnityEngine::RaycastHit raycastHit,
                                                                                                          ByRef<::UnityEngine::XR::Interaction::Toolkit::TeleportRequest> teleportRequest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable* UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::BaseTeleportationInteractable::BaseTeleportationInteractable() {}
