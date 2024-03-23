#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SliceCombineJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SliceCombineJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SliceCombineJob::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::SliceCombineJob::Execute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2732dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCombineJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr UnityEngine::Rendering::Universal::SliceCombineJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* UnityEngine::Rendering::Universal::SliceCombineJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::SliceCombineJob::Execute(int32_t idY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SliceCombineJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idY);
}
// Ctor Parameters [CppParam { name: "tileResolution", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordsPerTile", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sliceLightMasksH", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceLightMasksV", ty:
// "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::SliceCombineJob::SliceCombineJob(::Unity::Mathematics::int2 tileResolution, int32_t wordsPerTile,
                                                                                ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksH,
                                                                                ::Unity::Collections::NativeArray_1<uint32_t> sliceLightMasksV,
                                                                                ::Unity::Collections::NativeArray_1<uint32_t> lightMasks) noexcept {
  this->tileResolution = tileResolution;
  this->wordsPerTile = wordsPerTile;
  this->sliceLightMasksH = sliceLightMasksH;
  this->sliceLightMasksV = sliceLightMasksV;
  this->lightMasks = lightMasks;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SliceCombineJob::SliceCombineJob() {}
