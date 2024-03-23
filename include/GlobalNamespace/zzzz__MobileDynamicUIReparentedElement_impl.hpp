#pragma once
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_impl.hpp"
#include "GlobalNamespace/zzzz__MobileDynamicUIReparentedElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIReparentedElement.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIReparentedElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIReparentedElement::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3085e8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIReparentedElement.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIReparentedElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIReparentedElement::OnOrientationChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3085f84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIReparentedElement.Reparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIReparentedElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIReparentedElement::Reparent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3085e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), "Reparent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIReparentedElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIReparentedElement::*)()>(
    &::GlobalNamespace::MobileDynamicUIReparentedElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3085f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_portraitParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_portraitParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitParent;
}
constexpr void GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_set_portraitParent(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___portraitParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_landscapeParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_landscapeParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeParent;
}
constexpr void GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_set_landscapeParent(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___landscapeParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_landscapePCParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapePCParent;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_get_landscapePCParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapePCParent;
}
constexpr void GlobalNamespace::MobileDynamicUIReparentedElement::__cordl_internal_set_landscapePCParent(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___landscapePCParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MobileDynamicUIReparentedElement::Initialize(bool initialIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIReparentedElement::OnOrientationChanged(bool newIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIReparentedElement::Reparent(bool isLandscape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(), "Reparent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLandscape);
}
inline ::GlobalNamespace::MobileDynamicUIReparentedElement* GlobalNamespace::MobileDynamicUIReparentedElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileDynamicUIReparentedElement*>());
}
inline void GlobalNamespace::MobileDynamicUIReparentedElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIReparentedElement*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileDynamicUIReparentedElement::MobileDynamicUIReparentedElement() {}
