#pragma once
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleReflectionProbe.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VisibleReflectionProbe::*)(::UnityEngine::Rendering::VisibleReflectionProbe)>(
    &::UnityEngine::Rendering::VisibleReflectionProbe::Equals)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2a94e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleReflectionProbe>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleReflectionProbe.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VisibleReflectionProbe::*)(::System::Object*)>(
    &::UnityEngine::Rendering::VisibleReflectionProbe::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a95124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VisibleReflectionProbe.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::VisibleReflectionProbe::*)()>(
    &::UnityEngine::Rendering::VisibleReflectionProbe::GetHashCode)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2a951b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
constexpr UnityEngine::Rendering::VisibleReflectionProbe::operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*
UnityEngine::Rendering::VisibleReflectionProbe::i___System__IEquatable_1___UnityEngine__Rendering__VisibleReflectionProbe_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::VisibleReflectionProbe>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool UnityEngine::Rendering::VisibleReflectionProbe::Equals(::UnityEngine::Rendering::VisibleReflectionProbe other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::VisibleReflectionProbe>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::VisibleReflectionProbe::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::VisibleReflectionProbe::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VisibleReflectionProbe>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HdrData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Center", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BlendDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Importance", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BoxProjection", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceId", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::VisibleReflectionProbe::VisibleReflectionProbe(::UnityEngine::Bounds m_Bounds, ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, ::UnityEngine::Vector4 m_HdrData,
                                                                                   ::UnityEngine::Vector3 m_Center, float_t m_BlendDistance, int32_t m_Importance, int32_t m_BoxProjection,
                                                                                   int32_t m_InstanceId, int32_t m_TextureId) noexcept {
  this->m_Bounds = m_Bounds;
  this->m_LocalToWorldMatrix = m_LocalToWorldMatrix;
  this->m_HdrData = m_HdrData;
  this->m_Center = m_Center;
  this->m_BlendDistance = m_BlendDistance;
  this->m_Importance = m_Importance;
  this->m_BoxProjection = m_BoxProjection;
  this->m_InstanceId = m_InstanceId;
  this->m_TextureId = m_TextureId;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VisibleReflectionProbe::VisibleReflectionProbe() {}
