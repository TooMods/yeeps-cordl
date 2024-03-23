#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCaster2D_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCasterGroup2D_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCaster2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Light2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCaster2D_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCasterGroup2D_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions::__ShadowCaster2D__ComponentVersions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions::__ShadowCaster2D__ComponentVersions() {}
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions::Version_Unserialized{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions::Version_1{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_mesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::get_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_mesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_shapePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (
    ::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(&::UnityEngine::Rendering::Universal::ShadowCaster2D::get_shapePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_shapePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_shapePathHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::get_shapePathHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_shapePathHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.set_shapePathHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::set_shapePathHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_shapePathHash",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.CacheValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::CacheValues)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2f42060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.set_useRendererSilhouette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::set_useRendererSilhouette)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f42208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_useRendererSilhouette",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_useRendererSilhouette
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::get_useRendererSilhouette)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f42214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_useRendererSilhouette", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.set_selfShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::set_selfShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f42234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_selfShadows",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_selfShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::get_selfShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_selfShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.set_castsShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::set_castsShadows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f42248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_castsShadows",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.get_castsShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::get_castsShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f42254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "get_castsShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.SetDefaultSortingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::SetDefaultSortingLayers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2f4225c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "SetDefaultSortingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.IsLit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(::UnityEngine::Rendering::Universal::Light2D*)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::IsLit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f42328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "IsLit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.IsShadowedLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::IsShadowedLayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f42390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "IsShadowedLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::Awake)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2f423f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2f4281c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f428fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::Update)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2f42908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f42ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f42ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowCaster2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowCaster2D::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowCaster2D::_ctor)> {
  constexpr static std::size_t size = 0x1018;
  constexpr static std::size_t addrs = 0x2f42b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::ShadowCaster2D::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::ShadowCaster2D::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ComponentVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentVersion;
}
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ComponentVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComponentVersion;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ComponentVersion(::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComponentVersion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_HasRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderer;
}
constexpr bool const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_HasRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderer;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_HasRenderer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasRenderer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_UseRendererSilhouette() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRendererSilhouette;
}
constexpr bool const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_UseRendererSilhouette() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseRendererSilhouette;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_UseRendererSilhouette(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseRendererSilhouette = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CastsShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CastsShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CastsShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CastsShadows;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CastsShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CastsShadows = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_SelfShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelfShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_SelfShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelfShadows;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_SelfShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SelfShadows = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ApplyToSortingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyToSortingLayers;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ApplyToSortingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyToSortingLayers;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ApplyToSortingLayers(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ApplyToSortingLayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShapePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePath;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShapePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePath;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ShapePath(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShapePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShapePathHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePathHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShapePathHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShapePathHash;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ShapePathHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShapePathHash = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Mesh;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_InstanceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_InstanceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InstanceId;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_InstanceId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InstanceId = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShadowCasterGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterGroup;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ShadowCasterGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterGroup;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ShadowCasterGroup(::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShadowCasterGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D>& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousShadowCasterGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShadowCasterGroup;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousShadowCasterGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShadowCasterGroup;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_PreviousShadowCasterGroup(::UnityW<::UnityEngine::Rendering::Universal::ShadowCasterGroup2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousShadowCasterGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::BoundingSphere& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ProjectedBoundingSphere() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectedBoundingSphere;
}
constexpr ::UnityEngine::BoundingSphere const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_ProjectedBoundingSphere() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProjectedBoundingSphere;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_ProjectedBoundingSphere(::UnityEngine::BoundingSphere value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProjectedBoundingSphere = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousShadowGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShadowGroup;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousShadowGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousShadowGroup;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_PreviousShadowGroup(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousShadowGroup = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousCastsShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCastsShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousCastsShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCastsShadows;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_PreviousCastsShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousCastsShadows = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousPathHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPathHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_PreviousPathHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPathHash;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_PreviousPathHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPathHash = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedPosition;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedLossyScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLossyScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedLossyScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLossyScale;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedLossyScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedLossyScale = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedRotation;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedRotation = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedShadowMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedShadowMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedShadowMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedShadowMatrix;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedShadowMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedShadowMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedInverseShadowMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInverseShadowMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedInverseShadowMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInverseShadowMatrix;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedInverseShadowMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedInverseShadowMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedLocalToWorldMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLocalToWorldMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_get_m_CachedLocalToWorldMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedLocalToWorldMatrix;
}
constexpr void UnityEngine::Rendering::Universal::ShadowCaster2D::__cordl_internal_set_m_CachedLocalToWorldMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedLocalToWorldMatrix = value;
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::ShadowCaster2D::get_mesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_mesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::Rendering::Universal::ShadowCaster2D::get_shapePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_shapePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::ShadowCaster2D::get_shapePathHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_shapePathHash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::set_shapePathHash(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_shapePathHash",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::CacheValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::set_useRendererSilhouette(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_useRendererSilhouette",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ShadowCaster2D::get_useRendererSilhouette() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_useRendererSilhouette", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::set_selfShadows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_selfShadows",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ShadowCaster2D::get_selfShadows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_selfShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::set_castsShadows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "set_castsShadows",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ShadowCaster2D::get_castsShadows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "get_castsShadows", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::ShadowCaster2D::SetDefaultSortingLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "SetDefaultSortingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ShadowCaster2D::IsLit(::UnityEngine::Rendering::Universal::Light2D* light) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "IsLit", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Light2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, light);
}
inline bool UnityEngine::Rendering::Universal::ShadowCaster2D::IsShadowedLayer(int32_t layer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(), "IsShadowedLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             "OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShadowCaster2D* UnityEngine::Rendering::Universal::ShadowCaster2D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ShadowCaster2D*>());
}
inline void UnityEngine::Rendering::Universal::ShadowCaster2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ShadowCaster2D*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowCaster2D::ShadowCaster2D() {}
constexpr ::UnityEngine::Rendering::Universal::__ShadowCaster2D__ComponentVersions UnityEngine::Rendering::Universal::ShadowCaster2D::k_CurrentComponentVersion{ static_cast<int32_t>(0x1) };
