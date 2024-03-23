#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/zzzz__LightType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightExtractionJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightExtractionJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightExtractionJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LightExtractionJob::Execute)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2732518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightExtractionJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::LightExtractionJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::LightExtractionJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::LightExtractionJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightExtractionJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "lights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightTypes",
// ty: "::Unity::Collections::NativeArray_1<::UnityEngine::LightType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "radiuses", ty: "::Unity::Collections::NativeArray_1<float_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "directions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "coneRadiuses", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightExtractionJob::LightExtractionJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights,
                                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::LightType> lightTypes,
                                                                                      ::Unity::Collections::NativeArray_1<float_t> radiuses,
                                                                                      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> directions,
                                                                                      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions,
                                                                                      ::Unity::Collections::NativeArray_1<float_t> coneRadiuses) noexcept {
  this->lights = lights;
  this->lightTypes = lightTypes;
  this->radiuses = radiuses;
  this->directions = directions;
  this->positions = positions;
  this->coneRadiuses = coneRadiuses;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightExtractionJob::LightExtractionJob() {}
