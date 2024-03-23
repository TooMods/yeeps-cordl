#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::__DebugDisplaySettingsRendering__WireframeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::__DebugDisplaySettingsRendering__WireframeMode() {}
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::None{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::Wireframe{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::SolidWireframe{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode::ShadedWireframe{
  static_cast<int32_t>(0x3)
};
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_MapOverlays(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MapOverlays",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_MapOverlays() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MapOverlays",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_MapSize(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MapSize",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_MapSize() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MapSize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_AdditionalWireframeModes(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "AdditionalWireframeModes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_AdditionalWireframeModes() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "AdditionalWireframeModes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_WireframeNotSupportedWarning(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "WireframeNotSupportedWarning",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_WireframeNotSupportedWarning() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "WireframeNotSupportedWarning",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_Overdraw(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "Overdraw",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_Overdraw() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "Overdraw",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_PostProcessing(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "PostProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_PostProcessing() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "PostProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_MSAA(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MSAA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_MSAA() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "MSAA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_HDR(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "HDR",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_HDR() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "HDR",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_PixelValidationMode(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "PixelValidationMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_PixelValidationMode() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "PixelValidationMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_Channels(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "Channels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_Channels() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "Channels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_ValueRangeMin(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "ValueRangeMin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_ValueRangeMin() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "ValueRangeMin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::setStaticF_ValueRangeMax(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "ValueRangeMax",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>(value));
}
inline ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::getStaticF_ValueRangeMax() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip, "ValueRangeMax",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__Strings::__DebugDisplaySettingsRendering__Strings() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0._CreateMapOverlays_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(),
                                    "<CreateMapOverlays>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0._CreateMapOverlays_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c627a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(),
                                    "<CreateMapOverlays>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0._CreateMapOverlays_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c627c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(), "<CreateMapOverlays>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(),
                                               "<CreateMapOverlays>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(),
                                               "<CreateMapOverlays>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::_CreateMapOverlays_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0*>::get(), "<CreateMapOverlays>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c62840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreateMapOverlays_b__0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlays_b__0_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c62848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreateMapOverlays>b__0_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreateMapOverlaySize_b__1_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlaySize_b__1_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6284c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                                 "<CreateMapOverlaySize>b__1_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreateMapOverlaySize_b__1_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlaySize_b__1_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c62854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                                 "<CreateMapOverlaySize>b__1_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreateAdditionalWireframeShaderViews_b__2_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateAdditionalWireframeShaderViews_b__2_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c6285c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreateAdditionalWireframeShaderViews>b__2_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreateAdditionalWireframeShaderViews_b__2_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(
    ::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t)>(&::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateAdditionalWireframeShaderViews_b__2_4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c62860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                    "<CreateAdditionalWireframeShaderViews>b__2_4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreatePixelValidationMode_b__8_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationMode_b__8_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c628c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreatePixelValidationMode>b__8_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreatePixelValidationMode_b__8_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(
    ::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t)>(&::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationMode_b__8_4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c628c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                    "<CreatePixelValidationMode>b__8_4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c._CreatePixelValidationChannels_b__9_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationChannels_b__9_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c62924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreatePixelValidationChannels>b__9_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9(::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>(value));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__0_1(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__0_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__0_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__1_2(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__1_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__1_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__1_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__1_3(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__1_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__1_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__1_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__2_1(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__2_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__2_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__2_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__2_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*, "<>9__2_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__2_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*, "<>9__2_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__8_1(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__8_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__8_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__8_4(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*, "<>9__8_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__8_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*, int32_t>*, "<>9__8_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::setStaticF___9__9_1(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__9_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>(
      std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::getStaticF___9__9_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__9_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get>();
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlays_b__0_1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreateMapOverlays>b__0_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlaySize_b__1_2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                               "<CreateMapOverlaySize>b__1_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateMapOverlaySize_b__1_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                               "<CreateMapOverlaySize>b__1_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateAdditionalWireframeShaderViews_b__2_1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreateAdditionalWireframeShaderViews>b__2_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreateAdditionalWireframeShaderViews_b__2_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                               "<CreateAdditionalWireframeShaderViews>b__2_4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, _);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationMode_b__8_1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreatePixelValidationMode>b__8_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationMode_b__8_4(::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>* _, int32_t _) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(),
                                               "<CreatePixelValidationMode>b__8_4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Field_1<int32_t>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, _);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::_CreatePixelValidationChannels_b__9_1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c*>::get(), "<CreatePixelValidationChannels>b__9_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c::__DebugDisplaySettingsRendering__WidgetFactory____c() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0._CreateMapOverlaySize_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_CreateMapOverlaySize_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(),
                                    "<CreateMapOverlaySize>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0._CreateMapOverlaySize_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_CreateMapOverlaySize_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(), "<CreateMapOverlaySize>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_CreateMapOverlaySize_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(),
                                               "<CreateMapOverlaySize>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::_CreateMapOverlaySize_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0*>::get(), "<CreateMapOverlaySize>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass1_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0._CreateAdditionalWireframeShaderViews_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                    "<CreateAdditionalWireframeShaderViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0._CreateAdditionalWireframeShaderViews_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c6297c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                    "<CreateAdditionalWireframeShaderViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0._CreateAdditionalWireframeShaderViews_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__3)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c62998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                    "<CreateAdditionalWireframeShaderViews>b__3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                               "<CreateAdditionalWireframeShaderViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                               "<CreateAdditionalWireframeShaderViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::_CreateAdditionalWireframeShaderViews_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0*>::get(),
                                               "<CreateAdditionalWireframeShaderViews>b__3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0._CreateWireframeNotSupportedWarning_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::_CreateWireframeNotSupportedWarning_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c629d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*>::get(),
                                    "<CreateWireframeNotSupportedWarning>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::_CreateWireframeNotSupportedWarning_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0*>::get(),
                                               "<CreateWireframeNotSupportedWarning>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0._CreateOverdraw_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_CreateOverdraw_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(),
                                    "<CreateOverdraw>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0._CreateOverdraw_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::*)(bool)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_CreateOverdraw_b__1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c62a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(), "<CreateOverdraw>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_CreateOverdraw_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(),
                                               "<CreateOverdraw>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::_CreateOverdraw_b__1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0*>::get(), "<CreateOverdraw>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0._CreatePostProcessing_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(),
                                    "<CreatePostProcessing>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0._CreatePostProcessing_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(), "<CreatePostProcessing>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0._CreatePostProcessing_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(),
                                    "<CreatePostProcessing>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0._CreatePostProcessing_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(), "<CreatePostProcessing>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(),
                                               "<CreatePostProcessing>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(), "<CreatePostProcessing>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(),
                                               "<CreatePostProcessing>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::_CreatePostProcessing_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0*>::get(), "<CreatePostProcessing>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0._CreateMSAA_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_CreateMSAA_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(),
                                    "<CreateMSAA>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0._CreateMSAA_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::*)(bool)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_CreateMSAA_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c62b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(), "<CreateMSAA>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_CreateMSAA_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(),
                                               "<CreateMSAA>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::_CreateMSAA_b__1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0*>::get(), "<CreateMSAA>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass6_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0._CreateHDR_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_CreateHDR_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(),
                                    "<CreateHDR>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0._CreateHDR_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::*)(bool)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_CreateHDR_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c62b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(), "<CreateHDR>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_CreateHDR_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(),
                                               "<CreateHDR>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::_CreateHDR_b__1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0*>::get(), "<CreateHDR>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6219c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0._CreatePixelValidationMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(),
                                    "<CreatePixelValidationMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0._CreatePixelValidationMode_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(),
                                    "<CreatePixelValidationMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0._CreatePixelValidationMode_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(), "<CreatePixelValidationMode>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(),
                                               "<CreatePixelValidationMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(),
                                               "<CreatePixelValidationMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::_CreatePixelValidationMode_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0*>::get(), "<CreatePixelValidationMode>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c62450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0._CreatePixelValidationChannels_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(),
                                    "<CreatePixelValidationChannels>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0._CreatePixelValidationChannels_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(),
                                    "<CreatePixelValidationChannels>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0._CreatePixelValidationChannels_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::*)(int32_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(), "<CreatePixelValidationChannels>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(),
                                               "<CreatePixelValidationChannels>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(),
                                               "<CreatePixelValidationChannels>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::_CreatePixelValidationChannels_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0*>::get(), "<CreatePixelValidationChannels>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c625e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0._CreatePixelValueRangeMin_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_CreatePixelValueRangeMin_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(),
                                    "<CreatePixelValueRangeMin>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0._CreatePixelValueRangeMin_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::*)(float_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_CreatePixelValueRangeMin_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(), "<CreatePixelValueRangeMin>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_CreatePixelValueRangeMin_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(),
                                               "<CreatePixelValueRangeMin>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::_CreatePixelValueRangeMin_b__1(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0*>::get(), "<CreatePixelValueRangeMin>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c62780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0._CreatePixelValueRangeMax_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_CreatePixelValueRangeMax_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(),
                                    "<CreatePixelValueRangeMax>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0._CreatePixelValueRangeMax_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::*)(float_t)>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_CreatePixelValueRangeMax_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c62c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(), "<CreatePixelValueRangeMax>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0* GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_CreatePixelValueRangeMax_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(),
                                               "<CreatePixelValueRangeMax>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::_CreatePixelValueRangeMax_b__1(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0*>::get(), "<CreatePixelValueRangeMax>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0::__DebugDisplaySettingsRendering__WidgetFactory____c__DisplayClass11_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateMapOverlays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMapOverlays)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2c61880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMapOverlays",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateMapOverlaySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMapOverlaySize)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2c61b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMapOverlaySize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateAdditionalWireframeShaderViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateAdditionalWireframeShaderViews)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2c5e3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateAdditionalWireframeShaderViews",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateWireframeNotSupportedWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateWireframeNotSupportedWarning)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c5e6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateWireframeNotSupportedWarning",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateOverdraw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateOverdraw)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c5e810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateOverdraw",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreatePostProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePostProcessing)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2c5e160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePostProcessing",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMSAA)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c5dfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMSAA",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreateHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateHDR)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c5de58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateHDR",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreatePixelValidationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValidationMode)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2c61e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValidationMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreatePixelValidationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValidationChannels)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2c621a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValidationChannels",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreatePixelValueRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValueRangeMin)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c62458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValueRangeMin",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory.CreatePixelValueRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::__DebugUI__Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(
        &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValueRangeMax)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c625f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValueRangeMax",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMapOverlays",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMapOverlaySize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateAdditionalWireframeShaderViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateAdditionalWireframeShaderViews",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateWireframeNotSupportedWarning(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateWireframeNotSupportedWarning",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateOverdraw(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateOverdraw",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePostProcessing",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateMSAA",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreateHDR",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValidationMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValidationChannels",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValueRangeMin",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory*>::get(), "CreatePixelValueRangeMax",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Widget*, false>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WidgetFactory::__DebugDisplaySettingsRendering__WidgetFactory() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c62cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c62cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*>::get(),
                                    "<.ctor>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> const&
GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0* GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*>());
}
inline void GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__ctor_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0*>::get(),
                                               "<.ctor>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0::__DebugDisplaySettingsRendering__SettingsPanel____c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::*)()>(
    &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c62c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(&::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2c61190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::get_PanelName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*
UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>(data));
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__SettingsPanel::__DebugDisplaySettingsRendering__SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_wireframeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_wireframeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_wireframeMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_wireframeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c61008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_wireframeMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_overdraw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdraw",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_overdraw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c61058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdraw",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.UpdateDebugSceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c6102c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "UpdateDebugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_debugFullScreenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugFullScreenMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugFullScreenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_debugFullScreenMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_debugFullScreenMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugFullScreenMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugFullScreenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugFullScreenMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugFullScreenMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_debugFullScreenModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugFullScreenModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_debugFullScreenModeOutputSizeScreenPercent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_debugFullScreenModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugFullScreenModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugFullScreenModeOutputSizeScreenPercent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_debugSceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugSceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_debugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_debugSceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugSceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugSceneOverrideMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_debugMipInfoMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugMipInfoMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugMipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_debugMipInfoMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_debugMipInfoMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugMipInfoMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugMipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugMipInfoMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipInfoMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_debugPostProcessingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugPostProcessingMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugPostProcessingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_debugPostProcessingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_debugPostProcessingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugPostProcessingMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugPostProcessingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugPostProcessingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableMsaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableMsaa",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableMsaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c610d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableMsaa",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c610e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugValidationMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugValidationMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c610f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugValidationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PixelValidationChannels (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::PixelValidationChannels)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationChannels",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PixelValidationChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_ValidationRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_ValidationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_ValidationRangeMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_ValidationRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_ValidationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_ValidationRangeMin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_ValidationRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_ValidationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_ValidationRangeMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_ValidationRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_ValidationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_ValidationRangeMax",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c5bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsPostProcessingAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c5bf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsLightingActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c5bdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.TryGetScreenClearColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c5bca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "TryGetScreenClearColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.CreatePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::CreatePanel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c61130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "CreatePanel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c5c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsData() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_WireframeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WireframeMode;
}
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_WireframeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WireframeMode;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set_m_WireframeMode(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WireframeMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_Overdraw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overdraw;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_Overdraw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overdraw;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set_m_Overdraw(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Overdraw = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugFullScreenMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugFullScreenMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugFullScreenMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugFullScreenMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__debugFullScreenMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugFullScreenMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugFullScreenMode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugFullScreenModeOutputSizeScreenPercent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugFullScreenModeOutputSizeScreenPercent_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugFullScreenModeOutputSizeScreenPercent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugFullScreenModeOutputSizeScreenPercent_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__debugFullScreenModeOutputSizeScreenPercent_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugFullScreenModeOutputSizeScreenPercent_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugSceneOverrideMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugSceneOverrideMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugSceneOverrideMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugSceneOverrideMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__debugSceneOverrideMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugSceneOverrideMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugMipInfoMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugMipInfoMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugMipInfoMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugMipInfoMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__debugMipInfoMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipInfoMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugMipInfoMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugPostProcessingMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugPostProcessingMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__debugPostProcessingMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugPostProcessingMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__debugPostProcessingMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debugPostProcessingMode_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableMsaa_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableMsaa_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableMsaa_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableMsaa_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__enableMsaa_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableMsaa_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableHDR_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableHDR_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableHDR_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableHDR_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__enableHDR_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableHDR_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugValidationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationChannels_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationChannels_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationChannels_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationChannels_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationChannels_k__BackingField(::UnityEngine::Rendering::Universal::PixelValidationChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationChannels_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__ValidationRangeMin_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidationRangeMin_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__ValidationRangeMin_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidationRangeMin_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__ValidationRangeMin_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ValidationRangeMin_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__ValidationRangeMax_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidationRangeMax_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__ValidationRangeMax_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ValidationRangeMax_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__ValidationRangeMax_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ValidationRangeMax_k__BackingField = value;
}
inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_wireframeMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_wireframeMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode(::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_wireframeMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsRendering__WireframeMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdraw",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdraw",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "UpdateDebugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugFullScreenMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_debugFullScreenMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugFullScreenMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugFullScreenMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugFullScreenMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugFullScreenMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugFullScreenModeOutputSizeScreenPercent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_debugFullScreenModeOutputSizeScreenPercent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugFullScreenModeOutputSizeScreenPercent(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugFullScreenModeOutputSizeScreenPercent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugSceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_debugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugSceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugSceneOverrideMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugMipInfoMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_debugMipInfoMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipInfoMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugMipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugMipInfoMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipInfoMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_debugPostProcessingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_debugPostProcessingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugPostProcessingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_debugPostProcessingMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_debugPostProcessingMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableMsaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableMsaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_validationMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugValidationMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugValidationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::PixelValidationChannels UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_validationChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PixelValidationChannels, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationChannels",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PixelValidationChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_ValidationRangeMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_ValidationRangeMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_ValidationRangeMin(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_ValidationRangeMin",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_ValidationRangeMax() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_ValidationRangeMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_ValidationRangeMax(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_ValidationRangeMax",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor(ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "TryGetScreenClearColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::CreatePanel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "CreatePanel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>());
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::DebugDisplaySettingsRendering() {}
