#pragma once
#include "GlobalNamespace/zzzz__Singleton_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__PaletteColor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ColorManager__ColorData::__ColorManager__ColorData(::StringW key, ::UnityEngine::Color color) noexcept {
  this->key = key;
  this->color = color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ColorManager__ColorData::__ColorManager__ColorData() {}
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") },
// CppParam { name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightLevel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ColorManager__EmissiveColorData::__ColorManager__EmissiveColorData(::StringW key, ::UnityEngine::Color color, ::UnityEngine::Color baseColor,
                                                                                                  uint8_t lightLevel) noexcept {
  this->key = key;
  this->color = color;
  this->baseColor = baseColor;
  this->lightLevel = lightLevel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ColorManager__EmissiveColorData::__ColorManager__EmissiveColorData() {}
// Ctor Parameters [CppParam { name: "colorKeys", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__ColorManager__GlobalPaletteRow::__ColorManager__GlobalPaletteRow(::ArrayW<::StringW, ::Array<::StringW>*> colorKeys) noexcept {
  this->colorKeys = colorKeys;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ColorManager__GlobalPaletteRow::__ColorManager__GlobalPaletteRow() {}
//  Writing Method size for method: ::GlobalNamespace::ColorManager.InitializePaletteColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::InitializePaletteColors)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1445104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(),
                                                                               "InitializePaletteColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetPaletteColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PaletteColor* (::GlobalNamespace::ColorManager::*)(::StringW)>(
    &::GlobalNamespace::ColorManager::GetPaletteColor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x1445414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetEmissionLightLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::ColorManager::*)(::StringW)>(&::GlobalNamespace::ColorManager::GetEmissionLightLevel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x14455d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetEmissionLightLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.IsColorDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColorManager::*)(::StringW)>(&::GlobalNamespace::ColorManager::IsColorDefined)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x14456a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "IsColorDefined", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetAllBasicColorKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::ColorManager::*)()>(
    &::GlobalNamespace::ColorManager::GetAllBasicColorKeys)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x144575c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetAllBasicColorKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.InitializeGlobalPalette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::InitializeGlobalPalette)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1445914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(),
                                                                               "InitializeGlobalPalette", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetGlobalPaletteColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PaletteColor* (::GlobalNamespace::ColorManager::*)(int32_t, int32_t)>(
    &::GlobalNamespace::ColorManager::GetGlobalPaletteColor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1445abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetGlobalPaletteColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PaletteColor* (::GlobalNamespace::ColorManager::*)(::UnityEngine::Vector2Int)>(
    &::GlobalNamespace::ColorManager::GetGlobalPaletteColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1445ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetGlobalPaletteColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PaletteColor* (::GlobalNamespace::ColorManager::*)(::UnityEngine::Vector2)>(
    &::GlobalNamespace::ColorManager::GetGlobalPaletteColor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1445ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetGlobalPaletteCoordsForColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (::GlobalNamespace::ColorManager::*)(::StringW)>(
    &::GlobalNamespace::ColorManager::GetGlobalPaletteCoordsForColor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1445be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteCoordsForColor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetUVsForColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::ColorManager::*)(::StringW)>(
    &::GlobalNamespace::ColorManager::GetUVsForColor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1445db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetUVsForColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetGlobalPaletteCoords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::ColorManager::GetGlobalPaletteCoords)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1445fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteCoords", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetUVs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2Int)>(&::GlobalNamespace::ColorManager::GetUVs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1445fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetUVs", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager.GetFilterRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector2Int, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(
    &::GlobalNamespace::ColorManager::GetFilterRange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x144602c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetFilterRange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorManager::*)()>(&::GlobalNamespace::ColorManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1446074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*>& GlobalNamespace::ColorManager::__cordl_internal_get_colorDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> const& GlobalNamespace::ColorManager::__cordl_internal_get_colorDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDatas;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_colorDatas(::ArrayW<::GlobalNamespace::__ColorManager__ColorData, ::Array<::GlobalNamespace::__ColorManager__ColorData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*>&
GlobalNamespace::ColorManager::__cordl_internal_get_emissiveColorDatas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveColorDatas;
}
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> const&
GlobalNamespace::ColorManager::__cordl_internal_get_emissiveColorDatas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emissiveColorDatas;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_emissiveColorDatas(
    ::ArrayW<::GlobalNamespace::__ColorManager__EmissiveColorData, ::Array<::GlobalNamespace::__ColorManager__EmissiveColorData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___emissiveColorDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorManager::__cordl_internal_get_stuffingUIColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffingUIColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorManager::__cordl_internal_get_stuffingUIColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stuffingUIColor;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_stuffingUIColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stuffingUIColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorManager::__cordl_internal_get_currencyUIColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyUIColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorManager::__cordl_internal_get_currencyUIColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currencyUIColor;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_currencyUIColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currencyUIColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorManager::__cordl_internal_get_notEnoughCurrencyUIColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notEnoughCurrencyUIColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorManager::__cordl_internal_get_notEnoughCurrencyUIColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notEnoughCurrencyUIColor;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_notEnoughCurrencyUIColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notEnoughCurrencyUIColor = value;
}
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*>&
GlobalNamespace::ColorManager::__cordl_internal_get_globalPaletteRows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalPaletteRows;
}
constexpr ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> const&
GlobalNamespace::ColorManager::__cordl_internal_get_globalPaletteRows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___globalPaletteRows;
}
constexpr void GlobalNamespace::ColorManager::__cordl_internal_set_globalPaletteRows(
    ::ArrayW<::GlobalNamespace::__ColorManager__GlobalPaletteRow, ::Array<::GlobalNamespace::__ColorManager__GlobalPaletteRow>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___globalPaletteRows)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ColorManager::setStaticF_paletteColors(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>*, "paletteColors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>* GlobalNamespace::ColorManager::getStaticF_paletteColors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PaletteColor*>*, "paletteColors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::setStaticF_colorEmissionLevels(::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>*, "colorEmissionLevels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>* GlobalNamespace::ColorManager::getStaticF_colorEmissionLevels() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, uint8_t>*, "colorEmissionLevels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::setStaticF_allBasicColorKeys(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "allBasicColorKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::ColorManager::getStaticF_allBasicColorKeys() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "allBasicColorKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::setStaticF_globalPalette(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "globalPalette", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* GlobalNamespace::ColorManager::getStaticF_globalPalette() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "globalPalette", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::setStaticF_blackGlobalPaletteCoords(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "blackGlobalPaletteCoords", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(
      std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int GlobalNamespace::ColorManager::getStaticF_blackGlobalPaletteCoords() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "blackGlobalPaletteCoords", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::setStaticF_blackUVs(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "blackUVs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 GlobalNamespace::ColorManager::getStaticF_blackUVs() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "blackUVs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get>();
}
inline void GlobalNamespace::ColorManager::InitializePaletteColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "InitializePaletteColors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::ColorManager::GetPaletteColor(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PaletteColor*, false>(this, ___internal_method, key);
}
inline uint8_t GlobalNamespace::ColorManager::GetEmissionLightLevel(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetEmissionLightLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, key);
}
inline bool GlobalNamespace::ColorManager::IsColorDefined(::StringW key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "IsColorDefined", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::ColorManager::GetAllBasicColorKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetAllBasicColorKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorManager::InitializeGlobalPalette() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "InitializeGlobalPalette",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::ColorManager::GetGlobalPaletteColor(int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PaletteColor*, false>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::ColorManager::GetGlobalPaletteColor(::UnityEngine::Vector2Int coords) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PaletteColor*, false>(this, ___internal_method, coords);
}
inline ::GlobalNamespace::PaletteColor* GlobalNamespace::ColorManager::GetGlobalPaletteColor(::UnityEngine::Vector2 uv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PaletteColor*, false>(this, ___internal_method, uv);
}
inline ::UnityEngine::Vector2Int GlobalNamespace::ColorManager::GetGlobalPaletteCoordsForColor(::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteCoordsForColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(this, ___internal_method, colorKey);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ColorManager::GetUVsForColor(::StringW colorKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetUVsForColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, colorKey);
}
inline ::UnityEngine::Vector2Int GlobalNamespace::ColorManager::GetGlobalPaletteCoords(::UnityEngine::Vector2 uv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetGlobalPaletteCoords", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(nullptr, ___internal_method, uv);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ColorManager::GetUVs(::UnityEngine::Vector2Int coords) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetUVs", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, coords);
}
inline void GlobalNamespace::ColorManager::GetFilterRange(::UnityEngine::Vector2Int coords, ByRef<float_t> minX, ByRef<float_t> minY, ByRef<float_t> maxX, ByRef<float_t> maxY) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), "GetFilterRange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, coords, minX, minY, maxX, maxY);
}
inline ::GlobalNamespace::ColorManager* GlobalNamespace::ColorManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorManager*>());
}
inline void GlobalNamespace::ColorManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorManager::ColorManager() {}
