#pragma once
#include "GlobalNamespace/zzzz__MobileDynamicUIElement_impl.hpp"
#include "GlobalNamespace/zzzz__MobileDynamicUIGridElement_def.hpp"
#include "UnityEngine/UI/zzzz__GridLayoutGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIGridElement.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIGridElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIGridElement::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3085e40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIGridElement.OnOrientationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIGridElement::*)(bool)>(
    &::GlobalNamespace::MobileDynamicUIGridElement::OnOrientationChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3085e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MobileDynamicUIGridElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MobileDynamicUIGridElement::*)()>(&::GlobalNamespace::MobileDynamicUIGridElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3085e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup>& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_gridLayoutGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridLayoutGroup;
}
constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup> const& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_gridLayoutGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridLayoutGroup;
}
constexpr void GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_set_gridLayoutGroup(::UnityW<::UnityEngine::UI::GridLayoutGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gridLayoutGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_portraitColumnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitColumnCount;
}
constexpr int32_t const& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_portraitColumnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___portraitColumnCount;
}
constexpr void GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_set_portraitColumnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___portraitColumnCount = value;
}
constexpr int32_t& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_landscapeColumnCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeColumnCount;
}
constexpr int32_t const& GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_get_landscapeColumnCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___landscapeColumnCount;
}
constexpr void GlobalNamespace::MobileDynamicUIGridElement::__cordl_internal_set_landscapeColumnCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___landscapeColumnCount = value;
}
inline void GlobalNamespace::MobileDynamicUIGridElement::Initialize(bool initialIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialIsLandscape);
}
inline void GlobalNamespace::MobileDynamicUIGridElement::OnOrientationChanged(bool newIsLandscape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsLandscape);
}
inline ::GlobalNamespace::MobileDynamicUIGridElement* GlobalNamespace::MobileDynamicUIGridElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MobileDynamicUIGridElement*>());
}
inline void GlobalNamespace::MobileDynamicUIGridElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MobileDynamicUIGridElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MobileDynamicUIGridElement::MobileDynamicUIGridElement() {}
