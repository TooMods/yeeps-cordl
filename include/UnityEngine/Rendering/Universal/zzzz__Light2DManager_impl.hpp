#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SortingLayer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.get_lights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* (*)()>(
    &::UnityEngine::Rendering::Universal::Light2DManager::get_lights)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f35dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(),
                                                                               "get_lights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.RegisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Light2D*)>(
    &::UnityEngine::Rendering::Universal::Light2DManager::RegisterLight)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2f34eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "RegisterLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.DeregisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Light2D*)>(
    &::UnityEngine::Rendering::Universal::Light2DManager::DeregisterLight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f35008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "DeregisterLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.ErrorIfDuplicateGlobalLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Light2D*)>(
    &::UnityEngine::Rendering::Universal::Light2DManager::ErrorIfDuplicateGlobalLight)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2f32cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "ErrorIfDuplicateGlobalLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.GetGlobalColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Rendering::Universal::Light2DManager::GetGlobalColor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2f36024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.ContainsDuplicateGlobalLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::Light2DManager::ContainsDuplicateGlobalLight)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2f35e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "ContainsDuplicateGlobalLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DManager.GetCachedSortingLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> (*)()>(
    &::UnityEngine::Rendering::Universal::Light2DManager::GetCachedSortingLayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2f33120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(),
                                                                               "GetCachedSortingLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Light2DManager::setStaticF_s_SortingLayers(::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>, "s_SortingLayers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get>(
      std::forward<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>>(value));
}
inline ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> UnityEngine::Rendering::Universal::Light2DManager::getStaticF_s_SortingLayers() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>, "s_SortingLayers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get>();
}
inline void
UnityEngine::Rendering::Universal::Light2DManager::setStaticF__lights_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, "<lights>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* UnityEngine::Rendering::Universal::Light2DManager::getStaticF__lights_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, "<lights>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get>();
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* UnityEngine::Rendering::Universal::Light2DManager::get_lights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(),
                                                                             "get_lights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Light2DManager::RegisterLight(::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "RegisterLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, light);
}
inline void UnityEngine::Rendering::Universal::Light2DManager::DeregisterLight(::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "DeregisterLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, light);
}
inline void UnityEngine::Rendering::Universal::Light2DManager::ErrorIfDuplicateGlobalLight(::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "ErrorIfDuplicateGlobalLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, light);
}
inline bool UnityEngine::Rendering::Universal::Light2DManager::GetGlobalColor(int32_t sortingLayerIndex, int32_t blendStyleIndex, ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "GetGlobalColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sortingLayerIndex, blendStyleIndex, color);
}
inline bool UnityEngine::Rendering::Universal::Light2DManager::ContainsDuplicateGlobalLight(int32_t sortingLayerIndex, int32_t blendStyleIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(), "ContainsDuplicateGlobalLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sortingLayerIndex, blendStyleIndex);
}
inline ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> UnityEngine::Rendering::Universal::Light2DManager::GetCachedSortingLayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DManager*>::get(),
                                                                             "GetCachedSortingLayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Light2DManager::Light2DManager() {}
