#pragma once
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalDynamicResolutionSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResUpscaleFilter_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicResolutionType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalDynamicResolutionSettings.NewDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::GlobalDynamicResolutionSettings (*)()>(
    &::UnityEngine::Rendering::GlobalDynamicResolutionSettings::NewDefault)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1bd158c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get(),
                                                                               "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::GlobalDynamicResolutionSettings UnityEngine::Rendering::GlobalDynamicResolutionSettings::NewDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalDynamicResolutionSettings>::get(),
                                                                             "NewDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GlobalDynamicResolutionSettings, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useMipBias", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "enableDLSS", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DLSSPerfQualitySetting", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "DLSSUseOptimalSettings", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DLSSSharpness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxPercentage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minPercentage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dynResType", ty:
// "::UnityEngine::Rendering::DynamicResolutionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "upsampleFilter", ty: "::UnityEngine::Rendering::DynamicResUpscaleFilter", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "forceResolution", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forcedPercentage", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lowResTransparencyMinimumThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rayTracingHalfResThreshold", ty: "float_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings::GlobalDynamicResolutionSettings(bool enabled, bool useMipBias, bool enableDLSS, uint32_t DLSSPerfQualitySetting,
                                                                                                     bool DLSSUseOptimalSettings, float_t DLSSSharpness, float_t maxPercentage, float_t minPercentage,
                                                                                                     ::UnityEngine::Rendering::DynamicResolutionType dynResType,
                                                                                                     ::UnityEngine::Rendering::DynamicResUpscaleFilter upsampleFilter, bool forceResolution,
                                                                                                     float_t forcedPercentage, float_t lowResTransparencyMinimumThreshold,
                                                                                                     float_t rayTracingHalfResThreshold) noexcept {
  this->enabled = enabled;
  this->useMipBias = useMipBias;
  this->enableDLSS = enableDLSS;
  this->DLSSPerfQualitySetting = DLSSPerfQualitySetting;
  this->DLSSUseOptimalSettings = DLSSUseOptimalSettings;
  this->DLSSSharpness = DLSSSharpness;
  this->maxPercentage = maxPercentage;
  this->minPercentage = minPercentage;
  this->dynResType = dynResType;
  this->upsampleFilter = upsampleFilter;
  this->forceResolution = forceResolution;
  this->forcedPercentage = forcedPercentage;
  this->lowResTransparencyMinimumThreshold = lowResTransparencyMinimumThreshold;
  this->rayTracingHalfResThreshold = rayTracingHalfResThreshold;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GlobalDynamicResolutionSettings::GlobalDynamicResolutionSettings() {}
