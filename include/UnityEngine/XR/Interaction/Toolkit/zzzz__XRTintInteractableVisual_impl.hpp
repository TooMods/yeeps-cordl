#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRTintInteractableVisual_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRTintInteractableVisual_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
inline void UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup::setStaticF_emissionColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "emissionColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup::getStaticF_emissionColor() {
  return ::cordl_internals::getStaticField<int32_t, "emissionColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRTintInteractableVisual__ShaderPropertyLookup::__XRTintInteractableVisual__ShaderPropertyLookup() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.get_tintColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259abec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintColor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.set_tintColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(::UnityEngine::Color)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259abf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.get_tintOnHover
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintOnHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259ac04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintOnHover",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.set_tintOnHover
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintOnHover)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259ac0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintOnHover",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.get_tintOnSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintOnSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259ac18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(),
                                                 "get_tintOnSelection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.set_tintOnSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintOnSelection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x259ac20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintOnSelection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.get_tintRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259ac2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintRenderers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.set_tintRenderers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259ac34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintRenderers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::Awake)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x259ac3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "Awake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x259b360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.SetTint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::SetTint)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x259b7a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.GetEmissionEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::GetEmissionEnabled)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x259bcd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.OnFirstHoverEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnFirstHoverEntered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x259c0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnFirstHoverEntered",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.OnLastHoverExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(
    ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnLastHoverExited)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x259c0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnLastHoverExited",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.OnFirstSelectEntered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnFirstSelectEntered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x259c1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnFirstSelectEntered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual.OnLastSelectExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)(
    ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnLastSelectExited)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x259c1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnLastSelectExited",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x259c2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_TintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintColor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintOnHover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintOnHover;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintOnHover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintOnHover;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_TintOnHover(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintOnHover = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintOnSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintOnSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintOnSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintOnSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_TintOnSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintOnSelection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintRenderers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintRenderers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_TintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TintRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_Interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_Interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Interactable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_HoverInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_HoverInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HoverInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HoverInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_SelectInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectInteractable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*> const&
UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_SelectInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectInteractable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintPropertyBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintPropertyBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const&
UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_TintPropertyBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintPropertyBlock;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_TintPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TintPropertyBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_EmissionEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmissionEnabled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_EmissionEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmissionEnabled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_EmissionEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmissionEnabled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_HasLoggedMaterialInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasLoggedMaterialInstance;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_get_m_HasLoggedMaterialInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasLoggedMaterialInstance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::__cordl_internal_set_m_HasLoggedMaterialInstance(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasLoggedMaterialInstance = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::setStaticF_s_Materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_Materials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::getStaticF_s_Materials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_Materials",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get>();
}
inline ::UnityEngine::Color UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintOnHover() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintOnHover",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintOnHover(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintOnHover",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintOnSelection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintOnSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintOnSelection(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintOnSelection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::get_tintRenderers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "get_tintRenderers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::set_tintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "set_tintRenderers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "Awake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::SetTint(bool on) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::GetEmissionEnabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnFirstHoverEntered",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnLastHoverExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnFirstSelectEntered",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), "OnLastSelectExited", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual* UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRTintInteractableVisual::XRTintInteractableVisual() {}
