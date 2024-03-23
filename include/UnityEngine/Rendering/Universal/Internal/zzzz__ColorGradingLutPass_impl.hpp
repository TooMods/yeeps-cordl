#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ColorBalance(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorBalance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ColorBalance() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorBalance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ColorFilter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorFilter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ColorFilter() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorFilter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ChannelMixerRed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerRed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ChannelMixerRed() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerRed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ChannelMixerGreen(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerGreen",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ChannelMixerGreen() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerGreen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ChannelMixerBlue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerBlue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ChannelMixerBlue() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerBlue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__HueSatCon(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HueSatCon",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__HueSatCon() {
  return ::cordl_internals::getStaticField<int32_t, "_HueSatCon",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Lift(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lift",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Lift() {
  return ::cordl_internals::getStaticField<int32_t, "_Lift",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Gamma(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Gamma",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Gamma() {
  return ::cordl_internals::getStaticField<int32_t, "_Gamma",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Gain(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Gain",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Gain() {
  return ::cordl_internals::getStaticField<int32_t, "_Gain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Shadows(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Shadows",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Shadows() {
  return ::cordl_internals::getStaticField<int32_t, "_Shadows",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Midtones(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Midtones",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Midtones() {
  return ::cordl_internals::getStaticField<int32_t, "_Midtones",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__Highlights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Highlights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__Highlights() {
  return ::cordl_internals::getStaticField<int32_t, "_Highlights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__ShaHiLimits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ShaHiLimits",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__ShaHiLimits() {
  return ::cordl_internals::getStaticField<int32_t, "_ShaHiLimits",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__SplitShadows(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SplitShadows",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__SplitShadows() {
  return ::cordl_internals::getStaticField<int32_t, "_SplitShadows",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__SplitHighlights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SplitHighlights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__SplitHighlights() {
  return ::cordl_internals::getStaticField<int32_t, "_SplitHighlights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveMaster(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveMaster",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveMaster() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveMaster",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveRed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveRed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveRed() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveRed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveGreen(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveGreen",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveGreen() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveGreen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveBlue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveBlue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveBlue() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveBlue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveHueVsHue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveHueVsHue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveHueVsHue() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveHueVsHue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveHueVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveHueVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveHueVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveHueVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveLumVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveLumVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveLumVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveLumVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::setStaticF__CurveSatVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveSatVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::getStaticF__CurveSatVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveSatVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__ColorGradingLutPass__ShaderConstants::__ColorGradingLutPass__ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::PostProcessData*)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29b2298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29b258c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute)> {
  constexpr static std::size_t size = 0x1174;
  constexpr static std::size_t addrs = 0x29b25a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.OnFinishCameraStackRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::OnFinishCameraStackRendering)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29b3714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29b3738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.__ctor_g__Load_6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Shader*)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__ctor_g__Load_6_0)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x29b2434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "<.ctor>g__Load|6_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderLdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderLdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderLdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderLdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LutBuilderLdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LutBuilderLdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderHdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderHdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderHdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderHdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LutBuilderHdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LutBuilderHdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_HdrLutFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HdrLutFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_HdrLutFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HdrLutFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_HdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HdrLutFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LdrLutFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LdrLutFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LdrLutFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LdrLutFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LdrLutFormat = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_InternalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_InternalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalLut = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_AllowColorGradingACESHDR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowColorGradingACESHDR;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_AllowColorGradingACESHDR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowColorGradingACESHDR;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_AllowColorGradingACESHDR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowColorGradingACESHDR = value;
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>(evt, data));
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                    ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, data);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup(ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle> internalLut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderTargetHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, internalLut);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                      ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__ctor_g__Load_6_0(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "<.ctor>g__Load|6_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, shader);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ColorGradingLutPass() {}
