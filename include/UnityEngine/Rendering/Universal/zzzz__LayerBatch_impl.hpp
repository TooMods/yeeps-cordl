#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer::__LayerBatch___renderTargetIds_e__FixedBuffer(int32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer::__LayerBatch___renderTargetIds_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer::__LayerBatch___renderTargetUsed_e__FixedBuffer(bool FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer::__LayerBatch___renderTargetUsed_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerBatch.InitRTIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LayerBatch::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LayerBatch::InitRTIds)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2f3cab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "InitRTIds",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerBatch.GetRTId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::LayerBatch::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, int32_t)>(&::UnityEngine::Rendering::Universal::LayerBatch::GetRTId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2f3a5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "GetRTId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerBatch.ReleaseRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LayerBatch::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::LayerBatch::ReleaseRT)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f3af54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "ReleaseRT", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::LayerBatch::InitRTIds(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "InitRTIds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::LayerBatch::GetRTId(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                               ::UnityEngine::RenderTextureDescriptor desc, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "GetRTId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method, cmd, desc, index);
}
inline void UnityEngine::Rendering::Universal::LayerBatch::ReleaseRT(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerBatch>::get(), "ReleaseRT", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters [CppParam { name: "startLayerID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endLayerValue", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "layerRange", ty: "::UnityEngine::Rendering::SortingLayerRange", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightStats", ty:
// "::UnityEngine::Rendering::Universal::LightStats", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetIds", ty:
// "::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetUsed", ty:
// "::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LayerBatch::LayerBatch(int32_t startLayerID, int32_t endLayerValue, ::UnityEngine::Rendering::SortingLayerRange layerRange,
                                                                      ::UnityEngine::Rendering::Universal::LightStats lightStats,
                                                                      ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetIds_e__FixedBuffer renderTargetIds,
                                                                      ::UnityEngine::Rendering::Universal::__LayerBatch___renderTargetUsed_e__FixedBuffer renderTargetUsed) noexcept {
  this->startLayerID = startLayerID;
  this->endLayerValue = endLayerValue;
  this->layerRange = layerRange;
  this->lightStats = lightStats;
  this->renderTargetIds = renderTargetIds;
  this->renderTargetUsed = renderTargetUsed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LayerBatch::LayerBatch() {}
