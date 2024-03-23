#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::__XRBaseGrabTransformer__RegistrationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::__XRBaseGrabTransformer__RegistrationMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::Single{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::Multiple{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
    UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode::SingleAndMultiple{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.get_canProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fead6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.get_registrationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode (
    ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_registrationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fead74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2fead7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2feaf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                                 "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnLink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2feaf98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnGrab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2feaf9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnGrabCountChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2feafa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase, ByRef<::UnityEngine::Pose>,
    ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnUnlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnUnlink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2feafa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2feafa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::operator ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*
UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_canProcess() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode
UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_registrationMode() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(),
                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnLink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                           ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable,
                                                                                                ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                                                                                                ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnUnlink(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabInteractable);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::XRBaseGrabTransformer() {}
