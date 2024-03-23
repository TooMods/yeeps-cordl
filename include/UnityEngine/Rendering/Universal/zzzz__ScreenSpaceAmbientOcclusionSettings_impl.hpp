#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource::__ScreenSpaceAmbientOcclusionSettings__DepthSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource::__ScreenSpaceAmbientOcclusionSettings__DepthSource() {}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource::Depth{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource::DepthNormals{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality::__ScreenSpaceAmbientOcclusionSettings__NormalQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality::__ScreenSpaceAmbientOcclusionSettings__NormalQuality() {}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality::Low{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality::Medium{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality::High{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x272aa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Downsample;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Downsample;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Downsample(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Downsample = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AfterOpaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterOpaque;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AfterOpaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AfterOpaque;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_AfterOpaque(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AfterOpaque = value;
}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Source;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Source(::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__DepthSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Source = value;
}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_NormalSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalSamples;
}
constexpr ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_NormalSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalSamples;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_NormalSamples(
    ::UnityEngine::Rendering::Universal::__ScreenSpaceAmbientOcclusionSettings__NormalQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NormalSamples = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Intensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Intensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Intensity = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_DirectLightingStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DirectLightingStrength;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_DirectLightingStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DirectLightingStrength;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_DirectLightingStrength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DirectLightingStrength = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Radius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Radius;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Radius = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_SampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SampleCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_SampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SampleCount;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_SampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SampleCount = value;
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>());
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::ScreenSpaceAmbientOcclusionSettings() {}
