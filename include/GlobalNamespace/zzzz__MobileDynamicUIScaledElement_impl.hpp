#pragma once
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_impl.hpp"
#include "GlobalNamespace/zzzz__MobileDynamicUIScaledElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIScaledElement.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIScaledElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIScaledElement::Initialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3085f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIScaledElement.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIScaledElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIScaledElement::OnOrientationChanged)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3085fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIScaledElement.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIScaledElement::*)()>(
    &::GlobalNamespace::MobileDynamicUIScaledElement::LateUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3086138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIScaledElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIScaledElement::*)()>(
    &::GlobalNamespace::MobileDynamicUIScaledElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30861bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_set_container(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_canvasRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_canvasRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasRect;
}
constexpr void GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_set_canvasRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___canvasRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_newLandscapeHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLandscapeHeight;
}
constexpr float_t const& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_newLandscapeHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLandscapeHeight;
}
constexpr void GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_set_newLandscapeHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLandscapeHeight = value;
}
constexpr float_t& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_landscapeScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_landscapeScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeScaleMultiplier;
}
constexpr void GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_set_landscapeScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___landscapeScaleMultiplier = value;
}
constexpr bool& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_isLandscape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLandscape;
}
constexpr bool const& GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_get_isLandscape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLandscape;
}
constexpr void GlobalNamespace::MobileDynamicUIScaledElement::__cordl_internal_set_isLandscape(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLandscape = value;
}
inline void GlobalNamespace::MobileDynamicUIScaledElement::Initialize(bool initialIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIScaledElement::OnOrientationChanged(bool newIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIScaledElement::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MobileDynamicUIScaledElement* GlobalNamespace::MobileDynamicUIScaledElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileDynamicUIScaledElement*>());
}
inline void GlobalNamespace::MobileDynamicUIScaledElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIScaledElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileDynamicUIScaledElement::MobileDynamicUIScaledElement() {}
