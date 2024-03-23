#pragma once
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_impl.hpp"
#include "GlobalNamespace/zzzz__MobileDynamicUIActivatedElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIActivatedElement.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIActivatedElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIActivatedElement::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3085c78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIActivatedElement.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIActivatedElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIActivatedElement::OnOrientationChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3085d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIActivatedElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIActivatedElement::*)()>(
    &::GlobalNamespace::MobileDynamicUIActivatedElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3085db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_get_isActiveWhenLandscape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveWhenLandscape;
}
constexpr bool const& GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_get_isActiveWhenLandscape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveWhenLandscape;
}
constexpr void GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_set_isActiveWhenLandscape(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveWhenLandscape = value;
}
constexpr bool& GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_get_isOnlyOnPhone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnlyOnPhone;
}
constexpr bool const& GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_get_isOnlyOnPhone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOnlyOnPhone;
}
constexpr void GlobalNamespace::MobileDynamicUIActivatedElement::__cordl_internal_set_isOnlyOnPhone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOnlyOnPhone = value;
}
inline void GlobalNamespace::MobileDynamicUIActivatedElement::Initialize(bool initialIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIActivatedElement::OnOrientationChanged(bool newIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLandscape);
}
inline ::GlobalNamespace::MobileDynamicUIActivatedElement* GlobalNamespace::MobileDynamicUIActivatedElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileDynamicUIActivatedElement*>());
}
inline void GlobalNamespace::MobileDynamicUIActivatedElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIActivatedElement*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileDynamicUIActivatedElement::MobileDynamicUIActivatedElement() {}
