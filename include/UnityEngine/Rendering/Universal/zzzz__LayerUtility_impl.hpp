#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerUtility_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ILight2DCullResult_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LayerBatch_def.hpp"
#include "UnityEngine/zzzz__SortingLayer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.get_maxTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::Rendering::Universal::LayerUtility::get_maxTextureCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f3cb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(),
                                                                               "get_maxTextureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.set_maxTextureCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::LayerUtility::set_maxTextureCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f3cbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "set_maxTextureCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.InitializeBudget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::LayerUtility::InitializeBudget)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f3b9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "InitializeBudget",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.CanBatchLightsInLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(int32_t, int32_t, ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>, ::UnityEngine::Rendering::Universal::ILight2DCullResult*)>(
        &::UnityEngine::Rendering::Universal::LayerUtility::CanBatchLightsInLayer)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2f3cc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "CanBatchLightsInLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.FindUpperBoundInBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(int32_t, ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>, ::UnityEngine::Rendering::Universal::ILight2DCullResult*)>(
        &::UnityEngine::Rendering::Universal::LayerUtility::FindUpperBoundInBatch)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3ce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "FindUpperBoundInBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.InitializeBatchInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>)>(
    &::UnityEngine::Rendering::Universal::LayerUtility::InitializeBatchInfos)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f3cef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "InitializeBatchInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LayerUtility.CalculateBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> (*)(::UnityEngine::Rendering::Universal::ILight2DCullResult*, ByRef<int32_t>)>(
    &::UnityEngine::Rendering::Universal::LayerUtility::CalculateBatches)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2f3bf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "CalculateBatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::LayerUtility::setStaticF_s_LayerBatches(::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>, "s_LayerBatches",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>
UnityEngine::Rendering::Universal::LayerUtility::getStaticF_s_LayerBatches() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>, "s_LayerBatches",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get>();
}
inline void UnityEngine::Rendering::Universal::LayerUtility::setStaticF__maxTextureCount_k__BackingField(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "<maxTextureCount>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::LayerUtility::getStaticF__maxTextureCount_k__BackingField() {
  return ::cordl_internals::getStaticField<uint32_t, "<maxTextureCount>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get>();
}
inline uint32_t UnityEngine::Rendering::Universal::LayerUtility::get_maxTextureCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(),
                                                                             "get_maxTextureCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LayerUtility::set_maxTextureCount(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "set_maxTextureCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::LayerUtility::InitializeBudget(uint32_t maxTextureCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "InitializeBudget",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maxTextureCount);
}
inline bool UnityEngine::Rendering::Universal::LayerUtility::CanBatchLightsInLayer(int32_t layerIndex1, int32_t layerIndex2,
                                                                                   ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> sortingLayers,
                                                                                   ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "CanBatchLightsInLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, layerIndex1, layerIndex2, sortingLayers, lightCullResult);
}
inline int32_t UnityEngine::Rendering::Universal::LayerUtility::FindUpperBoundInBatch(int32_t startLayerIndex,
                                                                                      ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> sortingLayers,
                                                                                      ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "FindUpperBoundInBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, startLayerIndex, sortingLayers, lightCullResult);
}
inline void UnityEngine::Rendering::Universal::LayerUtility::InitializeBatchInfos(::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> cachedSortingLayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "InitializeBatchInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cachedSortingLayers);
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>
UnityEngine::Rendering::Universal::LayerUtility::CalculateBatches(::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult, ByRef<int32_t> batchCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LayerUtility*>::get(), "CalculateBatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch, ::Array<::UnityEngine::Rendering::Universal::LayerBatch>*>, false>(nullptr, ___internal_method,
                                                                                                                                                                          lightCullResult, batchCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LayerUtility::LayerUtility() {}
