#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__MouseModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fe9670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor::_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor, int32_t deviceIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, deviceIndex);
}
// Ctor Parameters [CppParam { name: "interactor", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "model", ty:
// "::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor::__XRUIInputModule__RegisteredInteractor(
    ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel model) noexcept {
  this->interactor = interactor;
  this->model = model;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor::__XRUIInputModule__RegisteredInteractor() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch::*)(
    ::UnityEngine::Touch, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2feaa5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch::_ctor(::UnityEngine::Touch touch, int32_t deviceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, touch, deviceIndex);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "model", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch::__XRUIInputModule__RegisteredTouch(bool isValid, int32_t touchId,
                                                                                                                              ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel model) noexcept {
  this->isValid = isValid;
  this->touchId = touchId;
  this->model = model;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch::__XRUIInputModule__RegisteredTouch() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode::__XRUIInputModule__ActiveInputMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode::__XRUIInputModule__ActiveInputMode() {}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode::InputManagerBindings{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode::InputSystemActions{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode::Both{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_activeInputMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_activeInputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_activeInputMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_activeInputMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_activeInputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_activeInputMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableXRInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableXRInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableXRInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableXRInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableXRInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe8f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableXRInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableMouseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableMouseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableMouseInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableMouseInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableMouseInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe8f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableMouseInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableTouchInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableTouchInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableTouchInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableTouchInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe8f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableTouchInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_pointAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_pointAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe8f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_pointAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_pointAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_pointAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe8f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_pointAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_leftClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_leftClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe908c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_leftClickAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_leftClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_leftClickAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe9094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_leftClickAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_middleClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_middleClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe90a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_middleClickAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_middleClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_middleClickAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe90ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_middleClickAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_rightClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_rightClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe90bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_rightClickAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_rightClickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_rightClickAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe90c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_rightClickAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_scrollWheelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_scrollWheelAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe90d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_scrollWheelAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_scrollWheelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_scrollWheelAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe90dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_scrollWheelAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_navigateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_navigateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe90ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_navigateAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_navigateAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_navigateAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe90f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_navigateAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_submitAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_submitAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_submitAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe910c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_submitAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_cancelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe911c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_cancelAction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_cancelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe9124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_cancelAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableBuiltinActionsAsFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableBuiltinActionsAsFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                 "get_enableBuiltinActionsAsFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableBuiltinActionsAsFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableBuiltinActionsAsFallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2fe913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableBuiltinActionsAsFallback",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableGamepadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableGamepadInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe92fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableGamepadInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableGamepadInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableGamepadInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe9304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableGamepadInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableJoystickInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableJoystickInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                 "get_enableJoystickInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableJoystickInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableJoystickInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe9318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableJoystickInput",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_horizontalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_horizontalAxis",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_horizontalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe932c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_horizontalAxis",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_verticalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_verticalAxis",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_verticalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_verticalAxis",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_submitButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_submitButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_submitButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe934c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_submitButton",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_cancelButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe9354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_cancelButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_cancelButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe935c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_cancelButton",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2fe9364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2fe944c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.RegisterInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::RegisterInteractor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2fe94c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "RegisterInteractor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.UnregisterInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::UnregisterInteractor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2fe96c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "UnregisterInteractor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* (
    ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetInteractor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2fe9808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "GetInteractor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetTrackedDeviceModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetTrackedDeviceModel)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2fe98d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "GetTrackedDeviceModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DoProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DoProcess)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2fe99f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.ProcessMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessMouse)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2fea1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessMouse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.ProcessTouches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessTouches)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2fe9c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessTouches",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.ProcessNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessNavigation)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2fea594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessNavigation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.InputActionReferencesAreSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::InputActionReferencesAreSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2fe9174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                                 "InputActionReferencesAreSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.EnableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableAllActions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2fe9400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "EnableAllActions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DisableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableAllActions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2fe947c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "DisableAllActions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.IsActionEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::IsActionEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2fea9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "IsActionEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.EnableInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableInputAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2feaac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "EnableInputAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DisableInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableInputAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2feab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "DisableInputAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.SetInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::InputActionReference*>, ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::SetInputAction)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2fe8f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "SetInputAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_maxRaycastDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2feac00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_maxRaycastDistance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_maxRaycastDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(float_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2feac08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_maxRaycastDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2feac10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ActiveInputMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveInputMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode const&
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ActiveInputMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveInputMode;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_ActiveInputMode(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveInputMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MaxTrackedDeviceRaycastDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTrackedDeviceRaycastDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MaxTrackedDeviceRaycastDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTrackedDeviceRaycastDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_MaxTrackedDeviceRaycastDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxTrackedDeviceRaycastDistance = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableXRInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableXRInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableXRInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableXRInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableXRInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableXRInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableMouseInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableMouseInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableMouseInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableMouseInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableMouseInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableMouseInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableTouchInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableTouchInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableTouchInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableTouchInput = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_LeftClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_LeftClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeftClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MiddleClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MiddleClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MiddleClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RightClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RightClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollWheelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_NavigateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigateAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableBuiltinActionsAsFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableBuiltinActionsAsFallback;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableBuiltinActionsAsFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableBuiltinActionsAsFallback;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableBuiltinActionsAsFallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableBuiltinActionsAsFallback = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableGamepadInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableGamepadInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableGamepadInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableGamepadInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableGamepadInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableGamepadInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableJoystickInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableJoystickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableJoystickInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableJoystickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableJoystickInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableJoystickInput = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_HorizontalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_HorizontalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_HorizontalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HorizontalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_VerticalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_VerticalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VerticalAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_VerticalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitButton;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_SubmitButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelButton;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_CancelButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RollingPointerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RollingPointerId;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RollingPointerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RollingPointerId;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RollingPointerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RollingPointerId = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UseBuiltInInputSystemActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseBuiltInInputSystemActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UseBuiltInInputSystemActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseBuiltInInputSystemActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_UseBuiltInInputSystemActions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseBuiltInInputSystemActions = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_MouseState(::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_NavigationState(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NavigationState = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>*&
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredTouches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredTouches;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>*> const&
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredTouches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredTouches;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RegisteredTouches(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredTouch>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegisteredTouches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>*&
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredInteractors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractors;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>*> const&
UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredInteractors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RegisteredInteractors(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__RegisteredInteractor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegisteredInteractors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_activeInputMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_activeInputMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_activeInputMode(::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_activeInputMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__XRUIInputModule__ActiveInputMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableXRInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableXRInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableXRInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableXRInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableMouseInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableMouseInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableMouseInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableMouseInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableTouchInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableTouchInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableTouchInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableTouchInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_pointAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_pointAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_pointAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_pointAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_leftClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_leftClickAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_leftClickAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_leftClickAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_middleClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_middleClickAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_middleClickAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_middleClickAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_rightClickAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_rightClickAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_rightClickAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_rightClickAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_scrollWheelAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_scrollWheelAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_scrollWheelAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_scrollWheelAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_navigateAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_navigateAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_navigateAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_navigateAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_submitAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_submitAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelAction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_cancelAction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelAction(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_cancelAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableBuiltinActionsAsFallback() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                               "get_enableBuiltinActionsAsFallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableBuiltinActionsAsFallback(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableBuiltinActionsAsFallback",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableGamepadInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableGamepadInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableGamepadInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableGamepadInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableJoystickInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_enableJoystickInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableJoystickInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_enableJoystickInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_horizontalAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_horizontalAxis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_horizontalAxis(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_horizontalAxis",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_verticalAxis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_verticalAxis",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_verticalAxis(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_verticalAxis",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_submitButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitButton(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_submitButton",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_cancelButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelButton(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_cancelButton",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "RegisterInteractor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "UnregisterInteractor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetInteractor(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "GetInteractor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, false>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetTrackedDeviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor,
                                                                                              ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "GetTrackedDeviceModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, interactor, model);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DoProcess() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessMouse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessMouse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessTouches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessTouches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::ProcessNavigation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "ProcessNavigation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::InputActionReferencesAreSet() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(),
                                               "InputActionReferencesAreSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableAllActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "EnableAllActions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableAllActions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "DisableAllActions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::IsActionEnabled(::UnityEngine::InputSystem::InputActionReference* inputAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "IsActionEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "EnableInputAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "DisableInputAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::SetInputAction(ByRef<::UnityEngine::InputSystem::InputActionReference*> inputAction,
                                                                                       ::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "SetInputAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputAction, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_maxRaycastDistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "get_maxRaycastDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_maxRaycastDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), "set_maxRaycastDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::XRUIInputModule() {}
