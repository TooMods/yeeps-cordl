#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ThemeDisplay_def.hpp"
#include "GlobalNamespace/zzzz__PriceTag_def.hpp"
#include "GlobalNamespace/zzzz__ThemeDisplay_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ThemeDisplay__OnPurchased._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeDisplay__OnPurchased::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__ThemeDisplay__OnPurchased::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xf1f5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeDisplay__OnPurchased.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeDisplay__OnPurchased::*)(::StringW, int32_t)>(
    &::GlobalNamespace::__ThemeDisplay__OnPurchased::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf25560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeDisplay__OnPurchased.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__ThemeDisplay__OnPurchased::*)(::StringW, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__ThemeDisplay__OnPurchased::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf25574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ThemeDisplay__OnPurchased.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ThemeDisplay__OnPurchased::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__ThemeDisplay__OnPurchased::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf25608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__ThemeDisplay__OnPurchased* GlobalNamespace::__ThemeDisplay__OnPurchased::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ThemeDisplay__OnPurchased*>(object, method));
}
inline void GlobalNamespace::__ThemeDisplay__OnPurchased::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__ThemeDisplay__OnPurchased::Invoke(::StringW themeKey, int32_t expectedPrice) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, themeKey, expectedPrice);
}
inline ::System::IAsyncResult* GlobalNamespace::__ThemeDisplay__OnPurchased::BeginInvoke(::StringW themeKey, int32_t expectedPrice, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, themeKey, expectedPrice, callback, object);
}
inline void GlobalNamespace::__ThemeDisplay__OnPurchased::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ThemeDisplay__OnPurchased::__ThemeDisplay__OnPurchased() {}
//  Writing Method size for method: ::GlobalNamespace::ThemeDisplay.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeDisplay::*)(::StringW, int32_t, ::GlobalNamespace::__ThemeDisplay__OnPurchased*)>(
    &::GlobalNamespace::ThemeDisplay::Initialize)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xf1f6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeDisplay.SetHasPriceTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeDisplay::*)(bool)>(&::GlobalNamespace::ThemeDisplay::SetHasPriceTag)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xf1f33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "SetHasPriceTag",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeDisplay.TryPurchase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeDisplay::*)()>(&::GlobalNamespace::ThemeDisplay::TryPurchase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf2552c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "TryPurchase",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeDisplay.DestroySelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeDisplay::*)()>(&::GlobalNamespace::ThemeDisplay::DestroySelf)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf1f958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "DestroySelf",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThemeDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ThemeDisplay::*)()>(&::GlobalNamespace::ThemeDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf25550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ThemeDisplay::__cordl_internal_get_themeKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeKey;
}
constexpr ::StringW const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_themeKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeKey;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_themeKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___themeKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ThemeDisplay::__cordl_internal_get_price() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___price;
}
constexpr int32_t const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_price() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___price;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_price(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___price = value;
}
constexpr float_t& GlobalNamespace::ThemeDisplay::__cordl_internal_get_themeRepresentativeRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeRepresentativeRadius;
}
constexpr float_t const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_themeRepresentativeRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeRepresentativeRadius;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_themeRepresentativeRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___themeRepresentativeRadius = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ThemeDisplay::__cordl_internal_get_placeholderObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeholderObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_placeholderObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeholderObject;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_placeholderObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___placeholderObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ThemeDisplay::__cordl_internal_get_priceTagAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_priceTagAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priceTagAnchor;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_priceTagAnchor(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___priceTagAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PriceTag>& GlobalNamespace::ThemeDisplay::__cordl_internal_get_curPriceTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPriceTag;
}
constexpr ::UnityW<::GlobalNamespace::PriceTag> const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_curPriceTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curPriceTag;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_curPriceTag(::UnityW<::GlobalNamespace::PriceTag> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curPriceTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ThemeDisplay__OnPurchased*& GlobalNamespace::ThemeDisplay::__cordl_internal_get_onPurchasedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPurchasedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThemeDisplay__OnPurchased*> const& GlobalNamespace::ThemeDisplay::__cordl_internal_get_onPurchasedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onPurchasedCallback;
}
constexpr void GlobalNamespace::ThemeDisplay::__cordl_internal_set_onPurchasedCallback(::GlobalNamespace::__ThemeDisplay__OnPurchased* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onPurchasedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ThemeDisplay::Initialize(::StringW themeKey, int32_t price, ::GlobalNamespace::__ThemeDisplay__OnPurchased* onPurchased) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ThemeDisplay__OnPurchased*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, themeKey, price, onPurchased);
}
inline void GlobalNamespace::ThemeDisplay::SetHasPriceTag(bool newHasPriceTag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "SetHasPriceTag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newHasPriceTag);
}
inline void GlobalNamespace::ThemeDisplay::TryPurchase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "TryPurchase",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ThemeDisplay::DestroySelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), "DestroySelf",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ThemeDisplay* GlobalNamespace::ThemeDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ThemeDisplay*>());
}
inline void GlobalNamespace::ThemeDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThemeDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThemeDisplay::ThemeDisplay() {}
