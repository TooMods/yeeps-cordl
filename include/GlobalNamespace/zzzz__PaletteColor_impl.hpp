#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PaletteColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorValue_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaletteColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PaletteColor::*)(::StringW, ::UnityEngine::Color)>(
    &::GlobalNamespace::PaletteColor::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1444fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaletteColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PaletteColor::*)(::StringW, ::UnityEngine::Color, ::UnityEngine::Color, uint8_t)>(
    &::GlobalNamespace::PaletteColor::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1445008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaletteColor.GetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::PaletteColor::*)(::GlobalNamespace::ColorValue)>(
    &::GlobalNamespace::PaletteColor::GetColor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1445090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorValue>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PaletteColor::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& GlobalNamespace::PaletteColor::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void GlobalNamespace::PaletteColor::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaletteColor::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaletteColor::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::PaletteColor::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PaletteColor::__cordl_internal_get_emissiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PaletteColor::__cordl_internal_get_emissiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveColor;
}
constexpr void GlobalNamespace::PaletteColor::__cordl_internal_set_emissiveColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emissiveColor = value;
}
constexpr bool& GlobalNamespace::PaletteColor::__cordl_internal_get_emissive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissive;
}
constexpr bool const& GlobalNamespace::PaletteColor::__cordl_internal_get_emissive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissive;
}
constexpr void GlobalNamespace::PaletteColor::__cordl_internal_set_emissive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emissive = value;
}
constexpr uint8_t& GlobalNamespace::PaletteColor::__cordl_internal_get_emissiveLightLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveLightLevel;
}
constexpr uint8_t const& GlobalNamespace::PaletteColor::__cordl_internal_get_emissiveLightLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveLightLevel;
}
constexpr void GlobalNamespace::PaletteColor::__cordl_internal_set_emissiveLightLevel(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emissiveLightLevel = value;
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::PaletteColor::New_ctor(::StringW key, ::UnityEngine::Color color) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PaletteColor*>(key, color));
}
inline void GlobalNamespace::PaletteColor::_ctor(::StringW key, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, color);
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::PaletteColor::New_ctor(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color emissiveColor, uint8_t emissiveLightLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PaletteColor*>(key, color, emissiveColor, emissiveLightLevel));
}
inline void GlobalNamespace::PaletteColor::_ctor(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color emissiveColor, uint8_t emissiveLightLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, color, emissiveColor, emissiveLightLevel);
}
inline ::UnityEngine::Color GlobalNamespace::PaletteColor::GetColor(::GlobalNamespace::ColorValue colorValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PaletteColor*>::get(), "GetColor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaletteColor::PaletteColor() {}
