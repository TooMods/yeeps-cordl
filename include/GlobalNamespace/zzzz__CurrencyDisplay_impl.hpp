#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CurrencyDisplay_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CurrencyDisplay.Display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyDisplay::*)(int32_t)>(&::GlobalNamespace::CurrencyDisplay::Display)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1542798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyDisplay.SetOverrideColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyDisplay::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::CurrencyDisplay::SetOverrideColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1544760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "SetOverrideColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyDisplay.ClearOverrideColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyDisplay::*)()>(&::GlobalNamespace::CurrencyDisplay::ClearOverrideColor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x15446a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "ClearOverrideColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CurrencyDisplay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CurrencyDisplay::*)()>(&::GlobalNamespace::CurrencyDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x15473a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_currencyAmountText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmountText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_currencyAmountText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyAmountText;
}
constexpr void GlobalNamespace::CurrencyDisplay::__cordl_internal_set_currencyAmountText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currencyAmountText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_currencyIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_currencyIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyIcon;
}
constexpr void GlobalNamespace::CurrencyDisplay::__cordl_internal_set_currencyIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currencyIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::UnityEngine::Color>& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_overrideColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideColor;
}
constexpr ::System::Nullable_1<::UnityEngine::Color> const& GlobalNamespace::CurrencyDisplay::__cordl_internal_get_overrideColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideColor;
}
constexpr void GlobalNamespace::CurrencyDisplay::__cordl_internal_set_overrideColor(::System::Nullable_1<::UnityEngine::Color> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideColor = value;
}
inline void GlobalNamespace::CurrencyDisplay::Display(int32_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "Display", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void GlobalNamespace::CurrencyDisplay::SetOverrideColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "SetOverrideColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::CurrencyDisplay::ClearOverrideColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), "ClearOverrideColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CurrencyDisplay* GlobalNamespace::CurrencyDisplay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CurrencyDisplay*>());
}
inline void GlobalNamespace::CurrencyDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CurrencyDisplay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CurrencyDisplay::CurrencyDisplay() {}
