#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MinMaxZJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::MinMaxZJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::MinMaxZJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::MinMaxZJob::Execute)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x273269c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MinMaxZJob>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::MinMaxZJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::MinMaxZJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::MinMaxZJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::MinMaxZJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "worldToViewMatrix", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "lights", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minMaxZs", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meanZs", ty:
// "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::MinMaxZJob::MinMaxZJob(::Unity::Mathematics::float4x4 worldToViewMatrix,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights,
                                                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs,
                                                                      ::Unity::Collections::NativeArray_1<float_t> meanZs) noexcept {
  this->worldToViewMatrix = worldToViewMatrix;
  this->lights = lights;
  this->minMaxZs = minMaxZs;
  this->meanZs = meanZs;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MinMaxZJob::MinMaxZJob() {}
