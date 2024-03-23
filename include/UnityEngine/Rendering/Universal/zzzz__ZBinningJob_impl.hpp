#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBin_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBinningJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightMinMaxZ_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ZBin_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ZBinningJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ZBinningJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ZBinningJob::Execute)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x273351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::ZBinningJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::ZBinningJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::ZBinningJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ZBinningJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "bins", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minMaxZs",
// ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ>", modifiers: "", def_value: Some("{}") }, CppParam { name: "binOffset", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "zFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ZBinningJob::ZBinningJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::ZBin> bins,
                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::LightMinMaxZ> minMaxZs, int32_t binOffset,
                                                                        float_t zFactor) noexcept {
  this->bins = bins;
  this->minMaxZs = minMaxZs;
  this->binOffset = binOffset;
  this->zFactor = zFactor;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ZBinningJob::ZBinningJob() {}
