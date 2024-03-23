#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ILight2DCullResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ILight2DCullResult.get_visibleLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* (
    ::UnityEngine::Rendering::Universal::ILight2DCullResult::*)()>(&::UnityEngine::Rendering::Universal::ILight2DCullResult::get_visibleLights)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ILight2DCullResult.GetLightStatsByLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightStats (::UnityEngine::Rendering::Universal::ILight2DCullResult::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::ILight2DCullResult::GetLightStatsByLayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ILight2DCullResult.IsSceneLit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ILight2DCullResult::*)()>(
    &::UnityEngine::Rendering::Universal::ILight2DCullResult::IsSceneLit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* UnityEngine::Rendering::Universal::ILight2DCullResult::get_visibleLights() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LightStats UnityEngine::Rendering::Universal::ILight2DCullResult::GetLightStatsByLayer(int32_t layer) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightStats, false>(this, ___internal_method, layer);
}
inline bool UnityEngine::Rendering::Universal::ILight2DCullResult::IsSceneLit() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ILight2DCullResult*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
