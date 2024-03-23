#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DCullResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ILight2DCullResult_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2DCullResult_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightStats_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DCullResult____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__Light2DCullResult____c::*)()>(
    &::UnityEngine::Rendering::Universal::__Light2DCullResult____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__Light2DCullResult____c._SetupCulling_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::__Light2DCullResult____c::*)(
    ::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Rendering::Universal::Light2D*)>(&::UnityEngine::Rendering::Universal::__Light2DCullResult____c::_SetupCulling_b__5_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f35da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get(), "<SetupCulling>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::__Light2DCullResult____c::setStaticF___9(::UnityEngine::Rendering::Universal::__Light2DCullResult____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>(value));
}
inline ::UnityEngine::Rendering::Universal::__Light2DCullResult____c* UnityEngine::Rendering::Universal::__Light2DCullResult____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get>();
}
inline void UnityEngine::Rendering::Universal::__Light2DCullResult____c::setStaticF___9__5_0(::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get>(
      std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* UnityEngine::Rendering::Universal::__Light2DCullResult____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get>();
}
inline ::UnityEngine::Rendering::Universal::__Light2DCullResult____c* UnityEngine::Rendering::Universal::__Light2DCullResult____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>());
}
inline void UnityEngine::Rendering::Universal::__Light2DCullResult____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::__Light2DCullResult____c::_SetupCulling_b__5_0(::UnityEngine::Rendering::Universal::Light2D* l1, ::UnityEngine::Rendering::Universal::Light2D* l2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__Light2DCullResult____c*>::get(), "<SetupCulling>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, l1, l2);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__Light2DCullResult____c::__Light2DCullResult____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DCullResult.get_visibleLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* (
    ::UnityEngine::Rendering::Universal::Light2DCullResult::*)()>(&::UnityEngine::Rendering::Universal::Light2DCullResult::get_visibleLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f35544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                               "get_visibleLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DCullResult.IsSceneLit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Light2DCullResult::*)()>(
    &::UnityEngine::Rendering::Universal::Light2DCullResult::IsSceneLit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2f3554c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                               "IsSceneLit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DCullResult.GetLightStatsByLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightStats (::UnityEngine::Rendering::Universal::Light2DCullResult::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Light2DCullResult::GetLightStatsByLayer)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2f355f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(), "GetLightStatsByLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DCullResult.SetupCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2DCullResult::*)(
    ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::Light2DCullResult::SetupCulling)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x2f357bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(), "SetupCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Light2DCullResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Light2DCullResult::*)()>(
    &::UnityEngine::Rendering::Universal::Light2DCullResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f35cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::ILight2DCullResult"
constexpr UnityEngine::Rendering::Universal::Light2DCullResult::operator ::UnityEngine::Rendering::Universal::ILight2DCullResult*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::ILight2DCullResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::ILight2DCullResult"
constexpr ::UnityEngine::Rendering::Universal::ILight2DCullResult* UnityEngine::Rendering::Universal::Light2DCullResult::i___UnityEngine__Rendering__Universal__ILight2DCullResult() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::ILight2DCullResult*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*&
UnityEngine::Rendering::Universal::Light2DCullResult::__cordl_internal_get_m_VisibleLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLights;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*> const&
UnityEngine::Rendering::Universal::Light2DCullResult::__cordl_internal_get_m_VisibleLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLights;
}
constexpr void
UnityEngine::Rendering::Universal::Light2DCullResult::__cordl_internal_set_m_VisibleLights(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisibleLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* UnityEngine::Rendering::Universal::Light2DCullResult::get_visibleLights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                             "get_visibleLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Light2DCullResult::IsSceneLit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                             "IsSceneLit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LightStats UnityEngine::Rendering::Universal::Light2DCullResult::GetLightStatsByLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(), "GetLightStatsByLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightStats, false>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::Universal::Light2DCullResult::SetupCulling(ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(), "SetupCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ScriptableCullingParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingParameters, camera);
}
inline ::UnityEngine::Rendering::Universal::Light2DCullResult* UnityEngine::Rendering::Universal::Light2DCullResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Light2DCullResult*>());
}
inline void UnityEngine::Rendering::Universal::Light2DCullResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Light2DCullResult*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Light2DCullResult::Light2DCullResult() {}
