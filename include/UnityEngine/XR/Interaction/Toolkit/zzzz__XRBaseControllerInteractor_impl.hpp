#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRActivateInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::__XRBaseControllerInteractor__InputTriggerType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::__XRBaseControllerInteractor__InputTriggerType() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::State{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::StateChange{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::Toggle{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType::Sticky{
  static_cast<int32_t>(0x3)
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cea248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c.__ctor_b__223_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* (
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::__ctor_b__223_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cea250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(),
                                                 "<.ctor>b__223_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c.__ctor_b__223_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* (
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::__ctor_b__223_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2cea2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(),
                                                 "<.ctor>b__223_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::setStaticF___9__223_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__223_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::getStaticF___9__223_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__223_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::setStaticF___9__223_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__223_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>(
      std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::getStaticF___9__223_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__223_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::__ctor_b__223_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(),
                                               "<.ctor>b__223_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::__ctor_b__223_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c*>::get(),
                                               "<.ctor>b__223_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor____c::__XRBaseControllerInteractor____c() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_selectActionTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_selectActionTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_selectActionTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_selectActionTrigger",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hideControllerOnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aae30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hideControllerOnSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hideControllerOnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25aae38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hideControllerOnSelect",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoveredActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoveredActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_allowHoveredActivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoveredActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoveredActivate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoveredActivate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_targetPriorityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaeec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_targetPriorityMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectEntered",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectEntered",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectExited",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectExited",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverEntered",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverEntered",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverExited",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverExited",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aafb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoverAudioWhileSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_allowHoverAudioWhileSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoverAudioWhileSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aafdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoverAudioWhileSelecting",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aafe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25aaff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectEntered",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectEnterIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aaffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectEnterIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectEnterIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectEnterIntensity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectEnterDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectEnterDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectEnterDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectEnterDuration",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectExited",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectExitIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectExitIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectExitIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectExitIntensity",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectExitDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectExitDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectExitDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectExitDuration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectCancelIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectCancelIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectCancelIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectCancelIntensity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectCancelDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticSelectCancelDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectCancelDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectCancelDuration",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverEntered",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverEnterIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverEnterIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverEnterIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverEnterIntensity",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverEnterDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverEnterDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverEnterDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverEnterDuration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverExited",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverExitIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverExitIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverExitIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverExitIntensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverExitDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverExitDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverExitDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverExitDuration",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverCanceled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverCancelIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverCancelIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverCancelIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverCancelIntensity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverCancelDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_hapticHoverCancelDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverCancelDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverCancelDuration",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoverHapticsWhileSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_allowHoverHapticsWhileSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoverHapticsWhileSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoverHapticsWhileSelecting",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_allowActivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowActivate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ab13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowActivate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_xrController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_xrController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_xrController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseController*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ab150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_xrController",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::Awake)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25ab158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.FindControllerComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::FindControllerComponent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25ab344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "FindControllerComponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.PreprocessInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25ab420;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.ProcessInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25ab4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendActivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendActivateEvent)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x25ab628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendActivateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendDeactivateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendDeactivateEvent)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x25ab970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendDeactivateEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_isSelectActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x25abcb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_isUISelectActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isUISelectActive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25abe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_isUISelectActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_shouldActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldActivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25abf1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_shouldDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldDeactivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25abfd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.GetActivateTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::GetActivateTargets)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x25ac08c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnSelectEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25ac42c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 75));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnSelectExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25ac5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnHoverEntering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25ac710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 71));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnHoverExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x25ac81c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CanPlayHoverAudio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverAudio)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ac7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "CanPlayHoverAudio",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CanPlayHoverHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverHaptics)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ac7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "CanPlayHoverHaptics",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t, float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25ac520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendHapticImpulse",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.PlayAudio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PlayAudio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25ac93c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CreateEffectsAudioSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateEffectsAudioSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25ab3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "CreateEffectsAudioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.HandleSelecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleSelecting)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25ac488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "HandleSelecting",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.HandleDeselecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleDeselecting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25ac674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "HandleDeselecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_AudioClipForOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnSelectEnter",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_AudioClipForOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnSelectExit",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_AudioClipForOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnHoverEnter",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playAudioClipOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_audioClipForOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_AudioClipForOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnHoverExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnHoverExit",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                 "get_playHapticsOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_validTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_validTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25aca98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x25acaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.UnityEngine_XR_Interaction_Toolkit_IXRInteractor_get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::UnityEngine_XR_Interaction_Toolkit_IXRInteractor_get_transform)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x25acdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                    "UnityEngine.XR.Interaction.Toolkit.IXRInteractor.get_transform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::i___UnityEngine__XR__Interaction__Toolkit__IXRActivateInteractor() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
