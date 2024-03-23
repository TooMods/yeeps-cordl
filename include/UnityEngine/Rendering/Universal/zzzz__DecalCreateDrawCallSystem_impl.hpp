#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCreateDrawCallSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCulledChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawCallChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::*)()>(
    &::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::Execute)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2c689a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob>::get(),
                                                 "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "normalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeOffsets", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawDistances", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "angleFades", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvScaleBiases", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMasks", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "fadeFactors", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundingSpheres", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraPosition", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMask", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "visibleDecalIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleDecalCount", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDrawDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "decalToWorldsDraw", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalToDecalsDraw", ty:
// "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subCalls", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subCallCount", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::__DecalCreateDrawCallSystem__DrawCallJob(
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> drawDistances,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> angleFades, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> uvScaleBiases,
    ::Unity::Collections::NativeArray_1<int32_t> layerMasks, ::Unity::Collections::NativeArray_1<uint64_t> sceneLayerMasks, ::Unity::Collections::NativeArray_1<float_t> fadeFactors,
    ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres, ::UnityEngine::Vector3 cameraPosition, uint64_t sceneCullingMask, int32_t cullingMask,
    ::Unity::Collections::NativeArray_1<int32_t> visibleDecalIndices, int32_t visibleDecalCount, float_t maxDrawDistance,
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorldsDraw, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToDecalsDraw,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> subCalls, ::Unity::Collections::NativeArray_1<int32_t> subCallCount) noexcept {
  this->decalToWorlds = decalToWorlds;
  this->normalToWorlds = normalToWorlds;
  this->sizeOffsets = sizeOffsets;
  this->drawDistances = drawDistances;
  this->angleFades = angleFades;
  this->uvScaleBiases = uvScaleBiases;
  this->layerMasks = layerMasks;
  this->sceneLayerMasks = sceneLayerMasks;
  this->fadeFactors = fadeFactors;
  this->boundingSpheres = boundingSpheres;
  this->cameraPosition = cameraPosition;
  this->sceneCullingMask = sceneCullingMask;
  this->cullingMask = cullingMask;
  this->visibleDecalIndices = visibleDecalIndices;
  this->visibleDecalCount = visibleDecalCount;
  this->maxDrawDistance = maxDrawDistance;
  this->decalToWorldsDraw = decalToWorldsDraw;
  this->normalToDecalsDraw = normalToDecalsDraw;
  this->subCalls = subCalls;
  this->subCallCount = subCallCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DecalCreateDrawCallSystem__DrawCallJob::__DecalCreateDrawCallSystem__DrawCallJob() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.get_maxDrawDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c684e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "get_maxDrawDistance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.set_maxDrawDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c684ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "set_maxDrawDistance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityManager*, float_t)>(&::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c684f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2c68598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int32_t)>(
    &::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2c687ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const&
UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_EntityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EntityManager;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EntityManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_Sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_get_m_MaxDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::__cordl_internal_set_m_MaxDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxDrawDistance = value;
}
inline float_t UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "get_maxDrawDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "set_maxDrawDistance",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*
UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>(entityManager, maxDrawDistance));
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityManager, maxDrawDistance);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk,
                                                                                  ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk,
                                                                                  ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCachedChunk*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalCulledChunk*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawCallChunk*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cachedChunk, culledChunk, drawCallChunk, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::DecalCreateDrawCallSystem() {}