constexpr UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractor() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_SelectActionTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectActionTrigger;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType const&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_SelectActionTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectActionTrigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_SelectActionTrigger(
    ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelectActionTrigger = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HideControllerOnSelect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideControllerOnSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HideControllerOnSelect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HideControllerOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HideControllerOnSelect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HideControllerOnSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoveredActivate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoveredActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoveredActivate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoveredActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoveredActivate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowHoveredActivate = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_TargetPriorityMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPriorityMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_TargetPriorityMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetPriorityMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetPriorityMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectEntered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnSelectEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectEntered(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnSelectEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnSelectExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectExited(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnSelectExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnSelectCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectCanceled(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnSelectCanceled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverEntered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnHoverEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverEntered(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnHoverEntered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnHoverExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverExited(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnHoverExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayAudioClipOnHoverCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AudioClipForOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverCanceled(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AudioClipForOnHoverCanceled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowHoverAudioWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectEntered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnSelectEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectEnterIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectEnterDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnSelectExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectExitIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectExitDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnSelectCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectCancelIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticSelectCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectCancelDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticSelectCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverEntered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnHoverEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverEnterIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverEnterDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnHoverExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverExitIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverExitDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverCanceled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayHapticsOnHoverCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverCancelIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HapticHoverCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverCancelDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HapticHoverCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowHoverHapticsWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowActivate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowActivate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowActivate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowActivate = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_Controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controller;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_Controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Controller;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ActivateEventArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateEventArgs;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ActivateEventArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ActivateEventArgs(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActivateEventArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_DeactivateEventArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeactivateEventArgs;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_DeactivateEventArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeactivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_DeactivateEventArgs(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeactivateEventArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSelectActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSelectActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ToggleSelectActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToggleSelectActive = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSelectDeactivatedThisFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ToggleSelectDeactivatedThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ToggleSelectDeactivatedThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ToggleSelectDeactivatedThisFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_WaitingForSelectDeactivate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForSelectDeactivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_WaitingForSelectDeactivate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingForSelectDeactivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_WaitingForSelectDeactivate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitingForSelectDeactivate = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_EffectsAudioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectsAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_EffectsAudioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EffectsAudioSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_EffectsAudioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EffectsAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get__validTargets_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validTargets_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get__validTargets_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set__validTargets_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____validTargets_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::setStaticF_s_ActivateTargets(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*, "s_ActivateTargets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::getStaticF_s_ActivateTargets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*, "s_ActivateTargets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_selectActionTrigger() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_selectActionTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_selectActionTrigger(::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_selectActionTrigger",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRBaseControllerInteractor__InputTriggerType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hideControllerOnSelect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hideControllerOnSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hideControllerOnSelect(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hideControllerOnSelect",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoveredActivate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_allowHoveredActivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoveredActivate(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoveredActivate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_targetPriorityMode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::TargetPriorityMode value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectEntered(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectEntered",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectEntered(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectEntered",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectExited(bool value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectExited",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectExited(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectExited",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectCanceled(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnSelectCanceled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnSelectCanceled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverEntered(bool value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverEntered",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverEntered(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverEntered",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverExited(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverExited",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverExited(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverExited",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverCanceled(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playAudioClipOnHoverCanceled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_audioClipForOnHoverCanceled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverAudioWhileSelecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_allowHoverAudioWhileSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverAudioWhileSelecting(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoverAudioWhileSelecting",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnSelectEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectEntered(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectEntered",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectEnterIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectEnterIntensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectEnterDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectEnterDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnSelectExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectExited(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectExited",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectExitIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectExitIntensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectExitDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectExitDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnSelectCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectCanceled(bool value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnSelectCanceled",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectCancelIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectCancelIntensity",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticSelectCancelDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticSelectCancelDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEntered() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnHoverEntered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverEntered(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverEntered",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverEnterIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverEnterIntensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverEnterDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverEnterDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverExited() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnHoverExited", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverExited(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverExited",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverExitIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverExitIntensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverExitDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverExitDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnHoverCanceled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverCanceled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_playHapticsOnHoverCanceled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverCancelIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelIntensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverCancelIntensity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_hapticHoverCancelDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelDuration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_hapticHoverCancelDuration",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverHapticsWhileSelecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_allowHoverHapticsWhileSelecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverHapticsWhileSelecting(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowHoverHapticsWhileSelecting",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowActivate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "get_allowActivate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowActivate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_allowActivate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_xrController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "get_xrController",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_xrController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::FindControllerComponent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "FindControllerComponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::ProcessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendActivateEvent(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendActivateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendDeactivateEvent(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendDeactivateEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isSelectActive() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 59)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isUISelectActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_isUISelectActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldActivate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldDeactivate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::GetActivateTargets(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRActivateInteractable*>* targets) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 75)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* hoveredInteractable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "CanPlayHoverAudio",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hoveredInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* hoveredInteractable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "CanPlayHoverHaptics",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hoveredInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendHapticImpulse(float_t amplitude, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "SendHapticImpulse",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PlayAudio(::UnityEngine::AudioClip* audioClip) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateEffectsAudioSource() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "CreateEffectsAudioSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleSelecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "HandleSelecting",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleDeselecting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "HandleDeselecting",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_AudioClipForOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectEnter(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnSelectEnter",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_AudioClipForOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectExit(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnSelectExit",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_AudioClipForOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverEnter(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnHoverEnter",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playAudioClipOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_audioClipForOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_AudioClipForOnHoverExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverExit(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), "set_AudioClipForOnHoverExit",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnSelectEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnSelectExit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEnter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "get_playHapticsOnHoverEnter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*
UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_validTargets() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::UnityEngine_XR_Interaction_Toolkit_IXRInteractor_get_transform() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>::get(),
                                               "UnityEngine.XR.Interaction.Toolkit.IXRInteractor.get_transform", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::XRBaseControllerInteractor() {}
